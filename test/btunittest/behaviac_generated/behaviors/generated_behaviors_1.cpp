#include "generated_behaviors_1.h"

namespace behaviac
{
	// Source file: node_test/PreconditionEffectorTest/PreconditionEffectorTest_2

	class DecoratorLoop_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node7 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node7, DecoratorLoop);
		DecoratorLoop_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node7()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return -1;
		}
	};

	class Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node13 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node13, Condition);
		Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_both, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach16 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach16, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach16()
		{
			this->SetPhase(Effector::E_FAILURE);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_ret, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_ret, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node4, Action);
		Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((PreconEffectorAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_PreconEffectorAgent_action, void >();
			return BT_SUCCESS;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach8 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach8, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach8()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach19 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach19, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach19()
		{
			this->SetPhase(Effector::E_FAILURE);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node9, Action);
		Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((PreconEffectorAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_PreconEffectorAgent_action, void >();
			return BT_SUCCESS;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach2 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach2, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach2()
		{
			this->SetPhase(Effector::E_FAILURE);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach18 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach18, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach18()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node12 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node12, Condition);
		Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_both, int >();
			int opr = 1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach17 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach17, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach17()
		{
			this->SetPhase(Effector::E_BOTH);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_ret, int >();
			int opr2 = 2;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_ret, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node10 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node10, Action);
		Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((PreconEffectorAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_PreconEffectorAgent_action, void >();
			return BT_SUCCESS;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach15 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach15, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach15()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach20 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach20, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach20()
		{
			this->SetPhase(Effector::E_FAILURE);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node1, Action);
		Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((PreconEffectorAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_PreconEffectorAgent_action, void >();
			return BT_SUCCESS;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach21 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach21, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach21()
		{
			this->SetPhase(Effector::E_FAILURE);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach3 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach3, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach3()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

		bool bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/PreconditionEffectorTest/PreconditionEffectorTest_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("PreconEffectorAgent");
#endif
			// children
			{
				DecoratorLoop_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node7* node7 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node7;
				node7->SetClassNameString("DecoratorLoop");
				node7->SetId(7);
#if !BEHAVIAC_RELEASE
				node7->SetAgentType("PreconEffectorAgent");
#endif
				pBT->AddChild(node7);
				{
					SelectorLoop* node6 = BEHAVIAC_NEW SelectorLoop;
					node6->SetClassNameString("SelectorLoop");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("PreconEffectorAgent");
#endif
					node7->AddChild(node6);
					{
						WithPrecondition* node5 = BEHAVIAC_NEW WithPrecondition;
						node5->SetClassNameString("WithPrecondition");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("PreconEffectorAgent");
#endif
						node6->AddChild(node5);
						{
							Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node13* node13 = BEHAVIAC_NEW Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node13;
							node13->SetClassNameString("Condition");
							node13->SetId(13);
#if !BEHAVIAC_RELEASE
							node13->SetAgentType("PreconEffectorAgent");
#endif
							node5->AddChild(node13);
							node5->SetHasEvents(node5->HasEvents() | node13->HasEvents());
						}
						{
							Sequence* node11 = BEHAVIAC_NEW Sequence;
							node11->SetClassNameString("Sequence");
							node11->SetId(11);
#if !BEHAVIAC_RELEASE
							node11->SetAgentType("PreconEffectorAgent");
#endif
							// attachments
							{
								Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach16* attach16 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach16;
								attach16->SetClassNameString("Effector");
								attach16->SetId(16);
#if !BEHAVIAC_RELEASE
								attach16->SetAgentType("PreconEffectorAgent");
#endif
								node11->Attach(attach16, false, true, false);
								node11->SetHasEvents(node11->HasEvents() | (Event::DynamicCast(attach16) != 0));
							}
							node5->AddChild(node11);
							{
								Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node4;
								node4->SetClassNameString("Action");
								node4->SetId(4);
#if !BEHAVIAC_RELEASE
								node4->SetAgentType("PreconEffectorAgent");
#endif
								// attachments
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach8* attach8 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach8;
									attach8->SetClassNameString("Effector");
									attach8->SetId(8);
#if !BEHAVIAC_RELEASE
									attach8->SetAgentType("PreconEffectorAgent");
#endif
									node4->Attach(attach8, false, true, false);
									node4->SetHasEvents(node4->HasEvents() | (Event::DynamicCast(attach8) != 0));
								}
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach19* attach19 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach19;
									attach19->SetClassNameString("Effector");
									attach19->SetId(19);
#if !BEHAVIAC_RELEASE
									attach19->SetAgentType("PreconEffectorAgent");
#endif
									node4->Attach(attach19, false, true, false);
									node4->SetHasEvents(node4->HasEvents() | (Event::DynamicCast(attach19) != 0));
								}
								node11->AddChild(node4);
								node11->SetHasEvents(node11->HasEvents() | node4->HasEvents());
							}
							{
								Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node9* node9 = BEHAVIAC_NEW Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node9;
								node9->SetClassNameString("Action");
								node9->SetId(9);
#if !BEHAVIAC_RELEASE
								node9->SetAgentType("PreconEffectorAgent");
#endif
								// attachments
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach2* attach2 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach2;
									attach2->SetClassNameString("Effector");
									attach2->SetId(2);
#if !BEHAVIAC_RELEASE
									attach2->SetAgentType("PreconEffectorAgent");
#endif
									node9->Attach(attach2, false, true, false);
									node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach2) != 0));
								}
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach18* attach18 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach18;
									attach18->SetClassNameString("Effector");
									attach18->SetId(18);
#if !BEHAVIAC_RELEASE
									attach18->SetAgentType("PreconEffectorAgent");
#endif
									node9->Attach(attach18, false, true, false);
									node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach18) != 0));
								}
								node11->AddChild(node9);
								node11->SetHasEvents(node11->HasEvents() | node9->HasEvents());
							}
							node5->SetHasEvents(node5->HasEvents() | node11->HasEvents());
						}
						node6->SetHasEvents(node6->HasEvents() | node5->HasEvents());
					}
					{
						WithPrecondition* node0 = BEHAVIAC_NEW WithPrecondition;
						node0->SetClassNameString("WithPrecondition");
						node0->SetId(0);
#if !BEHAVIAC_RELEASE
						node0->SetAgentType("PreconEffectorAgent");
#endif
						node6->AddChild(node0);
						{
							Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node12* node12 = BEHAVIAC_NEW Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node12;
							node12->SetClassNameString("Condition");
							node12->SetId(12);
#if !BEHAVIAC_RELEASE
							node12->SetAgentType("PreconEffectorAgent");
#endif
							node0->AddChild(node12);
							node0->SetHasEvents(node0->HasEvents() | node12->HasEvents());
						}
						{
							Sequence* node14 = BEHAVIAC_NEW Sequence;
							node14->SetClassNameString("Sequence");
							node14->SetId(14);
#if !BEHAVIAC_RELEASE
							node14->SetAgentType("PreconEffectorAgent");
#endif
							// attachments
							{
								Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach17* attach17 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach17;
								attach17->SetClassNameString("Effector");
								attach17->SetId(17);
#if !BEHAVIAC_RELEASE
								attach17->SetAgentType("PreconEffectorAgent");
#endif
								node14->Attach(attach17, false, true, false);
								node14->SetHasEvents(node14->HasEvents() | (Event::DynamicCast(attach17) != 0));
							}
							node0->AddChild(node14);
							{
								Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node10* node10 = BEHAVIAC_NEW Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node10;
								node10->SetClassNameString("Action");
								node10->SetId(10);
#if !BEHAVIAC_RELEASE
								node10->SetAgentType("PreconEffectorAgent");
#endif
								// attachments
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach15* attach15 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach15;
									attach15->SetClassNameString("Effector");
									attach15->SetId(15);
#if !BEHAVIAC_RELEASE
									attach15->SetAgentType("PreconEffectorAgent");
#endif
									node10->Attach(attach15, false, true, false);
									node10->SetHasEvents(node10->HasEvents() | (Event::DynamicCast(attach15) != 0));
								}
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach20* attach20 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach20;
									attach20->SetClassNameString("Effector");
									attach20->SetId(20);
#if !BEHAVIAC_RELEASE
									attach20->SetAgentType("PreconEffectorAgent");
#endif
									node10->Attach(attach20, false, true, false);
									node10->SetHasEvents(node10->HasEvents() | (Event::DynamicCast(attach20) != 0));
								}
								node14->AddChild(node10);
								node14->SetHasEvents(node14->HasEvents() | node10->HasEvents());
							}
							{
								Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_node1;
								node1->SetClassNameString("Action");
								node1->SetId(1);
#if !BEHAVIAC_RELEASE
								node1->SetAgentType("PreconEffectorAgent");
#endif
								// attachments
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach21* attach21 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach21;
									attach21->SetClassNameString("Effector");
									attach21->SetId(21);
#if !BEHAVIAC_RELEASE
									attach21->SetAgentType("PreconEffectorAgent");
#endif
									node1->Attach(attach21, false, true, false);
									node1->SetHasEvents(node1->HasEvents() | (Event::DynamicCast(attach21) != 0));
								}
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach3* attach3 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_2_attach3;
									attach3->SetClassNameString("Effector");
									attach3->SetId(3);
#if !BEHAVIAC_RELEASE
									attach3->SetAgentType("PreconEffectorAgent");
#endif
									node1->Attach(attach3, false, true, false);
									node1->SetHasEvents(node1->HasEvents() | (Event::DynamicCast(attach3) != 0));
								}
								node14->AddChild(node1);
								node14->SetHasEvents(node14->HasEvents() | node1->HasEvents());
							}
							node0->SetHasEvents(node0->HasEvents() | node14->HasEvents());
						}
						node6->SetHasEvents(node6->HasEvents() | node0->HasEvents());
					}
					node7->SetHasEvents(node7->HasEvents() | node6->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node7->HasEvents());
			}
			return true;
		}

	// Source file: node_test/PreconditionEffectorTest/PreconditionEffectorTest_3

	class DecoratorLoop_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node7 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node7, DecoratorLoop);
		DecoratorLoop_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node7()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = false;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return -1;
		}
	};

	class Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node13 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node13, Condition);
		Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_both, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach16 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach16, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach16()
		{
			this->SetPhase(Effector::E_FAILURE);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_ret, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_ret, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node4 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node4, Action);
		Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((PreconEffectorAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_PreconEffectorAgent_action, void >();
			return BT_SUCCESS;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach8 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach8, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach8()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach19 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach19, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach19()
		{
			this->SetPhase(Effector::E_FAILURE);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node9, Action);
		Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((PreconEffectorAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_PreconEffectorAgent_action, void >();
			return BT_RUNNING;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach2 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach2, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach2()
		{
			this->SetPhase(Effector::E_FAILURE);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach18 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach18, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach18()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node12 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node12, Condition);
		Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_both, int >();
			int opr = 1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach17 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach17, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach17()
		{
			this->SetPhase(Effector::E_BOTH);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_ret, int >();
			int opr2 = 2;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_ret, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node10 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node10, Action);
		Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((PreconEffectorAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_PreconEffectorAgent_action, void >();
			return BT_RUNNING;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach15 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach15, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach15()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach20 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach20, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach20()
		{
			this->SetPhase(Effector::E_FAILURE);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node1, Action);
		Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((PreconEffectorAgent*)pAgent)->_Execute_Method_<METHOD_TYPE_PreconEffectorAgent_action, void >();
			return BT_SUCCESS;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach21 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach21, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach21()
		{
			this->SetPhase(Effector::E_FAILURE);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_failure, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

	class Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach3 : public Effector
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach3, Effector);
		Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach3()
		{
			this->SetPhase(Effector::E_SUCCESS);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >();
			int opr2 = 1;
			((PreconEffectorAgent*)pAgent)->_Get_Property_<PROPERTY_TYPE_PreconEffectorAgent_count_success, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

		bool bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/PreconditionEffectorTest/PreconditionEffectorTest_3");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("PreconEffectorAgent");
#endif
			// children
			{
				DecoratorLoop_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node7* node7 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node7;
				node7->SetClassNameString("DecoratorLoop");
				node7->SetId(7);
#if !BEHAVIAC_RELEASE
				node7->SetAgentType("PreconEffectorAgent");
#endif
				pBT->AddChild(node7);
				{
					SelectorLoop* node6 = BEHAVIAC_NEW SelectorLoop;
					node6->SetClassNameString("SelectorLoop");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("PreconEffectorAgent");
#endif
					node7->AddChild(node6);
					{
						WithPrecondition* node5 = BEHAVIAC_NEW WithPrecondition;
						node5->SetClassNameString("WithPrecondition");
						node5->SetId(5);
#if !BEHAVIAC_RELEASE
						node5->SetAgentType("PreconEffectorAgent");
#endif
						node6->AddChild(node5);
						{
							Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node13* node13 = BEHAVIAC_NEW Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node13;
							node13->SetClassNameString("Condition");
							node13->SetId(13);
#if !BEHAVIAC_RELEASE
							node13->SetAgentType("PreconEffectorAgent");
#endif
							node5->AddChild(node13);
							node5->SetHasEvents(node5->HasEvents() | node13->HasEvents());
						}
						{
							Sequence* node11 = BEHAVIAC_NEW Sequence;
							node11->SetClassNameString("Sequence");
							node11->SetId(11);
#if !BEHAVIAC_RELEASE
							node11->SetAgentType("PreconEffectorAgent");
#endif
							// attachments
							{
								Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach16* attach16 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach16;
								attach16->SetClassNameString("Effector");
								attach16->SetId(16);
#if !BEHAVIAC_RELEASE
								attach16->SetAgentType("PreconEffectorAgent");
#endif
								node11->Attach(attach16, false, true, false);
								node11->SetHasEvents(node11->HasEvents() | (Event::DynamicCast(attach16) != 0));
							}
							node5->AddChild(node11);
							{
								Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node4* node4 = BEHAVIAC_NEW Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node4;
								node4->SetClassNameString("Action");
								node4->SetId(4);
#if !BEHAVIAC_RELEASE
								node4->SetAgentType("PreconEffectorAgent");
#endif
								// attachments
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach8* attach8 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach8;
									attach8->SetClassNameString("Effector");
									attach8->SetId(8);
#if !BEHAVIAC_RELEASE
									attach8->SetAgentType("PreconEffectorAgent");
#endif
									node4->Attach(attach8, false, true, false);
									node4->SetHasEvents(node4->HasEvents() | (Event::DynamicCast(attach8) != 0));
								}
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach19* attach19 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach19;
									attach19->SetClassNameString("Effector");
									attach19->SetId(19);
#if !BEHAVIAC_RELEASE
									attach19->SetAgentType("PreconEffectorAgent");
#endif
									node4->Attach(attach19, false, true, false);
									node4->SetHasEvents(node4->HasEvents() | (Event::DynamicCast(attach19) != 0));
								}
								node11->AddChild(node4);
								node11->SetHasEvents(node11->HasEvents() | node4->HasEvents());
							}
							{
								Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node9* node9 = BEHAVIAC_NEW Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node9;
								node9->SetClassNameString("Action");
								node9->SetId(9);
#if !BEHAVIAC_RELEASE
								node9->SetAgentType("PreconEffectorAgent");
#endif
								// attachments
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach2* attach2 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach2;
									attach2->SetClassNameString("Effector");
									attach2->SetId(2);
#if !BEHAVIAC_RELEASE
									attach2->SetAgentType("PreconEffectorAgent");
#endif
									node9->Attach(attach2, false, true, false);
									node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach2) != 0));
								}
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach18* attach18 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach18;
									attach18->SetClassNameString("Effector");
									attach18->SetId(18);
#if !BEHAVIAC_RELEASE
									attach18->SetAgentType("PreconEffectorAgent");
#endif
									node9->Attach(attach18, false, true, false);
									node9->SetHasEvents(node9->HasEvents() | (Event::DynamicCast(attach18) != 0));
								}
								node11->AddChild(node9);
								node11->SetHasEvents(node11->HasEvents() | node9->HasEvents());
							}
							node5->SetHasEvents(node5->HasEvents() | node11->HasEvents());
						}
						node6->SetHasEvents(node6->HasEvents() | node5->HasEvents());
					}
					{
						WithPrecondition* node0 = BEHAVIAC_NEW WithPrecondition;
						node0->SetClassNameString("WithPrecondition");
						node0->SetId(0);
#if !BEHAVIAC_RELEASE
						node0->SetAgentType("PreconEffectorAgent");
#endif
						node6->AddChild(node0);
						{
							Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node12* node12 = BEHAVIAC_NEW Condition_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node12;
							node12->SetClassNameString("Condition");
							node12->SetId(12);
#if !BEHAVIAC_RELEASE
							node12->SetAgentType("PreconEffectorAgent");
#endif
							node0->AddChild(node12);
							node0->SetHasEvents(node0->HasEvents() | node12->HasEvents());
						}
						{
							Sequence* node14 = BEHAVIAC_NEW Sequence;
							node14->SetClassNameString("Sequence");
							node14->SetId(14);
#if !BEHAVIAC_RELEASE
							node14->SetAgentType("PreconEffectorAgent");
#endif
							// attachments
							{
								Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach17* attach17 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach17;
								attach17->SetClassNameString("Effector");
								attach17->SetId(17);
#if !BEHAVIAC_RELEASE
								attach17->SetAgentType("PreconEffectorAgent");
#endif
								node14->Attach(attach17, false, true, false);
								node14->SetHasEvents(node14->HasEvents() | (Event::DynamicCast(attach17) != 0));
							}
							node0->AddChild(node14);
							{
								Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node10* node10 = BEHAVIAC_NEW Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node10;
								node10->SetClassNameString("Action");
								node10->SetId(10);
#if !BEHAVIAC_RELEASE
								node10->SetAgentType("PreconEffectorAgent");
#endif
								// attachments
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach15* attach15 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach15;
									attach15->SetClassNameString("Effector");
									attach15->SetId(15);
#if !BEHAVIAC_RELEASE
									attach15->SetAgentType("PreconEffectorAgent");
#endif
									node10->Attach(attach15, false, true, false);
									node10->SetHasEvents(node10->HasEvents() | (Event::DynamicCast(attach15) != 0));
								}
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach20* attach20 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach20;
									attach20->SetClassNameString("Effector");
									attach20->SetId(20);
#if !BEHAVIAC_RELEASE
									attach20->SetAgentType("PreconEffectorAgent");
#endif
									node10->Attach(attach20, false, true, false);
									node10->SetHasEvents(node10->HasEvents() | (Event::DynamicCast(attach20) != 0));
								}
								node14->AddChild(node10);
								node14->SetHasEvents(node14->HasEvents() | node10->HasEvents());
							}
							{
								Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_node1;
								node1->SetClassNameString("Action");
								node1->SetId(1);
#if !BEHAVIAC_RELEASE
								node1->SetAgentType("PreconEffectorAgent");
#endif
								// attachments
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach21* attach21 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach21;
									attach21->SetClassNameString("Effector");
									attach21->SetId(21);
#if !BEHAVIAC_RELEASE
									attach21->SetAgentType("PreconEffectorAgent");
#endif
									node1->Attach(attach21, false, true, false);
									node1->SetHasEvents(node1->HasEvents() | (Event::DynamicCast(attach21) != 0));
								}
								{
									Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach3* attach3 = BEHAVIAC_NEW Effector_bt_node_test_PreconditionEffectorTest_PreconditionEffectorTest_3_attach3;
									attach3->SetClassNameString("Effector");
									attach3->SetId(3);
#if !BEHAVIAC_RELEASE
									attach3->SetAgentType("PreconEffectorAgent");
#endif
									node1->Attach(attach3, false, true, false);
									node1->SetHasEvents(node1->HasEvents() | (Event::DynamicCast(attach3) != 0));
								}
								node14->AddChild(node1);
								node14->SetHasEvents(node14->HasEvents() | node1->HasEvents());
							}
							node0->SetHasEvents(node0->HasEvents() | node14->HasEvents());
						}
						node6->SetHasEvents(node6->HasEvents() | node0->HasEvents());
					}
					node7->SetHasEvents(node7->HasEvents() | node6->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node7->HasEvents());
			}
			return true;
		}

	// Source file: node_test/repeat/repeat_ut_0

	class Assignment_bt_node_test_repeat_repeat_ut_0_node3 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_repeat_repeat_ut_0_node3, Assignment);
		Assignment_bt_node_test_repeat_repeat_ut_0_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 0;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

	class DecoratorRepeat_bt_node_test_repeat_repeat_ut_0_node0 : public DecoratorRepeat
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorRepeat_bt_node_test_repeat_repeat_ut_0_node0, DecoratorRepeat);
		DecoratorRepeat_bt_node_test_repeat_repeat_ut_0_node0()
		{
			m_bDecorateWhenChildEnds = true;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 5;
		}
	};

	class Compute_bt_node_test_repeat_repeat_ut_0_node1 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_repeat_repeat_ut_0_node1, Compute);
		Compute_bt_node_test_repeat_repeat_ut_0_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

		bool bt_node_test_repeat_repeat_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/repeat/repeat_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node2 = BEHAVIAC_NEW Sequence;
				node2->SetClassNameString("Sequence");
				node2->SetId(2);
#if !BEHAVIAC_RELEASE
				node2->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node2);
				{
					Assignment_bt_node_test_repeat_repeat_ut_0_node3* node3 = BEHAVIAC_NEW Assignment_bt_node_test_repeat_repeat_ut_0_node3;
					node3->SetClassNameString("Assignment");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node2->AddChild(node3);
					node2->SetHasEvents(node2->HasEvents() | node3->HasEvents());
				}
				{
					DecoratorRepeat_bt_node_test_repeat_repeat_ut_0_node0* node0 = BEHAVIAC_NEW DecoratorRepeat_bt_node_test_repeat_repeat_ut_0_node0;
					node0->SetClassNameString("DecoratorRepeat");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node2->AddChild(node0);
					{
						Compute_bt_node_test_repeat_repeat_ut_0_node1* node1 = BEHAVIAC_NEW Compute_bt_node_test_repeat_repeat_ut_0_node1;
						node1->SetClassNameString("Compute");
						node1->SetId(1);
#if !BEHAVIAC_RELEASE
						node1->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node1);
						node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
					}
					node2->SetHasEvents(node2->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node2->HasEvents());
			}
			return true;
		}

	// Source file: node_test/repeat/repeat_ut_1

	class Assignment_bt_node_test_repeat_repeat_ut_1_node3 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_repeat_repeat_ut_1_node3, Assignment);
		Assignment_bt_node_test_repeat_repeat_ut_1_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 0;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

	class DecoratorLoop_bt_node_test_repeat_repeat_ut_1_node0 : public DecoratorLoop
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(DecoratorLoop_bt_node_test_repeat_repeat_ut_1_node0, DecoratorLoop);
		DecoratorLoop_bt_node_test_repeat_repeat_ut_1_node0()
		{
			m_bDecorateWhenChildEnds = true;
			m_bDoneWithinFrame = true;
		}
	protected:
		virtual int GetCount(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return 5;
		}
	};

	class Compute_bt_node_test_repeat_repeat_ut_1_node1 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_repeat_repeat_ut_1_node1, Compute);
		Compute_bt_node_test_repeat_repeat_ut_1_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr2 = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = (int)(opr1 + opr2);
			return result;
		}
	};

		bool bt_node_test_repeat_repeat_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/repeat/repeat_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node2 = BEHAVIAC_NEW Sequence;
				node2->SetClassNameString("Sequence");
				node2->SetId(2);
#if !BEHAVIAC_RELEASE
				node2->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node2);
				{
					Assignment_bt_node_test_repeat_repeat_ut_1_node3* node3 = BEHAVIAC_NEW Assignment_bt_node_test_repeat_repeat_ut_1_node3;
					node3->SetClassNameString("Assignment");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node2->AddChild(node3);
					node2->SetHasEvents(node2->HasEvents() | node3->HasEvents());
				}
				{
					DecoratorLoop_bt_node_test_repeat_repeat_ut_1_node0* node0 = BEHAVIAC_NEW DecoratorLoop_bt_node_test_repeat_repeat_ut_1_node0;
					node0->SetClassNameString("DecoratorLoop");
					node0->SetId(0);
#if !BEHAVIAC_RELEASE
					node0->SetAgentType("AgentNodeTest");
#endif
					node2->AddChild(node0);
					{
						Compute_bt_node_test_repeat_repeat_ut_1_node1* node1 = BEHAVIAC_NEW Compute_bt_node_test_repeat_repeat_ut_1_node1;
						node1->SetClassNameString("Compute");
						node1->SetId(1);
#if !BEHAVIAC_RELEASE
						node1->SetAgentType("AgentNodeTest");
#endif
						node0->AddChild(node1);
						node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
					}
					node2->SetHasEvents(node2->HasEvents() | node0->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node2->HasEvents());
			}
			return true;
		}

	// Source file: node_test/action_child_agent_0

	class Action_bt_node_test_action_child_agent_0_node3 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_child_agent_0_node3, Action);
		Action_bt_node_test_action_child_agent_0_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_initChildAgent, void >();
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_action_child_agent_0_node2 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_child_agent_0_node2, Assignment);
		Assignment_bt_node_test_action_child_agent_0_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 666;
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "par_child_agent_1");
			BEHAVIAC_ASSERT(pAgent_opl);
			((AgentNodeTest*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

	class Action_bt_node_test_action_child_agent_0_node1 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_child_agent_0_node1, Action);
		Action_bt_node_test_action_child_agent_0_node1()
		{
			method_p0 = 999;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			Agent* pAgent_method = Agent::GetInstance(pAgent, "par_child_agent_1");
			BEHAVIAC_ASSERT(pAgent_method);
			((AgentNodeTest*)pAgent_method)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_2, void, float >(method_p0);
			return BT_SUCCESS;
		}
		float method_p0;
	};

		bool bt_node_test_action_child_agent_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/action_child_agent_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "AgentNodeTest", "par_child_agent", "null");
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_action_child_agent_0_node3* node3 = BEHAVIAC_NEW Action_bt_node_test_action_child_agent_0_node3;
					node3->SetClassNameString("Action");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				{
					Assignment_bt_node_test_action_child_agent_0_node2* node2 = BEHAVIAC_NEW Assignment_bt_node_test_action_child_agent_0_node2;
					node2->SetClassNameString("Assignment");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Action_bt_node_test_action_child_agent_0_node1* node1 = BEHAVIAC_NEW Action_bt_node_test_action_child_agent_0_node1;
					node1->SetClassNameString("Action");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/action_noop_ut_0

	class Assignment_bt_node_test_action_noop_ut_0_node4 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_noop_ut_0_node4, Assignment);
		Assignment_bt_node_test_action_noop_ut_0_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 2;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

		bool bt_node_test_action_noop_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/action_noop_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Noop* node2 = BEHAVIAC_NEW Noop;
					node2->SetClassNameString("Noop");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Noop* node1 = BEHAVIAC_NEW Noop;
					node1->SetClassNameString("Noop");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Assignment_bt_node_test_action_noop_ut_0_node4* node4 = BEHAVIAC_NEW Assignment_bt_node_test_action_noop_ut_0_node4;
					node4->SetClassNameString("Assignment");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Noop* node3 = BEHAVIAC_NEW Noop;
					node3->SetClassNameString("Noop");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/action_ut_0

	class Precondition_bt_node_test_action_ut_0_attach15 : public Precondition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Precondition_bt_node_test_action_ut_0_attach15, Precondition);
		Precondition_bt_node_test_action_ut_0_attach15()
		{
			this->SetPhase(Precondition::E_ENTER);
			this->SetIsAnd(true);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			EBTStatus result = BT_SUCCESS;
			behaviac::EBTStatus opl = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_Move, behaviac::EBTStatus >();
			behaviac::EBTStatus opr2 = behaviac::BT_RUNNING;
			bool op = Details::Equal(opl, opr2);
			if (!op)
				result = BT_FAILURE;
			return result;
		}
	};

	class Action_bt_node_test_action_ut_0_node14 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_0_node14, Action);
		Action_bt_node_test_action_ut_0_node14()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_initChildAgentTest, void >();
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_action_ut_0_node12 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_0_node12, Assignment);
		Assignment_bt_node_test_action_ut_0_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "par_child");
			BEHAVIAC_ASSERT(pAgent_opr);
			int opr = ((AgentNodeTest*)pAgent_opr)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

	class Condition_bt_node_test_action_ut_0_node13 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_0_node13, Condition);
		Condition_bt_node_test_action_ut_0_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "par_child");
			BEHAVIAC_ASSERT(pAgent_opr);
			int& opr = ((AgentNodeTest*)pAgent_opr)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Assignment_bt_node_test_action_ut_0_node10 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_0_node10, Assignment);
		Assignment_bt_node_test_action_ut_0_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			Agent* pAgent_opr = Agent::GetInstance(pAgent, "par_child");
			BEHAVIAC_ASSERT(pAgent_opr);
			int opr = ((AgentNodeTest*)pAgent_opr)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_getConstOne, int >();
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

	class Condition_bt_node_test_action_ut_0_node11 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_0_node11, Condition);
		Condition_bt_node_test_action_ut_0_node11()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 1;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Condition_bt_node_test_action_ut_0_node8 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_0_node8, Condition);
		Condition_bt_node_test_action_ut_0_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "par_child");
			BEHAVIAC_ASSERT(pAgent_opl);
			float& opl = ((AgentNodeTest*)pAgent_opl)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >();
			float& opr = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_3, float >();
			bool op = Details::Greater(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_action_ut_0_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_0_node9, Action);
		Action_bt_node_test_action_ut_0_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			Agent* pAgent_method = Agent::GetInstance(pAgent, "par_child");
			BEHAVIAC_ASSERT(pAgent_method);
			((AgentNodeTest*)pAgent_method)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_SelectTarget, void >();
			return BT_SUCCESS;
		}
	};

	class Compute_bt_node_test_action_ut_0_node1 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_action_ut_0_node1, Compute);
		Compute_bt_node_test_action_ut_0_node1()
		{
			opr1_p0 = 600;
			opr1_p1 = 400;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_getConstThousand, int, int, int >(opr1_p0, opr1_p1);
			int opr2 = 500;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			pAgent->SetVariable("par_int_type_0", (int)(opr1 + opr2), 4028995106u);
			return result;
		}
		int opr1_p0;
		int opr1_p1;
	};

	class Action_bt_node_test_action_ut_0_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_0_node2, Action);
		Action_bt_node_test_action_ut_0_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			int& method_p0 = (int&)pAgent->GetVariable<int >(4028995106u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_action_ut_0_node3 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_0_node3, Assignment);
		Assignment_bt_node_test_action_ut_0_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_1") == 3913197411u);
			pAgent->SetVariable("par_int_type_1", opr, 3913197411u);
			return result;
		}
	};

	class Compute_bt_node_test_action_ut_0_node4 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_action_ut_0_node4, Compute);
		Compute_bt_node_test_action_ut_0_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_1") == 3913197411u);
			int& opr1 = (int&)pAgent->GetVariable<int >(3913197411u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_2") == 3256087712u);
			int& opr2 = (int&)pAgent->GetVariable<int >(3256087712u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			pAgent->SetVariable("par_int_type_0", (int)(opr1 + opr2), 4028995106u);
			return result;
		}
	};

	class Action_bt_node_test_action_ut_0_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_0_node5, Action);
		Action_bt_node_test_action_ut_0_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			int& method_p0 = (int&)pAgent->GetVariable<int >(4028995106u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Action_bt_node_test_action_ut_0_node7 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_0_node7, Action);
		Action_bt_node_test_action_ut_0_node7()
		{
			method_p0 = NULL;
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_testGameObject, void, UnityEngine::GameObject* >(method_p0);
			return BT_SUCCESS;
		}
		UnityEngine::GameObject* method_p0;
	};

	class Action_bt_node_test_action_ut_0_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_0_node6, Action);
		Action_bt_node_test_action_ut_0_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			Agent* pAgent_method = Agent::GetInstance(pAgent, "StaticAgent");
			BEHAVIAC_ASSERT(pAgent_method);
			((StaticAgent*)pAgent_method)->_Execute_Method_<METHOD_TYPE_StaticAgent_sAction, void >();
			return BT_SUCCESS;
		}
	};

	class Action_bt_node_test_action_ut_0_node16 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_0_node16, Action);
		Action_bt_node_test_action_ut_0_node16()
		{
			method_p0.reserve(1);
			TestNS::Float2 method_p0_item0;
			method_p0_item0.x = 0.01f;
			method_p0_item0.y = -0.01f;
			method_p0.push_back(method_p0_item0);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_testVectorStruct, void, behaviac::vector<TestNS::Float2>& >(method_p0);
			return BT_SUCCESS;
		}
		behaviac::vector<TestNS::Float2> method_p0;
	};

	class Action_bt_node_test_action_ut_0_node17 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_0_node17, Action);
		Action_bt_node_test_action_ut_0_node17()
		{
			method_p1 = EnumTest_OneAfterOne;
			method_p2 = (char*)("");
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			method_p0.plan_ID = (char*)("");
			method_p0.plan_selection_precedence = 0;
			method_p0.transit_points.reserve(3);
			BSASN::SpatialCoord method_p0_transit_points_item0;
			method_p0_transit_points_item0.coordX = 0;
			method_p0_transit_points_item0.coordY = 0;
			method_p0.transit_points.push_back(method_p0_transit_points_item0);
			BSASN::SpatialCoord method_p0_transit_points_item1;
			method_p0_transit_points_item1.coordX = 0;
			method_p0_transit_points_item1.coordY = 0;
			method_p0.transit_points.push_back(method_p0_transit_points_item1);
			BSASN::SpatialCoord method_p0_transit_points_item2;
			method_p0_transit_points_item2.coordX = 0;
			method_p0_transit_points_item2.coordY = 0;
			method_p0.transit_points.push_back(method_p0_transit_points_item2);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_transitPlanTactics, void, BSASN::TransitPlan, EnumTest, behaviac::string& >(method_p0, method_p1, method_p2);
			return BT_SUCCESS;
		}
		BSASN::TransitPlan method_p0;
		EnumTest method_p1;
		behaviac::string method_p2;
	};

		bool bt_node_test_action_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/action_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "int", "par_int_type_0", "0");
			pBT->AddPar("AgentNodeTest", "int", "par_int_type_1", "0");
			pBT->AddPar("AgentNodeTest", "int", "par_int_type_2", "300");
			pBT->AddPar("AgentNodeTest", "UnityEngine::GameObject", "par_go", "null");
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				// attachments
				{
					Precondition_bt_node_test_action_ut_0_attach15* attach15 = BEHAVIAC_NEW Precondition_bt_node_test_action_ut_0_attach15;
					attach15->SetClassNameString("Precondition");
					attach15->SetId(15);
#if !BEHAVIAC_RELEASE
					attach15->SetAgentType("AgentNodeTest");
#endif
					node0->Attach(attach15, true, false, false);
					node0->SetHasEvents(node0->HasEvents() | (Event::DynamicCast(attach15) != 0));
				}
				pBT->AddChild(node0);
				{
					Action_bt_node_test_action_ut_0_node14* node14 = BEHAVIAC_NEW Action_bt_node_test_action_ut_0_node14;
					node14->SetClassNameString("Action");
					node14->SetId(14);
#if !BEHAVIAC_RELEASE
					node14->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node14);
					node0->SetHasEvents(node0->HasEvents() | node14->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_0_node12* node12 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_0_node12;
					node12->SetClassNameString("Assignment");
					node12->SetId(12);
#if !BEHAVIAC_RELEASE
					node12->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node12);
					node0->SetHasEvents(node0->HasEvents() | node12->HasEvents());
				}
				{
					Condition_bt_node_test_action_ut_0_node13* node13 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_0_node13;
					node13->SetClassNameString("Condition");
					node13->SetId(13);
#if !BEHAVIAC_RELEASE
					node13->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node13);
					node0->SetHasEvents(node0->HasEvents() | node13->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_0_node10* node10 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_0_node10;
					node10->SetClassNameString("Assignment");
					node10->SetId(10);
#if !BEHAVIAC_RELEASE
					node10->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node10);
					node0->SetHasEvents(node0->HasEvents() | node10->HasEvents());
				}
				{
					Condition_bt_node_test_action_ut_0_node11* node11 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_0_node11;
					node11->SetClassNameString("Condition");
					node11->SetId(11);
#if !BEHAVIAC_RELEASE
					node11->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node11);
					node0->SetHasEvents(node0->HasEvents() | node11->HasEvents());
				}
				{
					Condition_bt_node_test_action_ut_0_node8* node8 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_0_node8;
					node8->SetClassNameString("Condition");
					node8->SetId(8);
#if !BEHAVIAC_RELEASE
					node8->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node8);
					node0->SetHasEvents(node0->HasEvents() | node8->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_0_node9* node9 = BEHAVIAC_NEW Action_bt_node_test_action_ut_0_node9;
					node9->SetClassNameString("Action");
					node9->SetId(9);
#if !BEHAVIAC_RELEASE
					node9->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node9);
					node0->SetHasEvents(node0->HasEvents() | node9->HasEvents());
				}
				{
					Compute_bt_node_test_action_ut_0_node1* node1 = BEHAVIAC_NEW Compute_bt_node_test_action_ut_0_node1;
					node1->SetClassNameString("Compute");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_0_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_action_ut_0_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_0_node3* node3 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_0_node3;
					node3->SetClassNameString("Assignment");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				{
					Compute_bt_node_test_action_ut_0_node4* node4 = BEHAVIAC_NEW Compute_bt_node_test_action_ut_0_node4;
					node4->SetClassNameString("Compute");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_0_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_action_ut_0_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_0_node7* node7 = BEHAVIAC_NEW Action_bt_node_test_action_ut_0_node7;
					node7->SetClassNameString("Action");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node7);
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_0_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_action_ut_0_node6;
					node6->SetClassNameString("Action");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node6);
					node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_0_node16* node16 = BEHAVIAC_NEW Action_bt_node_test_action_ut_0_node16;
					node16->SetClassNameString("Action");
					node16->SetId(16);
#if !BEHAVIAC_RELEASE
					node16->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node16);
					node0->SetHasEvents(node0->HasEvents() | node16->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_0_node17* node17 = BEHAVIAC_NEW Action_bt_node_test_action_ut_0_node17;
					node17->SetClassNameString("Action");
					node17->SetId(17);
#if !BEHAVIAC_RELEASE
					node17->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node17);
					node0->SetHasEvents(node0->HasEvents() | node17->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/action_ut_1

	class Compute_bt_node_test_action_ut_1_node3 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_action_ut_1_node3, Compute);
		Compute_bt_node_test_action_ut_1_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			float opr1 = 0.5f;
			float opr2 = 1.3f;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_0") == 569873069u);
			pAgent->SetVariable("par_float_type_0", (float)(opr1 + opr2), 569873069u);
			return result;
		}
	};

	class Action_bt_node_test_action_ut_1_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_1_node2, Action);
		Action_bt_node_test_action_ut_1_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_0") == 569873069u);
			float& method_p0 = (float&)pAgent->GetVariable<float >(569873069u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_2, void, float >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_action_ut_1_node1 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_1_node1, Assignment);
		Assignment_bt_node_test_action_ut_1_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			float opr = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >();
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_1") == 955032556u);
			pAgent->SetVariable("par_float_type_1", opr, 955032556u);
			return result;
		}
	};

	class Compute_bt_node_test_action_ut_1_node4 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_action_ut_1_node4, Compute);
		Compute_bt_node_test_action_ut_1_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_1") == 955032556u);
			float& opr1 = (float&)pAgent->GetVariable<float >(955032556u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_2") == 331477039u);
			float& opr2 = (float&)pAgent->GetVariable<float >(331477039u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_0") == 569873069u);
			pAgent->SetVariable("par_float_type_0", (float)(opr1 + opr2), 569873069u);
			return result;
		}
	};

	class Action_bt_node_test_action_ut_1_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_1_node5, Action);
		Action_bt_node_test_action_ut_1_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_0") == 569873069u);
			float& method_p0 = (float&)pAgent->GetVariable<float >(569873069u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_3, void, float >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_action_ut_1_node7 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_1_node7, Assignment);
		Assignment_bt_node_test_action_ut_1_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			UnityEngine::GameObject* opr = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_createGameObject, UnityEngine::GameObject* >();
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_go") == 464621558u);
			pAgent->SetVariable("par_go", opr, 464621558u);
			return result;
		}
	};

	class Action_bt_node_test_action_ut_1_node6 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_1_node6, Action);
		Action_bt_node_test_action_ut_1_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_go") == 464621558u);
			UnityEngine::GameObject*& method_p0 = (UnityEngine::GameObject*&)pAgent->GetVariable<UnityEngine::GameObject* >(464621558u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_testGameObject, void, UnityEngine::GameObject* >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_action_ut_1_node8 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_1_node8, Assignment);
		Assignment_bt_node_test_action_ut_1_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			TestNS::Node* opr = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_createExtendedNode, TestNS::Node* >();
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("local_node") == 3573395359u);
			pAgent->SetVariable("local_node", opr, 3573395359u);
			return result;
		}
	};

	class Action_bt_node_test_action_ut_1_node10 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_1_node10, Action);
		Action_bt_node_test_action_ut_1_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("local_node") == 3573395359u);
			TestNS::Node*& method_p0 = (TestNS::Node*&)pAgent->GetVariable<TestNS::Node* >(3573395359u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_testExtendedRefType, void, TestNS::Node* >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Action_bt_node_test_action_ut_1_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_1_node9, Action);
		Action_bt_node_test_action_ut_1_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("testFloat2") == 2452701783u);
			TestNS::Float2& method_p0 = (TestNS::Float2&)pAgent->GetVariable<TestNS::Float2 >(2452701783u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_testExtendedStruct, void, TestNS::Float2& >(method_p0);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("testFloat2") == 2452701783u);
			pAgent->SetVariable("testFloat2", method_p0, 2452701783u);
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_action_ut_1_node11 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_1_node11, Assignment);
		Assignment_bt_node_test_action_ut_1_node11()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			TestNS::Float2& opr = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_getExtendedStruct, TestNS::Float2& >();
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_ReturnFloat2") == 257770974u);
			pAgent->SetVariable("c_ReturnFloat2", opr, 257770974u);
			return result;
		}
	};

	class Assignment_bt_node_test_action_ut_1_node12 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_1_node12, Assignment);
		Assignment_bt_node_test_action_ut_1_node12()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			const TestNS::Float2& opr = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_getConstExtendedStruct, const TestNS::Float2& >();
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("c_ReturnFloat2Const") == 2482280992u);
			pAgent->SetVariable("c_ReturnFloat2Const", opr, 2482280992u);
			return result;
		}
	};

	class Action_bt_node_test_action_ut_1_node13 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_1_node13, Action);
		Action_bt_node_test_action_ut_1_node13()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			const TestNS::Float2& result = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_getConstExtendedStruct, const TestNS::Float2& >();
			return ((AgentNodeTest*)pAgent)->AgentNodeTest::return_status(result);
		}
	};

	class Action_bt_node_test_action_ut_1_node14 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_1_node14, Action);
		Action_bt_node_test_action_ut_1_node14()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			TestClassA* result = ((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_TestFunC, TestClassA* >();
			return ((AgentNodeTest*)pAgent)->AgentNodeTest::TestFuncD(result);
		}
	};

		bool bt_node_test_action_ut_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/action_ut_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "UnityEngine::GameObject", "par_go", "null");
			pBT->AddPar("AgentNodeTest", "float", "par_float_type_0", "0");
			pBT->AddPar("AgentNodeTest", "float", "par_float_type_1", "0");
			pBT->AddPar("AgentNodeTest", "float", "par_float_type_2", "2.7");
			pBT->AddPar("AgentNodeTest", "TestNS::Node", "local_node", "null");
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Compute_bt_node_test_action_ut_1_node3* node3 = BEHAVIAC_NEW Compute_bt_node_test_action_ut_1_node3;
					node3->SetClassNameString("Compute");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_1_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_action_ut_1_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_1_node1* node1 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_1_node1;
					node1->SetClassNameString("Assignment");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Compute_bt_node_test_action_ut_1_node4* node4 = BEHAVIAC_NEW Compute_bt_node_test_action_ut_1_node4;
					node4->SetClassNameString("Compute");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_1_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_action_ut_1_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_1_node7* node7 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_1_node7;
					node7->SetClassNameString("Assignment");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node7);
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_1_node6* node6 = BEHAVIAC_NEW Action_bt_node_test_action_ut_1_node6;
					node6->SetClassNameString("Action");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node6);
					node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_1_node8* node8 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_1_node8;
					node8->SetClassNameString("Assignment");
					node8->SetId(8);
#if !BEHAVIAC_RELEASE
					node8->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node8);
					node0->SetHasEvents(node0->HasEvents() | node8->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_1_node10* node10 = BEHAVIAC_NEW Action_bt_node_test_action_ut_1_node10;
					node10->SetClassNameString("Action");
					node10->SetId(10);
#if !BEHAVIAC_RELEASE
					node10->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node10);
					node0->SetHasEvents(node0->HasEvents() | node10->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_1_node9* node9 = BEHAVIAC_NEW Action_bt_node_test_action_ut_1_node9;
					node9->SetClassNameString("Action");
					node9->SetId(9);
#if !BEHAVIAC_RELEASE
					node9->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node9);
					node0->SetHasEvents(node0->HasEvents() | node9->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_1_node11* node11 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_1_node11;
					node11->SetClassNameString("Assignment");
					node11->SetId(11);
#if !BEHAVIAC_RELEASE
					node11->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node11);
					node0->SetHasEvents(node0->HasEvents() | node11->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_1_node12* node12 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_1_node12;
					node12->SetClassNameString("Assignment");
					node12->SetId(12);
#if !BEHAVIAC_RELEASE
					node12->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node12);
					node0->SetHasEvents(node0->HasEvents() | node12->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_1_node13* node13 = BEHAVIAC_NEW Action_bt_node_test_action_ut_1_node13;
					node13->SetClassNameString("Action");
					node13->SetId(13);
#if !BEHAVIAC_RELEASE
					node13->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node13);
					node0->SetHasEvents(node0->HasEvents() | node13->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_1_node14* node14 = BEHAVIAC_NEW Action_bt_node_test_action_ut_1_node14;
					node14->SetClassNameString("Action");
					node14->SetId(14);
#if !BEHAVIAC_RELEASE
					node14->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node14);
					node0->SetHasEvents(node0->HasEvents() | node14->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/action_ut_2

	class Assignment_bt_node_test_action_ut_2_node7 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_2_node7, Assignment);
		Assignment_bt_node_test_action_ut_2_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 1;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			pAgent->SetVariable("par_int_type_0", opr, 4028995106u);
			return result;
		}
	};

	class Assignment_bt_node_test_action_ut_2_node6 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_2_node6, Assignment);
		Assignment_bt_node_test_action_ut_2_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 5;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("test_int_array") == 4065205216u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			int& opl_index = (int&)pAgent->GetVariable<int >(4028995106u);
			((behaviac::vector<int>&)pAgent->GetVariable<behaviac::vector<int> >(4065205216u))[opl_index] = opr;
			return result;
		}
	};

	class Condition_bt_node_test_action_ut_2_node8 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_2_node8, Condition);
		Condition_bt_node_test_action_ut_2_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("test_int_array") == 4065205216u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			int& opl_index = (int&)pAgent->GetVariable<int >(4028995106u);
			int& opl = ((behaviac::vector<int>&)pAgent->GetVariable<behaviac::vector<int> >(4065205216u))[opl_index];
			int opr = 5;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Action_bt_node_test_action_ut_2_node9 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_2_node9, Action);
		Action_bt_node_test_action_ut_2_node9()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("test_int_array") == 4065205216u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			int& method_p0_index = (int&)pAgent->GetVariable<int >(4028995106u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(((behaviac::vector<int>&)pAgent->GetVariable<behaviac::vector<int> >(4065205216u))[method_p0_index]);
			return BT_SUCCESS;
		}
	};

	class Condition_bt_node_test_action_ut_2_node10 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_2_node10, Condition);
		Condition_bt_node_test_action_ut_2_node10()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 5;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Compute_bt_node_test_action_ut_2_node1 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_action_ut_2_node1, Compute);
		Compute_bt_node_test_action_ut_2_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr1 = 1000;
			int opr2 = 500;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			pAgent->SetVariable("par_int_type_0", (int)(opr1 * opr2), 4028995106u);
			return result;
		}
	};

	class Action_bt_node_test_action_ut_2_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_2_node2, Action);
		Action_bt_node_test_action_ut_2_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			int& method_p0 = (int&)pAgent->GetVariable<int >(4028995106u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_0, void, int >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_action_ut_2_node3 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_2_node3, Assignment);
		Assignment_bt_node_test_action_ut_2_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_1") == 3913197411u);
			pAgent->SetVariable("par_int_type_1", opr, 3913197411u);
			return result;
		}
	};

	class Compute_bt_node_test_action_ut_2_node4 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_action_ut_2_node4, Compute);
		Compute_bt_node_test_action_ut_2_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_1") == 3913197411u);
			int& opr1 = (int&)pAgent->GetVariable<int >(3913197411u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_2") == 3256087712u);
			int& opr2 = (int&)pAgent->GetVariable<int >(3256087712u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			pAgent->SetVariable("par_int_type_0", (int)(opr1 / opr2), 4028995106u);
			return result;
		}
	};

	class Action_bt_node_test_action_ut_2_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_2_node5, Action);
		Action_bt_node_test_action_ut_2_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_int_type_0") == 4028995106u);
			int& method_p0 = (int&)pAgent->GetVariable<int >(4028995106u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_1, void, int >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Action_bt_node_test_action_ut_2_node11 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_2_node11, Action);
		Action_bt_node_test_action_ut_2_node11()
		{
			method_p0 = (char*)("Hello\" \t \n Kitty!");
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_testString, void, behaviac::string >(method_p0);
			return BT_SUCCESS;
		}
		behaviac::string method_p0;
	};

		bool bt_node_test_action_ut_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/action_ut_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "int", "par_int_type_0", "0");
			pBT->AddPar("AgentNodeTest", "int", "par_int_type_1", "0");
			pBT->AddPar("AgentNodeTest", "int", "par_int_type_2", "300");
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Assignment_bt_node_test_action_ut_2_node7* node7 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_2_node7;
					node7->SetClassNameString("Assignment");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node7);
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_2_node6* node6 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_2_node6;
					node6->SetClassNameString("Assignment");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node6);
					node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
				}
				{
					Condition_bt_node_test_action_ut_2_node8* node8 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_2_node8;
					node8->SetClassNameString("Condition");
					node8->SetId(8);
#if !BEHAVIAC_RELEASE
					node8->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node8);
					node0->SetHasEvents(node0->HasEvents() | node8->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_2_node9* node9 = BEHAVIAC_NEW Action_bt_node_test_action_ut_2_node9;
					node9->SetClassNameString("Action");
					node9->SetId(9);
#if !BEHAVIAC_RELEASE
					node9->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node9);
					node0->SetHasEvents(node0->HasEvents() | node9->HasEvents());
				}
				{
					Condition_bt_node_test_action_ut_2_node10* node10 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_2_node10;
					node10->SetClassNameString("Condition");
					node10->SetId(10);
#if !BEHAVIAC_RELEASE
					node10->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node10);
					node0->SetHasEvents(node0->HasEvents() | node10->HasEvents());
				}
				{
					Compute_bt_node_test_action_ut_2_node1* node1 = BEHAVIAC_NEW Compute_bt_node_test_action_ut_2_node1;
					node1->SetClassNameString("Compute");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_2_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_action_ut_2_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_2_node3* node3 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_2_node3;
					node3->SetClassNameString("Assignment");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				{
					Compute_bt_node_test_action_ut_2_node4* node4 = BEHAVIAC_NEW Compute_bt_node_test_action_ut_2_node4;
					node4->SetClassNameString("Compute");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_2_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_action_ut_2_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_2_node11* node11 = BEHAVIAC_NEW Action_bt_node_test_action_ut_2_node11;
					node11->SetClassNameString("Action");
					node11->SetId(11);
#if !BEHAVIAC_RELEASE
					node11->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node11);
					node0->SetHasEvents(node0->HasEvents() | node11->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/action_ut_3

	class Action_bt_node_test_action_ut_3_node14 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_3_node14, Action);
		Action_bt_node_test_action_ut_3_node14()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_initChildAgentTest, void >();
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_action_ut_3_node7 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_3_node7, Assignment);
		Assignment_bt_node_test_action_ut_3_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "par_child_agent_1");
			BEHAVIAC_ASSERT(pAgent_opl);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("testInt") == 2614050066u);
			pAgent_opl->SetVariable("testInt", opr, 2614050066u);
			return result;
		}
	};

	class Condition_bt_node_test_action_ut_3_node8 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_3_node8, Condition);
		Condition_bt_node_test_action_ut_3_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			Agent* pAgent_opl = Agent::GetInstance(pAgent, "par_child_agent_1");
			BEHAVIAC_ASSERT(pAgent_opl);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("testInt") == 2614050066u);
			int& opl = (int&)pAgent_opl->GetVariable<int >(2614050066u);
			int& opr = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Compute_bt_node_test_action_ut_3_node3 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_action_ut_3_node3, Compute);
		Compute_bt_node_test_action_ut_3_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			float opr1 = 0.5f;
			float opr2 = 4.8f;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_0") == 569873069u);
			pAgent->SetVariable("par_float_type_0", (float)(opr1 * opr2), 569873069u);
			return result;
		}
	};

	class Action_bt_node_test_action_ut_3_node2 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_3_node2, Action);
		Action_bt_node_test_action_ut_3_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_0") == 569873069u);
			float& method_p0 = (float&)pAgent->GetVariable<float >(569873069u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_2, void, float >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Assignment_bt_node_test_action_ut_3_node1 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_3_node1, Assignment);
		Assignment_bt_node_test_action_ut_3_node1()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			float opr = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >();
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_1") == 955032556u);
			pAgent->SetVariable("par_float_type_1", opr, 955032556u);
			return result;
		}
	};

	class Compute_bt_node_test_action_ut_3_node4 : public Compute
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Compute_bt_node_test_action_ut_3_node4, Compute);
		Compute_bt_node_test_action_ut_3_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_1") == 955032556u);
			float& opr1 = (float&)pAgent->GetVariable<float >(955032556u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_2") == 331477039u);
			float& opr2 = (float&)pAgent->GetVariable<float >(331477039u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_0") == 569873069u);
			pAgent->SetVariable("par_float_type_0", (float)(opr1 / opr2), 569873069u);
			return result;
		}
	};

	class Action_bt_node_test_action_ut_3_node5 : public Action
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Action_bt_node_test_action_ut_3_node5, Action);
		Action_bt_node_test_action_ut_3_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("par_float_type_0") == 569873069u);
			float& method_p0 = (float&)pAgent->GetVariable<float >(569873069u);
			((AgentNodeTest*)pAgent)->_Execute_Method_<METHOD_TYPE_AgentNodeTest_setTestVar_3, void, float >(method_p0);
			return BT_SUCCESS;
		}
	};

	class Condition_bt_node_test_action_ut_3_node6 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_3_node6, Condition);
		Condition_bt_node_test_action_ut_3_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("redirectCount") == 767249388u);
			unsigned int& opl = (unsigned int&)pAgent->GetVariable<unsigned int >(767249388u);
			BEHAVIAC_ASSERT(behaviac::MakeVariableId("redirectTime") == 3775965105u);
			unsigned int& opr = (unsigned int&)pAgent->GetVariable<unsigned int >(3775965105u);
			bool op = Details::GreaterEqual(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Assignment_bt_node_test_action_ut_3_node9 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_3_node9, Assignment);
		Assignment_bt_node_test_action_ut_3_node9()
		{
			opr.Var_B_Loop = true;
			opr.Var_List_EnumTest.reserve(2);
			EnumTest opr_Var_List_EnumTest_item0 = EnumTest_OneAfterOne;
			opr.Var_List_EnumTest.push_back(opr_Var_List_EnumTest_item0);
			EnumTest opr_Var_List_EnumTest_item1 = EnumTest_One;
			opr.Var_List_EnumTest.push_back(opr_Var_List_EnumTest_item1);
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_Act, Act >() = opr;
			return result;
		}
		Act opr;
	};

		bool bt_node_test_action_ut_3::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/action_ut_3");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "float", "par_float_type_0", "0");
			pBT->AddPar("AgentNodeTest", "float", "par_float_type_1", "0");
			pBT->AddPar("AgentNodeTest", "float", "par_float_type_2", "0.6");
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Action_bt_node_test_action_ut_3_node14* node14 = BEHAVIAC_NEW Action_bt_node_test_action_ut_3_node14;
					node14->SetClassNameString("Action");
					node14->SetId(14);
#if !BEHAVIAC_RELEASE
					node14->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node14);
					node0->SetHasEvents(node0->HasEvents() | node14->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_3_node7* node7 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_3_node7;
					node7->SetClassNameString("Assignment");
					node7->SetId(7);
#if !BEHAVIAC_RELEASE
					node7->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node7);
					node0->SetHasEvents(node0->HasEvents() | node7->HasEvents());
				}
				{
					Condition_bt_node_test_action_ut_3_node8* node8 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_3_node8;
					node8->SetClassNameString("Condition");
					node8->SetId(8);
#if !BEHAVIAC_RELEASE
					node8->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node8);
					node0->SetHasEvents(node0->HasEvents() | node8->HasEvents());
				}
				{
					Compute_bt_node_test_action_ut_3_node3* node3 = BEHAVIAC_NEW Compute_bt_node_test_action_ut_3_node3;
					node3->SetClassNameString("Compute");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_3_node2* node2 = BEHAVIAC_NEW Action_bt_node_test_action_ut_3_node2;
					node2->SetClassNameString("Action");
					node2->SetId(2);
#if !BEHAVIAC_RELEASE
					node2->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node2);
					node0->SetHasEvents(node0->HasEvents() | node2->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_3_node1* node1 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_3_node1;
					node1->SetClassNameString("Assignment");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Compute_bt_node_test_action_ut_3_node4* node4 = BEHAVIAC_NEW Compute_bt_node_test_action_ut_3_node4;
					node4->SetClassNameString("Compute");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				{
					Action_bt_node_test_action_ut_3_node5* node5 = BEHAVIAC_NEW Action_bt_node_test_action_ut_3_node5;
					node5->SetClassNameString("Action");
					node5->SetId(5);
#if !BEHAVIAC_RELEASE
					node5->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node5);
					node0->SetHasEvents(node0->HasEvents() | node5->HasEvents());
				}
				{
					Condition_bt_node_test_action_ut_3_node6* node6 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_3_node6;
					node6->SetClassNameString("Condition");
					node6->SetId(6);
#if !BEHAVIAC_RELEASE
					node6->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node6);
					node0->SetHasEvents(node0->HasEvents() | node6->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_3_node9* node9 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_3_node9;
					node9->SetClassNameString("Assignment");
					node9->SetId(9);
#if !BEHAVIAC_RELEASE
					node9->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node9);
					node0->SetHasEvents(node0->HasEvents() | node9->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/action_ut_waitforsignal_0

	class Condition_bt_node_test_action_ut_waitforsignal_0_node2 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_waitforsignal_0_node2, Condition);
		Condition_bt_node_test_action_ut_waitforsignal_0_node2()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Assignment_bt_node_test_action_ut_waitforsignal_0_node3 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_waitforsignal_0_node3, Assignment);
		Assignment_bt_node_test_action_ut_waitforsignal_0_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = opr;
			return result;
		}
	};

	class Assignment_bt_node_test_action_ut_waitforsignal_0_node4 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_waitforsignal_0_node4, Assignment);
		Assignment_bt_node_test_action_ut_waitforsignal_0_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			float opr = 2.3f;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >() = opr;
			return result;
		}
	};

		bool bt_node_test_action_ut_waitforsignal_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/action_ut_waitforsignal_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					WaitforSignal* node1 = BEHAVIAC_NEW WaitforSignal;
					node1->SetClassNameString("WaitforSignal");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						Condition_bt_node_test_action_ut_waitforsignal_0_node2* node2 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_waitforsignal_0_node2;
						node2->SetClassNameString("Condition");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node1->SetCustomCondition(node2);
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					{
						Assignment_bt_node_test_action_ut_waitforsignal_0_node3* node3 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_waitforsignal_0_node3;
						node3->SetClassNameString("Assignment");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node3);
						node1->SetHasEvents(node1->HasEvents() | node3->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_waitforsignal_0_node4* node4 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_waitforsignal_0_node4;
					node4->SetClassNameString("Assignment");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/action_ut_waitforsignal_1

	class Condition_bt_node_test_action_ut_waitforsignal_1_node6 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_waitforsignal_1_node6, Condition);
		Condition_bt_node_test_action_ut_waitforsignal_1_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Condition_bt_node_test_action_ut_waitforsignal_1_node7 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_waitforsignal_1_node7, Condition);
		Condition_bt_node_test_action_ut_waitforsignal_1_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Condition_bt_node_test_action_ut_waitforsignal_1_node8 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_waitforsignal_1_node8, Condition);
		Condition_bt_node_test_action_ut_waitforsignal_1_node8()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			float& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >();
			float opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Assignment_bt_node_test_action_ut_waitforsignal_1_node3 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_waitforsignal_1_node3, Assignment);
		Assignment_bt_node_test_action_ut_waitforsignal_1_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >() = opr;
			return result;
		}
	};

	class Assignment_bt_node_test_action_ut_waitforsignal_1_node4 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_waitforsignal_1_node4, Assignment);
		Assignment_bt_node_test_action_ut_waitforsignal_1_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			float opr = 2.3f;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >() = opr;
			return result;
		}
	};

		bool bt_node_test_action_ut_waitforsignal_1::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/action_ut_waitforsignal_1");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					WaitforSignal* node1 = BEHAVIAC_NEW WaitforSignal;
					node1->SetClassNameString("WaitforSignal");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						Or* node2 = BEHAVIAC_NEW Or;
						node2->SetClassNameString("Or");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node1->SetCustomCondition(node2);
						{
							And* node5 = BEHAVIAC_NEW And;
							node5->SetClassNameString("And");
							node5->SetId(5);
#if !BEHAVIAC_RELEASE
							node5->SetAgentType("AgentNodeTest");
#endif
							node2->AddChild(node5);
							{
								Condition_bt_node_test_action_ut_waitforsignal_1_node6* node6 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_waitforsignal_1_node6;
								node6->SetClassNameString("Condition");
								node6->SetId(6);
#if !BEHAVIAC_RELEASE
								node6->SetAgentType("AgentNodeTest");
#endif
								node5->AddChild(node6);
								node5->SetHasEvents(node5->HasEvents() | node6->HasEvents());
							}
							{
								Condition_bt_node_test_action_ut_waitforsignal_1_node7* node7 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_waitforsignal_1_node7;
								node7->SetClassNameString("Condition");
								node7->SetId(7);
#if !BEHAVIAC_RELEASE
								node7->SetAgentType("AgentNodeTest");
#endif
								node5->AddChild(node7);
								node5->SetHasEvents(node5->HasEvents() | node7->HasEvents());
							}
							node2->SetHasEvents(node2->HasEvents() | node5->HasEvents());
						}
						{
							Condition_bt_node_test_action_ut_waitforsignal_1_node8* node8 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_waitforsignal_1_node8;
							node8->SetClassNameString("Condition");
							node8->SetId(8);
#if !BEHAVIAC_RELEASE
							node8->SetAgentType("AgentNodeTest");
#endif
							node2->AddChild(node8);
							node2->SetHasEvents(node2->HasEvents() | node8->HasEvents());
						}
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					{
						Assignment_bt_node_test_action_ut_waitforsignal_1_node3* node3 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_waitforsignal_1_node3;
						node3->SetClassNameString("Assignment");
						node3->SetId(3);
#if !BEHAVIAC_RELEASE
						node3->SetAgentType("AgentNodeTest");
#endif
						node1->AddChild(node3);
						node1->SetHasEvents(node1->HasEvents() | node3->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_waitforsignal_1_node4* node4 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_waitforsignal_1_node4;
					node4->SetClassNameString("Assignment");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/action_ut_waitforsignal_2

	class Condition_bt_node_test_action_ut_waitforsignal_2_node5 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_waitforsignal_2_node5, Condition);
		Condition_bt_node_test_action_ut_waitforsignal_2_node5()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_1, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Condition_bt_node_test_action_ut_waitforsignal_2_node6 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_waitforsignal_2_node6, Condition);
		Condition_bt_node_test_action_ut_waitforsignal_2_node6()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			int& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >();
			int opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Condition_bt_node_test_action_ut_waitforsignal_2_node7 : public Condition
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Condition_bt_node_test_action_ut_waitforsignal_2_node7, Condition);
		Condition_bt_node_test_action_ut_waitforsignal_2_node7()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			float& opl = ((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >();
			float opr = 0;
			bool op = Details::Equal(opl, opr);
			return op ? BT_SUCCESS : BT_FAILURE;
		}
	};

	class Assignment_bt_node_test_action_ut_waitforsignal_2_node4 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_ut_waitforsignal_2_node4, Assignment);
		Assignment_bt_node_test_action_ut_waitforsignal_2_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			float opr = 2.3f;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_2, float >() = opr;
			return result;
		}
	};

		bool bt_node_test_action_ut_waitforsignal_2::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/action_ut_waitforsignal_2");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					WaitforSignal* node1 = BEHAVIAC_NEW WaitforSignal;
					node1->SetClassNameString("WaitforSignal");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					{
						Or* node2 = BEHAVIAC_NEW Or;
						node2->SetClassNameString("Or");
						node2->SetId(2);
#if !BEHAVIAC_RELEASE
						node2->SetAgentType("AgentNodeTest");
#endif
						node1->SetCustomCondition(node2);
						{
							And* node3 = BEHAVIAC_NEW And;
							node3->SetClassNameString("And");
							node3->SetId(3);
#if !BEHAVIAC_RELEASE
							node3->SetAgentType("AgentNodeTest");
#endif
							node2->AddChild(node3);
							{
								Condition_bt_node_test_action_ut_waitforsignal_2_node5* node5 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_waitforsignal_2_node5;
								node5->SetClassNameString("Condition");
								node5->SetId(5);
#if !BEHAVIAC_RELEASE
								node5->SetAgentType("AgentNodeTest");
#endif
								node3->AddChild(node5);
								node3->SetHasEvents(node3->HasEvents() | node5->HasEvents());
							}
							{
								Condition_bt_node_test_action_ut_waitforsignal_2_node6* node6 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_waitforsignal_2_node6;
								node6->SetClassNameString("Condition");
								node6->SetId(6);
#if !BEHAVIAC_RELEASE
								node6->SetAgentType("AgentNodeTest");
#endif
								node3->AddChild(node6);
								node3->SetHasEvents(node3->HasEvents() | node6->HasEvents());
							}
							node2->SetHasEvents(node2->HasEvents() | node3->HasEvents());
						}
						{
							Condition_bt_node_test_action_ut_waitforsignal_2_node7* node7 = BEHAVIAC_NEW Condition_bt_node_test_action_ut_waitforsignal_2_node7;
							node7->SetClassNameString("Condition");
							node7->SetId(7);
#if !BEHAVIAC_RELEASE
							node7->SetAgentType("AgentNodeTest");
#endif
							node2->AddChild(node7);
							node2->SetHasEvents(node2->HasEvents() | node7->HasEvents());
						}
						node1->SetHasEvents(node1->HasEvents() | node2->HasEvents());
					}
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Assignment_bt_node_test_action_ut_waitforsignal_2_node4* node4 = BEHAVIAC_NEW Assignment_bt_node_test_action_ut_waitforsignal_2_node4;
					node4->SetClassNameString("Assignment");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

	// Source file: node_test/action_waitframes_ut_0

	class Assignment_bt_node_test_action_waitframes_ut_0_node3 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_waitframes_ut_0_node3, Assignment);
		Assignment_bt_node_test_action_waitframes_ut_0_node3()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 1;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

	class WaitFrames_bt_node_test_action_waitframes_ut_0_node1 : public WaitFrames
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(WaitFrames_bt_node_test_action_waitframes_ut_0_node1, WaitFrames);
		WaitFrames_bt_node_test_action_waitframes_ut_0_node1()
		{
		}
	protected:
		virtual int GetFrames(Agent* pAgent) const
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			return (int&)pAgent->GetVariable<int >(4259617405u);
		}
	};

	class Assignment_bt_node_test_action_waitframes_ut_0_node4 : public Assignment
	{
	public:
		BEHAVIAC_DECLARE_DYNAMIC_TYPE(Assignment_bt_node_test_action_waitframes_ut_0_node4, Assignment);
		Assignment_bt_node_test_action_waitframes_ut_0_node4()
		{
		}
	protected:
		virtual EBTStatus update_impl(Agent* pAgent, EBTStatus childStatus)
		{
			BEHAVIAC_UNUSED_VAR(pAgent);
			BEHAVIAC_UNUSED_VAR(childStatus);
			EBTStatus result = BT_SUCCESS;
			int opr = 2;
			((AgentNodeTest*)pAgent)->_Get_Property_<PROPERTY_TYPE_AgentNodeTest_testVar_0, int >() = opr;
			return result;
		}
	};

		bool bt_node_test_action_waitframes_ut_0::Create(BehaviorTree* pBT)
		{
			pBT->SetClassNameString("BehaviorTree");
			pBT->SetId((uint16_t)-1);
			pBT->SetName("node_test/action_waitframes_ut_0");
			pBT->SetIsFSM(false);
#if !BEHAVIAC_RELEASE
			pBT->SetAgentType("AgentNodeTest");
#endif
			// pars
			pBT->AddPar("AgentNodeTest", "int", "par_frame_count", "5");
			// children
			{
				Sequence* node0 = BEHAVIAC_NEW Sequence;
				node0->SetClassNameString("Sequence");
				node0->SetId(0);
#if !BEHAVIAC_RELEASE
				node0->SetAgentType("AgentNodeTest");
#endif
				pBT->AddChild(node0);
				{
					Assignment_bt_node_test_action_waitframes_ut_0_node3* node3 = BEHAVIAC_NEW Assignment_bt_node_test_action_waitframes_ut_0_node3;
					node3->SetClassNameString("Assignment");
					node3->SetId(3);
#if !BEHAVIAC_RELEASE
					node3->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node3);
					node0->SetHasEvents(node0->HasEvents() | node3->HasEvents());
				}
				{
					WaitFrames_bt_node_test_action_waitframes_ut_0_node1* node1 = BEHAVIAC_NEW WaitFrames_bt_node_test_action_waitframes_ut_0_node1;
					node1->SetClassNameString("WaitFrames");
					node1->SetId(1);
#if !BEHAVIAC_RELEASE
					node1->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node1);
					node0->SetHasEvents(node0->HasEvents() | node1->HasEvents());
				}
				{
					Assignment_bt_node_test_action_waitframes_ut_0_node4* node4 = BEHAVIAC_NEW Assignment_bt_node_test_action_waitframes_ut_0_node4;
					node4->SetClassNameString("Assignment");
					node4->SetId(4);
#if !BEHAVIAC_RELEASE
					node4->SetAgentType("AgentNodeTest");
#endif
					node0->AddChild(node4);
					node0->SetHasEvents(node0->HasEvents() | node4->HasEvents());
				}
				pBT->SetHasEvents(pBT->HasEvents() | node0->HasEvents());
			}
			return true;
		}

}
