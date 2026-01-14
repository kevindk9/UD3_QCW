// ======================================================================
// UD3_QFN.v generated from TopDesign.cysch
// 01/13/2026 at 15:59
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_PSOC5LP 2
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PSOC5TM 3
`define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1
`define CYDEV_CHIP_REV_PSOC5TM_ES1 1
`define CYDEV_CHIP_REV_PSOC5TM_ES0 0
`define CYDEV_CHIP_DIE_TMA4 4
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 5
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC6ABLE2 6
`define CYDEV_CHIP_REV_PSOC6ABLE2_ES 17
`define CYDEV_CHIP_REV_PSOC6ABLE2_PRODUCTION 33
`define CYDEV_CHIP_REV_PSOC6ABLE2_NO_UDB 33
`define CYDEV_CHIP_DIE_VOLANS 7
`define CYDEV_CHIP_REV_VOLANS_PRODUCTION 0
`define CYDEV_CHIP_DIE_BERRYPECKER 8
`define CYDEV_CHIP_REV_BERRYPECKER_PRODUCTION 0
`define CYDEV_CHIP_DIE_CRANE 9
`define CYDEV_CHIP_REV_CRANE_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM3 10
`define CYDEV_CHIP_REV_FM3_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM4 11
`define CYDEV_CHIP_REV_FM4_PRODUCTION 0
`define CYDEV_CHIP_DIE_EXPECT 2
`define CYDEV_CHIP_REV_EXPECT 0
`define CYDEV_CHIP_DIE_ACTUAL 2
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0
`define CYDEV_CHIP_MEMBER_4X 7
`define CYDEV_CHIP_REVISION_4X_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4O 8
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 9
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4T 10
`define CYDEV_CHIP_REVISION_4T_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 11
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 12
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4W 13
`define CYDEV_CHIP_REVISION_4W_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AC 14
`define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AD 15
`define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AE 16
`define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 17
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Y 18
`define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Z 19
`define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 20
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 21
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 22
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4V 23
`define CYDEV_CHIP_REVISION_4V_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 24
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AA 25
`define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 26
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 27
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 28
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 29
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AB 30
`define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 31
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 32
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 33
`define CYDEV_CHIP_REVISION_6A_ES 17
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 33
`define CYDEV_CHIP_REVISION_6A_NO_UDB 33
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 37
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 38
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 3
`define CYDEV_CHIP_MEMBER_USED 2
`define CYDEV_CHIP_REVISION_USED 0
// Component: not_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\not_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\not_v1_0\not_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\not_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\not_v1_0\not_v1_0.v"
`endif

// Component: and_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0\and_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\and_v1_0\and_v1_0.v"
`endif

// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// Component: cydff_v1_30
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30\cydff_v1_30.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cydff_v1_30\cydff_v1_30.v"
`endif

// Component: cy_constant_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`endif

// Component: or_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`endif

// Component: AMux_v1_80
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80\AMux_v1_80.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMux_v1_80\AMux_v1_80.v"
`endif

// Component: cy_analog_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`endif

// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: cy_vref_v1_70
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70\cy_vref_v1_70.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70\cy_vref_v1_70.v"
`endif

// ADC_SAR_v3_10(ADC_Clock=1, ADC_Clock_Frequency=1800000, ADC_Input_Range=1, ADC_Power=0, ADC_Reference=1, ADC_Resolution=12, ADC_SampleMode=2, Enable_next_out=true, Ref_Voltage=2.5, Ref_Voltage_mV=2500, rm_int=false, Sample_Precharge=6, Sample_Rate=100000, Sample_Rate_def=631579, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=ADC_SAR_v3_10, CY_CONFIG_TITLE=ADC, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ADC, CY_INSTANCE_SHORT_NAME=ADC, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=ADC, )
module ADC_SAR_v3_10_0 (
    aclk,
    eoc,
    eos,
    soc,
    vdac_ref,
    vminus,
    vplus);
    input       aclk;
    output      eoc;
    output      eos;
    input       soc;
    inout       vdac_ref;
    electrical  vdac_ref;
    inout       vminus;
    electrical  vminus;
    inout       vplus;
    electrical  vplus;


          wire [3:0] vp_ctl;
          wire [3:0] vn_ctl;
    electrical  Net_255;
    electrical  Net_267;
    electrical  Net_210;
    electrical  Net_209;
          wire  Net_252;
          wire [11:0] Net_207;
          wire  Net_205;
          wire  Net_381;
    electrical  Net_368;
    electrical  Net_235;
    electrical  Net_216;
    electrical  Net_233;
          wire  Net_385;
          wire  Net_383;
          wire  Net_221;
    electrical  Net_248;
    electrical  Net_257;
    electrical  Net_149;
    electrical  Net_126;
    electrical  Net_215;
          wire  Net_188;

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Net_248, Net_235);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;


	cy_isr_v1_0
		#(.int_type(2'b10))
		IRQ
		 (.int_signal(eoc));


    ZeroTerminal ZeroTerminal_1 (
        .z(vp_ctl[0]));

    ZeroTerminal ZeroTerminal_2 (
        .z(vp_ctl[2]));

    ZeroTerminal ZeroTerminal_3 (
        .z(vn_ctl[1]));

    ZeroTerminal ZeroTerminal_4 (
        .z(vn_ctl[3]));

    ZeroTerminal ZeroTerminal_5 (
        .z(vp_ctl[1]));

    ZeroTerminal ZeroTerminal_6 (
        .z(vp_ctl[3]));

    ZeroTerminal ZeroTerminal_7 (
        .z(vn_ctl[0]));

    ZeroTerminal ZeroTerminal_8 (
        .z(vn_ctl[2]));


	cy_clock_v1_0
		#(.id("7ea88270-49e6-43be-82b7-63948e7960a3/696a0979-21fc-4185-bf38-6c79febcde7a"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("555555555.555556"),
		  .is_direct(0),
		  .is_digital(0))
		theACLK
		 (.clock_out(Net_385),
		  .dig_domain_out(Net_381));


	// Clock_VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_188 = Net_221;

    cy_psoc5_sar_v2_0 ADC_SAR (
        .clk_udb(),
        .clock(Net_188),
        .data_out(Net_207[11:0]),
        .eof_udb(eoc),
        .ext_pin(Net_215),
        .irq(Net_252),
        .next_out(eos),
        .pump_clock(Net_188),
        .sof_udb(soc),
        .vminus(Net_126),
        .vn_ctl_udb(vn_ctl[3:0]),
        .vp_ctl_udb(vp_ctl[3:0]),
        .vplus(vplus),
        .vref(Net_248),
        .vrefhi_out(Net_257));

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_215, Net_210);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

	wire [0:0] tmpOE__Bypass_net;
	wire [0:0] tmpFB_0__Bypass_net;
	wire [0:0] tmpIO_0__Bypass_net;
	wire [0:0] tmpINTERRUPT_0__Bypass_net;
	electrical [0:0] tmpSIOVREF__Bypass_net;

	cy_psoc3_pins_v1_10
		#(.id("7ea88270-49e6-43be-82b7-63948e7960a3/16a808f6-2e13-45b9-bce0-b001c8655113"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Bypass
		 (.oe(tmpOE__Bypass_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Bypass_net[0:0]}),
		  .analog({Net_210}),
		  .io({tmpIO_0__Bypass_net[0:0]}),
		  .siovref(tmpSIOVREF__Bypass_net),
		  .interrupt({tmpINTERRUPT_0__Bypass_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Bypass_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_126, Net_149);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 noconnect (
        .noconnect(Net_209));

	// cy_analog_virtualmux_4 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_4_connect(Net_257, Net_149);
	defparam cy_analog_virtualmux_4_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_255));


	cy_vref_v1_0
		#(.guid("4720866E-BC14-478d-B8A0-3E44F38CADAC"),
		  .name("Vdda/2"),
		  .autoenable(1))
		vRef_Vdda_1
		 (.vout(Net_235));


    cy_analog_noconnect_v1_0 noconnect_1 (
        .noconnect(Net_368));


    assign Net_221 = Net_383 | Net_385;

    assign Net_383 = 1'h0;



endmodule

// Component: B_PWM_v3_30
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30\B_PWM_v3_30.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30\B_PWM_v3_30.v"
`endif

// Component: OneTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`endif

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=false, Compare2_16=true, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=3, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=65000, CompareValue2=65000, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=0, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=false, Period=65000, PWMMode=1, PWMModeCenterAligned=0, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=sSTSReg_rstSts, RunMode=1, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=false, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=false, TermVisibility_pwm1=true, TermVisibility_pwm2=true, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=true, UDB8=false, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP16, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=interrupter1, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=interrupter1, CY_INSTANCE_SHORT_NAME=interrupter1, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=interrupter1, )
module PWM_v3_30_1 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 16;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .capture(capture),
        .clock(clock),
        .cmp_sel(cmp_sel),
        .enable(enable),
        .interrupt(Net_55),
        .kill(kill),
        .ph1(ph1),
        .ph2(ph2),
        .pwm(Net_96),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .reset(reset),
        .tc(Net_101),
        .trigger(trigger));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 3;
    defparam PWMUDB.CompareType2 = 1;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 0;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 1;
    defparam PWMUDB.Resolution = 16;
    defparam PWMUDB.RunMode = 1;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 0;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=false, Compare2_16=false, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=2, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=4, CompareValue2=63, CONTROL3=1, ControlReg=false, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=0, EnableMode=0, FF16=true, FF8=false, FixedFunction=true, FixedFunctionUsed=1, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=1, KillModeMinTime=0, MinimumKillTime=1, OneCompare=true, Period=127, PWMMode=0, PWMModeCenterAligned=0, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=false, TermVisibility_kill=true, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=false, UDB8=false, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP16, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=PWMB, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PWMB, CY_INSTANCE_SHORT_NAME=PWMB, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=PWMB, )
module PWM_v3_30_2 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 16;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    cy_psoc3_timer_v1_0 PWMHW (
        .capture(capture),
        .clock(clock),
        .compare(Net_57),
        .enable(Net_113),
        .interrupt(Net_54),
        .kill(Net_107),
        .tc(Net_63),
        .timer_reset(reset));

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_57;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_54;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_63;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = kill;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// Filter_v2_30(ChannelEnableA=true, ChannelEnableB=false, ChannelSettingsA=<enabled=true>\r\n<userEntryEnabled=true>\r\n<sampleRate=1000>\r\n<filterGain_dB=0>\r\n<filterGain_Linear=1>\r\n<gainScale=LINEAR>\r\n<width=WIDTH_16>\r\n<signal=DMA>\r\n<stage_count=1>\r\n<bus_clock=11>\r\n<stage0=\r\n    <design_type=FIR>\r\n    <pass_type=LOW_PASS>\r\n    <window_type=HAMMING>\r\n    <tap_count=8>\r\n    <primary_freq=218>\r\n    <bandwidth=10>\r\n    <UserCoefficient=0.25/0.25/0.25/0.25/>\r\n    <userTapCount=4>\r\n>\r\n<stage1=\r\n    <design_type=BIQUAD>\r\n    <pass_type=LOW_PASS>\r\n    <shape=CHEBYCHEV>\r\n    <order=1>\r\n    <ripple=0.1>\r\n    <primary_freq=140>\r\n    <bandwidth=10>\r\n    <UserCoefficient=>\r\n    <userOrder=1>\r\n>\r\n<stage2=\r\n    <design_type=FIR>\r\n    <pass_type=LOW_PASS>\r\n    <window_type=HAMMING>\r\n    <tap_count=16>\r\n    <primary_freq=15>\r\n    <bandwidth=10>\r\n    <UserCoefficient=>\r\n    <userTapCount=1>\r\n>\r\n<stage3=\r\n    <design_type=FIR>\r\n    <pass_type=LOW_PASS>\r\n    <window_type=HAMMING>\r\n    <tap_count=16>\r\n    <primary_freq=15>\r\n    <bandwidth=10>\r\n    <UserCoefficient=>\r\n    <userTapCount=1>\r\n>\r\n<stage4=\r\n    <design_type=BIQUAD>\r\n    <pass_type=LOW_PASS>\r\n    <shape=BUTTERWORTH>\r\n    <order=1>\r\n    <ripple=0.1>\r\n    <primary_freq=50>\r\n    <bandwidth=10>\r\n    <UserCoefficient=0.00362169811855958/0.00724339623711916/0.00362169811855958/-1.82269489765167/0.837181687355042/>\r\n    <userOrder=2>\r\n>\r\n<stage5=\r\n    <design_type=FIR>\r\n    <pass_type=LOW_PASS>\r\n    <window_type=HAMMING>\r\n    <tap_count=16>\r\n    <primary_freq=15>\r\n    <bandwidth=10>\r\n    <UserCoefficient=>\r\n    <userTapCount=1>\r\n>\r\n<stage6=\r\n    <design_type=FIR>\r\n    <pass_type=LOW_PASS>\r\n    <window_type=HAMMING>\r\n    <tap_count=16>\r\n    <primary_freq=15>\r\n    <bandwidth=10>\r\n    <UserCoefficient=>\r\n    <userTapCount=1>\r\n>\r\n<stage7=\r\n    <design_type=FIR>\r\n    <pass_type=LOW_PASS>\r\n    <window_type=HAMMING>\r\n    <tap_count=16>\r\n    <primary_freq=15>\r\n    <bandwidth=10>\r\n    <UserCoefficient=>\r\n    <userTapCount=1>\r\n>\r\n, ChannelSettingsB="", ChannelTypeA=1, ChannelTypeB=0, CoefficientEntryEnableA=true, CoefficientEntryEnableB=false, DisplaySettingsA=1491078, DisplaySettingsB=50307, DmaEnableA=true, DmaEnableB=false, IrqEnableA=false, IrqEnableB=false, MinBusClockVal=11, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Filter_v2_30, CY_CONFIG_TITLE=FB_Filter, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=FB_Filter, CY_INSTANCE_SHORT_NAME=FB_Filter, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=FB_Filter, )
module Filter_v2_30_3 (
    DMA_Req_A,
    DMA_Req_B,
    Interrupt);
    output      DMA_Req_A;
    output      DMA_Req_B;
    output      Interrupt;


          wire  Net_9;
          wire  Net_8;
          wire  Net_5;
          wire  Net_4;
          wire  Net_1;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_1));

    cy_psoc3_dfb_v1_0 DFB (
        .clock(Net_1),
        .dmareq_1(DMA_Req_A),
        .dmareq_2(DMA_Req_B),
        .in_1(Net_4),
        .in_2(Net_5),
        .interrupt(Interrupt),
        .out_1(Net_8),
        .out_2(Net_9));

    ZeroTerminal ZeroTerminal_4 (
        .z(Net_5));

    ZeroTerminal ZeroTerminal_5 (
        .z(Net_4));



endmodule

// Comp_v2_0(Hysteresis=1, Pd_Override=0, Polarity=0, PSOC5A=false, Speed=1, Sync=0, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Comp_v2_0, CY_CONFIG_TITLE=ZCD_compB, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ZCD_compB, CY_INSTANCE_SHORT_NAME=ZCD_compB, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=0, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=ZCD_compB, )
module Comp_v2_0_4 (
    clock,
    CmpOut,
    Vminus,
    Vplus);
    input       clock;
    output      CmpOut;
    inout       Vminus;
    electrical  Vminus;
    inout       Vplus;
    electrical  Vplus;


          wire  Net_9;
          wire  Net_1;

    cy_psoc3_ctcomp_v1_0 ctComp (
        .clk_udb(clock),
        .clock(clock),
        .cmpout(Net_1),
        .vminus(Vminus),
        .vplus(Vplus));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign CmpOut = Net_1;


    assign Net_9 = ~Net_1;



endmodule

// Component: CyControlReg_v1_80
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80\CyControlReg_v1_80.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyControlReg_v1_80\CyControlReg_v1_80.v"
`endif

// Component: mux_v1_10
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10\mux_v1_10.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\mux_v1_10\mux_v1_10.v"
`endif

// Timer_v2_80(CaptureAlternatingFall=false, CaptureAlternatingRise=false, CaptureCount=2, CaptureCounterEnabled=false, CaptureInputEnabled=true, CaptureMode=1, CONTROL3=1, ControlRegRemoved=0, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeviceFamily=PSoC5, EnableMode=0, FF16=true, FF8=false, FixedFunction=true, FixedFunctionUsed=1, HWCaptureCounterEnabled=false, InterruptOnCapture=false, InterruptOnFIFOFull=false, InterruptOnTC=false, IntOnCapture=0, IntOnFIFOFull=0, IntOnTC=0, NumberOfCaptures=1, param45=1, Period=65535, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=rstSts, RunMode=0, SiliconRevision=0, SoftwareCaptureModeEnabled=false, SoftwareTriggerModeEnabled=false, TriggerInputEnabled=false, TriggerMode=0, UDB16=false, UDB24=false, UDB32=false, UDB8=false, UDBControlReg=false, UsesHWEnable=0, VerilogSectionReplacementString=sT16, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Timer_v2_80, CY_CONFIG_TITLE=FB_capture, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=FB_capture, CY_INSTANCE_SHORT_NAME=FB_capture, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=80, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=FB_capture, )
module Timer_v2_80_5 (
    capture,
    capture_out,
    clock,
    enable,
    interrupt,
    reset,
    tc,
    trigger);
    input       capture;
    output      capture_out;
    input       clock;
    input       enable;
    output      interrupt;
    input       reset;
    output      tc;
    input       trigger;

    parameter CaptureCount = 2;
    parameter CaptureCounterEnabled = 0;
    parameter DeviceFamily = "PSoC5";
    parameter InterruptOnCapture = 0;
    parameter InterruptOnTC = 0;
    parameter Resolution = 16;
    parameter SiliconRevision = "0";

          wire  Net_260;
          wire  Net_261;
          wire  Net_266;
          wire  Net_102;
          wire  Net_55;
          wire  Net_57;
          wire  Net_53;
          wire  Net_51;

    cy_psoc3_timer_v1_0 TimerHW (
        .capture(capture),
        .clock(clock),
        .compare(Net_261),
        .enable(Net_266),
        .interrupt(Net_57),
        .kill(Net_260),
        .tc(Net_51),
        .timer_reset(reset));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_260));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign interrupt = Net_57;

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign tc = Net_51;

    OneTerminal OneTerminal_1 (
        .o(Net_102));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_266 = Net_102;



endmodule

// VDAC8_v1_90(Data_Source=0, Initial_Value=32, Strobe_Mode=0, VDAC_Range=4, VDAC_Speed=2, Voltage=512, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONFIG_TITLE=FB_THRSH_DAC, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=FB_THRSH_DAC, CY_INSTANCE_SHORT_NAME=FB_THRSH_DAC, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=FB_THRSH_DAC, )
module VDAC8_v1_90_6 (
    data,
    strobe,
    vOut);
    input      [7:0] data;
    input       strobe;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 32;
    parameter Strobe_Mode = 0;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .data(data[7:0]),
        .idir(Net_81),
        .ioff(Net_82),
        .iout(Net_77),
        .reset(Net_83),
        .strobe(strobe),
        .strobe_udb(strobe),
        .vout(vOut));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=false, Compare2_16=false, Compare2_8=true, CompareStatusEdgeSense=true, CompareType1=3, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=233, CompareValue2=254, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG8, CySetRegReplacementString=CY_SET_REG8, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=3, DitherOffset=0, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=false, Period=255, PWMMode=2, PWMModeCenterAligned=0, RegDefReplacementString=reg8, RegSizeReplacementString=uint8, Resolution=8, RstStatusReplacementString=sSTSReg_rstSts, RunMode=1, Status=true, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=true, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=false, UDB8=true, UseControl=true, UseInterrupt=true, UseStatus=true, VerilogSectionReplacementString=sP8, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=FB_glitch_detect, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=FB_glitch_detect, CY_INSTANCE_SHORT_NAME=FB_glitch_detect, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=FB_glitch_detect, )
module PWM_v3_30_7 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 8;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .capture(capture),
        .clock(clock),
        .cmp_sel(cmp_sel),
        .enable(enable),
        .interrupt(Net_55),
        .kill(kill),
        .ph1(ph1),
        .ph2(ph2),
        .pwm(Net_96),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .reset(reset),
        .tc(Net_101),
        .trigger(trigger));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 3;
    defparam PWMUDB.CompareType2 = 1;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 0;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 2;
    defparam PWMUDB.Resolution = 8;
    defparam PWMUDB.RunMode = 1;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 1;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// Component: cy_srff_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_srff_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_srff_v1_0\cy_srff_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_srff_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_srff_v1_0\cy_srff_v1_0.v"
`endif

// VDAC8_v1_90(Data_Source=0, Initial_Value=100, Strobe_Mode=0, VDAC_Range=0, VDAC_Speed=0, Voltage=400, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONFIG_TITLE=ZCDref, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ZCDref, CY_INSTANCE_SHORT_NAME=ZCDref, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=ZCDref, )
module VDAC8_v1_90_8 (
    data,
    strobe,
    vOut);
    input      [7:0] data;
    input       strobe;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 100;
    parameter Strobe_Mode = 0;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .data(data[7:0]),
        .idir(Net_81),
        .ioff(Net_82),
        .iout(Net_77),
        .reset(Net_83),
        .strobe(strobe),
        .strobe_udb(strobe),
        .vout(vOut));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// Component: AMuxHw_v1_50
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMuxHw_v1_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMuxHw_v1_50\AMuxHw_v1_50.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMuxHw_v1_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\AMuxHw_v1_50\AMuxHw_v1_50.v"
`endif

// IDAC8_v2_0(Current=960, Data_Source=0, Hardware_Enable=false, IDAC_Range=8, IDAC_Speed=2, Initial_Value=120, Polarity=0, Strobe_Mode=0, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=IDAC8_v2_0, CY_CONFIG_TITLE=IDAC_therm, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=IDAC_therm, CY_INSTANCE_SHORT_NAME=IDAC_therm, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=0, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=IDAC_therm, )
module IDAC8_v2_0_9 (
    data,
    en,
    iOut,
    ipolarity,
    strobe);
    input      [7:0] data;
    input       en;
    inout       iOut;
    electrical  iOut;
    input       ipolarity;
    input       strobe;

    parameter Data_Source = 0;
    parameter Initial_Value = 120;
    parameter Strobe_Mode = 0;

          wire  Net_195;
          wire  Net_194;
    electrical  Net_124;
          wire  Net_158;
          wire  Net_157;
          wire  Net_123;
          wire  Net_125;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .data(data[7:0]),
        .idir(Net_158),
        .ioff(Net_123),
        .iout(iOut),
        .reset(Net_125),
        .strobe(strobe),
        .strobe_udb(strobe),
        .vout(Net_124));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;


    assign Net_157 = ~en;

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_125));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_124));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign Net_123 = Net_194;

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_158 = Net_195;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_194));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_195));



endmodule

// Component: cy_vref_v1_60
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_60"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_60\cy_vref_v1_60.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_60"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_60\cy_vref_v1_60.v"
`endif

// ADC_DelSig_v3_20(ADC_Alignment=0, ADC_Alignment_Config2=0, ADC_Alignment_Config3=0, ADC_Alignment_Config4=0, ADC_Charge_Pump_Clock=true, ADC_Clock=1, ADC_CLOCK_FREQUENCY=1899900, ADC_Input_Mode=1, ADC_Input_Range=2, ADC_Input_Range_Config2=4, ADC_Input_Range_Config3=4, ADC_Input_Range_Config4=4, ADC_Power=1, ADC_Reference=5, ADC_Reference_Config2=0, ADC_Reference_Config3=0, ADC_Reference_Config4=0, ADC_Resolution=12, ADC_Resolution_Config2=16, ADC_Resolution_Config3=16, ADC_Resolution_Config4=16, Clock_Frequency=64000, Comment_Config1=Default Config, Comment_Config2=Second Config, Comment_Config3=Third Config, Comment_Config4=Fourth Config, Config1_Name=CFG1, Config2_Name=CFG2, Config3_Name=CFG3, Config4_Name=CFG4, Configs=1, Conversion_Mode=0, Conversion_Mode_Config2=2, Conversion_Mode_Config3=2, Conversion_Mode_Config4=2, Enable_Vref_Vss=false, EnableModulatorInput=false, Input_Buffer_Gain=1, Input_Buffer_Gain_Config2=1, Input_Buffer_Gain_Config3=1, Input_Buffer_Gain_Config4=1, Input_Buffer_Mode=0, Input_Buffer_Mode_Config2=1, Input_Buffer_Mode_Config3=1, Input_Buffer_Mode_Config4=1, Ref_Voltage=1.25, Ref_Voltage_Config2=1.024, Ref_Voltage_Config3=1.024, Ref_Voltage_Config4=1.024, rm_int=true, Sample_Rate=12666, Sample_Rate_Config2=2000, Sample_Rate_Config3=2000, Sample_Rate_Config4=2000, Start_of_Conversion=0, Vdda_Value=5, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=ADC_DelSig_v3_20, CY_CONFIG_TITLE=ADC_therm, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ADC_therm, CY_INSTANCE_SHORT_NAME=ADC_therm, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=20, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=ADC_therm, )
module ADC_DelSig_v3_20_10 (
    aclk,
    eoc,
    mi,
    nVref,
    soc,
    vminus,
    vplus);
    input       aclk;
    output      eoc;
    input       mi;
    inout       nVref;
    electrical  nVref;
    input       soc;
    inout       vminus;
    electrical  vminus;
    inout       vplus;
    electrical  vplus;


          wire  Net_270;
          wire  Net_268;
          wire  Net_252;
          wire  Net_275;
          wire  Net_250;
    electrical  Net_249;
    electrical  Net_257;
    electrical  Net_248;
    electrical  Net_23;
          wire  Net_247;
          wire  aclock;
          wire [3:0] mod_dat;
          wire  mod_reset;
    electrical  Net_352;
          wire  Net_482;
          wire [7:0] Net_245;
          wire  Net_246;
    electrical  Net_34;
    electrical  Net_35;
    electrical  Net_244;
          wire  Net_93;
    electrical  Net_20;
    electrical  Net_690;
    electrical  Net_686;
    electrical  Net_520;
          wire  Net_481;
    electrical  Net_677;
    electrical  Net_41;
    electrical  Net_573;
    electrical  Net_109;
          wire  Net_488;


	cy_vref_v1_0
		#(.guid("15B3DB15-B7B3-4d62-A2DF-25EA392A7161"),
		  .name("Vssa (GND)"),
		  .autoenable(1))
		vRef_2
		 (.vout(Net_244));


	// cy_analog_virtualmux_6 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_6_connect(Net_690, Net_35);
	defparam cy_analog_virtualmux_6_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_34));

	// cy_analog_virtualmux_4 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_4_connect(Net_677, Net_34);
	defparam cy_analog_virtualmux_4_connect.sig_width = 1;

    // -- AMux AMux start -- ***
    // -- Mux A --
    
    cy_psoc3_amux_v1_0 AMux(
        .muxin({
            Net_690,
            Net_244
            }),
        .vout(Net_20)
        );
    
    defparam AMux.muxin_width = 2;
    defparam AMux.init_mux_sel = 2'h0;
    defparam AMux.one_active = 0;
    defparam AMux.connect_mode = 1;
    
    // -- AMux AMux end --

    cy_psoc3_ds_mod_v4_0 DSM (
        .aclock(Net_488),
        .clk_udb(1'b0),
        .dec_clock(aclock),
        .dout_udb(Net_245[7:0]),
        .ext_pin_1(Net_573),
        .ext_pin_2(Net_41),
        .ext_vssa(Net_109),
        .extclk_cp_udb(Net_93),
        .mod_dat(mod_dat[3:0]),
        .modbit(Net_481),
        .qtz_ref(Net_677),
        .reset_dec(mod_reset),
        .reset_udb(Net_482),
        .vminus(Net_520),
        .vplus(vplus));
    defparam DSM.resolution = 12;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_5 (
        .noconnect(Net_352));

	// cy_analog_virtualmux_5 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_5_connect(Net_109, Net_352);
	defparam cy_analog_virtualmux_5_connect.sig_width = 1;


	cy_clock_v1_0
		#(.id("869fc62f-9c1d-4040-b670-5167c47d98b3/b7604721-db56-4477-98c2-8fae77869066"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(1),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(1))
		Ext_CP_Clk
		 (.clock_out(Net_93));


    cy_analog_noconnect_v1_0 cy_analog_noconnect_3 (
        .noconnect(Net_257));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_2 (
        .noconnect(Net_249));

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Net_41, Net_257);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_573, Net_249);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_520, Net_20);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

	// Clock_VirtualMux (cy_virtualmux_v1_0)
	assign Net_488 = Net_250;


	cy_clock_v1_0
		#(.id("869fc62f-9c1d-4040-b670-5167c47d98b3/edd15f43-b66b-457b-be3a-5342345270c8"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(0),
		  .period("526592943.654555"),
		  .is_direct(0),
		  .is_digital(0))
		theACLK
		 (.clock_out(Net_250));


    ZeroTerminal ZeroTerminal_2 (
        .z(Net_482));

	// Clock_VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_481 = Net_252;

    cy_psoc3_decimator_v1_0 DEC (
        .aclock(aclock),
        .ext_start(soc),
        .interrupt(eoc),
        .mod_dat(mod_dat[3:0]),
        .mod_reset(mod_reset));

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_252));


    assign Net_268 = Net_270 | Net_93;

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_270));



endmodule

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=false, Compare2_16=false, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=2, CompareType1Software=0, CompareType2=2, CompareType2Software=0, CompareValue1=4, CompareValue2=100, CONTROL3=1, ControlReg=false, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG16, CySetRegReplacementString=CY_SET_REG16, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=0, EnableMode=0, FF16=true, FF8=false, FixedFunction=true, FixedFunctionUsed=1, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=1, KillModeMinTime=0, MinimumKillTime=1, OneCompare=true, Period=127, PWMMode=0, PWMModeCenterAligned=0, RegDefReplacementString=reg16, RegSizeReplacementString=uint16, Resolution=16, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=false, TermVisibility_kill=true, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=false, UDB8=false, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP16, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=PWMA, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=PWMA, CY_INSTANCE_SHORT_NAME=PWMA, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=PWMA, )
module PWM_v3_30_11 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 16;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    cy_psoc3_timer_v1_0 PWMHW (
        .capture(capture),
        .clock(clock),
        .compare(Net_57),
        .enable(Net_113),
        .interrupt(Net_54),
        .kill(Net_107),
        .tc(Net_63),
        .timer_reset(reset));

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_57;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_54;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_63;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = kill;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// Component: xor_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\xor_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\xor_v1_0\xor_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\xor_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\xor_v1_0\xor_v1_0.v"
`endif

// VDAC8_v1_90(Data_Source=0, Initial_Value=150, Strobe_Mode=0, VDAC_Range=4, VDAC_Speed=2, Voltage=2400, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=VDAC8_v1_90, CY_CONFIG_TITLE=CT1_dac, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=CT1_dac, CY_INSTANCE_SHORT_NAME=CT1_dac, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=CT1_dac, )
module VDAC8_v1_90_12 (
    data,
    strobe,
    vOut);
    input      [7:0] data;
    input       strobe;
    inout       vOut;
    electrical  vOut;

    parameter Data_Source = 0;
    parameter Initial_Value = 150;
    parameter Strobe_Mode = 0;

    electrical  Net_77;
          wire  Net_83;
          wire  Net_82;
          wire  Net_81;

    cy_psoc3_vidac8_v1_0 viDAC8 (
        .data(data[7:0]),
        .idir(Net_81),
        .ioff(Net_82),
        .iout(Net_77),
        .reset(Net_83),
        .strobe(strobe),
        .strobe_udb(strobe),
        .vout(vOut));
    defparam viDAC8.is_all_if_any = 0;
    defparam viDAC8.reg_data = 0;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_81));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_82));

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_83));

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_77));



endmodule

// Component: B_Counter_v3_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_Counter_v3_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_Counter_v3_0\B_Counter_v3_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_Counter_v3_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_Counter_v3_0\B_Counter_v3_0.v"
`endif

// Counter_v3_0(CaptureMode=0, CaptureModeSoftware=0, ClockMode=3, CompareMode=2, CompareModeSoftware=0, CompareStatusEdgeSense=true, CompareValue=2, CONTROL3=0, ControlRegRemoved=0, CyGetRegReplacementString=CY_GET_REG8, CySetRegReplacementString=CY_SET_REG8, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InitCounterValue=4, InterruptOnCapture=false, InterruptOnCompare=false, InterruptOnOverUnderFlow=false, InterruptOnTC=false, Period=4, RegDefReplacementString=reg8, RegSizeReplacementString=uint8, ReloadOnCapture=false, ReloadOnCompare=false, ReloadOnOverUnder=false, ReloadOnReset=true, Resolution=8, RunMode=1, UDB16=false, UDB24=false, UDB32=false, UDB8=true, UDBControlReg=true, UseInterrupt=true, VerilogSectionReplacementString=sC8, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Counter_v3_0, CY_CONFIG_TITLE=ZCD_counter, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ZCD_counter, CY_INSTANCE_SHORT_NAME=ZCD_counter, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=0, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=ZCD_counter, )
module Counter_v3_0_13 (
    capture,
    clock,
    comp,
    count,
    downCnt,
    enable,
    interrupt,
    reset,
    tc,
    up_ndown,
    upCnt);
    input       capture;
    input       clock;
    output      comp;
    input       count;
    input       downCnt;
    input       enable;
    output      interrupt;
    input       reset;
    output      tc;
    input       up_ndown;
    input       upCnt;

    parameter CaptureMode = 0;
    parameter ClockMode = 3;
    parameter CompareMode = 2;
    parameter CompareStatusEdgeSense = 1;
    parameter EnableMode = 0;
    parameter ReloadOnCapture = 0;
    parameter ReloadOnCompare = 0;
    parameter ReloadOnOverUnder = 0;
    parameter ReloadOnReset = 1;
    parameter Resolution = 8;
    parameter RunMode = 1;
    parameter UseInterrupt = 1;

          wire  Net_47;
          wire  Net_102;
          wire  Net_95;
          wire  Net_82;
          wire  Net_91;
          wire  Net_89;
          wire  Net_49;
          wire  Net_48;
          wire  Net_42;
          wire  Net_43;

	// int_vm (cy_virtualmux_v1_0)
	assign interrupt = Net_43;

	// TC_vm (cy_virtualmux_v1_0)
	assign tc = Net_49;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_82));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_89 = Net_95;

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_95));

	// vmEnableMode (cy_virtualmux_v1_0)
	assign Net_91 = enable;

    OneTerminal OneTerminal_1 (
        .o(Net_102));

    B_Counter_v3_0 CounterUDB (
        .capture(capture),
        .clock(clock),
        .cmp_out(comp),
        .count(count),
        .dwncnt(downCnt),
        .enable(enable),
        .irq_out(Net_43),
        .reset(reset),
        .tc_out(Net_49),
        .up_ndown(Net_89),
        .upcnt(upCnt));
    defparam CounterUDB.CaptureMode = 0;
    defparam CounterUDB.ClockMode = 3;
    defparam CounterUDB.CompareMode = 2;
    defparam CounterUDB.CompareStatusEdgeSense = 1;
    defparam CounterUDB.EnableMode = 0;
    defparam CounterUDB.ReloadOnCapture = 0;
    defparam CounterUDB.ReloadOnCompare = 0;
    defparam CounterUDB.ReloadOnOverUnder = 0;
    defparam CounterUDB.ReloadOnReset = 1;
    defparam CounterUDB.Resolution = 8;
    defparam CounterUDB.RunMode = 1;
    defparam CounterUDB.UseInterrupt = 1;



endmodule

// Comp_v2_0(Hysteresis=1, Pd_Override=0, Polarity=0, PSOC5A=false, Speed=1, Sync=0, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Comp_v2_0, CY_CONFIG_TITLE=ZCD_compA, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ZCD_compA, CY_INSTANCE_SHORT_NAME=ZCD_compA, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=0, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=ZCD_compA, )
module Comp_v2_0_14 (
    clock,
    CmpOut,
    Vminus,
    Vplus);
    input       clock;
    output      CmpOut;
    inout       Vminus;
    electrical  Vminus;
    inout       Vplus;
    electrical  Vplus;


          wire  Net_9;
          wire  Net_1;

    cy_psoc3_ctcomp_v1_0 ctComp (
        .clk_udb(clock),
        .clock(clock),
        .cmpout(Net_1),
        .vminus(Vminus),
        .vplus(Vplus));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign CmpOut = Net_1;


    assign Net_9 = ~Net_1;



endmodule

// Component: B_UART_v2_50
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`endif

// UART_v2_50(Address1=0, Address2=0, BaudRate=115200, BreakBitsRX=13, BreakBitsTX=13, BreakDetect=false, CRCoutputsEn=false, Enable_RX=1, Enable_RXIntInterrupt=1, Enable_TX=1, Enable_TXIntInterrupt=1, EnableHWAddress=0, EnIntRXInterrupt=true, EnIntTXInterrupt=true, FlowControl=0, HalfDuplexEn=false, HwTXEnSignal=false, InternalClock=false, InternalClockToleranceMinus=3.93736842105263, InternalClockTolerancePlus=3.93736842105263, InternalClockUsed=0, InterruptOnAddDetect=0, InterruptOnAddressMatch=0, InterruptOnBreak=0, InterruptOnByteRcvd=1, InterruptOnOverrunError=0, InterruptOnParityError=0, InterruptOnStopError=0, InterruptOnTXComplete=true, InterruptOnTXFifoEmpty=true, InterruptOnTXFifoFull=false, InterruptOnTXFifoNotFull=false, IntOnAddressDetect=false, IntOnAddressMatch=false, IntOnBreak=false, IntOnByteRcvd=true, IntOnOverrunError=false, IntOnParityError=false, IntOnStopError=false, NumDataBits=8, NumStopBits=1, OverSamplingRate=8, ParityType=0, ParityTypeSw=false, RequiredClock=921600, RXAddressMode=0, RXBufferSize=1024, RxBuffRegSizeReplacementString=uint16, RXEnable=true, TXBitClkGenDP=true, TXBufferSize=1024, TxBuffRegSizeReplacementString=uint16, TXEnable=true, Use23Polling=true, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=UART_v2_50, CY_CONFIG_TITLE=UART, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=UART, CY_INSTANCE_SHORT_NAME=UART, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=50, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=UART, )
module UART_v2_50_15 (
    clock,
    cts_n,
    reset,
    rts_n,
    rx,
    rx_clk,
    rx_data,
    rx_interrupt,
    tx,
    tx_clk,
    tx_data,
    tx_en,
    tx_interrupt);
    input       clock;
    input       cts_n;
    input       reset;
    output      rts_n;
    input       rx;
    output      rx_clk;
    output      rx_data;
    output      rx_interrupt;
    output      tx;
    output      tx_clk;
    output      tx_data;
    output      tx_en;
    output      tx_interrupt;

    parameter Address1 = 0;
    parameter Address2 = 0;
    parameter EnIntRXInterrupt = 1;
    parameter EnIntTXInterrupt = 1;
    parameter FlowControl = 0;
    parameter HalfDuplexEn = 0;
    parameter HwTXEnSignal = 0;
    parameter NumDataBits = 8;
    parameter NumStopBits = 1;
    parameter ParityType = 0;
    parameter RXEnable = 1;
    parameter TXEnable = 1;

          wire  Net_289;
          wire  Net_61;
          wire  Net_9;


	cy_isr_v1_0
		#(.int_type(2'b10))
		TXInternalInterrupt
		 (.int_signal(tx_interrupt));



	cy_isr_v1_0
		#(.int_type(2'b10))
		RXInternalInterrupt
		 (.int_signal(rx_interrupt));


	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_61 = clock;

    B_UART_v2_50 BUART (
        .clock(Net_61),
        .cts_n(cts_n),
        .reset(reset),
        .rts_n(rts_n),
        .rx(rx),
        .rx_clk(rx_clk),
        .rx_data(rx_data),
        .rx_interrupt(rx_interrupt),
        .tx(tx),
        .tx_clk(tx_clk),
        .tx_data(tx_data),
        .tx_en(tx_en),
        .tx_interrupt(tx_interrupt));
    defparam BUART.Address1 = 0;
    defparam BUART.Address2 = 0;
    defparam BUART.BreakBitsRX = 13;
    defparam BUART.BreakBitsTX = 13;
    defparam BUART.BreakDetect = 0;
    defparam BUART.CRCoutputsEn = 0;
    defparam BUART.FlowControl = 0;
    defparam BUART.HalfDuplexEn = 0;
    defparam BUART.HwTXEnSignal = 0;
    defparam BUART.NumDataBits = 8;
    defparam BUART.NumStopBits = 1;
    defparam BUART.OverSampleCount = 8;
    defparam BUART.ParityType = 0;
    defparam BUART.ParityTypeSw = 0;
    defparam BUART.RXAddressMode = 0;
    defparam BUART.RXEnable = 1;
    defparam BUART.RXStatusIntEnable = 1;
    defparam BUART.TXBitClkGenDP = 1;
    defparam BUART.TXEnable = 1;
    defparam BUART.Use23Polling = 1;



endmodule

// USBFS_v3_20(AudioDescriptors=<?xml version="1.0" encoding="utf-16"?>\r\n<Tree xmlns:CustomizerVersion="3_20">\r\n  <Tree_x0020_Descriptors>\r\n    <DescriptorNode Key="Audio">\r\n      <Nodes />\r\n    </DescriptorNode>\r\n  </Tree_x0020_Descriptors>\r\n</Tree>, CDCDescriptors=<?xml version="1.0" encoding="utf-16"?>\r\n<Tree xmlns:CustomizerVersion="3_20">\r\n  <Tree_x0020_Descriptors>\r\n    <DescriptorNode Key="CDC">\r\n      <Nodes>\r\n        <DescriptorNode Key="Interface60">\r\n          <m_value d6p1:type="InterfaceGeneralDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>ALTERNATE</bDescriptorType>\r\n            <bLength>0</bLength>\r\n            <DisplayName>CDC Interface 1</DisplayName>\r\n          </m_value>\r\n          <Value d6p1:type="InterfaceGeneralDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>ALTERNATE</bDescriptorType>\r\n            <bLength>0</bLength>\r\n            <DisplayName>CDC Interface 1</DisplayName>\r\n          </Value>\r\n          <Nodes>\r\n            <DescriptorNode Key="USBDescriptor61">\r\n              <m_value d8p1:type="CyCommunicationsInterfaceDescriptor" xmlns:d8p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                <bDescriptorType>INTERFACE</bDescriptorType>\r\n                <bLength>9</bLength>\r\n                <iwInterface>49</iwInterface>\r\n                <bInterfaceClass>2</bInterfaceClass>\r\n                <bAlternateSetting>0</bAlternateSetting>\r\n                <bInterfaceNumber>0</bInterfaceNumber>\r\n                <bNumEndpoints>1</bNumEndpoints>\r\n                <bInterfaceSubClass>2</bInterfaceSubClass>\r\n                <bInterfaceProtocol>1</bInterfaceProtocol>\r\n                <iInterface>3</iInterface>\r\n                <sInterface>CDC Communication Interface</sInterface>\r\n              </m_value>\r\n              <Value d8p1:type="CyCommunicationsInterfaceDescriptor" xmlns:d8p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                <bDescriptorType>INTERFACE</bDescriptorType>\r\n                <bLength>9</bLength>\r\n                <iwInterface>49</iwInterface>\r\n                <bInterfaceClass>2</bInterfaceClass>\r\n                <bAlternateSetting>0</bAlternateSetting>\r\n                <bInterfaceNumber>0</bInterfaceNumber>\r\n                <bNumEndpoints>1</bNumEndpoints>\r\n                <bInterfaceSubClass>2</bInterfaceSubClass>\r\n                <bInterfaceProtocol>1</bInterfaceProtocol>\r\n                <iInterface>3</iInterface>\r\n                <sInterface>CDC Communication Interface</sInterface>\r\n              </Value>\r\n              <Nodes>\r\n                <DescriptorNode Key="USBDescriptor63">\r\n                  <m_value d10p1:type="CyCDCHeaderDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>CDC</bDescriptorType>\r\n                    <bLength>5</bLength>\r\n                    <bDescriptorSubtype>HEADER</bDescriptorSubtype>\r\n                    <bcdADC>272</bcdADC>\r\n                  </m_value>\r\n                  <Value d10p1:type="CyCDCHeaderDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>CDC</bDescriptorType>\r\n                    <bLength>5</bLength>\r\n                    <bDescriptorSubtype>HEADER</bDescriptorSubtype>\r\n                    <bcdADC>272</bcdADC>\r\n                  </Value>\r\n                  <Nodes />\r\n                </DescriptorNode>\r\n                <DescriptorNode Key="USBDescriptor64">\r\n                  <m_value d10p1:type="CyCDCAbstractControlMgmtDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>CDC</bDescriptorType>\r\n                    <bLength>4</bLength>\r\n                    <bDescriptorSubtype>ABSTRACT_CONTROL_MANAGEMENT</bDescriptorSubtype>\r\n                    <bmCapabilities>2</bmCapabilities>\r\n                  </m_value>\r\n                  <Value d10p1:type="CyCDCAbstractControlMgmtDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>CDC</bDescriptorType>\r\n                    <bLength>4</bLength>\r\n                    <bDescriptorSubtype>ABSTRACT_CONTROL_MANAGEMENT</bDescriptorSubtype>\r\n                    <bmCapabilities>2</bmCapabilities>\r\n                  </Value>\r\n                  <Nodes />\r\n                </DescriptorNode>\r\n                <DescriptorNode Key="USBDescriptor65">\r\n                  <m_value d10p1:type="CyCDCUnionDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>CDC</bDescriptorType>\r\n                    <bLength>5</bLength>\r\n                    <bDescriptorSubtype>UNION</bDescriptorSubtype>\r\n                    <bSubordinateInterface>AQ==</bSubordinateInterface>\r\n                  </m_value>\r\n                  <Value d10p1:type="CyCDCUnionDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>CDC</bDescriptorType>\r\n                    <bLength>5</bLength>\r\n                    <bDescriptorSubtype>UNION</bDescriptorSubtype>\r\n                    <bSubordinateInterface>AQ==</bSubordinateInterface>\r\n                  </Value>\r\n                  <Nodes />\r\n                </DescriptorNode>\r\n                <DescriptorNode Key="USBDescriptor66">\r\n                  <m_value d10p1:type="CyCDCCallManagementDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>CDC</bDescriptorType>\r\n                    <bLength>5</bLength>\r\n                    <bDescriptorSubtype>CALL_MANAGEMENT</bDescriptorSubtype>\r\n                    <bDataInterface>1</bDataInterface>\r\n                  </m_value>\r\n                  <Value d10p1:type="CyCDCCallManagementDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>CDC</bDescriptorType>\r\n                    <bLength>5</bLength>\r\n                    <bDescriptorSubtype>CALL_MANAGEMENT</bDescriptorSubtype>\r\n                    <bDataInterface>1</bDataInterface>\r\n                  </Value>\r\n                  <Nodes />\r\n                </DescriptorNode>\r\n                <DescriptorNode Key="USBDescriptor67">\r\n                  <m_value d10p1:type="EndpointDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                    <bLength>7</bLength>\r\n                    <DoubleBuffer>false</DoubleBuffer>\r\n                    <bEndpointAddress>129</bEndpointAddress>\r\n                    <bmAttributes>3</bmAttributes>\r\n                  </m_value>\r\n                  <Value d10p1:type="EndpointDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                    <bLength>7</bLength>\r\n                    <DoubleBuffer>false</DoubleBuffer>\r\n                    <bEndpointAddress>129</bEndpointAddress>\r\n                    <bmAttributes>3</bmAttributes>\r\n                  </Value>\r\n                  <Nodes />\r\n                </DescriptorNode>\r\n              </Nodes>\r\n            </DescriptorNode>\r\n          </Nodes>\r\n        </DescriptorNode>\r\n        <DescriptorNode Key="Interface68">\r\n          <m_value d6p1:type="InterfaceGeneralDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>ALTERNATE</bDescriptorType>\r\n            <bLength>0</bLength>\r\n            <DisplayName>CDC Interface 2</DisplayName>\r\n          </m_value>\r\n          <Value d6p1:type="InterfaceGeneralDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>ALTERNATE</bDescriptorType>\r\n            <bLength>0</bLength>\r\n            <DisplayName>CDC Interface 2</DisplayName>\r\n          </Value>\r\n          <Nodes>\r\n            <DescriptorNode Key="USBDescriptor69">\r\n              <m_value d8p1:type="CyDataInterfaceDescriptor" xmlns:d8p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                <bDescriptorType>INTERFACE</bDescriptorType>\r\n                <bLength>9</bLength>\r\n                <iwInterface>50</iwInterface>\r\n                <bInterfaceClass>10</bInterfaceClass>\r\n                <bAlternateSetting>0</bAlternateSetting>\r\n                <bInterfaceNumber>1</bInterfaceNumber>\r\n                <bNumEndpoints>2</bNumEndpoints>\r\n                <bInterfaceSubClass>0</bInterfaceSubClass>\r\n                <bInterfaceProtocol>0</bInterfaceProtocol>\r\n                <iInterface>4</iInterface>\r\n                <sInterface>CDC Data Interface</sInterface>\r\n              </m_value>\r\n              <Value d8p1:type="CyDataInterfaceDescriptor" xmlns:d8p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                <bDescriptorType>INTERFACE</bDescriptorType>\r\n                <bLength>9</bLength>\r\n                <iwInterface>50</iwInterface>\r\n                <bInterfaceClass>10</bInterfaceClass>\r\n                <bAlternateSetting>0</bAlternateSetting>\r\n                <bInterfaceNumber>1</bInterfaceNumber>\r\n                <bNumEndpoints>2</bNumEndpoints>\r\n                <bInterfaceSubClass>0</bInterfaceSubClass>\r\n                <bInterfaceProtocol>0</bInterfaceProtocol>\r\n                <iInterface>4</iInterface>\r\n                <sInterface>CDC Data Interface</sInterface>\r\n              </Value>\r\n              <Nodes>\r\n                <DescriptorNode Key="USBDescriptor71">\r\n                  <m_value d10p1:type="EndpointDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                    <bLength>7</bLength>\r\n                    <DoubleBuffer>false</DoubleBuffer>\r\n                    <bEndpointAddress>130</bEndpointAddress>\r\n                    <bmAttributes>2</bmAttributes>\r\n                    <wMaxPacketSize>64</wMaxPacketSize>\r\n                  </m_value>\r\n                  <Value d10p1:type="EndpointDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                    <bLength>7</bLength>\r\n                    <DoubleBuffer>false</DoubleBuffer>\r\n                    <bEndpointAddress>130</bEndpointAddress>\r\n                    <bmAttributes>2</bmAttributes>\r\n                    <wMaxPacketSize>64</wMaxPacketSize>\r\n                  </Value>\r\n                  <Nodes />\r\n                </DescriptorNode>\r\n                <DescriptorNode Key="USBDescriptor72">\r\n                  <m_value d10p1:type="EndpointDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                    <bLength>7</bLength>\r\n                    <DoubleBuffer>false</DoubleBuffer>\r\n                    <bEndpointAddress>3</bEndpointAddress>\r\n                    <bmAttributes>2</bmAttributes>\r\n                    <wMaxPacketSize>64</wMaxPacketSize>\r\n                  </m_value>\r\n                  <Value d10p1:type="EndpointDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                    <bLength>7</bLength>\r\n                    <DoubleBuffer>false</DoubleBuffer>\r\n                    <bEndpointAddress>3</bEndpointAddress>\r\n                    <bmAttributes>2</bmAttributes>\r\n                    <wMaxPacketSize>64</wMaxPacketSize>\r\n                  </Value>\r\n                  <Nodes />\r\n                </DescriptorNode>\r\n              </Nodes>\r\n            </DescriptorNode>\r\n          </Nodes>\r\n        </DescriptorNode>\r\n      </Nodes>\r\n    </DescriptorNode>\r\n  </Tree_x0020_Descriptors>\r\n</Tree>, DeviceDescriptors=<?xml version="1.0" encoding="utf-16"?>\r\n<Tree xmlns:CustomizerVersion="3_20">\r\n  <Tree_x0020_Descriptors>\r\n    <DescriptorNode Key="Device">\r\n      <Nodes>\r\n        <DescriptorNode Key="USBDescriptor51">\r\n          <m_value d6p1:type="DeviceDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>DEVICE</bDescriptorType>\r\n            <bLength>18</bLength>\r\n            <iwManufacturer>47</iwManufacturer>\r\n            <iwProduct>48</iwProduct>\r\n            <sManufacturer>Cypress Semiconductor</sManufacturer>\r\n            <sProduct>UD3 UART</sProduct>\r\n            <sSerialNumber />\r\n            <bDeviceClass>2</bDeviceClass>\r\n            <bDeviceSubClass>0</bDeviceSubClass>\r\n            <bDeviceProtocol>0</bDeviceProtocol>\r\n            <bMaxPacketSize0>0</bMaxPacketSize0>\r\n            <idVendor>1204</idVendor>\r\n            <idProduct>62002</idProduct>\r\n            <bcdDevice>1</bcdDevice>\r\n            <bcdUSB>512</bcdUSB>\r\n            <iManufacturer>1</iManufacturer>\r\n            <iProduct>2</iProduct>\r\n            <iSerialNumber>0</iSerialNumber>\r\n            <bNumConfigurations>1</bNumConfigurations>\r\n            <bMemoryMgmt>0</bMemoryMgmt>\r\n            <bMemoryAlloc>0</bMemoryAlloc>\r\n          </m_value>\r\n          <Value d6p1:type="DeviceDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>DEVICE</bDescriptorType>\r\n            <bLength>18</bLength>\r\n            <iwManufacturer>47</iwManufacturer>\r\n            <iwProduct>48</iwProduct>\r\n            <sManufacturer>Cypress Semiconductor</sManufacturer>\r\n            <sProduct>UD3 UART</sProduct>\r\n            <sSerialNumber />\r\n            <bDeviceClass>2</bDeviceClass>\r\n            <bDeviceSubClass>0</bDeviceSubClass>\r\n            <bDeviceProtocol>0</bDeviceProtocol>\r\n            <bMaxPacketSize0>0</bMaxPacketSize0>\r\n            <idVendor>1204</idVendor>\r\n            <idProduct>62002</idProduct>\r\n            <bcdDevice>1</bcdDevice>\r\n            <bcdUSB>512</bcdUSB>\r\n            <iManufacturer>1</iManufacturer>\r\n            <iProduct>2</iProduct>\r\n            <iSerialNumber>0</iSerialNumber>\r\n            <bNumConfigurations>1</bNumConfigurations>\r\n            <bMemoryMgmt>0</bMemoryMgmt>\r\n            <bMemoryAlloc>0</bMemoryAlloc>\r\n          </Value>\r\n          <Nodes>\r\n            <DescriptorNode Key="USBDescriptor56">\r\n              <m_value d8p1:type="ConfigDescriptor" xmlns:d8p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                <bDescriptorType>CONFIGURATION</bDescriptorType>\r\n                <bLength>9</bLength>\r\n                <iwConfiguration>47</iwConfiguration>\r\n                <sConfiguration>Cypress Semiconductor</sConfiguration>\r\n                <wTotalLength>67</wTotalLength>\r\n                <bNumInterfaces>2</bNumInterfaces>\r\n                <bConfigurationValue>0</bConfigurationValue>\r\n                <iConfiguration>1</iConfiguration>\r\n                <bmAttributes>128</bmAttributes>\r\n                <bMaxPower>50</bMaxPower>\r\n              </m_value>\r\n              <Value d8p1:type="ConfigDescriptor" xmlns:d8p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                <bDescriptorType>CONFIGURATION</bDescriptorType>\r\n                <bLength>9</bLength>\r\n                <iwConfiguration>47</iwConfiguration>\r\n                <sConfiguration>Cypress Semiconductor</sConfiguration>\r\n                <wTotalLength>67</wTotalLength>\r\n                <bNumInterfaces>2</bNumInterfaces>\r\n                <bConfigurationValue>0</bConfigurationValue>\r\n                <iConfiguration>1</iConfiguration>\r\n                <bmAttributes>128</bmAttributes>\r\n                <bMaxPower>50</bMaxPower>\r\n              </Value>\r\n              <Nodes>\r\n                <DescriptorNode Key="Interface60">\r\n                  <m_value d10p1:type="InterfaceGeneralDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>ALTERNATE</bDescriptorType>\r\n                    <bLength>0</bLength>\r\n                    <DisplayName>CDC Interface 1</DisplayName>\r\n                  </m_value>\r\n                  <Value d10p1:type="InterfaceGeneralDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>ALTERNATE</bDescriptorType>\r\n                    <bLength>0</bLength>\r\n                    <DisplayName>CDC Interface 1</DisplayName>\r\n                  </Value>\r\n                  <Nodes>\r\n                    <DescriptorNode Key="USBDescriptor61">\r\n                      <m_value d12p1:type="CyCommunicationsInterfaceDescriptor" xmlns:d12p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                        <bDescriptorType>INTERFACE</bDescriptorType>\r\n                        <bLength>9</bLength>\r\n                        <iwInterface>49</iwInterface>\r\n                        <bInterfaceClass>2</bInterfaceClass>\r\n                        <bAlternateSetting>0</bAlternateSetting>\r\n                        <bInterfaceNumber>0</bInterfaceNumber>\r\n                        <bNumEndpoints>1</bNumEndpoints>\r\n                        <bInterfaceSubClass>2</bInterfaceSubClass>\r\n                        <bInterfaceProtocol>1</bInterfaceProtocol>\r\n                        <iInterface>3</iInterface>\r\n                        <sInterface>CDC Communication Interface</sInterface>\r\n                      </m_value>\r\n                      <Value d12p1:type="CyCommunicationsInterfaceDescriptor" xmlns:d12p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                        <bDescriptorType>INTERFACE</bDescriptorType>\r\n                        <bLength>9</bLength>\r\n                        <iwInterface>49</iwInterface>\r\n                        <bInterfaceClass>2</bInterfaceClass>\r\n                        <bAlternateSetting>0</bAlternateSetting>\r\n                        <bInterfaceNumber>0</bInterfaceNumber>\r\n                        <bNumEndpoints>1</bNumEndpoints>\r\n                        <bInterfaceSubClass>2</bInterfaceSubClass>\r\n                        <bInterfaceProtocol>1</bInterfaceProtocol>\r\n                        <iInterface>3</iInterface>\r\n                        <sInterface>CDC Communication Interface</sInterface>\r\n                      </Value>\r\n                      <Nodes>\r\n                        <DescriptorNode Key="USBDescriptor63">\r\n                          <m_value d14p1:type="CyCDCHeaderDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>CDC</bDescriptorType>\r\n                            <bLength>5</bLength>\r\n                            <bDescriptorSubtype>HEADER</bDescriptorSubtype>\r\n                            <bcdADC>272</bcdADC>\r\n                          </m_value>\r\n                          <Value d14p1:type="CyCDCHeaderDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>CDC</bDescriptorType>\r\n                            <bLength>5</bLength>\r\n                            <bDescriptorSubtype>HEADER</bDescriptorSubtype>\r\n                            <bcdADC>272</bcdADC>\r\n                          </Value>\r\n                          <Nodes />\r\n                        </DescriptorNode>\r\n                        <DescriptorNode Key="USBDescriptor64">\r\n                          <m_value d14p1:type="CyCDCAbstractControlMgmtDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>CDC</bDescriptorType>\r\n                            <bLength>4</bLength>\r\n                            <bDescriptorSubtype>ABSTRACT_CONTROL_MANAGEMENT</bDescriptorSubtype>\r\n                            <bmCapabilities>2</bmCapabilities>\r\n                          </m_value>\r\n                          <Value d14p1:type="CyCDCAbstractControlMgmtDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>CDC</bDescriptorType>\r\n                            <bLength>4</bLength>\r\n                            <bDescriptorSubtype>ABSTRACT_CONTROL_MANAGEMENT</bDescriptorSubtype>\r\n                            <bmCapabilities>2</bmCapabilities>\r\n                          </Value>\r\n                          <Nodes />\r\n                        </DescriptorNode>\r\n                        <DescriptorNode Key="USBDescriptor65">\r\n                          <m_value d14p1:type="CyCDCUnionDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>CDC</bDescriptorType>\r\n                            <bLength>5</bLength>\r\n                            <bDescriptorSubtype>UNION</bDescriptorSubtype>\r\n                            <bSubordinateInterface>AQ==</bSubordinateInterface>\r\n                          </m_value>\r\n                          <Value d14p1:type="CyCDCUnionDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>CDC</bDescriptorType>\r\n                            <bLength>5</bLength>\r\n                            <bDescriptorSubtype>UNION</bDescriptorSubtype>\r\n                            <bSubordinateInterface>AQ==</bSubordinateInterface>\r\n                          </Value>\r\n                          <Nodes />\r\n                        </DescriptorNode>\r\n                        <DescriptorNode Key="USBDescriptor66">\r\n                          <m_value d14p1:type="CyCDCCallManagementDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>CDC</bDescriptorType>\r\n                            <bLength>5</bLength>\r\n                            <bDescriptorSubtype>CALL_MANAGEMENT</bDescriptorSubtype>\r\n                            <bDataInterface>1</bDataInterface>\r\n                          </m_value>\r\n                          <Value d14p1:type="CyCDCCallManagementDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>CDC</bDescriptorType>\r\n                            <bLength>5</bLength>\r\n                            <bDescriptorSubtype>CALL_MANAGEMENT</bDescriptorSubtype>\r\n                            <bDataInterface>1</bDataInterface>\r\n                          </Value>\r\n                          <Nodes />\r\n                        </DescriptorNode>\r\n                        <DescriptorNode Key="USBDescriptor67">\r\n                          <m_value d14p1:type="EndpointDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                            <bLength>7</bLength>\r\n                            <DoubleBuffer>false</DoubleBuffer>\r\n                            <bEndpointAddress>129</bEndpointAddress>\r\n                            <bmAttributes>3</bmAttributes>\r\n                          </m_value>\r\n                          <Value d14p1:type="EndpointDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                            <bLength>7</bLength>\r\n                            <DoubleBuffer>false</DoubleBuffer>\r\n                            <bEndpointAddress>129</bEndpointAddress>\r\n                            <bmAttributes>3</bmAttributes>\r\n                          </Value>\r\n                          <Nodes />\r\n                        </DescriptorNode>\r\n                      </Nodes>\r\n                    </DescriptorNode>\r\n                  </Nodes>\r\n                </DescriptorNode>\r\n                <DescriptorNode Key="Interface68">\r\n                  <m_value d10p1:type="InterfaceGeneralDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>ALTERNATE</bDescriptorType>\r\n                    <bLength>0</bLength>\r\n                    <DisplayName>CDC Interface 2</DisplayName>\r\n                  </m_value>\r\n                  <Value d10p1:type="InterfaceGeneralDescriptor" xmlns:d10p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                    <bDescriptorType>ALTERNATE</bDescriptorType>\r\n                    <bLength>0</bLength>\r\n                    <DisplayName>CDC Interface 2</DisplayName>\r\n                  </Value>\r\n                  <Nodes>\r\n                    <DescriptorNode Key="USBDescriptor69">\r\n                      <m_value d12p1:type="CyDataInterfaceDescriptor" xmlns:d12p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                        <bDescriptorType>INTERFACE</bDescriptorType>\r\n                        <bLength>9</bLength>\r\n                        <iwInterface>50</iwInterface>\r\n                        <bInterfaceClass>10</bInterfaceClass>\r\n                        <bAlternateSetting>0</bAlternateSetting>\r\n                        <bInterfaceNumber>1</bInterfaceNumber>\r\n                        <bNumEndpoints>2</bNumEndpoints>\r\n                        <bInterfaceSubClass>0</bInterfaceSubClass>\r\n                        <bInterfaceProtocol>0</bInterfaceProtocol>\r\n                        <iInterface>4</iInterface>\r\n                        <sInterface>CDC Data Interface</sInterface>\r\n                      </m_value>\r\n                      <Value d12p1:type="CyDataInterfaceDescriptor" xmlns:d12p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                        <bDescriptorType>INTERFACE</bDescriptorType>\r\n                        <bLength>9</bLength>\r\n                        <iwInterface>50</iwInterface>\r\n                        <bInterfaceClass>10</bInterfaceClass>\r\n                        <bAlternateSetting>0</bAlternateSetting>\r\n                        <bInterfaceNumber>1</bInterfaceNumber>\r\n                        <bNumEndpoints>2</bNumEndpoints>\r\n                        <bInterfaceSubClass>0</bInterfaceSubClass>\r\n                        <bInterfaceProtocol>0</bInterfaceProtocol>\r\n                        <iInterface>4</iInterface>\r\n                        <sInterface>CDC Data Interface</sInterface>\r\n                      </Value>\r\n                      <Nodes>\r\n                        <DescriptorNode Key="USBDescriptor71">\r\n                          <m_value d14p1:type="EndpointDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                            <bLength>7</bLength>\r\n                            <DoubleBuffer>false</DoubleBuffer>\r\n                            <bEndpointAddress>130</bEndpointAddress>\r\n                            <bmAttributes>2</bmAttributes>\r\n                            <wMaxPacketSize>64</wMaxPacketSize>\r\n                          </m_value>\r\n                          <Value d14p1:type="EndpointDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                            <bLength>7</bLength>\r\n                            <DoubleBuffer>false</DoubleBuffer>\r\n                            <bEndpointAddress>130</bEndpointAddress>\r\n                            <bmAttributes>2</bmAttributes>\r\n                            <wMaxPacketSize>64</wMaxPacketSize>\r\n                          </Value>\r\n                          <Nodes />\r\n                        </DescriptorNode>\r\n                        <DescriptorNode Key="USBDescriptor72">\r\n                          <m_value d14p1:type="EndpointDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                            <bLength>7</bLength>\r\n                            <DoubleBuffer>false</DoubleBuffer>\r\n                            <bEndpointAddress>3</bEndpointAddress>\r\n                            <bmAttributes>2</bmAttributes>\r\n                            <wMaxPacketSize>64</wMaxPacketSize>\r\n                          </m_value>\r\n                          <Value d14p1:type="EndpointDescriptor" xmlns:d14p1="http://www.w3.org/2001/XMLSchema-instance">\r\n                            <bDescriptorType>ENDPOINT</bDescriptorType>\r\n                            <bLength>7</bLength>\r\n                            <DoubleBuffer>false</DoubleBuffer>\r\n                            <bEndpointAddress>3</bEndpointAddress>\r\n                            <bmAttributes>2</bmAttributes>\r\n                            <wMaxPacketSize>64</wMaxPacketSize>\r\n                          </Value>\r\n                          <Nodes />\r\n                        </DescriptorNode>\r\n                      </Nodes>\r\n                    </DescriptorNode>\r\n                  </Nodes>\r\n                </DescriptorNode>\r\n              </Nodes>\r\n            </DescriptorNode>\r\n          </Nodes>\r\n        </DescriptorNode>\r\n      </Nodes>\r\n    </DescriptorNode>\r\n  </Tree_x0020_Descriptors>\r\n</Tree>, DmaChannelPriority=3, DW_Hide_DmaAuto=true, DW_Hide_Usbv2Regs=true, DW_RegSize=8, DW_USB_CHGDET_CTRL=CR0, DW_USB_INTR_CAUSE_HI=CR0, DW_USB_INTR_CAUSE_LO=CR0, DW_USB_INTR_CAUSE_MED=CR0, DW_USB_INTR_LVL_SEL=CR0, DW_USB_INTR_SIE=CR0, DW_USB_INTR_SIE_MASK=CR0, DW_USB_LPM_CTRL=CR0, DW_USB_LPM_STAT=CR0, DW_USB_POWER_CTRL=CR0, EnableBatteryChargDetect=false, EnableCDCApi=true, EnableMidiApi=true, endpointMA=0, endpointMM=0, epDMAautoOptimization=false, extern_cls=false, extern_vbus=false, extern_vnd=false, extJackCount=0, Gen16bitEpAccessApi=true, HandleMscRequests=true, HIDReportDescriptors=<?xml version="1.0" encoding="utf-16"?>\r\n<Tree xmlns:CustomizerVersion="3_20">\r\n  <Tree_x0020_Descriptors>\r\n    <DescriptorNode Key="HIDReport">\r\n      <Nodes />\r\n    </DescriptorNode>\r\n  </Tree_x0020_Descriptors>\r\n</Tree>, isrGroupArbiter=0, isrGroupBusReset=2, isrGroupEp0=1, isrGroupEp1=1, isrGroupEp2=1, isrGroupEp3=1, isrGroupEp4=1, isrGroupEp5=1, isrGroupEp6=1, isrGroupEp7=1, isrGroupEp8=1, isrGroupLpm=0, isrGroupSof=2, M0S8USBDSS_BLOCK_COUNT_1=0, max_interfaces_num=2, MidiDescriptors=<?xml version="1.0" encoding="utf-16"?>\r\n<Tree xmlns:CustomizerVersion="3_20">\r\n  <Tree_x0020_Descriptors>\r\n    <DescriptorNode Key="Midi">\r\n      <Nodes />\r\n    </DescriptorNode>\r\n  </Tree_x0020_Descriptors>\r\n</Tree>, Mode=false, mon_vbus=false, MscDescriptors=, MscLogicalUnitsNum=1, out_sof=false, Pid=F232, powerpad_vbus=false, PRIMITIVE_INSTANCE=USB, ProdactName=, ProdactRevision=, REG_SIZE=reg8, RemoveDmaAutoOpt=true, RemoveVbusPin=true, rm_arb_int=false, rm_dma_1=true, rm_dma_2=true, rm_dma_3=true, rm_dma_4=true, rm_dma_5=true, rm_dma_6=true, rm_dma_7=true, rm_dma_8=true, rm_dp_int=false, rm_ep_isr_0=false, rm_ep_isr_1=false, rm_ep_isr_2=false, rm_ep_isr_3=false, rm_ep_isr_4=true, rm_ep_isr_5=true, rm_ep_isr_6=true, rm_ep_isr_7=true, rm_ep_isr_8=true, rm_lpm_int=true, rm_ord_int=true, rm_sof_int=false, rm_usb_int=false, SofTermEnable=false, StringDescriptors=<?xml version="1.0" encoding="utf-16"?>\r\n<Tree xmlns:CustomizerVersion="3_20">\r\n  <Tree_x0020_Descriptors>\r\n    <DescriptorNode Key="String">\r\n      <Nodes>\r\n        <DescriptorNode Key="LANGID">\r\n          <m_value d6p1:type="StringZeroDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>4</bLength>\r\n            <wLANGID>1033</wLANGID>\r\n          </m_value>\r\n          <Value d6p1:type="StringZeroDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>4</bLength>\r\n            <wLANGID>1033</wLANGID>\r\n          </Value>\r\n          <Nodes />\r\n        </DescriptorNode>\r\n        <DescriptorNode Key="USBDescriptor47">\r\n          <m_value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>44</bLength>\r\n            <snType>USER_ENTERED_TEXT</snType>\r\n            <bString>Cypress Semiconductor</bString>\r\n            <bUsed>false</bUsed>\r\n          </m_value>\r\n          <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>44</bLength>\r\n            <snType>USER_ENTERED_TEXT</snType>\r\n            <bString>Cypress Semiconductor</bString>\r\n            <bUsed>false</bUsed>\r\n          </Value>\r\n          <Nodes />\r\n        </DescriptorNode>\r\n        <DescriptorNode Key="USBDescriptor48">\r\n          <m_value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>10</bLength>\r\n            <snType>USER_ENTERED_TEXT</snType>\r\n            <bString>UD3 UART</bString>\r\n            <bUsed>false</bUsed>\r\n          </m_value>\r\n          <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>10</bLength>\r\n            <snType>USER_ENTERED_TEXT</snType>\r\n            <bString>UD3 UART</bString>\r\n            <bUsed>false</bUsed>\r\n          </Value>\r\n          <Nodes />\r\n        </DescriptorNode>\r\n        <DescriptorNode Key="USBDescriptor49">\r\n          <m_value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>56</bLength>\r\n            <snType>USER_ENTERED_TEXT</snType>\r\n            <bString>CDC Communication Interface</bString>\r\n            <bUsed>false</bUsed>\r\n          </m_value>\r\n          <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>56</bLength>\r\n            <snType>USER_ENTERED_TEXT</snType>\r\n            <bString>CDC Communication Interface</bString>\r\n            <bUsed>false</bUsed>\r\n          </Value>\r\n          <Nodes />\r\n        </DescriptorNode>\r\n        <DescriptorNode Key="USBDescriptor50">\r\n          <m_value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>38</bLength>\r\n            <snType>USER_ENTERED_TEXT</snType>\r\n            <bString>CDC Data Interface</bString>\r\n            <bUsed>false</bUsed>\r\n          </m_value>\r\n          <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>38</bLength>\r\n            <snType>USER_ENTERED_TEXT</snType>\r\n            <bString>CDC Data Interface</bString>\r\n            <bUsed>false</bUsed>\r\n          </Value>\r\n          <Nodes />\r\n        </DescriptorNode>\r\n      </Nodes>\r\n    </DescriptorNode>\r\n    <DescriptorNode Key="SpecialString">\r\n      <Nodes>\r\n        <DescriptorNode Key="Serial">\r\n          <m_value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>2</bLength>\r\n            <snType>SILICON_NUMBER</snType>\r\n            <bString />\r\n            <bUsed>true</bUsed>\r\n          </m_value>\r\n          <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>2</bLength>\r\n            <snType>SILICON_NUMBER</snType>\r\n            <bString />\r\n            <bUsed>true</bUsed>\r\n          </Value>\r\n          <Nodes />\r\n        </DescriptorNode>\r\n        <DescriptorNode Key="EE">\r\n          <m_value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>16</bLength>\r\n            <snType>USER_ENTERED_TEXT</snType>\r\n            <bString>MSFT100</bString>\r\n            <bUsed>false</bUsed>\r\n          </m_value>\r\n          <Value d6p1:type="StringDescriptor" xmlns:d6p1="http://www.w3.org/2001/XMLSchema-instance">\r\n            <bDescriptorType>STRING</bDescriptorType>\r\n            <bLength>16</bLength>\r\n            <snType>USER_ENTERED_TEXT</snType>\r\n            <bString>MSFT100</bString>\r\n            <bUsed>false</bUsed>\r\n          </Value>\r\n          <Nodes />\r\n        </DescriptorNode>\r\n      </Nodes>\r\n    </DescriptorNode>\r\n  </Tree_x0020_Descriptors>\r\n</Tree>, UINT_TYPE=uint8, VbusDetectTermEnable=false, VendorName=, Vid=04B4, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=USBFS_v3_20, CY_CONFIG_TITLE=USBUART_1, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=USBUART_1, CY_INSTANCE_SHORT_NAME=USBUART_1, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=20, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=USBUART_1, )
module USBFS_v3_20_16 (
    sof,
    vbusdet);
    output      sof;
    input       vbusdet;

    parameter epDMAautoOptimization = 0;

          wire  Net_1914;
          wire  Net_1915;
          wire  Net_1916;
          wire  Net_1917;
          wire  Net_1918;
          wire  Net_1919;
          wire [7:0] dma_request;
          wire  Net_1920;
          wire  Net_1921;
          wire  Net_1922;
          wire [7:0] Net_2039;
          wire  Net_2038;
          wire  Net_2037;
          wire  EPs_1_to_7_dma_complete;
          wire  Net_2036;
          wire  Net_2035;
          wire  Net_2034;
          wire  Net_2033;
          wire  Net_2032;
          wire  Net_2031;
          wire  Net_2030;
          wire  Net_2029;
          wire  Net_2028;
          wire  Net_2027;
          wire  Net_2026;
          wire  Net_2025;
          wire  Net_2024;
          wire [7:0] Net_1940;
          wire  Net_1938;
          wire  Net_1937;
          wire  Net_1936;
          wire  Net_1935;
          wire  Net_1934;
          wire  Net_1933;
          wire  Net_1932;
          wire  Net_1939;
          wire  Net_2047;
          wire  Net_1202;
          wire  dma_terminate;
          wire [7:0] Net_2040;
          wire  Net_1010;
    electrical  Net_1000;
    electrical  Net_597;
          wire  Net_1495;
          wire  Net_1498;
          wire  Net_1559;
          wire  Net_1567;
          wire  Net_1576;
          wire  Net_1579;
          wire  Net_1591;
          wire [7:0] dma_complete;
          wire  Net_1588;
          wire  Net_1876;
          wire [8:0] ep_int;
          wire  Net_1889;
          wire  busClk;
          wire  Net_95;


	cy_isr_v1_0
		#(.int_type(2'b10))
		dp_int
		 (.int_signal(Net_1010));


	wire [0:0] tmpOE__Dm_net;
	wire [0:0] tmpFB_0__Dm_net;
	wire [0:0] tmpIO_0__Dm_net;
	wire [0:0] tmpINTERRUPT_0__Dm_net;
	electrical [0:0] tmpSIOVREF__Dm_net;

	cy_psoc3_pins_v1_10
		#(.id("beca5e2d-f70f-4900-a4db-7eca1ed3126e/8b77a6c4-10a0-4390-971c-672353e2a49c"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("NONCONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(1),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Dm
		 (.oe(tmpOE__Dm_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Dm_net[0:0]}),
		  .analog({Net_597}),
		  .io({tmpIO_0__Dm_net[0:0]}),
		  .siovref(tmpSIOVREF__Dm_net),
		  .interrupt({tmpINTERRUPT_0__Dm_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Dm_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Dp_net;
	wire [0:0] tmpFB_0__Dp_net;
	wire [0:0] tmpIO_0__Dp_net;
	electrical [0:0] tmpSIOVREF__Dp_net;

	cy_psoc3_pins_v1_10
		#(.id("beca5e2d-f70f-4900-a4db-7eca1ed3126e/618a72fc-5ddd-4df5-958f-a3d55102db42"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b10),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Dp
		 (.oe(tmpOE__Dp_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Dp_net[0:0]}),
		  .analog({Net_1000}),
		  .io({tmpIO_0__Dp_net[0:0]}),
		  .siovref(tmpSIOVREF__Dp_net),
		  .interrupt({Net_1010}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Dp_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    cy_psoc3_usb_v1_0 USB (
        .arb_int(Net_1889),
        .dm(Net_597),
        .dma_req(dma_request[7:0]),
        .dma_termin(dma_terminate),
        .dp(Net_1000),
        .ept_int(ep_int[8:0]),
        .ord_int(Net_95),
        .sof_int(sof),
        .usb_int(Net_1876));


	cy_isr_v1_0
		#(.int_type(2'b10))
		ep_3
		 (.int_signal(ep_int[3]));



	cy_isr_v1_0
		#(.int_type(2'b10))
		ep_2
		 (.int_signal(ep_int[2]));



	cy_isr_v1_0
		#(.int_type(2'b10))
		ep_1
		 (.int_signal(ep_int[1]));



	cy_isr_v1_0
		#(.int_type(2'b10))
		ep_0
		 (.int_signal(ep_int[0]));



	cy_isr_v1_0
		#(.int_type(2'b10))
		bus_reset
		 (.int_signal(Net_1876));



	cy_isr_v1_0
		#(.int_type(2'b10))
		arb_int
		 (.int_signal(Net_1889));



	cy_isr_v1_0
		#(.int_type(2'b10))
		sof_int
		 (.int_signal(sof));


	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign dma_complete[0] = Net_1922;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_1922));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign dma_complete[1] = Net_1921;

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_1921));

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign dma_complete[2] = Net_1920;

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_1920));

	// VirtualMux_4 (cy_virtualmux_v1_0)
	assign dma_complete[3] = Net_1919;

    ZeroTerminal ZeroTerminal_4 (
        .z(Net_1919));

	// VirtualMux_5 (cy_virtualmux_v1_0)
	assign dma_complete[4] = Net_1918;

	// VirtualMux_6 (cy_virtualmux_v1_0)
	assign dma_complete[5] = Net_1917;

    ZeroTerminal ZeroTerminal_5 (
        .z(Net_1918));

    ZeroTerminal ZeroTerminal_6 (
        .z(Net_1917));

	// VirtualMux_7 (cy_virtualmux_v1_0)
	assign dma_complete[6] = Net_1916;

	// VirtualMux_8 (cy_virtualmux_v1_0)
	assign dma_complete[7] = Net_1915;

    ZeroTerminal ZeroTerminal_7 (
        .z(Net_1916));

    ZeroTerminal ZeroTerminal_8 (
        .z(Net_1915));



endmodule

// OpAmp_v1_90(Mode=1, Power=0, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=OpAmp_v1_90, CY_CONFIG_TITLE=Opamp_2, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Opamp_2, CY_INSTANCE_SHORT_NAME=Opamp_2, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=Opamp_2, )
module OpAmp_v1_90_17 (
    Vminus,
    Vout,
    Vplus);
    inout       Vminus;
    electrical  Vminus;
    inout       Vout;
    electrical  Vout;
    inout       Vplus;
    electrical  Vplus;

    parameter Mode = 1;

    electrical  Net_29;

    cy_psoc3_abuf_v1_0 ABuf (
        .vminus(Net_29),
        .vout(Vout),
        .vplus(Vplus));

	// abuf_negInput_mux (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 abuf_negInput_mux_connect(Net_29, Vout);
	defparam abuf_negInput_mux_connect.sig_width = 1;



endmodule

// OpAmp_v1_90(Mode=0, Power=3, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=OpAmp_v1_90, CY_CONFIG_TITLE=Opamp_1, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Opamp_1, CY_INSTANCE_SHORT_NAME=Opamp_1, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=90, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=Opamp_1, )
module OpAmp_v1_90_18 (
    Vminus,
    Vout,
    Vplus);
    inout       Vminus;
    electrical  Vminus;
    inout       Vout;
    electrical  Vout;
    inout       Vplus;
    electrical  Vplus;

    parameter Mode = 0;

    electrical  Net_29;

    cy_psoc3_abuf_v1_0 ABuf (
        .vminus(Net_29),
        .vout(Vout),
        .vplus(Vplus));

	// abuf_negInput_mux (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 abuf_negInput_mux_connect(Net_29, Vminus);
	defparam abuf_negInput_mux_connect.sig_width = 1;



endmodule

// Component: CyStatusReg_v1_90
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90\CyStatusReg_v1_90.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\CyStatusReg_v1_90\CyStatusReg_v1_90.v"
`endif

// Counter_v3_0(CaptureMode=0, CaptureModeSoftware=0, ClockMode=0, CompareMode=4, CompareModeSoftware=0, CompareStatusEdgeSense=true, CompareValue=65535, CONTROL3=0, ControlRegRemoved=0, CyGetRegReplacementString=CY_GET_REG32, CySetRegReplacementString=CY_SET_REG32, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InitCounterValue=0, InterruptOnCapture=true, InterruptOnCompare=true, InterruptOnOverUnderFlow=false, InterruptOnTC=false, Period=4294967294, RegDefReplacementString=reg32, RegSizeReplacementString=uint32, ReloadOnCapture=true, ReloadOnCompare=true, ReloadOnOverUnder=false, ReloadOnReset=true, Resolution=32, RunMode=0, UDB16=false, UDB24=false, UDB32=true, UDB8=false, UDBControlReg=true, UseInterrupt=true, VerilogSectionReplacementString=sC32, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Counter_v3_0, CY_CONFIG_TITLE=interrupterTimebase, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=interrupterTimebase, CY_INSTANCE_SHORT_NAME=interrupterTimebase, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=0, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=interrupterTimebase, )
module Counter_v3_0_19 (
    capture,
    clock,
    comp,
    count,
    downCnt,
    enable,
    interrupt,
    reset,
    tc,
    up_ndown,
    upCnt);
    input       capture;
    input       clock;
    output      comp;
    input       count;
    input       downCnt;
    input       enable;
    output      interrupt;
    input       reset;
    output      tc;
    input       up_ndown;
    input       upCnt;

    parameter CaptureMode = 0;
    parameter ClockMode = 0;
    parameter CompareMode = 4;
    parameter CompareStatusEdgeSense = 1;
    parameter EnableMode = 0;
    parameter ReloadOnCapture = 1;
    parameter ReloadOnCompare = 1;
    parameter ReloadOnOverUnder = 0;
    parameter ReloadOnReset = 1;
    parameter Resolution = 32;
    parameter RunMode = 0;
    parameter UseInterrupt = 1;

          wire  Net_47;
          wire  Net_102;
          wire  Net_95;
          wire  Net_82;
          wire  Net_91;
          wire  Net_89;
          wire  Net_49;
          wire  Net_48;
          wire  Net_42;
          wire  Net_43;

	// int_vm (cy_virtualmux_v1_0)
	assign interrupt = Net_43;

	// TC_vm (cy_virtualmux_v1_0)
	assign tc = Net_49;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_82));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_89 = up_ndown;

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_95));

	// vmEnableMode (cy_virtualmux_v1_0)
	assign Net_91 = enable;

    OneTerminal OneTerminal_1 (
        .o(Net_102));

    B_Counter_v3_0 CounterUDB (
        .capture(capture),
        .clock(clock),
        .cmp_out(comp),
        .count(count),
        .dwncnt(downCnt),
        .enable(enable),
        .irq_out(Net_43),
        .reset(reset),
        .tc_out(Net_49),
        .up_ndown(Net_89),
        .upcnt(upCnt));
    defparam CounterUDB.CaptureMode = 0;
    defparam CounterUDB.ClockMode = 0;
    defparam CounterUDB.CompareMode = 4;
    defparam CounterUDB.CompareStatusEdgeSense = 1;
    defparam CounterUDB.EnableMode = 0;
    defparam CounterUDB.ReloadOnCapture = 1;
    defparam CounterUDB.ReloadOnCompare = 1;
    defparam CounterUDB.ReloadOnOverUnder = 0;
    defparam CounterUDB.ReloadOnReset = 1;
    defparam CounterUDB.Resolution = 32;
    defparam CounterUDB.RunMode = 0;
    defparam CounterUDB.UseInterrupt = 1;



endmodule

// ADC_SAR_v3_10(ADC_Clock=1, ADC_Clock_Frequency=1800000, ADC_Input_Range=1, ADC_Power=0, ADC_Reference=1, ADC_Resolution=12, ADC_SampleMode=2, Enable_next_out=false, Ref_Voltage=2.5, Ref_Voltage_mV=2500, rm_int=false, Sample_Precharge=6, Sample_Rate=100000, Sample_Rate_def=631579, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=ADC_SAR_v3_10, CY_CONFIG_TITLE=ADC_peak, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=ADC_peak, CY_INSTANCE_SHORT_NAME=ADC_peak, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=ADC_peak, )
module ADC_SAR_v3_10_20 (
    aclk,
    eoc,
    eos,
    soc,
    vdac_ref,
    vminus,
    vplus);
    input       aclk;
    output      eoc;
    output      eos;
    input       soc;
    inout       vdac_ref;
    electrical  vdac_ref;
    inout       vminus;
    electrical  vminus;
    inout       vplus;
    electrical  vplus;


          wire [3:0] vp_ctl;
          wire [3:0] vn_ctl;
    electrical  Net_255;
    electrical  Net_267;
    electrical  Net_210;
    electrical  Net_209;
          wire  Net_252;
          wire [11:0] Net_207;
          wire  Net_205;
          wire  Net_381;
    electrical  Net_368;
    electrical  Net_235;
    electrical  Net_216;
    electrical  Net_233;
          wire  Net_385;
          wire  Net_383;
          wire  Net_221;
    electrical  Net_248;
    electrical  Net_257;
    electrical  Net_149;
    electrical  Net_126;
    electrical  Net_215;
          wire  Net_188;

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Net_248, Net_235);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;


	cy_isr_v1_0
		#(.int_type(2'b10))
		IRQ
		 (.int_signal(eoc));


    ZeroTerminal ZeroTerminal_1 (
        .z(vp_ctl[0]));

    ZeroTerminal ZeroTerminal_2 (
        .z(vp_ctl[2]));

    ZeroTerminal ZeroTerminal_3 (
        .z(vn_ctl[1]));

    ZeroTerminal ZeroTerminal_4 (
        .z(vn_ctl[3]));

    ZeroTerminal ZeroTerminal_5 (
        .z(vp_ctl[1]));

    ZeroTerminal ZeroTerminal_6 (
        .z(vp_ctl[3]));

    ZeroTerminal ZeroTerminal_7 (
        .z(vn_ctl[0]));

    ZeroTerminal ZeroTerminal_8 (
        .z(vn_ctl[2]));


	cy_clock_v1_0
		#(.id("6533b513-81b1-46af-8e19-d98fd9cc0e1c/696a0979-21fc-4185-bf38-6c79febcde7a"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("555555555.555556"),
		  .is_direct(0),
		  .is_digital(0))
		theACLK
		 (.clock_out(Net_385),
		  .dig_domain_out(Net_381));


	// Clock_VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_188 = Net_221;

    cy_psoc5_sar_v2_0 ADC_SAR (
        .clk_udb(),
        .clock(Net_188),
        .data_out(Net_207[11:0]),
        .eof_udb(eoc),
        .ext_pin(Net_215),
        .irq(Net_252),
        .next_out(eos),
        .pump_clock(Net_188),
        .sof_udb(soc),
        .vminus(Net_126),
        .vn_ctl_udb(vn_ctl[3:0]),
        .vp_ctl_udb(vp_ctl[3:0]),
        .vplus(vplus),
        .vref(Net_248),
        .vrefhi_out(Net_257));

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_215, Net_210);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

	wire [0:0] tmpOE__Bypass_net;
	wire [0:0] tmpFB_0__Bypass_net;
	wire [0:0] tmpIO_0__Bypass_net;
	wire [0:0] tmpINTERRUPT_0__Bypass_net;
	electrical [0:0] tmpSIOVREF__Bypass_net;

	cy_psoc3_pins_v1_10
		#(.id("6533b513-81b1-46af-8e19-d98fd9cc0e1c/16a808f6-2e13-45b9-bce0-b001c8655113"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Bypass
		 (.oe(tmpOE__Bypass_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Bypass_net[0:0]}),
		  .analog({Net_210}),
		  .io({tmpIO_0__Bypass_net[0:0]}),
		  .siovref(tmpSIOVREF__Bypass_net),
		  .interrupt({tmpINTERRUPT_0__Bypass_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Bypass_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_126, Net_149);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 noconnect (
        .noconnect(Net_209));

	// cy_analog_virtualmux_4 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_4_connect(Net_257, Net_149);
	defparam cy_analog_virtualmux_4_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_255));


	cy_vref_v1_0
		#(.guid("4720866E-BC14-478d-B8A0-3E44F38CADAC"),
		  .name("Vdda/2"),
		  .autoenable(1))
		vRef_Vdda_1
		 (.vout(Net_235));


    cy_analog_noconnect_v1_0 noconnect_1 (
        .noconnect(Net_368));


    assign Net_221 = Net_383 | Net_385;

    assign Net_383 = 1'h0;



endmodule

// I2C_v3_50(Address_Decode=1, BusSpeed_kHz=400, ClockInputVisibility=false, CtlModeReplacementString=SyncCtl, EnableWakeup=false, ExternalBuffer=false, Externi2cIntrHandler=false, ExternTmoutIntrHandler=false, FF=true, Hex=false, I2C_Mode=2, I2cBusPort=0, Implementation=1, InternalUdbClockToleranceMinus=25, InternalUdbClockTolerancePlus=5, NotSlaveClockMinusTolerance=25, NotSlaveClockPlusTolerance=5, PrescalerEnabled=false, PrescalerPeriod=3, Psoc3ffSelected=false, Psoc5AffSelected=false, Psoc5lpffSelected=true, RemoveI2cff=false, RemoveI2cUdb=true, RemoveIntClock=true, RemoveTimeoutTimer=true, SclTimeoutEnabled=false, SdaTimeoutEnabled=false, Slave_Address=8, SlaveClockMinusTolerance=5, SlaveClockPlusTolerance=50, TimeoutEnabled=false, TimeoutImplementation=0, TimeOutms=25, TimeoutPeriodff=39999, TimeoutPeriodUdb=39999, UDB_MSTR=false, UDB_MULTI_MASTER_SLAVE=false, UDB_SLV=false, UdbInternalClock=false, UdbRequiredClock=6400, UdbSlaveFixedPlacementEnable=false, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=I2C_v3_50, CY_CONFIG_TITLE=I2C, CY_CONST_CONFIG=true, CY_CONTROL_FILE=I2C_Slave_DefaultPlacement.ctl, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=I2C, CY_INSTANCE_SHORT_NAME=I2C, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=50, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=I2C, )
module I2C_v3_50_21 (
    bclk,
    clock,
    iclk,
    itclk,
    reset,
    scl,
    scl_i,
    scl_o,
    sda,
    sda_i,
    sda_o);
    output      bclk;
    input       clock;
    output      iclk;
    output      itclk;
    input       reset;
    inout       scl;
    input       scl_i;
    output      scl_o;
    inout       sda;
    input       sda_i;
    output      sda_o;


          wire  sda_x_wire;
          wire  sda_yfb;
          wire  udb_clk;
          wire  Net_975;
          wire  Net_974;
          wire  Net_973;
          wire  bus_clk;
          wire  Net_972;
          wire  Net_968;
          wire  scl_yfb;
          wire  Net_969;
          wire  Net_971;
          wire  Net_970;
          wire  timeout_clk;
          wire  Net_697;
          wire  Net_1045;
          wire [1:0] Net_1109;
          wire [5:0] Net_643;
          wire  scl_x_wire;

	// Vmux_sda_out (cy_virtualmux_v1_0)
	assign sda_x_wire = Net_643[1];


	cy_isr_v1_0
		#(.int_type(2'b00))
		I2C_IRQ
		 (.int_signal(Net_697));


    cy_psoc3_i2c_v1_0 I2C_FF (
        .clock(bus_clk),
        .interrupt(Net_643[2]),
        .scl_in(Net_1109[0]),
        .scl_out(Net_643[0]),
        .sda_in(Net_1109[1]),
        .sda_out(Net_643[1]));
    defparam I2C_FF.use_wakeup = 0;

	// Vmux_interrupt (cy_virtualmux_v1_0)
	assign Net_697 = Net_643[2];

	// Vmux_scl_out (cy_virtualmux_v1_0)
	assign scl_x_wire = Net_643[0];

    OneTerminal OneTerminal_1 (
        .o(Net_969));

    OneTerminal OneTerminal_2 (
        .o(Net_968));

	// Vmux_clock (cy_virtualmux_v1_0)
	assign udb_clk = clock;


	cy_clock_v1_0
		#(.id("6f2d57bd-b6d0-4115-93da-ded3485bf4ed/5ece924d-20ba-480e-9102-bc082dcdd926"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		BusClock
		 (.clock_out(bus_clk));



    assign bclk = Net_973 | bus_clk;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_973));


    assign iclk = Net_974 | udb_clk;

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_974));

	// Vmux_scl_in (cy_virtualmux_v1_0)
	assign Net_1109[0] = scl_yfb;

	// Vmux_sda_in (cy_virtualmux_v1_0)
	assign Net_1109[1] = sda_yfb;

	wire [0:0] tmpOE__Bufoe_scl_net;

	cy_bufoe
		Bufoe_scl
		 (.oe(tmpOE__Bufoe_scl_net),
		  .x(scl_x_wire),
		  .y(scl),
		  .yfb(scl_yfb));

	assign tmpOE__Bufoe_scl_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{Net_969} : {Net_969};

	wire [0:0] tmpOE__Bufoe_sda_net;

	cy_bufoe
		Bufoe_sda
		 (.oe(tmpOE__Bufoe_sda_net),
		  .x(sda_x_wire),
		  .y(sda),
		  .yfb(sda_yfb));

	assign tmpOE__Bufoe_sda_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{Net_968} : {Net_968};

	// Vmux_timeout_clock (cy_virtualmux_v1_0)
	assign timeout_clk = clock;


    assign itclk = Net_975 | timeout_clk;

    ZeroTerminal ZeroTerminal_3 (
        .z(Net_975));


    assign scl_o = scl_x_wire;

    assign sda_o = sda_x_wire;


endmodule

// Component: cy_sync_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0\cy_sync_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0\cy_sync_v1_0.v"
`endif

// Component: B_Timer_v2_80
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_Timer_v2_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_Timer_v2_80\B_Timer_v2_80.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_Timer_v2_80"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_Timer_v2_80\B_Timer_v2_80.v"
`endif

// Timer_v2_80(CaptureAlternatingFall=false, CaptureAlternatingRise=false, CaptureCount=2, CaptureCounterEnabled=false, CaptureInputEnabled=false, CaptureMode=0, CONTROL3=0, ControlRegRemoved=0, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG24, CySetRegReplacementString=CY_SET_REG24, DeviceFamily=PSoC5, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, HWCaptureCounterEnabled=false, InterruptOnCapture=false, InterruptOnFIFOFull=false, InterruptOnTC=false, IntOnCapture=0, IntOnFIFOFull=0, IntOnTC=0, NumberOfCaptures=1, param45=1, Period=16777215, RegDefReplacementString=reg32, RegSizeReplacementString=uint32, Resolution=24, RstStatusReplacementString=rstSts, RunMode=0, SiliconRevision=0, SoftwareCaptureModeEnabled=false, SoftwareTriggerModeEnabled=false, TriggerInputEnabled=false, TriggerMode=0, UDB16=false, UDB24=true, UDB32=false, UDB8=false, UDBControlReg=true, UsesHWEnable=0, VerilogSectionReplacementString=sT24, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Timer_v2_80, CY_CONFIG_TITLE=OnTimeCounter, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=OnTimeCounter, CY_INSTANCE_SHORT_NAME=OnTimeCounter, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=80, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=OnTimeCounter, )
module Timer_v2_80_22 (
    capture,
    capture_out,
    clock,
    enable,
    interrupt,
    reset,
    tc,
    trigger);
    input       capture;
    output      capture_out;
    input       clock;
    input       enable;
    output      interrupt;
    input       reset;
    output      tc;
    input       trigger;

    parameter CaptureCount = 2;
    parameter CaptureCounterEnabled = 0;
    parameter DeviceFamily = "PSoC5";
    parameter InterruptOnCapture = 0;
    parameter InterruptOnTC = 0;
    parameter Resolution = 24;
    parameter SiliconRevision = "0";

          wire  Net_260;
          wire  Net_261;
          wire  Net_266;
          wire  Net_102;
          wire  Net_55;
          wire  Net_57;
          wire  Net_53;
          wire  Net_51;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_260));

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// VirtualMux_3 (cy_virtualmux_v1_0)
	assign tc = Net_53;

    B_Timer_v2_80 TimerUDB (
        .capture_in(capture),
        .capture_out(capture_out),
        .clock(clock),
        .enable(enable),
        .interrupt(Net_55),
        .reset(reset),
        .tc(Net_53),
        .trigger(trigger));
    defparam TimerUDB.Capture_Count = 2;
    defparam TimerUDB.CaptureCounterEnabled = 0;
    defparam TimerUDB.CaptureMode = 0;
    defparam TimerUDB.EnableMode = 0;
    defparam TimerUDB.InterruptOnCapture = 0;
    defparam TimerUDB.Resolution = 24;
    defparam TimerUDB.RunMode = 0;
    defparam TimerUDB.TriggerMode = 0;

    OneTerminal OneTerminal_1 (
        .o(Net_102));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_266 = Net_102;



endmodule

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=false, Compare2_16=false, Compare2_8=true, CompareStatusEdgeSense=true, CompareType1=1, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=0, CompareValue2=0, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG8, CySetRegReplacementString=CY_SET_REG8, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=0, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=false, Period=254, PWMMode=1, PWMModeCenterAligned=0, RegDefReplacementString=reg8, RegSizeReplacementString=uint8, Resolution=8, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=true, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=true, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=false, TermVisibility_pwm1=true, TermVisibility_pwm2=true, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=false, UDB8=true, UseControl=true, UseInterrupt=true, UseStatus=true, VerilogSectionReplacementString=sP8, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=temp_pwm, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=temp_pwm, CY_INSTANCE_SHORT_NAME=temp_pwm, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=temp_pwm, )
module PWM_v3_30_23 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 8;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .capture(capture),
        .clock(clock),
        .cmp_sel(cmp_sel),
        .enable(enable),
        .interrupt(Net_55),
        .kill(kill),
        .ph1(ph1),
        .ph2(ph2),
        .pwm(Net_96),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .reset(reset),
        .tc(Net_101),
        .trigger(trigger));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 1;
    defparam PWMUDB.CompareType2 = 1;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 0;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 1;
    defparam PWMUDB.Resolution = 8;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 1;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// Comp_v2_0(Hysteresis=1, Pd_Override=0, Polarity=0, PSOC5A=false, Speed=1, Sync=0, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Comp_v2_0, CY_CONFIG_TITLE=CT1_comp, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=CT1_comp, CY_INSTANCE_SHORT_NAME=CT1_comp, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=0, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=CT1_comp, )
module Comp_v2_0_24 (
    clock,
    CmpOut,
    Vminus,
    Vplus);
    input       clock;
    output      CmpOut;
    inout       Vminus;
    electrical  Vminus;
    inout       Vplus;
    electrical  Vplus;


          wire  Net_9;
          wire  Net_1;

    cy_psoc3_ctcomp_v1_0 ctComp (
        .clk_udb(clock),
        .clock(clock),
        .cmpout(Net_1),
        .vminus(Vminus),
        .vplus(Vplus));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign CmpOut = Net_1;


    assign Net_9 = ~Net_1;



endmodule

// Sample_Hold_v1_40(Power=3, Sample_Clock_Edge=1, Sample_Mode=2, Vdda_Value=5, Vref_Type=2, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Sample_Hold_v1_40, CY_CONFIG_TITLE=Sample_Hold_1, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Sample_Hold_1, CY_INSTANCE_SHORT_NAME=Sample_Hold_1, CY_MAJOR_VERSION=1, CY_MINOR_VERSION=40, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=Sample_Hold_1, )
module Sample_Hold_v1_40_25 (
    sclk,
    Vin,
    Vout,
    Vref);
    input       sclk;
    inout       Vin;
    electrical  Vin;
    inout       Vout;
    electrical  Vout;
    inout       Vref;
    electrical  Vref;


    electrical  Net_104;
          wire  Net_56;
          wire  Net_60;
    electrical  Net_105;
          wire  Net_85;
          wire  Net_74;
          wire  Net_67;

    cy_psoc3_scblock_v1_0 SC (
        .aclk(Net_74),
        .bst_clk(Net_60),
        .clk_udb(Net_74),
        .dyn_cntl(Net_67),
        .modout_sync(Net_56),
        .vin(Vin),
        .vout(Vout),
        .vref(Net_105));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_74 = Net_85;

	// VirtualMux_2 (cy_virtualmux_v1_0)
	assign Net_67 = sclk;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_85));

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_60));

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_105, Net_104);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_104));



endmodule

// Comp_v2_0(Hysteresis=0, Pd_Override=0, Polarity=1, PSOC5A=false, Speed=1, Sync=1, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=Comp_v2_0, CY_CONFIG_TITLE=Comp_1, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Comp_1, CY_INSTANCE_SHORT_NAME=Comp_1, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=0, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=Comp_1, )
module Comp_v2_0_26 (
    clock,
    CmpOut,
    Vminus,
    Vplus);
    input       clock;
    output      CmpOut;
    inout       Vminus;
    electrical  Vminus;
    inout       Vplus;
    electrical  Vplus;


          wire  Net_9;
          wire  Net_1;

    cy_psoc3_ctcomp_v1_0 ctComp (
        .clk_udb(clock),
        .clock(clock),
        .cmpout(Net_1),
        .vminus(Vminus),
        .vplus(Vplus));

	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign CmpOut = Net_9;


    assign Net_9 = ~Net_1;



endmodule

// Component: xnor_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\xnor_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\xnor_v1_0\xnor_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\xnor_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\xnor_v1_0\xnor_v1_0.v"
`endif

// top
module top ;

          wire  pwm_reset;
          wire  interrupter;
          wire  PWMB_trig;
          wire  int1;
          wire  Net_19647;
          wire  Net_19644;
          wire  Net_19642;
          wire  Net_19641;
          wire  Net_19638;
          wire  HT;
          wire  Net_19533;
          wire  Net_19637;
    electrical  Net_19532;
          wire  Net_18090;
          wire  Net_18873;
          wire  PWMen;
          wire  Net_16824;
          wire  Net_16864;
          wire  Net_16863;
          wire  Net_16862;
          wire  Net_16861;
          wire  Net_16860;
          wire  NOT_interrupter;
          wire  nTselect;
          wire  Net_16859;
          wire  Net_16858;
          wire  Net_16857;
          wire  Net_16856;
          wire  Net_16808;
          wire  Net_16855;
          wire  Net_16749;
          wire  Net_16681;
          wire  Net_16684;
          wire  Net_16679;
          wire  Net_16680;
          wire  Net_16683;
          wire  Net_16682;
          wire  Net_16540;
          wire  Net_16538;
          wire  Net_16535;
          wire  Net_16531;
          wire  pre_interrupter;
          wire  Net_16502;
          wire  Net_16499;
          wire  Net_16496;
          wire  Net_16489;
          wire  QCW_enable_sig;
          wire  Net_16487;
          wire  Net_16486;
          wire  Net_16485;
          wire  Net_16484;
          wire  Net_16483;
          wire  Net_16482;
          wire  Net_16481;
          wire  Net_16480;
          wire  Net_16479;
          wire  Net_16478;
          wire  Net_16477;
          wire  Net_19130;
          wire  Net_19158;
    electrical  Net_19531;
    electrical  Net_19530;
          wire  Net_19529;
          wire  Net_19528;
          wire  Net_19527;
          wire  Net_19110;
          wire  Net_19112;
          wire  Net_19104;
          wire  nZCDp;
          wire  Net_19108;
          wire  Net_19111;
          wire  int1_reset;
          wire  ZCD_pulse;
          wire  Net_16248;
          wire  Net_19109;
          wire  Net_16104;
          wire  Net_16035;
          wire  Net_16817;
          wire  Net_16816;
          wire  Net_15391;
          wire  Net_15389;
          wire  Net_15388;
          wire  ST;
          wire  Net_15387;
          wire  Net_15386;
          wire  Net_16385;
          wire  Net_15390;
          wire  Net_16389;
          wire  FSsync;
          wire  Tselect;
          wire  Net_820;
          wire  Net_14981;
          wire [7:0] Net_14958;
          wire  Net_14956;
          wire  Net_14955;
          wire  Net_14954;
          wire  Net_14953;
          wire  Net_14951;
          wire  Net_14950;
          wire  Net_14949;
          wire  Net_14957;
          wire  Net_15645;
          wire  Net_14813;
          wire  Net_16792;
          wire  Net_14363;
          wire  Net_14361;
          wire  Net_14360;
          wire  Net_14359;
          wire  Net_14358;
          wire  Net_14356;
          wire  Net_15981;
          wire  Net_14362;
          wire  Net_19635;
          wire  Net_19636;
    electrical  Net_19511;
          wire  Net_19646;
          wire  Net_19645;
          wire  Net_15573;
          wire  Net_15569;
          wire  Net_15575;
          wire  Net_15576;
          wire  Net_15574;
          wire  Net_15577;
          wire  Net_15578;
          wire  Net_15568;
          wire  Net_15376;
          wire  Net_15566;
          wire  Net_13286;
          wire  Net_13156;
          wire  Net_13638;
          wire  Net_13026;
          wire  Net_13022;
          wire  Net_13025;
          wire  Net_13154;
          wire  Net_13152;
          wire  Net_13161;
    electrical  Net_17559;
          wire  Net_18006;
          wire  Net_17557;
          wire  Net_13276;
          wire  Net_13278;
          wire  Net_13273;
          wire  Net_13274;
          wire  Net_13277;
          wire  Net_13272;
          wire  Net_13275;
          wire  Net_19440;
          wire [7:0] Net_19439;
          wire  Net_12257;
          wire  Net_16498;
          wire  Net_11573;
          wire  Net_11566;
          wire  Net_11568;
          wire  Net_11567;
          wire  Net_11576;
          wire  Net_11575;
          wire  Net_11569;
          wire  Net_11572;
          wire  Net_11574;
          wire  Net_11570;
          wire  Net_13637;
          wire  Net_11578;
          wire  Net_14937;
          wire  Net_19441;
    electrical  Net_16143;
          wire  Net_16144;
    electrical  Net_16147;
          wire  Net_16148;
          wire  Net_16145;
          wire  Net_16149;
    electrical  Net_15063;
    electrical  Net_13949;
    electrical  Net_13948;
    electrical  Net_13950;
          wire  Net_12246;
          wire  Net_12249;
          wire  Net_12248;
          wire [7:0] Net_12247;
          wire  Net_14367;
          wire  Net_14368;
          wire  Net_12236;
          wire  Net_13249;
          wire  Net_13247;
          wire  Net_13246;
          wire  Net_13245;
          wire  Net_13244;
          wire  Net_13243;
          wire  Net_13242;
          wire  Net_13248;
          wire  FB_STABLE;
          wire  Net_12234;
          wire  Net_12235;
          wire  Net_12230;
          wire  Net_12231;
          wire  Net_12924;
          wire  Net_19521;
          wire  Net_17552;
          wire [7:0] Net_17553;
          wire  Net_12221;
          wire  Net_13204;
          wire  Net_12220;
          wire  Net_19633;
          wire  Net_19523;
          wire  Net_12214;
          wire  Net_12207;
          wire  Net_12209;
          wire  Net_12208;
          wire  Net_12217;
          wire  Net_12216;
          wire  Net_12212;
          wire  Net_12210;
          wire  Net_12213;
          wire  Net_12215;
          wire  Net_12211;
          wire  Net_13314;
          wire  Net_13313;
          wire  Net_9769;
          wire  Net_9767;
          wire  Net_9766;
          wire  Net_9765;
          wire  Net_9764;
          wire  Net_9762;
          wire  int1_fin;
          wire  Net_9761;
          wire  Net_9760;
          wire  inOCD;
    electrical  CT1sig;
          wire  Net_9768;
          wire  Net_16501;
          wire  Net_13302;
          wire  Net_10830;
          wire  Net_19526;
          wire [7:0] Net_19525;
          wire  Net_19632;
          wire  Net_19639;
          wire  Net_12200;
          wire  Net_12282;
          wire  Net_12198;
          wire  Net_12199;
          wire  Net_12201;
          wire  EnableB;
          wire  Net_12197;
          wire  Net_12196;
          wire  Net_9456;
          wire  Net_11722;
          wire  Net_11723;
          wire  Net_9492;
          wire  Net_9490;
          wire  Net_9489;
          wire  Net_9488;
          wire  Net_9487;
          wire  Net_9491;
          wire  Net_18004;
          wire  Net_17554;
          wire  Net_19631;
          wire  Net_12190;
          wire  Net_13298;
          wire  Net_12287;
          wire  Net_12286;
          wire  Net_12186;
          wire  Net_12187;
    electrical  Net_17556;
          wire  Net_11658;
          wire  Net_8089;
          wire  int_pulse;
          wire  Net_9016;
          wire  Net_11581;
          wire  Net_8085;
          wire  Net_8084;
          wire  Net_8092;
          wire  Net_8091;
          wire  Net_5217;
          wire  no_fb;
          wire  Net_8086;
          wire  Net_8088;
          wire  Net_8090;
          wire  Net_8087;
          wire  Net_13294;
          wire  Net_16490;
          wire  Net_9720;
          wire  Net_9682;
          wire  Net_9723;
          wire  Net_9722;
          wire  Net_9718;
          wire  Net_9716;
          wire  Net_9719;
          wire  Net_9721;
          wire  Net_9717;
          wire  Net_12181;
          wire  Net_12472;
    electrical  Net_13325;
    electrical  Net_13327;
          wire  Net_12177;
          wire  Net_16141;
          wire  Net_16922;
          wire  Net_14353;
          wire  Net_14885;
          wire  Net_12937;
          wire  Net_19640;
          wire  Net_13290;
          wire  Net_16500;
          wire  Net_16503;
          wire  Net_16488;
          wire  Net_12148;
          wire  Net_13297;
          wire  Net_13197;
          wire  Net_13198;
          wire  Net_13196;
          wire  kill_no_fb;
          wire  Net_12147;
          wire  Net_5502;
          wire  Net_16497;
          wire  Net_16504;
          wire  Net_19031;
          wire  Net_12965;
          wire  Net_19331;
          wire  Net_19069;
          wire  Net_16772;
          wire  Net_19050;
          wire  Net_16782;
          wire  Net_19634;
          wire  Net_13727;
          wire  Net_13720;
          wire  Net_13728;
          wire  Net_18698;
          wire  Net_18696;
    electrical  Net_18375;
          wire  Net_17282;
    electrical  Net_18669;
    electrical  Net_19224;
          wire  Net_18482;
    electrical  Net_19349;
    electrical  Net_19352;
    electrical  Net_19336;
          wire  Net_16898;
          wire  Net_16894;
          wire  Net_5909;
          wire  Net_19152;
          wire  Net_19106;
          wire  Net_19113;
          wire  Net_19103;
          wire  Net_18980;
          wire  Net_18978;
          wire  Net_18968;
          wire  Net_18863;
          wire  Net_18750;
          wire  Net_18729;
          wire  Net_18733;
          wire  Net_18816;
          wire  Net_11737;
          wire  Net_18735;
          wire  ivo_led;
          wire  Net_18725;
          wire  Net_13073;
          wire  Net_12206;
          wire  Net_18024;
          wire  Net_12256;
          wire  Net_13005;
          wire  fb_nGlitchFilter;
          wire  Net_12191;
          wire  Net_12574;
          wire  fb_nStable;
          wire  Net_18015;
          wire  Net_12570;
          wire  Net_12569;
    electrical  Net_12529;
          wire  Net_13080;
          wire  Net_13092;
          wire  Net_11879;
          wire  Net_16919;
          wire  Net_412;
          wire  Net_16818;
          wire  Net_16687;
          wire  Net_16573;
          wire  Net_16575;
          wire  Net_16585;
    electrical  Net_16546;
          wire  Net_4423;
          wire  Net_12930;
          wire  Net_29;
          wire  Net_16264;
          wire  Net_16315;
          wire  Net_16155;
          wire  Net_16096;
          wire  Net_16103;
          wire  Net_16095;
          wire  Net_16099;
          wire  Net_5507;
          wire  Net_13140;
          wire  Net_12053;
          wire  Net_15377;
          wire  Net_15373;
    electrical  Net_12144;
    electrical  Net_12182;
          wire  Net_14952;
          wire  EnableA;
          wire  Net_16156;
    electrical  Net_1652;
          wire [1:0] Net_12420;
          wire  Net_10576;
          wire  Net_13578;
          wire  Net_13576;
          wire  Net_11571;
          wire  Net_7688;
          wire  Net_8049;
          wire  Net_13144;
          wire  Net_13155;
          wire  Net_13202;
          wire  Net_13158;
          wire  Net_13200;
          wire  Net_18966;
          wire  Net_12291;
          wire  Net_13596;
          wire  Net_13009;
          wire  nextOCD;
          wire  oddOCDcycle;
          wire  Net_11931;
          wire  Net_11908;
          wire  Net_11910;
          wire  Net_9806;
          wire  Net_12543;
          wire  Net_12592;
          wire  Net_11638;
    electrical  Net_16140;
          wire  Net_11960;
          wire  Net_5508;
          wire  Net_6996;
          wire  Net_7037;


	cy_clock_v1_0
		#(.id("ba5db6b3-9ff4-4b67-b55b-2d6a0198b393"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_29
		 (.clock_out(Net_18980));


	wire [0:0] tmpOE__GD2A_net;
	wire [0:0] tmpFB_0__GD2A_net;
	wire [0:0] tmpIO_0__GD2A_net;
	wire [0:0] tmpINTERRUPT_0__GD2A_net;
	electrical [0:0] tmpSIOVREF__GD2A_net;

	cy_psoc3_pins_v1_10
		#(.id("ef67386f-6004-4f68-bee5-5150f41b270c"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		GD2A
		 (.oe(tmpOE__GD2A_net),
		  .y({Net_16504}),
		  .fb({tmpFB_0__GD2A_net[0:0]}),
		  .io({tmpIO_0__GD2A_net[0:0]}),
		  .siovref(tmpSIOVREF__GD2A_net),
		  .interrupt({tmpINTERRUPT_0__GD2A_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__GD2A_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign nZCDp = ~ZCD_pulse;


    assign Net_16497 = PWMen & EnableA & Net_4423;

	wire [0:0] tmpOE__therm2_net;
	wire [0:0] tmpFB_0__therm2_net;
	wire [0:0] tmpIO_0__therm2_net;
	wire [0:0] tmpINTERRUPT_0__therm2_net;
	electrical [0:0] tmpSIOVREF__therm2_net;

	cy_psoc3_pins_v1_10
		#(.id("4e0ba977-981e-4aa2-a3bc-c02da9d2f7c6"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		therm2
		 (.oe(tmpOE__therm2_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__therm2_net[0:0]}),
		  .analog({Net_12144}),
		  .io({tmpIO_0__therm2_net[0:0]}),
		  .siovref(tmpSIOVREF__therm2_net),
		  .interrupt({tmpINTERRUPT_0__therm2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__therm2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_5502));


    assign Net_13140 = ~Net_12147;


	cy_dma_v1_0
		#(.drq_type(2'b00))
		fram_to_PWMA_DMA
		 (.drq(Net_13196),
		  .nrq(Net_13198),
		  .trq(1'b0));


    // -- DFF Start --
    reg  cydff_11;
    always @(posedge Net_16264 or posedge Net_13297)
    begin
        if (Net_16264)
        begin
            cydff_11 <= ~0;
        end
        else
        begin
            cydff_11 <= Net_5502;
        end
    end
    assign Net_5508 = cydff_11;
    // -- DFF End --


    assign Net_13080 = interrupter & Net_13092 & Net_11879;


    assign Net_11908 = ~Net_4423;

    assign Net_12148 = 1'h1;


    assign Net_16488 = PWMen & EnableA & Net_11908;


    assign Net_16503 = PWMen & EnableB & Net_12930;


    assign Net_16500 = PWMen & EnableB & Net_11910;


	cy_clock_v1_0
		#(.id("0420005a-4954-45b7-b3a7-365b5ee6dc5f"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_1
		 (.clock_out(Net_12191));



    assign PWMen = Net_19640 & Net_12965;


    assign FSsync = ~Net_12937;


	cy_isr_v1_0
		#(.int_type(2'b10))
		ADC_data_ready
		 (.int_signal(Net_14885));



    assign Net_16264 = int_pulse | Net_16315;

    // -- DFF Start --
    reg  cydff_5;
    always @(posedge pwm_reset or posedge ST)
    begin
        if (pwm_reset)
        begin
            cydff_5 <= 0;
        end
        else
        begin
            cydff_5 <= FSsync;
        end
    end
    assign Net_12937 = cydff_5;
    // -- DFF End --


    assign Net_11910 = ~Net_12930;

    // -- DFF Start --
    reg  cydff_1;
    always @(posedge pwm_reset or posedge Net_13009)
    begin
        if (pwm_reset)
        begin
            cydff_1 <= 0;
        end
        else
        begin
            cydff_1 <= Net_11908;
        end
    end
    assign Net_4423 = cydff_1;
    // -- DFF End --


	cy_dma_v1_0
		#(.drq_type(2'b00))
		ADC_DMA
		 (.drq(Net_16155),
		  .nrq(Net_14885),
		  .trq(1'b0));


	wire [0:0] tmpOE__UVLO_net;
	wire [0:0] tmpFB_0__UVLO_net;
	wire [0:0] tmpIO_0__UVLO_net;
	wire [0:0] tmpINTERRUPT_0__UVLO_net;
	electrical [0:0] tmpSIOVREF__UVLO_net;

	cy_psoc3_pins_v1_10
		#(.id("5c1decb5-69e3-4a8d-bb0c-281221d15217"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(1),
		  .sio_hyst(1'b1),
		  .sio_ibuf(1'b1),
		  .sio_info(2'b01),
		  .sio_obuf(1'b0),
		  .sio_refsel(1'b0),
		  .sio_vtrip(1'b1),
		  .sio_hifreq(1'b1),
		  .sio_vohsel(3'b000),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		UVLO
		 (.oe(tmpOE__UVLO_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__UVLO_net[0:0]}),
		  .io({tmpIO_0__UVLO_net[0:0]}),
		  .siovref(tmpSIOVREF__UVLO_net),
		  .interrupt({tmpINTERRUPT_0__UVLO_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__UVLO_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__TP6_net;
	wire [0:0] tmpFB_0__TP6_net;
	wire [0:0] tmpIO_0__TP6_net;
	wire [0:0] tmpINTERRUPT_0__TP6_net;
	electrical [0:0] tmpSIOVREF__TP6_net;

	cy_psoc3_pins_v1_10
		#(.id("183169da-5db0-456e-85f3-54d1ef93695d"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		TP6
		 (.oe(tmpOE__TP6_net),
		  .y({int1}),
		  .fb({tmpFB_0__TP6_net[0:0]}),
		  .io({tmpIO_0__TP6_net[0:0]}),
		  .siovref(tmpSIOVREF__TP6_net),
		  .interrupt({tmpINTERRUPT_0__TP6_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__TP6_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_13200 = Net_12291 | Net_18966;

	wire [0:0] tmpOE__LED_int_net;
	wire [0:0] tmpFB_0__LED_int_net;
	wire [0:0] tmpIO_0__LED_int_net;
	wire [0:0] tmpINTERRUPT_0__LED_int_net;
	electrical [0:0] tmpSIOVREF__LED_int_net;

	cy_psoc3_pins_v1_10
		#(.id("52f31aa9-2f0a-497d-9a1f-1424095e13e6"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_int
		 (.oe(tmpOE__LED_int_net),
		  .y({Net_16922}),
		  .fb({tmpFB_0__LED_int_net[0:0]}),
		  .io({tmpIO_0__LED_int_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_int_net),
		  .interrupt({tmpINTERRUPT_0__LED_int_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_int_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    // -- AMux Therm_Mux start -- ***
    // -- Mux A --
    
    cy_psoc3_amux_v1_0 Therm_Mux(
        .muxin({
            Net_16546,
            Net_12144,
            Net_12182
            }),
        .vout(Net_16140)
        );
    
    defparam Therm_Mux.muxin_width = 3;
    defparam Therm_Mux.init_mux_sel = 3'h0;
    defparam Therm_Mux.one_active = 1;
    defparam Therm_Mux.connect_mode = 1;
    
    // -- AMux Therm_Mux end --

	wire [0:0] tmpOE__Fan_net;
	wire [0:0] tmpFB_0__Fan_net;
	wire [0:0] tmpIO_0__Fan_net;
	wire [0:0] tmpINTERRUPT_0__Fan_net;
	electrical [0:0] tmpSIOVREF__Fan_net;

	cy_psoc3_pins_v1_10
		#(.id("2a56a967-49dc-4a52-85f0-7949b6f5e960"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Fan
		 (.oe(tmpOE__Fan_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Fan_net[0:0]}),
		  .io({tmpIO_0__Fan_net[0:0]}),
		  .siovref(tmpSIOVREF__Fan_net),
		  .interrupt({tmpINTERRUPT_0__Fan_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Fan_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__CTout_net;
	wire [0:0] tmpFB_0__CTout_net;
	wire [0:0] tmpIO_0__CTout_net;
	wire [0:0] tmpINTERRUPT_0__CTout_net;
	electrical [0:0] tmpSIOVREF__CTout_net;

	cy_psoc3_pins_v1_10
		#(.id("299df0a5-d2ed-4b72-b3d7-ae900bca29ed"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		CTout
		 (.oe(tmpOE__CTout_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__CTout_net[0:0]}),
		  .analog({CT1sig}),
		  .io({tmpIO_0__CTout_net[0:0]}),
		  .siovref(tmpSIOVREF__CTout_net),
		  .interrupt({tmpINTERRUPT_0__CTout_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__CTout_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ADC_SAR_v3_10_0 ADC (
        .aclk(1'b0),
        .eoc(Net_16155),
        .eos(Net_16156),
        .soc(Net_12177),
        .vdac_ref(Net_13327),
        .vminus(Net_13325),
        .vplus(Net_1652));


	cy_dma_v1_0
		#(.drq_type(2'b01))
		filter_to_fram_DMA
		 (.drq(Net_11638),
		  .nrq(Net_12472),
		  .trq(1'b0));


    PWM_v3_30_1 interrupter1 (
        .capture(1'b0),
        .clock(Net_7688),
        .cmp_sel(1'b0),
        .enable(1'b1),
        .interrupt(Net_9716),
        .kill(1'b1),
        .ph1(Net_9722),
        .ph2(Net_9723),
        .pwm(Net_9682),
        .pwm1(int1),
        .pwm2(Net_18816),
        .reset(int1_reset),
        .tc(Net_7037),
        .trigger(1'b0));
    defparam interrupter1.Resolution = 16;

	wire [0:0] tmpOE__therm1_net;
	wire [0:0] tmpFB_0__therm1_net;
	wire [0:0] tmpIO_0__therm1_net;
	wire [0:0] tmpINTERRUPT_0__therm1_net;
	electrical [0:0] tmpSIOVREF__therm1_net;

	cy_psoc3_pins_v1_10
		#(.id("e92e0d69-8885-4c0d-a0b4-208d2aa95cb7"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		therm1
		 (.oe(tmpOE__therm1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__therm1_net[0:0]}),
		  .analog({Net_12182}),
		  .io({tmpIO_0__therm1_net[0:0]}),
		  .siovref(tmpSIOVREF__therm1_net),
		  .interrupt({tmpINTERRUPT_0__therm1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__therm1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__GD1A_net;
	wire [0:0] tmpFB_0__GD1A_net;
	wire [0:0] tmpIO_0__GD1A_net;
	wire [0:0] tmpINTERRUPT_0__GD1A_net;
	electrical [0:0] tmpSIOVREF__GD1A_net;

	cy_psoc3_pins_v1_10
		#(.id("64d2766f-7fd2-455b-88c8-2fabd65c34c4"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		GD1A
		 (.oe(tmpOE__GD1A_net),
		  .y({Net_16490}),
		  .fb({tmpFB_0__GD1A_net[0:0]}),
		  .io({tmpIO_0__GD1A_net[0:0]}),
		  .siovref(tmpSIOVREF__GD1A_net),
		  .interrupt({tmpINTERRUPT_0__GD1A_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__GD1A_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_clock_v1_0
		#(.id("ff9b0827-bdb4-4e8a-91b3-a198eec29ddc"),
		  .source_clock_id("dc27b8b9-db6f-4d7c-8c06-e4100a97aaf7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_15
		 (.clock_out(Net_7688));


    PWM_v3_30_2 PWMB (
        .capture(1'b0),
        .clock(Net_5909),
        .cmp_sel(1'b0),
        .enable(1'b1),
        .interrupt(Net_8086),
        .kill(Net_5217),
        .ph1(Net_8091),
        .ph2(Net_8092),
        .pwm(PWMB_trig),
        .pwm1(Net_8084),
        .pwm2(Net_8085),
        .reset(Net_11581),
        .tc(Net_9016),
        .trigger(1'b0));
    defparam PWMB.Resolution = 16;

    // -- DFF Start --
    reg  cydff_12;
    always @(posedge pwm_reset or posedge Net_11931)
    begin
        if (pwm_reset)
        begin
            cydff_12 <= 0;
        end
        else
        begin
            cydff_12 <= Net_11910;
        end
    end
    assign Net_12930 = cydff_12;
    // -- DFF End --

    // -- DFF Start --
    reg  cydff_7;
    always @(posedge Net_11960)
    begin
        cydff_7 <= pre_interrupter;
    end
    assign Net_11658 = cydff_7;
    // -- DFF End --

    // -- DFF Start --
    reg  cydff_6;
    always @(posedge Net_11960)
    begin
        cydff_6 <= Net_11658;
    end
    assign interrupter = cydff_6;
    // -- DFF End --

	wire [0:0] tmpOE__ZCDB_net;
	wire [0:0] tmpFB_0__ZCDB_net;
	wire [0:0] tmpIO_0__ZCDB_net;
	wire [0:0] tmpINTERRUPT_0__ZCDB_net;
	electrical [0:0] tmpSIOVREF__ZCDB_net;

	cy_psoc3_pins_v1_10
		#(.id("a2257d0d-8c7b-45f0-af4f-8a67896d6b11"),
		  .drive_mode(3'b011),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		ZCDB
		 (.oe(tmpOE__ZCDB_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__ZCDB_net[0:0]}),
		  .analog({Net_17556}),
		  .io({tmpIO_0__ZCDB_net[0:0]}),
		  .siovref(tmpSIOVREF__ZCDB_net),
		  .interrupt({tmpINTERRUPT_0__ZCDB_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__ZCDB_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__LED_sysfault_net;
	wire [0:0] tmpFB_0__LED_sysfault_net;
	wire [0:0] tmpIO_0__LED_sysfault_net;
	wire [0:0] tmpINTERRUPT_0__LED_sysfault_net;
	electrical [0:0] tmpSIOVREF__LED_sysfault_net;

	cy_psoc3_pins_v1_10
		#(.id("e4c8597c-026f-4cf9-a17f-7d69962e088d"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_sysfault
		 (.oe(tmpOE__LED_sysfault_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__LED_sysfault_net[0:0]}),
		  .io({tmpIO_0__LED_sysfault_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_sysfault_net),
		  .interrupt({tmpINTERRUPT_0__LED_sysfault_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_sysfault_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_dma_v1_0
		#(.drq_type(2'b00))
		ram_to_filter_DMA
		 (.drq(Net_13080),
		  .nrq(Net_12187),
		  .trq(1'b0));



    assign Net_12569 = fb_nGlitchFilter & Net_12574;

    Filter_v2_30_3 FB_Filter (
        .DMA_Req_A(Net_11638),
        .DMA_Req_B(Net_12286),
        .Interrupt(Net_12287));


	cy_clock_v1_0
		#(.id("048c2e10-c185-41eb-a4e3-355481099d05"),
		  .source_clock_id("dc27b8b9-db6f-4d7c-8c06-e4100a97aaf7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_17
		 (.clock_out(Net_13297));



	cy_dma_v1_0
		#(.drq_type(2'b00))
		FBC_to_ram_DMA
		 (.drq(nZCDp),
		  .nrq(Net_11879),
		  .trq(1'b0));



	cy_clock_v1_0
		#(.id("9f8578ba-08d6-4cc3-a84b-96a376adc818"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_11
		 (.clock_out(Net_18482));



	cy_clock_v1_0
		#(.id("5d6efab5-7429-400c-bc2b-c1fd0899724c"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_2
		 (.clock_out(Net_17554));



    assign Net_5507 = Net_7037 & Net_6996;


    assign Net_19640 = ~pwm_reset;


    assign NOT_interrupter = ~interrupter;

	wire [0:0] tmpOE__LED_com_net;
	wire [0:0] tmpFB_0__LED_com_net;
	wire [0:0] tmpIO_0__LED_com_net;
	wire [0:0] tmpINTERRUPT_0__LED_com_net;
	electrical [0:0] tmpSIOVREF__LED_com_net;

	cy_psoc3_pins_v1_10
		#(.id("4af5aad7-f42e-46eb-a353-83d53c26ab07"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_com
		 (.oe(tmpOE__LED_com_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__LED_com_net[0:0]}),
		  .io({tmpIO_0__LED_com_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_com_net),
		  .interrupt({tmpINTERRUPT_0__LED_com_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_com_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    // -- DFF Start --
    reg  cydff_27;
    always @(posedge ZCD_pulse or posedge Net_13140)
    begin
        if (ZCD_pulse)
        begin
            cydff_27 <= 0;
        end
        else
        begin
            cydff_27 <= Net_12148;
        end
    end
    assign fb_nGlitchFilter = cydff_27;
    // -- DFF End --

    Comp_v2_0_4 ZCD_compB (
        .clock(Net_17554),
        .CmpOut(Net_12574),
        .Vminus(Net_12529),
        .Vplus(Net_17556));


    assign pwm_reset = pre_interrupter & NOT_interrupter;


    assign int1_reset = Net_5507 | Net_5508 | Net_16099;

    CyControlReg_v1_80 interrupter1_control (
        .clock(1'b0),
        .control_0(Net_16315),
        .control_1(Net_6996),
        .control_2(Net_16095),
        .control_3(Net_16103),
        .control_4(Net_9487),
        .control_5(Net_9488),
        .control_6(Net_9489),
        .control_7(Net_9490),
        .reset(1'b0));
    defparam interrupter1_control.Bit0Mode = 0;
    defparam interrupter1_control.Bit1Mode = 0;
    defparam interrupter1_control.Bit2Mode = 0;
    defparam interrupter1_control.Bit3Mode = 0;
    defparam interrupter1_control.Bit4Mode = 0;
    defparam interrupter1_control.Bit5Mode = 0;
    defparam interrupter1_control.Bit6Mode = 0;
    defparam interrupter1_control.Bit7Mode = 0;
    defparam interrupter1_control.BitValue = 0;
    defparam interrupter1_control.BusDisplay = 0;
    defparam interrupter1_control.ExtrReset = 0;
    defparam interrupter1_control.NumOutputs = 4;

    // -- Mux start --
    if (1)
    begin : mux_1
        reg  tmp__mux_1_reg;
        always @(ST or HT or nTselect)
        begin
            case (nTselect)
                1'b0 :  tmp__mux_1_reg = ST;
                1'b1 :  tmp__mux_1_reg = HT;
            endcase
        end
        assign Net_13009 = tmp__mux_1_reg;
    end
    // -- Mux end --


	cy_dma_v1_0
		#(.drq_type(2'b00))
		int1_dma
		 (.drq(int1_reset),
		  .nrq(Net_11723),
		  .trq(1'b0));



	cy_clock_v1_0
		#(.id("102e86a3-d7f3-4d99-9e8a-0b92020beab1"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_9
		 (.clock_out(Net_5909));



    assign Net_12570 = Net_18015 & fb_nGlitchFilter;


	cy_clock_v1_0
		#(.id("5832270e-a0d2-45c9-a883-d509656ce55d"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_14
		 (.clock_out(Net_12196));


    Timer_v2_80_5 FB_capture (
        .capture(ZCD_pulse),
        .capture_out(Net_12201),
        .clock(Net_12196),
        .enable(1'b1),
        .interrupt(Net_12198),
        .reset(Net_12592),
        .tc(Net_12282),
        .trigger(1'b1));
    defparam FB_capture.CaptureCount = 2;
    defparam FB_capture.CaptureCounterEnabled = 0;
    defparam FB_capture.DeviceFamily = "PSoC5";
    defparam FB_capture.InterruptOnCapture = 0;
    defparam FB_capture.InterruptOnTC = 0;
    defparam FB_capture.Resolution = 16;
    defparam FB_capture.SiliconRevision = "0";


    assign Net_13196 = FB_STABLE & Net_13202;

    // -- DFF Start --
    reg  cydff_10;
    always @(posedge ST)
    begin
        cydff_10 <= nextOCD;
    end
    assign inOCD = cydff_10;
    // -- DFF End --

	wire [0:0] tmpOE__Relay2_net;
	wire [0:0] tmpFB_0__Relay2_net;
	wire [0:0] tmpIO_0__Relay2_net;
	wire [0:0] tmpINTERRUPT_0__Relay2_net;
	electrical [0:0] tmpSIOVREF__Relay2_net;

	cy_psoc3_pins_v1_10
		#(.id("df864acb-3838-45e6-8b11-23d8f35057fe"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Relay2
		 (.oe(tmpOE__Relay2_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Relay2_net[0:0]}),
		  .io({tmpIO_0__Relay2_net[0:0]}),
		  .siovref(tmpSIOVREF__Relay2_net),
		  .interrupt({tmpINTERRUPT_0__Relay2_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Relay2_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    // -- DFF Start --
    reg  cydff_4;
    always @(posedge pwm_reset or posedge FSsync)
    begin
        if (pwm_reset)
        begin
            cydff_4 <= ~0;
        end
        else
        begin
            cydff_4 <= Net_19639;
        end
    end
    assign Net_12965 = cydff_4;
    // -- DFF End --


	cy_clock_v1_0
		#(.id("fab2b116-20cc-48af-8d11-76a64244a431"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_6
		 (.clock_out(Net_18698));


    VDAC8_v1_90_6 FB_THRSH_DAC (
        .data(8'b00000000),
        .strobe(1'b0),
        .vOut(Net_19224));
    defparam FB_THRSH_DAC.Data_Source = 0;
    defparam FB_THRSH_DAC.Initial_Value = 32;
    defparam FB_THRSH_DAC.Strobe_Mode = 0;


	cy_dma_v1_0
		#(.drq_type(2'b00))
		PWMB_PSB_DMA
		 (.drq(Net_13144),
		  .nrq(Net_13158),
		  .trq(1'b0));



	cy_clock_v1_0
		#(.id("6eafb531-b69a-4779-a416-17fa62ab0085"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_19
		 (.clock_out(Net_12053));


    // -- Mux start --
    if (1)
    begin : mux_2
        reg  tmp__mux_2_reg;
        always @(HT or ST or nTselect)
        begin
            case (nTselect)
                1'b0 :  tmp__mux_2_reg = HT;
                1'b1 :  tmp__mux_2_reg = ST;
            endcase
        end
        assign Net_11931 = tmp__mux_2_reg;
    end
    // -- Mux end --


    assign Net_11581 = Net_8049 | pwm_reset;


    assign nTselect = ~Tselect;

	wire [0:0] tmpOE__Relay1_net;
	wire [0:0] tmpFB_0__Relay1_net;
	wire [0:0] tmpIO_0__Relay1_net;
	wire [0:0] tmpINTERRUPT_0__Relay1_net;
	electrical [0:0] tmpSIOVREF__Relay1_net;

	cy_psoc3_pins_v1_10
		#(.id("06d4fcad-2164-4492-9838-df946d446c53"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Relay1
		 (.oe(tmpOE__Relay1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Relay1_net[0:0]}),
		  .io({tmpIO_0__Relay1_net[0:0]}),
		  .siovref(tmpSIOVREF__Relay1_net),
		  .interrupt({tmpINTERRUPT_0__Relay1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Relay1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign pre_interrupter = Net_18735 & Net_18729 & Net_18725;

	wire [0:0] tmpOE__LED_OCD_net;
	wire [0:0] tmpFB_0__LED_OCD_net;
	wire [0:0] tmpIO_0__LED_OCD_net;
	wire [0:0] tmpINTERRUPT_0__LED_OCD_net;
	electrical [0:0] tmpSIOVREF__LED_OCD_net;

	cy_psoc3_pins_v1_10
		#(.id("a33d362e-32d3-4bd2-a4e3-6ca8b8e69c1f"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_OCD
		 (.oe(tmpOE__LED_OCD_net),
		  .y({Net_16898}),
		  .fb({tmpFB_0__LED_OCD_net[0:0]}),
		  .io({tmpIO_0__LED_OCD_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_OCD_net),
		  .interrupt({tmpINTERRUPT_0__LED_OCD_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_OCD_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__GD2B_net;
	wire [0:0] tmpFB_0__GD2B_net;
	wire [0:0] tmpIO_0__GD2B_net;
	wire [0:0] tmpINTERRUPT_0__GD2B_net;
	electrical [0:0] tmpSIOVREF__GD2B_net;

	cy_psoc3_pins_v1_10
		#(.id("8ecba497-612c-422e-8426-91832f4dc07d"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		GD2B
		 (.oe(tmpOE__GD2B_net),
		  .y({Net_16501}),
		  .fb({tmpFB_0__GD2B_net[0:0]}),
		  .io({tmpIO_0__GD2B_net[0:0]}),
		  .siovref(tmpSIOVREF__GD2B_net),
		  .interrupt({tmpINTERRUPT_0__GD2B_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__GD2B_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    CyControlReg_v1_80 QCW_enable (
        .clock(1'b0),
        .control_0(QCW_enable_sig),
        .control_1(Net_9760),
        .control_2(Net_9761),
        .control_3(Net_9762),
        .control_4(Net_9764),
        .control_5(Net_9765),
        .control_6(Net_9766),
        .control_7(Net_9767),
        .reset(1'b0));
    defparam QCW_enable.Bit0Mode = 0;
    defparam QCW_enable.Bit1Mode = 0;
    defparam QCW_enable.Bit2Mode = 0;
    defparam QCW_enable.Bit3Mode = 0;
    defparam QCW_enable.Bit4Mode = 0;
    defparam QCW_enable.Bit5Mode = 0;
    defparam QCW_enable.Bit6Mode = 0;
    defparam QCW_enable.Bit7Mode = 0;
    defparam QCW_enable.BitValue = 0;
    defparam QCW_enable.BusDisplay = 0;
    defparam QCW_enable.ExtrReset = 0;
    defparam QCW_enable.NumOutputs = 1;


	cy_clock_v1_0
		#(.id("d8ddd7ef-c909-43da-8d12-99769767edc8"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_4
		 (.clock_out(Net_13313));



    assign Net_12592 = Net_11879 | pwm_reset | fb_nStable;


    assign Net_12206 = ZCD_pulse | pwm_reset | fb_nStable;


    assign Net_13144 = ~Net_8049;

    PWM_v3_30_7 FB_glitch_detect (
        .capture(1'b0),
        .clock(Net_12053),
        .cmp_sel(1'b0),
        .enable(1'b1),
        .interrupt(Net_12210),
        .kill(1'b1),
        .ph1(Net_12216),
        .ph2(Net_12217),
        .pwm(Net_12147),
        .pwm1(Net_12208),
        .pwm2(Net_12209),
        .reset(Net_12206),
        .tc(Net_12207),
        .trigger(1'b0));
    defparam FB_glitch_detect.Resolution = 8;


	cy_clock_v1_0
		#(.id("079d6d5e-e0f6-4f31-827f-1928066e220f"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_8
		 (.clock_out(Net_19523));



    assign Net_9806 = ~QCW_enable_sig;


    assign Net_12220 = Net_9806 & int1;

    ZeroTerminal ZeroTerminal_15 (
        .z(Net_5217));

    // -- DFF Start --
    reg  cydff_17;
    always @(posedge pwm_reset or posedge Net_13158)
    begin
        if (pwm_reset)
        begin
            cydff_17 <= 0;
        end
        else
        begin
            cydff_17 <= Net_13204;
        end
    end
    assign Net_13155 = cydff_17;
    // -- DFF End --

	wire [0:0] tmpOE__DEBUG_DA_net;
	wire [0:0] tmpIO_0__DEBUG_DA_net;
	wire [0:0] tmpINTERRUPT_0__DEBUG_DA_net;
	electrical [0:0] tmpSIOVREF__DEBUG_DA_net;

	cy_psoc3_pins_v1_10
		#(.id("8d860acf-4e4e-45f2-a96e-1fb75a566e08"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		DEBUG_DA
		 (.oe(tmpOE__DEBUG_DA_net),
		  .y({1'b0}),
		  .fb({Net_18696}),
		  .analog({Net_18669}),
		  .io({tmpIO_0__DEBUG_DA_net[0:0]}),
		  .siovref(tmpSIOVREF__DEBUG_DA_net),
		  .interrupt({tmpINTERRUPT_0__DEBUG_DA_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__DEBUG_DA_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_clock_v1_0
		#(.id("753402fb-cab8-417b-a12b-e2149d7c5776"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_13
		 (.clock_out(Net_12543));


    // -- SRFF Start --
    reg  cy_srff_1;
    always @(posedge Net_12543)
    begin
        cy_srff_1 <= (Net_12570 | Net_13005) & ~Net_12569;
    end
    assign Net_13005 = cy_srff_1;
    // -- SRFF End --

    VDAC8_v1_90_8 ZCDref (
        .data(8'b00000000),
        .strobe(1'b0),
        .vOut(Net_12529));
    defparam ZCDref.Data_Source = 0;
    defparam ZCDref.Initial_Value = 100;
    defparam ZCDref.Strobe_Mode = 0;

    // -- AMuxHw AMuxHw_2 start -- ***
    
    // -- AMuxHw Primitive A --
    
    cy_psoc3_amux_v1_0 #(
        .muxin_width(1),
        .hw_control(1),
        .one_active(0),
        .init_mux_sel(1'h0),
        .api_type(2'b10))
        AMuxHw_2(
        .muxin({
            Net_19352
            }),
        .hw_ctrl_en(interrupter),
        .vout(Net_19349)
        );
    
    // -- AMuxHw AMuxHw_2 end -- ***


	cy_isr_v1_0
		#(.int_type(2'b10))
		ADC_peak_ready
		 (.int_signal(Net_19521));



    assign Net_18735 = QCW_enable_sig | int1;

    // -- DFF Start --
    reg  cydff_3;
    always @(posedge pwm_reset or posedge ST)
    begin
        if (pwm_reset)
        begin
            cydff_3 <= 0;
        end
        else
        begin
            cydff_3 <= nTselect;
        end
    end
    assign Net_12924 = cydff_3;
    // -- DFF End --


	cy_dma_v1_0
		#(.drq_type(2'b00))
		QCW_CL_DMA
		 (.drq(QCW_enable_sig),
		  .nrq(Net_12231),
		  .trq(1'b0));


    // -- DFF Start --
    reg  cydff_9;
    always @(posedge pwm_reset or posedge ST)
    begin
        if (pwm_reset)
        begin
            cydff_9 <= 0;
        end
        else
        begin
            cydff_9 <= Net_12924;
        end
    end
    assign Tselect = cydff_9;
    // -- DFF End --


	cy_dma_v1_0
		#(.drq_type(2'b00))
		TR1_CL_DMA
		 (.drq(Net_12220),
		  .nrq(Net_12235),
		  .trq(1'b0));


    CyControlReg_v1_80 system_fault (
        .clock(1'b0),
        .control_0(Net_18725),
        .control_1(kill_no_fb),
        .control_2(Net_13242),
        .control_3(Net_13243),
        .control_4(Net_13244),
        .control_5(Net_13245),
        .control_6(Net_13246),
        .control_7(Net_13247),
        .reset(1'b0));
    defparam system_fault.Bit0Mode = 0;
    defparam system_fault.Bit1Mode = 0;
    defparam system_fault.Bit2Mode = 0;
    defparam system_fault.Bit3Mode = 0;
    defparam system_fault.Bit4Mode = 0;
    defparam system_fault.Bit5Mode = 0;
    defparam system_fault.Bit6Mode = 0;
    defparam system_fault.Bit7Mode = 0;
    defparam system_fault.BitValue = 1;
    defparam system_fault.BusDisplay = 0;
    defparam system_fault.ExtrReset = 0;
    defparam system_fault.NumOutputs = 2;


	cy_clock_v1_0
		#(.id("a267fe81-0aea-4090-b52d-54dcee79e3fd"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_3
		 (.clock_out(Net_10576));



	cy_dma_v1_0
		#(.drq_type(2'b00))
		MUX_DMA
		 (.drq(Net_16156),
		  .nrq(Net_14368),
		  .trq(1'b0));


    IDAC8_v2_0_9 IDAC_therm (
        .data(8'b00000000),
        .en(1'b0),
        .iOut(Net_16140),
        .ipolarity(1'b0),
        .strobe(1'b0));
    defparam IDAC_therm.Data_Source = 0;
    defparam IDAC_therm.Initial_Value = 120;
    defparam IDAC_therm.Strobe_Mode = 0;

	wire [0:0] tmpOE__Ibus_net;
	wire [0:0] tmpFB_0__Ibus_net;
	wire [0:0] tmpIO_0__Ibus_net;
	wire [0:0] tmpINTERRUPT_0__Ibus_net;
	electrical [0:0] tmpSIOVREF__Ibus_net;

	cy_psoc3_pins_v1_10
		#(.id("13d5721e-017e-4f36-866d-01a4b6a3504a"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Ibus
		 (.oe(tmpOE__Ibus_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Ibus_net[0:0]}),
		  .analog({Net_13950}),
		  .io({tmpIO_0__Ibus_net[0:0]}),
		  .siovref(tmpSIOVREF__Ibus_net),
		  .interrupt({tmpINTERRUPT_0__Ibus_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Ibus_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    // -- AMuxHw AMuxHw_1 start -- ***
    
    // -- AMuxHw Decoder Start--
    
    reg [3:0] AMuxHw_1_Decoder_one_hot;
    reg [1:0] AMuxHw_1_Decoder_old_id;
    wire  AMuxHw_1_Decoder_is_active;
    wire  AMuxHw_1_Decoder_enable;
    
    assign AMuxHw_1_Decoder_enable = 1'b1;
    
    genvar AMuxHw_1_Decoder_i;
    
    assign AMuxHw_1_Decoder_is_active = (Net_12420[1:0] == AMuxHw_1_Decoder_old_id) && AMuxHw_1_Decoder_enable;
    
    always @(posedge Net_10576)
    begin
        AMuxHw_1_Decoder_old_id = Net_12420[1:0];
    end
    
    generate
        for (AMuxHw_1_Decoder_i = 0; AMuxHw_1_Decoder_i < 4; AMuxHw_1_Decoder_i = AMuxHw_1_Decoder_i + 1 )
        begin : AMuxHw_1_OutBit
            always @(posedge Net_10576)
            begin
                AMuxHw_1_Decoder_one_hot[AMuxHw_1_Decoder_i] <= (AMuxHw_1_Decoder_old_id == AMuxHw_1_Decoder_i) && AMuxHw_1_Decoder_is_active;
            end
        end
    endgenerate
    
    // -- AMuxHw Decoder End--
    
    // -- AMuxHw Primitive A --
    
    cy_psoc3_amux_v1_0 #(
        .muxin_width(4),
        .hw_control(1),
        .one_active(1),
        .init_mux_sel(4'h0),
        .api_type(2'b10))
        AMuxHw_1(
        .muxin({
            Net_15063,
            Net_13950,
            Net_13949,
            Net_13948
            }),
        .hw_ctrl_en(AMuxHw_1_Decoder_one_hot[3:0]),
        .vout(Net_1652)
        );
    
    // -- AMuxHw AMuxHw_1 end -- ***

	wire [0:0] tmpOE__Vbus_net;
	wire [0:0] tmpFB_0__Vbus_net;
	wire [0:0] tmpIO_0__Vbus_net;
	wire [0:0] tmpINTERRUPT_0__Vbus_net;
	electrical [0:0] tmpSIOVREF__Vbus_net;

	cy_psoc3_pins_v1_10
		#(.id("a1af635c-2735-4a6b-8435-ff30029b58ef"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Vbus
		 (.oe(tmpOE__Vbus_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Vbus_net[0:0]}),
		  .analog({Net_13949}),
		  .io({tmpIO_0__Vbus_net[0:0]}),
		  .siovref(tmpSIOVREF__Vbus_net),
		  .interrupt({tmpINTERRUPT_0__Vbus_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Vbus_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ADC_DelSig_v3_20_10 ADC_therm (
        .aclk(1'b0),
        .eoc(Net_16145),
        .mi(1'b0),
        .nVref(Net_16147),
        .soc(1'b1),
        .vminus(Net_16143),
        .vplus(Net_16140));

    assign Net_19441 = 1'h1;

    assign Net_11571 = 1'h0;


	cy_dma_v1_0
		#(.drq_type(2'b01))
		PWMA_init_DMA
		 (.drq(pwm_reset),
		  .nrq(Net_14937),
		  .trq(1'b0));



	cy_clock_v1_0
		#(.id("c9241941-8179-495c-92a9-8de1b4fdbb9d"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_10
		 (.clock_out(Net_13578));



    assign Net_13576 = pwm_reset | Net_18966;

    PWM_v3_30_11 PWMA (
        .capture(1'b0),
        .clock(Net_13578),
        .cmp_sel(1'b0),
        .enable(1'b1),
        .interrupt(Net_11569),
        .kill(Net_11571),
        .ph1(Net_11575),
        .ph2(Net_11576),
        .pwm(Net_12291),
        .pwm1(Net_11567),
        .pwm2(Net_11568),
        .reset(Net_13576),
        .tc(Net_11566),
        .trigger(1'b0));
    defparam PWMA.Resolution = 16;

	wire [0:0] tmpOE__GD1B_net;
	wire [0:0] tmpFB_0__GD1B_net;
	wire [0:0] tmpIO_0__GD1B_net;
	wire [0:0] tmpINTERRUPT_0__GD1B_net;
	electrical [0:0] tmpSIOVREF__GD1B_net;

	cy_psoc3_pins_v1_10
		#(.id("0ee38e66-4293-4d64-b304-31655fd93ab0"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		GD1B
		 (.oe(tmpOE__GD1B_net),
		  .y({Net_16498}),
		  .fb({tmpFB_0__GD1B_net[0:0]}),
		  .io({tmpIO_0__GD1B_net[0:0]}),
		  .siovref(tmpSIOVREF__GD1B_net),
		  .interrupt({tmpINTERRUPT_0__GD1B_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__GD1B_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Vin_net;
	wire [0:0] tmpFB_0__Vin_net;
	wire [0:0] tmpIO_0__Vin_net;
	wire [0:0] tmpINTERRUPT_0__Vin_net;
	electrical [0:0] tmpSIOVREF__Vin_net;

	cy_psoc3_pins_v1_10
		#(.id("958e9411-0a95-4df9-865e-f68273cf2d90"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Vin
		 (.oe(tmpOE__Vin_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Vin_net[0:0]}),
		  .analog({Net_13948}),
		  .io({tmpIO_0__Vin_net[0:0]}),
		  .siovref(tmpSIOVREF__Vin_net),
		  .interrupt({tmpINTERRUPT_0__Vin_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Vin_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_18024 = Net_13005 ^ Net_12256;

    // -- DFF Start --
    reg  cydff_24;
    always @(posedge Net_12191)
    begin
        cydff_24 <= Net_13005;
    end
    assign Net_12257 = cydff_24;
    // -- DFF End --

    // -- DFF Start --
    reg  cydff_8;
    always @(posedge Net_12191)
    begin
        cydff_8 <= Net_12257;
    end
    assign Net_12256 = cydff_8;
    // -- DFF End --

    VDAC8_v1_90_12 CT1_dac (
        .data(8'b00000000),
        .strobe(1'b0),
        .vOut(Net_19336));
    defparam CT1_dac.Data_Source = 0;
    defparam CT1_dac.Initial_Value = 150;
    defparam CT1_dac.Strobe_Mode = 0;

    Counter_v3_0_13 ZCD_counter (
        .capture(1'b0),
        .clock(Net_13313),
        .comp(Net_13272),
        .count(PWMB_trig),
        .downCnt(1'b0),
        .enable(1'b0),
        .interrupt(Net_13273),
        .reset(pwm_reset),
        .tc(Net_11737),
        .up_ndown(1'b1),
        .upCnt(1'b0));
    defparam ZCD_counter.CaptureMode = 0;
    defparam ZCD_counter.ClockMode = 3;
    defparam ZCD_counter.CompareMode = 2;
    defparam ZCD_counter.CompareStatusEdgeSense = 1;
    defparam ZCD_counter.EnableMode = 0;
    defparam ZCD_counter.ReloadOnCapture = 0;
    defparam ZCD_counter.ReloadOnCompare = 0;
    defparam ZCD_counter.ReloadOnOverUnder = 0;
    defparam ZCD_counter.ReloadOnReset = 1;
    defparam ZCD_counter.Resolution = 8;
    defparam ZCD_counter.RunMode = 1;
    defparam ZCD_counter.UseInterrupt = 1;


	cy_clock_v1_0
		#(.id("8204e745-59df-46ec-be6a-a62ffee0ed52"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_12
		 (.clock_out(Net_17557));


	wire [0:0] tmpOE__ZCDA_net;
	wire [0:0] tmpFB_0__ZCDA_net;
	wire [0:0] tmpIO_0__ZCDA_net;
	wire [0:0] tmpINTERRUPT_0__ZCDA_net;
	electrical [0:0] tmpSIOVREF__ZCDA_net;

	cy_psoc3_pins_v1_10
		#(.id("05a9c8de-3ba2-4909-8250-95fdc61c0bf4"),
		  .drive_mode(3'b011),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		ZCDA
		 (.oe(tmpOE__ZCDA_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__ZCDA_net[0:0]}),
		  .analog({Net_17559}),
		  .io({tmpIO_0__ZCDA_net[0:0]}),
		  .siovref(tmpSIOVREF__ZCDA_net),
		  .interrupt({tmpINTERRUPT_0__ZCDA_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__ZCDA_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    Comp_v2_0_14 ZCD_compA (
        .clock(Net_17557),
        .CmpOut(Net_18015),
        .Vminus(Net_12529),
        .Vplus(Net_17559));


    assign Net_13161 = Net_13155 & PWMB_trig;


    assign HT = ST | Net_13161;


	cy_dma_v1_0
		#(.drq_type(2'b00))
		PSBINIT_DMA
		 (.drq(FB_STABLE),
		  .nrq(Net_13152),
		  .trq(1'b0));


    // -- DFF Start --
    reg  cydff_22;
    always @(posedge Net_13596)
    begin
        cydff_22 <= Net_13025;
    end
    assign Net_13022 = cydff_22;
    // -- DFF End --


    assign Net_13026 = ~Net_13022;


    assign ST = Net_13200 & Net_13026;

    // -- DFF Start --
    reg  cydff_16;
    always @(posedge Net_13596)
    begin
        cydff_16 <= Net_13200;
    end
    assign Net_13025 = cydff_16;
    // -- DFF End --


	cy_clock_v1_0
		#(.id("0e7954a6-2e5f-476a-9c56-6bc09bc35a57"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_5
		 (.clock_out(Net_13596));


	wire [0:0] tmpOE__DEBUG_ILIM_net;
	wire [0:0] tmpFB_0__DEBUG_ILIM_net;
	wire [0:0] tmpIO_0__DEBUG_ILIM_net;
	wire [0:0] tmpINTERRUPT_0__DEBUG_ILIM_net;
	electrical [0:0] tmpSIOVREF__DEBUG_ILIM_net;

	cy_psoc3_pins_v1_10
		#(.id("7032b027-bddc-4ad3-a771-6f617c94d2f5"),
		  .drive_mode(3'b100),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b1),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		DEBUG_ILIM
		 (.oe(tmpOE__DEBUG_ILIM_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__DEBUG_ILIM_net[0:0]}),
		  .analog({Net_19352}),
		  .io({tmpIO_0__DEBUG_ILIM_net[0:0]}),
		  .siovref(tmpSIOVREF__DEBUG_ILIM_net),
		  .interrupt({tmpINTERRUPT_0__DEBUG_ILIM_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__DEBUG_ILIM_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{NOT_interrupter} : {NOT_interrupter};


    assign Net_16922 = interrupter ^ ivo_led;

    // -- DFF Start --
    reg  cydff_15;
    always @(posedge fb_nStable or posedge ZCD_pulse)
    begin
        if (fb_nStable)
        begin
            cydff_15 <= 0;
        end
        else
        begin
            cydff_15 <= Net_13073;
        end
    end
    assign Net_13092 = cydff_15;
    // -- DFF End --


    assign Net_18966 = ZCD_pulse | Net_18863;


    assign Net_8049 = FB_STABLE & QCW_enable_sig & ST;

    // -- DFF Start --
    reg  cydff_14;
    always @(posedge pwm_reset or posedge Net_13158)
    begin
        if (pwm_reset)
        begin
            cydff_14 <= 0;
        end
        else
        begin
            cydff_14 <= Net_13156;
        end
    end
    assign Net_13204 = cydff_14;
    // -- DFF End --

    assign Net_13156 = 1'h1;


    assign Net_13202 = ~Net_13200;


	cy_clock_v1_0
		#(.id("ccadcb09-697a-4b08-b9e4-a4927ff6d1d2"),
		  .source_clock_id("dc27b8b9-db6f-4d7c-8c06-e4100a97aaf7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_7
		 (.clock_out(Net_11960));


    UART_v2_50_15 UART (
        .clock(Net_29),
        .cts_n(1'b0),
        .reset(Net_15376),
        .rts_n(Net_15568),
        .rx(Net_15377),
        .rx_clk(Net_15578),
        .rx_data(Net_15577),
        .rx_interrupt(Net_15574),
        .tx(Net_15373),
        .tx_clk(Net_15576),
        .tx_data(Net_15575),
        .tx_en(Net_15569),
        .tx_interrupt(Net_15573));
    defparam UART.Address1 = 0;
    defparam UART.Address2 = 0;
    defparam UART.EnIntRXInterrupt = 1;
    defparam UART.EnIntTXInterrupt = 1;
    defparam UART.FlowControl = 0;
    defparam UART.HalfDuplexEn = 0;
    defparam UART.HwTXEnSignal = 0;
    defparam UART.NumDataBits = 8;
    defparam UART.NumStopBits = 1;
    defparam UART.ParityType = 0;
    defparam UART.RXEnable = 1;
    defparam UART.TXEnable = 1;

    USBFS_v3_20_16 USBUART_1 (
        .sof(Net_19645),
        .vbusdet(1'b0));
    defparam USBUART_1.epDMAautoOptimization = 0;

    OpAmp_v1_90_17 Opamp_2 (
        .Vminus(Net_19511),
        .Vout(Net_19349),
        .Vplus(Net_19336));
    defparam Opamp_2.Mode = 1;

    // -- DFF Start --
    reg  cydff_23;
    always @(posedge ST)
    begin
        cydff_23 <= Net_19636;
    end
    assign oddOCDcycle = cydff_23;
    // -- DFF End --

    // -- SRFF Start --
    reg  cy_srff_3;
    always @(posedge Net_18698)
    begin
        cy_srff_3 <= (Net_18696 | FB_STABLE) & ~pwm_reset;
    end
    assign FB_STABLE = cy_srff_3;
    // -- SRFF End --

    // -- DFF Start --
    reg  cydff_13;
    always @(posedge Net_19634 or posedge Net_19331)
    begin
        if (Net_19634)
        begin
            cydff_13 <= ~0;
        end
        else
        begin
            cydff_13 <= Net_19635;
        end
    end
    assign Net_16772 = cydff_13;
    // -- DFF End --

    OpAmp_v1_90_18 Opamp_1 (
        .Vminus(Net_19224),
        .Vout(Net_18669),
        .Vplus(Net_18375));
    defparam Opamp_1.Mode = 0;


    assign Net_16898 = Net_16894 ^ ivo_led;

    CyControlReg_v1_80 Amux_Ctrl (
        .clock(1'b0),
        .control_0(Net_12420[0]),
        .control_1(Net_12420[1]),
        .control_2(Net_15981),
        .control_3(Net_14356),
        .control_4(Net_14358),
        .control_5(Net_14359),
        .control_6(Net_14360),
        .control_7(Net_14361),
        .reset(1'b0));
    defparam Amux_Ctrl.Bit0Mode = 0;
    defparam Amux_Ctrl.Bit1Mode = 0;
    defparam Amux_Ctrl.Bit2Mode = 0;
    defparam Amux_Ctrl.Bit3Mode = 0;
    defparam Amux_Ctrl.Bit4Mode = 0;
    defparam Amux_Ctrl.Bit5Mode = 0;
    defparam Amux_Ctrl.Bit6Mode = 0;
    defparam Amux_Ctrl.Bit7Mode = 0;
    defparam Amux_Ctrl.BitValue = 0;
    defparam Amux_Ctrl.BusDisplay = 0;
    defparam Amux_Ctrl.ExtrReset = 0;
    defparam Amux_Ctrl.NumOutputs = 3;


	cy_isr_v1_0
		#(.int_type(2'b10))
		uart_rx
		 (.int_signal(Net_15574));



	cy_isr_v1_0
		#(.int_type(2'b00))
		uart_tx
		 (.int_signal(Net_15573));



	cy_clock_v1_0
		#(.id("7159a247-f5a3-4208-aa64-8bddb4a09ead"),
		  .source_clock_id("012181c5-1250-4b1e-aee8-997819e3233e"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_27
		 (.clock_out(Net_12177));



	cy_isr_v1_0
		#(.int_type(2'b10))
		isr_midi
		 (.int_signal(Net_14813));



	cy_clock_v1_0
		#(.id("23335026-c143-4db3-88f4-177b0a94ff62"),
		  .source_clock_id("61737EF6-3B74-48f9-8B91-F7473A442AE7"),
		  .divisor(4),
		  .period("0"),
		  .is_direct(0),
		  .is_digital(1))
		UART_CLK
		 (.clock_out(Net_29));


    CyStatusReg_v1_90 no_fb_reg (
        .clock(Net_14952),
        .intr(Net_14957),
        .status_0(no_fb),
        .status_1(1'b0),
        .status_2(1'b0),
        .status_3(1'b0),
        .status_4(1'b0),
        .status_5(1'b0),
        .status_6(1'b0),
        .status_7(1'b0),
        .status_bus(8'b0));
    defparam no_fb_reg.Bit0Mode = 1;
    defparam no_fb_reg.Bit1Mode = 0;
    defparam no_fb_reg.Bit2Mode = 0;
    defparam no_fb_reg.Bit3Mode = 0;
    defparam no_fb_reg.Bit4Mode = 0;
    defparam no_fb_reg.Bit5Mode = 0;
    defparam no_fb_reg.Bit6Mode = 0;
    defparam no_fb_reg.Bit7Mode = 0;
    defparam no_fb_reg.BusDisplay = 0;
    defparam no_fb_reg.Interrupt = 0;
    defparam no_fb_reg.MaskValue = 0;
    defparam no_fb_reg.NumInputs = 1;


	cy_clock_v1_0
		#(.id("91192af0-e9e1-4fdb-b165-180d2302cfe9"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_22
		 (.clock_out(Net_14952));


	wire [0:0] tmpOE__Vdriver_net;
	wire [0:0] tmpFB_0__Vdriver_net;
	wire [0:0] tmpIO_0__Vdriver_net;
	wire [0:0] tmpINTERRUPT_0__Vdriver_net;
	electrical [0:0] tmpSIOVREF__Vdriver_net;

	cy_psoc3_pins_v1_10
		#(.id("9ddc42ab-facd-495c-962a-8d45bfc4862c"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Vdriver
		 (.oe(tmpOE__Vdriver_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Vdriver_net[0:0]}),
		  .analog({Net_15063}),
		  .io({tmpIO_0__Vdriver_net[0:0]}),
		  .siovref(tmpSIOVREF__Vdriver_net),
		  .interrupt({tmpINTERRUPT_0__Vdriver_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Vdriver_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Rx_net;
	wire [0:0] tmpIO_0__Rx_net;
	wire [0:0] tmpINTERRUPT_0__Rx_net;
	electrical [0:0] tmpSIOVREF__Rx_net;

	cy_psoc3_pins_v1_10
		#(.id("3a960253-138e-4757-af7c-c31e478282fd"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Rx
		 (.oe(tmpOE__Rx_net),
		  .y({1'b0}),
		  .fb({Net_820}),
		  .io({tmpIO_0__Rx_net[0:0]}),
		  .siovref(tmpSIOVREF__Rx_net),
		  .interrupt({tmpINTERRUPT_0__Rx_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Rx_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Tx_net;
	wire [0:0] tmpFB_0__Tx_net;
	wire [0:0] tmpIO_0__Tx_net;
	wire [0:0] tmpINTERRUPT_0__Tx_net;
	electrical [0:0] tmpSIOVREF__Tx_net;

	cy_psoc3_pins_v1_10
		#(.id("a4c246a0-55f8-4012-a160-95210e380870"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Tx
		 (.oe(tmpOE__Tx_net),
		  .y({Net_16389}),
		  .fb({tmpFB_0__Tx_net[0:0]}),
		  .io({tmpIO_0__Tx_net[0:0]}),
		  .siovref(tmpSIOVREF__Tx_net),
		  .interrupt({tmpINTERRUPT_0__Tx_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Tx_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    assign Net_15376 = 1'h0;


    assign Net_16389 = Net_412 ^ Net_15373;


    assign Net_15377 = Net_16919 ^ Net_820;

    CyControlReg_v1_80 IVO (
        .clock(1'b0),
        .control_0(Net_412),
        .control_1(Net_16919),
        .control_2(ivo_led),
        .control_3(Net_16385),
        .control_4(Net_15386),
        .control_5(Net_15387),
        .control_6(Net_15388),
        .control_7(Net_15389),
        .reset(1'b0));
    defparam IVO.Bit0Mode = 0;
    defparam IVO.Bit1Mode = 0;
    defparam IVO.Bit2Mode = 0;
    defparam IVO.Bit3Mode = 0;
    defparam IVO.Bit4Mode = 0;
    defparam IVO.Bit5Mode = 0;
    defparam IVO.Bit6Mode = 0;
    defparam IVO.Bit7Mode = 0;
    defparam IVO.BitValue = 1;
    defparam IVO.BusDisplay = 0;
    defparam IVO.ExtrReset = 0;
    defparam IVO.NumOutputs = 3;

	wire [0:0] tmpOE__Relay3_net;
	wire [0:0] tmpFB_0__Relay3_net;
	wire [0:0] tmpIO_0__Relay3_net;
	wire [0:0] tmpINTERRUPT_0__Relay3_net;
	electrical [0:0] tmpSIOVREF__Relay3_net;

	cy_psoc3_pins_v1_10
		#(.id("549a4e41-b717-44bb-b13e-c01052667238"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Relay3
		 (.oe(tmpOE__Relay3_net),
		  .y({Net_16816}),
		  .fb({tmpFB_0__Relay3_net[0:0]}),
		  .io({tmpIO_0__Relay3_net[0:0]}),
		  .siovref(tmpSIOVREF__Relay3_net),
		  .interrupt({tmpINTERRUPT_0__Relay3_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Relay3_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Relay4_net;
	wire [0:0] tmpFB_0__Relay4_net;
	wire [0:0] tmpIO_0__Relay4_net;
	wire [0:0] tmpINTERRUPT_0__Relay4_net;
	electrical [0:0] tmpSIOVREF__Relay4_net;

	cy_psoc3_pins_v1_10
		#(.id("7be81f30-0a4e-48ab-ac8f-aba3ac57abb0"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Relay4
		 (.oe(tmpOE__Relay4_net),
		  .y({Net_16817}),
		  .fb({tmpFB_0__Relay4_net[0:0]}),
		  .io({tmpIO_0__Relay4_net[0:0]}),
		  .siovref(tmpSIOVREF__Relay4_net),
		  .interrupt({tmpINTERRUPT_0__Relay4_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Relay4_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_clock_v1_0
		#(.id("c014f397-80b7-4f16-b3ef-43b8ae67a664"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("125000000000"),
		  .is_direct(0),
		  .is_digital(1))
		Clock_18
		 (.clock_out(Net_14813));



    assign int1_fin = ~Net_18816;


    assign Net_16099 = Net_16095 & Net_16096;


    assign Net_16096 = Net_16103 ^ Net_16104;

    Counter_v3_0_19 interrupterTimebase (
        .capture(1'b0),
        .clock(Net_19106),
        .comp(Net_16248),
        .count(Net_19113),
        .downCnt(1'b0),
        .enable(1'b0),
        .interrupt(Net_19152),
        .reset(Net_19103),
        .tc(Net_19104),
        .up_ndown(1'b1),
        .upCnt(1'b0));
    defparam interrupterTimebase.CaptureMode = 0;
    defparam interrupterTimebase.ClockMode = 0;
    defparam interrupterTimebase.CompareMode = 4;
    defparam interrupterTimebase.CompareStatusEdgeSense = 1;
    defparam interrupterTimebase.EnableMode = 0;
    defparam interrupterTimebase.ReloadOnCapture = 1;
    defparam interrupterTimebase.ReloadOnCompare = 1;
    defparam interrupterTimebase.ReloadOnOverUnder = 0;
    defparam interrupterTimebase.ReloadOnReset = 1;
    defparam interrupterTimebase.Resolution = 32;
    defparam interrupterTimebase.RunMode = 0;
    defparam interrupterTimebase.UseInterrupt = 1;

    // -- DFF Start --
    reg  cydff_30;
    always @(posedge pwm_reset or posedge Net_19634)
    begin
        if (pwm_reset)
        begin
            cydff_30 <= 0;
        end
        else
        begin
            cydff_30 <= Net_19441;
        end
    end
    assign Net_16894 = cydff_30;
    // -- DFF End --


	cy_dma_v1_0
		#(.drq_type(2'b00))
		ADC_DMA_peak
		 (.drq(Net_17282),
		  .nrq(Net_19521),
		  .trq(1'b0));


    ADC_SAR_v3_10_20 ADC_peak (
        .aclk(1'b0),
        .eoc(Net_17282),
        .eos(Net_19529),
        .soc(NOT_interrupter),
        .vdac_ref(Net_19530),
        .vminus(Net_19531),
        .vplus(Net_18375));


	cy_clock_v1_0
		#(.id("d4f70a33-65bf-48ae-b1f0-55da60cff3ae"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_26
		 (.clock_out(Net_19113));


	wire [0:0] tmpOE__Ext_Interrupter_net;
	wire [0:0] tmpIO_0__Ext_Interrupter_net;
	wire [0:0] tmpINTERRUPT_0__Ext_Interrupter_net;
	electrical [0:0] tmpSIOVREF__Ext_Interrupter_net;

	cy_psoc3_pins_v1_10
		#(.id("8d318d8b-cf7b-4b6b-b02c-ab1c5c49d0ba"),
		  .drive_mode(3'b011),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Ext_Interrupter
		 (.oe(tmpOE__Ext_Interrupter_net),
		  .y({1'b0}),
		  .fb({Net_16104}),
		  .io({tmpIO_0__Ext_Interrupter_net[0:0]}),
		  .siovref(tmpSIOVREF__Ext_Interrupter_net),
		  .interrupt({tmpINTERRUPT_0__Ext_Interrupter_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Ext_Interrupter_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


	cy_isr_v1_0
		#(.int_type(2'b10))
		interrupterIRQ
		 (.int_signal(Net_19152));



	cy_clock_v1_0
		#(.id("6badc0c0-7f4d-4284-8a50-c9247882e22d"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_30
		 (.clock_out(Net_19106));


    ZeroTerminal ZeroTerminal_3 (
        .z(Net_19103));

	wire [0:0] tmpOE__SDA_1_net;
	wire [0:0] tmpFB_0__SDA_1_net;
	wire [0:0] tmpINTERRUPT_0__SDA_1_net;
	electrical [0:0] tmpSIOVREF__SDA_1_net;

	cy_psoc3_pins_v1_10
		#(.id("22863ebe-a37b-476f-b252-6e49a8c00b12"),
		  .drive_mode(3'b100),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("B"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		SDA_1
		 (.oe(tmpOE__SDA_1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__SDA_1_net[0:0]}),
		  .io({Net_16477}),
		  .siovref(tmpSIOVREF__SDA_1_net),
		  .interrupt({tmpINTERRUPT_0__SDA_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__SDA_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__SCL_1_net;
	wire [0:0] tmpFB_0__SCL_1_net;
	wire [0:0] tmpINTERRUPT_0__SCL_1_net;
	electrical [0:0] tmpSIOVREF__SCL_1_net;

	cy_psoc3_pins_v1_10
		#(.id("02f2cf2c-2c7a-49df-9246-7a3435c21be3"),
		  .drive_mode(3'b100),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("B"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		SCL_1
		 (.oe(tmpOE__SCL_1_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__SCL_1_net[0:0]}),
		  .io({Net_16478}),
		  .siovref(tmpSIOVREF__SCL_1_net),
		  .interrupt({tmpINTERRUPT_0__SCL_1_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__SCL_1_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    I2C_v3_50_21 I2C (
        .bclk(Net_16479),
        .clock(1'b0),
        .iclk(Net_16481),
        .itclk(Net_16482),
        .reset(1'b0),
        .scl(Net_16478),
        .scl_i(1'b0),
        .scl_o(Net_16485),
        .sda(Net_16477),
        .sda_i(1'b0),
        .sda_o(Net_16487));

    cy_sync_v1_0 Sync_1 (
        .clock(Net_16489),
        .s_in(Net_16488),
        .s_out(Net_16490));
    defparam Sync_1.SignalWidth = 1;

    cy_sync_v1_0 Sync_2 (
        .clock(Net_16496),
        .s_in(Net_16497),
        .s_out(Net_16498));
    defparam Sync_2.SignalWidth = 1;

    cy_sync_v1_0 Sync_3 (
        .clock(Net_16499),
        .s_in(Net_16500),
        .s_out(Net_16501));
    defparam Sync_3.SignalWidth = 1;

    cy_sync_v1_0 Sync_4 (
        .clock(Net_16502),
        .s_in(Net_16503),
        .s_out(Net_16504));
    defparam Sync_4.SignalWidth = 1;


	cy_clock_v1_0
		#(.id("dd1f8d33-c082-4949-980a-5f232e3052d2"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_16
		 (.clock_out(Net_16489));



	cy_clock_v1_0
		#(.id("582c8f76-1fcd-47fd-a09a-3eb8599e0153"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_21
		 (.clock_out(Net_16496));



	cy_clock_v1_0
		#(.id("d02c478c-4467-4072-9011-5b4174957a73"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_23
		 (.clock_out(Net_16499));



	cy_clock_v1_0
		#(.id("7a4cb09b-ca22-402c-adff-188d9332de55"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_24
		 (.clock_out(Net_16502));



    assign Net_18750 = no_fb & kill_no_fb;


	cy_vref_v1_0
		#(.guid("15B3DB15-B7B3-4d62-A2DF-25EA392A7161"),
		  .name("Vssa (GND)"),
		  .autoenable(1))
		vRef_1
		 (.vout(Net_16546));


    Timer_v2_80_22 OnTimeCounter (
        .capture(1'b0),
        .capture_out(Net_16683),
        .clock(Net_16573),
        .enable(1'b1),
        .interrupt(Net_16679),
        .reset(Net_16687),
        .tc(Net_16684),
        .trigger(1'b1));
    defparam OnTimeCounter.CaptureCount = 2;
    defparam OnTimeCounter.CaptureCounterEnabled = 0;
    defparam OnTimeCounter.DeviceFamily = "PSoC5";
    defparam OnTimeCounter.InterruptOnCapture = 0;
    defparam OnTimeCounter.InterruptOnTC = 0;
    defparam OnTimeCounter.Resolution = 24;
    defparam OnTimeCounter.SiliconRevision = "0";


    assign Net_16573 = interrupter & Net_16575;


	cy_clock_v1_0
		#(.id("b0fbd026-c2e1-4d12-9bfd-597878413823"),
		  .source_clock_id("dc27b8b9-db6f-4d7c-8c06-e4100a97aaf7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_25
		 (.clock_out(Net_16585));



    assign Net_16575 = ~Net_16585;

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_16687));

    PWM_v3_30_23 temp_pwm (
        .capture(1'b0),
        .clock(Net_16808),
        .cmp_sel(1'b0),
        .enable(1'b1),
        .interrupt(Net_16858),
        .kill(1'b1),
        .ph1(Net_16860),
        .ph2(Net_16861),
        .pwm(Net_16862),
        .pwm1(Net_16816),
        .pwm2(Net_16817),
        .reset(Net_16818),
        .tc(Net_16863),
        .trigger(1'b0));
    defparam temp_pwm.Resolution = 8;

    assign Net_16818 = 1'h0;


	cy_clock_v1_0
		#(.id("c2f7d5d5-9c6f-48ac-bf91-ee7a718ea040"),
		  .source_clock_id("dc27b8b9-db6f-4d7c-8c06-e4100a97aaf7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_28
		 (.clock_out(Net_16808));


	wire [0:0] tmpOE__digipot_clk_net;
	wire [0:0] tmpFB_0__digipot_clk_net;
	wire [0:0] tmpIO_0__digipot_clk_net;
	wire [0:0] tmpINTERRUPT_0__digipot_clk_net;
	electrical [0:0] tmpSIOVREF__digipot_clk_net;

	cy_psoc3_pins_v1_10
		#(.id("e851a3b9-efb8-48be-bbb8-b303b216c393"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		digipot_clk
		 (.oe(tmpOE__digipot_clk_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__digipot_clk_net[0:0]}),
		  .io({tmpIO_0__digipot_clk_net[0:0]}),
		  .siovref(tmpSIOVREF__digipot_clk_net),
		  .interrupt({tmpINTERRUPT_0__digipot_clk_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__digipot_clk_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__digipot_data_net;
	wire [0:0] tmpFB_0__digipot_data_net;
	wire [0:0] tmpIO_0__digipot_data_net;
	wire [0:0] tmpINTERRUPT_0__digipot_data_net;
	electrical [0:0] tmpSIOVREF__digipot_data_net;

	cy_psoc3_pins_v1_10
		#(.id("42a69613-7e63-4dba-a260-65eb97f2b91b"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		digipot_data
		 (.oe(tmpOE__digipot_data_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__digipot_data_net[0:0]}),
		  .io({tmpIO_0__digipot_data_net[0:0]}),
		  .siovref(tmpSIOVREF__digipot_data_net),
		  .interrupt({tmpINTERRUPT_0__digipot_data_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__digipot_data_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__digipot_ncs_net;
	wire [0:0] tmpFB_0__digipot_ncs_net;
	wire [0:0] tmpIO_0__digipot_ncs_net;
	wire [0:0] tmpINTERRUPT_0__digipot_ncs_net;
	electrical [0:0] tmpSIOVREF__digipot_ncs_net;

	cy_psoc3_pins_v1_10
		#(.id("411f99db-5ed2-4369-9793-9bae11298441"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		digipot_ncs
		 (.oe(tmpOE__digipot_ncs_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__digipot_ncs_net[0:0]}),
		  .io({tmpIO_0__digipot_ncs_net[0:0]}),
		  .siovref(tmpSIOVREF__digipot_ncs_net),
		  .interrupt({tmpINTERRUPT_0__digipot_ncs_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__digipot_ncs_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__dcdc_ena_net;
	wire [0:0] tmpFB_0__dcdc_ena_net;
	wire [0:0] tmpIO_0__dcdc_ena_net;
	wire [0:0] tmpINTERRUPT_0__dcdc_ena_net;
	electrical [0:0] tmpSIOVREF__dcdc_ena_net;

	cy_psoc3_pins_v1_10
		#(.id("64771f96-2472-47b5-997d-0adfb7ac011f"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		dcdc_ena
		 (.oe(tmpOE__dcdc_ena_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__dcdc_ena_net[0:0]}),
		  .io({tmpIO_0__dcdc_ena_net[0:0]}),
		  .siovref(tmpSIOVREF__dcdc_ena_net),
		  .interrupt({tmpINTERRUPT_0__dcdc_ena_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__dcdc_ena_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_13720 = Net_13727 & Net_13728;

	wire [0:0] tmpOE__ZCD_Debug_net;
	wire [0:0] tmpFB_0__ZCD_Debug_net;
	wire [0:0] tmpIO_0__ZCD_Debug_net;
	wire [0:0] tmpINTERRUPT_0__ZCD_Debug_net;
	electrical [0:0] tmpSIOVREF__ZCD_Debug_net;

	cy_psoc3_pins_v1_10
		#(.id("4107d955-094b-44ec-b878-732d04118082"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		ZCD_Debug
		 (.oe(tmpOE__ZCD_Debug_net),
		  .y({Net_18966}),
		  .fb({tmpFB_0__ZCD_Debug_net[0:0]}),
		  .io({tmpIO_0__ZCD_Debug_net[0:0]}),
		  .siovref(tmpSIOVREF__ZCD_Debug_net),
		  .interrupt({tmpINTERRUPT_0__ZCD_Debug_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__ZCD_Debug_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};


    assign Net_18863 = PWMB_trig & Net_18873;

    // -- DFF Start --
    reg  cydff_19;
    always @(posedge pwm_reset or posedge Net_18966)
    begin
        if (pwm_reset)
        begin
            cydff_19 <= ~0;
        end
        else
        begin
            cydff_19 <= fb_nStable;
        end
    end
    assign Net_18968 = cydff_19;
    // -- DFF End --


    assign fb_nStable = ~FB_STABLE;


    assign no_fb = fb_nStable & interrupter & Net_11737;

    // -- DFF Start --
    reg  cydff_18;
    always @(posedge Net_18750 or posedge Net_18735)
    begin
        if (Net_18750)
        begin
            cydff_18 <= 0;
        end
        else
        begin
            cydff_18 <= Net_18733;
        end
    end
    assign Net_18729 = cydff_18;
    // -- DFF End --

    assign Net_18733 = 1'h1;


    assign ZCD_pulse = FB_STABLE & Net_18024;

    // -- DFF Start --
    reg  cydff_2;
    always @(posedge fb_nStable or posedge ZCD_pulse)
    begin
        if (fb_nStable)
        begin
            cydff_2 <= 0;
        end
        else
        begin
            cydff_2 <= Net_18090;
        end
    end
    assign Net_13073 = cydff_2;
    // -- DFF End --

    assign Net_18090 = 1'h1;

    // -- DFF Start --
    reg  cydff_21;
    always @(posedge Net_18980)
    begin
        cydff_21 <= Net_18968;
    end
    assign Net_18978 = cydff_21;
    // -- DFF End --

    // -- DFF Start --
    reg  cydff_20;
    always @(posedge Net_18980)
    begin
        cydff_20 <= Net_18978;
    end
    assign Net_18873 = cydff_20;
    // -- DFF End --

    Comp_v2_0_24 CT1_comp (
        .clock(Net_18482),
        .CmpOut(Net_19634),
        .Vminus(Net_19336),
        .Vplus(CT1sig));

    Sample_Hold_v1_40_25 Sample_Hold_1 (
        .sclk(Net_13720),
        .Vin(CT1sig),
        .Vout(Net_18375),
        .Vref(Net_19532));

    // -- SRFF Start --
    reg  cy_srff_2;
    always @(posedge Net_19523)
    begin
        cy_srff_2 <= (pre_interrupter | Net_13728) & ~Net_17282;
    end
    assign Net_13728 = cy_srff_2;
    // -- SRFF End --

    assign int_pulse = 1'h0;


    assign Net_19636 = nextOCD & Net_19637;

    Comp_v2_0_26 Comp_1 (
        .clock(1'b0),
        .CmpOut(Net_13727),
        .Vminus(Net_18375),
        .Vplus(CT1sig));


    assign nextOCD = Net_16772 | oddOCDcycle;


    assign Net_19637 = ~oddOCDcycle;


    assign Net_16782 = ~inOCD;

    // -- DFF Start --
    reg  cydff_25;
    always @(posedge ST)
    begin
        cydff_25 <= Net_19638;
    end
    assign Net_19050 = cydff_25;
    // -- DFF End --


    assign Net_19069 = ~Net_19050;


    assign EnableB = Net_16782 | Net_19050;


    assign EnableA = Net_19069 | Net_16782;

    assign Net_19635 = 1'h0;


    assign Net_19638 = ~(Net_19050 ^ oddOCDcycle);

    // -- Mux start --
    if (1)
    begin : mux_3
        reg  tmp__mux_3_reg;
        always @(ST or FSsync or QCW_enable_sig)
        begin
            case (QCW_enable_sig)
                1'b0 :  tmp__mux_3_reg = ST;
                1'b1 :  tmp__mux_3_reg = FSsync;
            endcase
        end
        assign Net_19331 = tmp__mux_3_reg;
    end
    // -- Mux end --


    assign Net_19639 = interrupter | Net_19641;

    // -- DFF Start --
    reg  cydff_26;
    always @(posedge Net_19642)
    begin
        cydff_26 <= oddOCDcycle;
    end
    assign Net_19641 = cydff_26;
    // -- DFF End --


	cy_clock_v1_0
		#(.id("12fe4ca2-916d-4a16-ab35-8c017aa389c8"),
		  .source_clock_id("97f2886a-ce12-41ec-9235-4fcae7338608"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		Clock_20
		 (.clock_out(Net_19642));


	wire [0:0] tmpOE__button_input_net;
	wire [0:0] tmpIO_0__button_input_net;
	wire [0:0] tmpINTERRUPT_0__button_input_net;
	electrical [0:0] tmpSIOVREF__button_input_net;

	cy_psoc3_pins_v1_10
		#(.id("eaff527f-e225-457d-a43e-93a6be746f44"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b0),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		button_input
		 (.oe(tmpOE__button_input_net),
		  .y({1'b0}),
		  .fb({Net_19647}),
		  .io({tmpIO_0__button_input_net[0:0]}),
		  .siovref(tmpSIOVREF__button_input_net),
		  .interrupt({tmpINTERRUPT_0__button_input_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__button_input_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};



endmodule

