#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00375AC0
// Address: 0x375ac0 - 0x376040
void sub_00375AC0_0x375ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375AC0_0x375ac0");
#endif

    switch (ctx->pc) {
        case 0x375ac0u: goto label_375ac0;
        case 0x375ac4u: goto label_375ac4;
        case 0x375ac8u: goto label_375ac8;
        case 0x375accu: goto label_375acc;
        case 0x375ad0u: goto label_375ad0;
        case 0x375ad4u: goto label_375ad4;
        case 0x375ad8u: goto label_375ad8;
        case 0x375adcu: goto label_375adc;
        case 0x375ae0u: goto label_375ae0;
        case 0x375ae4u: goto label_375ae4;
        case 0x375ae8u: goto label_375ae8;
        case 0x375aecu: goto label_375aec;
        case 0x375af0u: goto label_375af0;
        case 0x375af4u: goto label_375af4;
        case 0x375af8u: goto label_375af8;
        case 0x375afcu: goto label_375afc;
        case 0x375b00u: goto label_375b00;
        case 0x375b04u: goto label_375b04;
        case 0x375b08u: goto label_375b08;
        case 0x375b0cu: goto label_375b0c;
        case 0x375b10u: goto label_375b10;
        case 0x375b14u: goto label_375b14;
        case 0x375b18u: goto label_375b18;
        case 0x375b1cu: goto label_375b1c;
        case 0x375b20u: goto label_375b20;
        case 0x375b24u: goto label_375b24;
        case 0x375b28u: goto label_375b28;
        case 0x375b2cu: goto label_375b2c;
        case 0x375b30u: goto label_375b30;
        case 0x375b34u: goto label_375b34;
        case 0x375b38u: goto label_375b38;
        case 0x375b3cu: goto label_375b3c;
        case 0x375b40u: goto label_375b40;
        case 0x375b44u: goto label_375b44;
        case 0x375b48u: goto label_375b48;
        case 0x375b4cu: goto label_375b4c;
        case 0x375b50u: goto label_375b50;
        case 0x375b54u: goto label_375b54;
        case 0x375b58u: goto label_375b58;
        case 0x375b5cu: goto label_375b5c;
        case 0x375b60u: goto label_375b60;
        case 0x375b64u: goto label_375b64;
        case 0x375b68u: goto label_375b68;
        case 0x375b6cu: goto label_375b6c;
        case 0x375b70u: goto label_375b70;
        case 0x375b74u: goto label_375b74;
        case 0x375b78u: goto label_375b78;
        case 0x375b7cu: goto label_375b7c;
        case 0x375b80u: goto label_375b80;
        case 0x375b84u: goto label_375b84;
        case 0x375b88u: goto label_375b88;
        case 0x375b8cu: goto label_375b8c;
        case 0x375b90u: goto label_375b90;
        case 0x375b94u: goto label_375b94;
        case 0x375b98u: goto label_375b98;
        case 0x375b9cu: goto label_375b9c;
        case 0x375ba0u: goto label_375ba0;
        case 0x375ba4u: goto label_375ba4;
        case 0x375ba8u: goto label_375ba8;
        case 0x375bacu: goto label_375bac;
        case 0x375bb0u: goto label_375bb0;
        case 0x375bb4u: goto label_375bb4;
        case 0x375bb8u: goto label_375bb8;
        case 0x375bbcu: goto label_375bbc;
        case 0x375bc0u: goto label_375bc0;
        case 0x375bc4u: goto label_375bc4;
        case 0x375bc8u: goto label_375bc8;
        case 0x375bccu: goto label_375bcc;
        case 0x375bd0u: goto label_375bd0;
        case 0x375bd4u: goto label_375bd4;
        case 0x375bd8u: goto label_375bd8;
        case 0x375bdcu: goto label_375bdc;
        case 0x375be0u: goto label_375be0;
        case 0x375be4u: goto label_375be4;
        case 0x375be8u: goto label_375be8;
        case 0x375becu: goto label_375bec;
        case 0x375bf0u: goto label_375bf0;
        case 0x375bf4u: goto label_375bf4;
        case 0x375bf8u: goto label_375bf8;
        case 0x375bfcu: goto label_375bfc;
        case 0x375c00u: goto label_375c00;
        case 0x375c04u: goto label_375c04;
        case 0x375c08u: goto label_375c08;
        case 0x375c0cu: goto label_375c0c;
        case 0x375c10u: goto label_375c10;
        case 0x375c14u: goto label_375c14;
        case 0x375c18u: goto label_375c18;
        case 0x375c1cu: goto label_375c1c;
        case 0x375c20u: goto label_375c20;
        case 0x375c24u: goto label_375c24;
        case 0x375c28u: goto label_375c28;
        case 0x375c2cu: goto label_375c2c;
        case 0x375c30u: goto label_375c30;
        case 0x375c34u: goto label_375c34;
        case 0x375c38u: goto label_375c38;
        case 0x375c3cu: goto label_375c3c;
        case 0x375c40u: goto label_375c40;
        case 0x375c44u: goto label_375c44;
        case 0x375c48u: goto label_375c48;
        case 0x375c4cu: goto label_375c4c;
        case 0x375c50u: goto label_375c50;
        case 0x375c54u: goto label_375c54;
        case 0x375c58u: goto label_375c58;
        case 0x375c5cu: goto label_375c5c;
        case 0x375c60u: goto label_375c60;
        case 0x375c64u: goto label_375c64;
        case 0x375c68u: goto label_375c68;
        case 0x375c6cu: goto label_375c6c;
        case 0x375c70u: goto label_375c70;
        case 0x375c74u: goto label_375c74;
        case 0x375c78u: goto label_375c78;
        case 0x375c7cu: goto label_375c7c;
        case 0x375c80u: goto label_375c80;
        case 0x375c84u: goto label_375c84;
        case 0x375c88u: goto label_375c88;
        case 0x375c8cu: goto label_375c8c;
        case 0x375c90u: goto label_375c90;
        case 0x375c94u: goto label_375c94;
        case 0x375c98u: goto label_375c98;
        case 0x375c9cu: goto label_375c9c;
        case 0x375ca0u: goto label_375ca0;
        case 0x375ca4u: goto label_375ca4;
        case 0x375ca8u: goto label_375ca8;
        case 0x375cacu: goto label_375cac;
        case 0x375cb0u: goto label_375cb0;
        case 0x375cb4u: goto label_375cb4;
        case 0x375cb8u: goto label_375cb8;
        case 0x375cbcu: goto label_375cbc;
        case 0x375cc0u: goto label_375cc0;
        case 0x375cc4u: goto label_375cc4;
        case 0x375cc8u: goto label_375cc8;
        case 0x375cccu: goto label_375ccc;
        case 0x375cd0u: goto label_375cd0;
        case 0x375cd4u: goto label_375cd4;
        case 0x375cd8u: goto label_375cd8;
        case 0x375cdcu: goto label_375cdc;
        case 0x375ce0u: goto label_375ce0;
        case 0x375ce4u: goto label_375ce4;
        case 0x375ce8u: goto label_375ce8;
        case 0x375cecu: goto label_375cec;
        case 0x375cf0u: goto label_375cf0;
        case 0x375cf4u: goto label_375cf4;
        case 0x375cf8u: goto label_375cf8;
        case 0x375cfcu: goto label_375cfc;
        case 0x375d00u: goto label_375d00;
        case 0x375d04u: goto label_375d04;
        case 0x375d08u: goto label_375d08;
        case 0x375d0cu: goto label_375d0c;
        case 0x375d10u: goto label_375d10;
        case 0x375d14u: goto label_375d14;
        case 0x375d18u: goto label_375d18;
        case 0x375d1cu: goto label_375d1c;
        case 0x375d20u: goto label_375d20;
        case 0x375d24u: goto label_375d24;
        case 0x375d28u: goto label_375d28;
        case 0x375d2cu: goto label_375d2c;
        case 0x375d30u: goto label_375d30;
        case 0x375d34u: goto label_375d34;
        case 0x375d38u: goto label_375d38;
        case 0x375d3cu: goto label_375d3c;
        case 0x375d40u: goto label_375d40;
        case 0x375d44u: goto label_375d44;
        case 0x375d48u: goto label_375d48;
        case 0x375d4cu: goto label_375d4c;
        case 0x375d50u: goto label_375d50;
        case 0x375d54u: goto label_375d54;
        case 0x375d58u: goto label_375d58;
        case 0x375d5cu: goto label_375d5c;
        case 0x375d60u: goto label_375d60;
        case 0x375d64u: goto label_375d64;
        case 0x375d68u: goto label_375d68;
        case 0x375d6cu: goto label_375d6c;
        case 0x375d70u: goto label_375d70;
        case 0x375d74u: goto label_375d74;
        case 0x375d78u: goto label_375d78;
        case 0x375d7cu: goto label_375d7c;
        case 0x375d80u: goto label_375d80;
        case 0x375d84u: goto label_375d84;
        case 0x375d88u: goto label_375d88;
        case 0x375d8cu: goto label_375d8c;
        case 0x375d90u: goto label_375d90;
        case 0x375d94u: goto label_375d94;
        case 0x375d98u: goto label_375d98;
        case 0x375d9cu: goto label_375d9c;
        case 0x375da0u: goto label_375da0;
        case 0x375da4u: goto label_375da4;
        case 0x375da8u: goto label_375da8;
        case 0x375dacu: goto label_375dac;
        case 0x375db0u: goto label_375db0;
        case 0x375db4u: goto label_375db4;
        case 0x375db8u: goto label_375db8;
        case 0x375dbcu: goto label_375dbc;
        case 0x375dc0u: goto label_375dc0;
        case 0x375dc4u: goto label_375dc4;
        case 0x375dc8u: goto label_375dc8;
        case 0x375dccu: goto label_375dcc;
        case 0x375dd0u: goto label_375dd0;
        case 0x375dd4u: goto label_375dd4;
        case 0x375dd8u: goto label_375dd8;
        case 0x375ddcu: goto label_375ddc;
        case 0x375de0u: goto label_375de0;
        case 0x375de4u: goto label_375de4;
        case 0x375de8u: goto label_375de8;
        case 0x375decu: goto label_375dec;
        case 0x375df0u: goto label_375df0;
        case 0x375df4u: goto label_375df4;
        case 0x375df8u: goto label_375df8;
        case 0x375dfcu: goto label_375dfc;
        case 0x375e00u: goto label_375e00;
        case 0x375e04u: goto label_375e04;
        case 0x375e08u: goto label_375e08;
        case 0x375e0cu: goto label_375e0c;
        case 0x375e10u: goto label_375e10;
        case 0x375e14u: goto label_375e14;
        case 0x375e18u: goto label_375e18;
        case 0x375e1cu: goto label_375e1c;
        case 0x375e20u: goto label_375e20;
        case 0x375e24u: goto label_375e24;
        case 0x375e28u: goto label_375e28;
        case 0x375e2cu: goto label_375e2c;
        case 0x375e30u: goto label_375e30;
        case 0x375e34u: goto label_375e34;
        case 0x375e38u: goto label_375e38;
        case 0x375e3cu: goto label_375e3c;
        case 0x375e40u: goto label_375e40;
        case 0x375e44u: goto label_375e44;
        case 0x375e48u: goto label_375e48;
        case 0x375e4cu: goto label_375e4c;
        case 0x375e50u: goto label_375e50;
        case 0x375e54u: goto label_375e54;
        case 0x375e58u: goto label_375e58;
        case 0x375e5cu: goto label_375e5c;
        case 0x375e60u: goto label_375e60;
        case 0x375e64u: goto label_375e64;
        case 0x375e68u: goto label_375e68;
        case 0x375e6cu: goto label_375e6c;
        case 0x375e70u: goto label_375e70;
        case 0x375e74u: goto label_375e74;
        case 0x375e78u: goto label_375e78;
        case 0x375e7cu: goto label_375e7c;
        case 0x375e80u: goto label_375e80;
        case 0x375e84u: goto label_375e84;
        case 0x375e88u: goto label_375e88;
        case 0x375e8cu: goto label_375e8c;
        case 0x375e90u: goto label_375e90;
        case 0x375e94u: goto label_375e94;
        case 0x375e98u: goto label_375e98;
        case 0x375e9cu: goto label_375e9c;
        case 0x375ea0u: goto label_375ea0;
        case 0x375ea4u: goto label_375ea4;
        case 0x375ea8u: goto label_375ea8;
        case 0x375eacu: goto label_375eac;
        case 0x375eb0u: goto label_375eb0;
        case 0x375eb4u: goto label_375eb4;
        case 0x375eb8u: goto label_375eb8;
        case 0x375ebcu: goto label_375ebc;
        case 0x375ec0u: goto label_375ec0;
        case 0x375ec4u: goto label_375ec4;
        case 0x375ec8u: goto label_375ec8;
        case 0x375eccu: goto label_375ecc;
        case 0x375ed0u: goto label_375ed0;
        case 0x375ed4u: goto label_375ed4;
        case 0x375ed8u: goto label_375ed8;
        case 0x375edcu: goto label_375edc;
        case 0x375ee0u: goto label_375ee0;
        case 0x375ee4u: goto label_375ee4;
        case 0x375ee8u: goto label_375ee8;
        case 0x375eecu: goto label_375eec;
        case 0x375ef0u: goto label_375ef0;
        case 0x375ef4u: goto label_375ef4;
        case 0x375ef8u: goto label_375ef8;
        case 0x375efcu: goto label_375efc;
        case 0x375f00u: goto label_375f00;
        case 0x375f04u: goto label_375f04;
        case 0x375f08u: goto label_375f08;
        case 0x375f0cu: goto label_375f0c;
        case 0x375f10u: goto label_375f10;
        case 0x375f14u: goto label_375f14;
        case 0x375f18u: goto label_375f18;
        case 0x375f1cu: goto label_375f1c;
        case 0x375f20u: goto label_375f20;
        case 0x375f24u: goto label_375f24;
        case 0x375f28u: goto label_375f28;
        case 0x375f2cu: goto label_375f2c;
        case 0x375f30u: goto label_375f30;
        case 0x375f34u: goto label_375f34;
        case 0x375f38u: goto label_375f38;
        case 0x375f3cu: goto label_375f3c;
        case 0x375f40u: goto label_375f40;
        case 0x375f44u: goto label_375f44;
        case 0x375f48u: goto label_375f48;
        case 0x375f4cu: goto label_375f4c;
        case 0x375f50u: goto label_375f50;
        case 0x375f54u: goto label_375f54;
        case 0x375f58u: goto label_375f58;
        case 0x375f5cu: goto label_375f5c;
        case 0x375f60u: goto label_375f60;
        case 0x375f64u: goto label_375f64;
        case 0x375f68u: goto label_375f68;
        case 0x375f6cu: goto label_375f6c;
        case 0x375f70u: goto label_375f70;
        case 0x375f74u: goto label_375f74;
        case 0x375f78u: goto label_375f78;
        case 0x375f7cu: goto label_375f7c;
        case 0x375f80u: goto label_375f80;
        case 0x375f84u: goto label_375f84;
        case 0x375f88u: goto label_375f88;
        case 0x375f8cu: goto label_375f8c;
        case 0x375f90u: goto label_375f90;
        case 0x375f94u: goto label_375f94;
        case 0x375f98u: goto label_375f98;
        case 0x375f9cu: goto label_375f9c;
        case 0x375fa0u: goto label_375fa0;
        case 0x375fa4u: goto label_375fa4;
        case 0x375fa8u: goto label_375fa8;
        case 0x375facu: goto label_375fac;
        case 0x375fb0u: goto label_375fb0;
        case 0x375fb4u: goto label_375fb4;
        case 0x375fb8u: goto label_375fb8;
        case 0x375fbcu: goto label_375fbc;
        case 0x375fc0u: goto label_375fc0;
        case 0x375fc4u: goto label_375fc4;
        case 0x375fc8u: goto label_375fc8;
        case 0x375fccu: goto label_375fcc;
        case 0x375fd0u: goto label_375fd0;
        case 0x375fd4u: goto label_375fd4;
        case 0x375fd8u: goto label_375fd8;
        case 0x375fdcu: goto label_375fdc;
        case 0x375fe0u: goto label_375fe0;
        case 0x375fe4u: goto label_375fe4;
        case 0x375fe8u: goto label_375fe8;
        case 0x375fecu: goto label_375fec;
        case 0x375ff0u: goto label_375ff0;
        case 0x375ff4u: goto label_375ff4;
        case 0x375ff8u: goto label_375ff8;
        case 0x375ffcu: goto label_375ffc;
        case 0x376000u: goto label_376000;
        case 0x376004u: goto label_376004;
        case 0x376008u: goto label_376008;
        case 0x37600cu: goto label_37600c;
        case 0x376010u: goto label_376010;
        case 0x376014u: goto label_376014;
        case 0x376018u: goto label_376018;
        case 0x37601cu: goto label_37601c;
        case 0x376020u: goto label_376020;
        case 0x376024u: goto label_376024;
        case 0x376028u: goto label_376028;
        case 0x37602cu: goto label_37602c;
        case 0x376030u: goto label_376030;
        case 0x376034u: goto label_376034;
        case 0x376038u: goto label_376038;
        case 0x37603cu: goto label_37603c;
        default: break;
    }

    ctx->pc = 0x375ac0u;

label_375ac0:
    // 0x375ac0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x375ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_375ac4:
    // 0x375ac4: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x375ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_375ac8:
    // 0x375ac8: 0x24426fb8  addiu       $v0, $v0, 0x6FB8
    ctx->pc = 0x375ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28600));
label_375acc:
    // 0x375acc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x375accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_375ad0:
    // 0x375ad0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x375ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_375ad4:
    // 0x375ad4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x375ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_375ad8:
    // 0x375ad8: 0x3e00008  jr          $ra
label_375adc:
    if (ctx->pc == 0x375ADCu) {
        ctx->pc = 0x375ADCu;
            // 0x375adc: 0xac656070  sw          $a1, 0x6070($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24688), GPR_U32(ctx, 5));
        ctx->pc = 0x375AE0u;
        goto label_375ae0;
    }
    ctx->pc = 0x375AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375AD8u;
            // 0x375adc: 0xac656070  sw          $a1, 0x6070($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x375AE0u;
label_375ae0:
    // 0x375ae0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x375ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_375ae4:
    // 0x375ae4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x375ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_375ae8:
    // 0x375ae8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x375ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_375aec:
    // 0x375aec: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x375aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_375af0:
    // 0x375af0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x375af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_375af4:
    // 0x375af4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x375af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_375af8:
    // 0x375af8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x375af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_375afc:
    // 0x375afc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x375afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_375b00:
    // 0x375b00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x375b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_375b04:
    // 0x375b04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x375b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_375b08:
    // 0x375b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x375b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_375b0c:
    // 0x375b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_375b10:
    // 0x375b10: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x375b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_375b14:
    // 0x375b14: 0x10a3013c  beq         $a1, $v1, . + 4 + (0x13C << 2)
label_375b18:
    if (ctx->pc == 0x375B18u) {
        ctx->pc = 0x375B18u;
            // 0x375b18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375B1Cu;
        goto label_375b1c;
    }
    ctx->pc = 0x375B14u;
    {
        const bool branch_taken_0x375b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x375B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375B14u;
            // 0x375b18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375b14) {
            ctx->pc = 0x376008u;
            goto label_376008;
        }
    }
    ctx->pc = 0x375B1Cu;
label_375b1c:
    // 0x375b1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_375b20:
    // 0x375b20: 0x50a30016  beql        $a1, $v1, . + 4 + (0x16 << 2)
label_375b24:
    if (ctx->pc == 0x375B24u) {
        ctx->pc = 0x375B24u;
            // 0x375b24: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x375B28u;
        goto label_375b28;
    }
    ctx->pc = 0x375B20u;
    {
        const bool branch_taken_0x375b20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x375b20) {
            ctx->pc = 0x375B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x375B20u;
            // 0x375b24: 0x8e110050  lw          $s1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x375B7Cu;
            goto label_375b7c;
        }
    }
    ctx->pc = 0x375B28u;
label_375b28:
    // 0x375b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_375b2c:
    // 0x375b2c: 0x50a3000b  beql        $a1, $v1, . + 4 + (0xB << 2)
label_375b30:
    if (ctx->pc == 0x375B30u) {
        ctx->pc = 0x375B30u;
            // 0x375b30: 0xc60102b4  lwc1        $f1, 0x2B4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x375B34u;
        goto label_375b34;
    }
    ctx->pc = 0x375B2Cu;
    {
        const bool branch_taken_0x375b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x375b2c) {
            ctx->pc = 0x375B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x375B2Cu;
            // 0x375b30: 0xc60102b4  lwc1        $f1, 0x2B4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x375B5Cu;
            goto label_375b5c;
        }
    }
    ctx->pc = 0x375B34u;
label_375b34:
    // 0x375b34: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_375b38:
    if (ctx->pc == 0x375B38u) {
        ctx->pc = 0x375B38u;
            // 0x375b38: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x375B3Cu;
        goto label_375b3c;
    }
    ctx->pc = 0x375B34u;
    {
        const bool branch_taken_0x375b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x375b34) {
            ctx->pc = 0x375B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x375B34u;
            // 0x375b38: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x375B44u;
            goto label_375b44;
        }
    }
    ctx->pc = 0x375B3Cu;
label_375b3c:
    // 0x375b3c: 0x10000132  b           . + 4 + (0x132 << 2)
label_375b40:
    if (ctx->pc == 0x375B40u) {
        ctx->pc = 0x375B44u;
        goto label_375b44;
    }
    ctx->pc = 0x375B3Cu;
    {
        const bool branch_taken_0x375b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375b3c) {
            ctx->pc = 0x376008u;
            goto label_376008;
        }
    }
    ctx->pc = 0x375B44u;
label_375b44:
    // 0x375b44: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x375b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_375b48:
    // 0x375b48: 0x320f809  jalr        $t9
label_375b4c:
    if (ctx->pc == 0x375B4Cu) {
        ctx->pc = 0x375B50u;
        goto label_375b50;
    }
    ctx->pc = 0x375B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x375B50u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x375B50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x375B50u; }
            if (ctx->pc != 0x375B50u) { return; }
        }
        }
    }
    ctx->pc = 0x375B50u;
label_375b50:
    // 0x375b50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_375b54:
    // 0x375b54: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x375b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_375b58:
    // 0x375b58: 0xc60102b4  lwc1        $f1, 0x2B4($s0)
    ctx->pc = 0x375b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375b5c:
    // 0x375b5c: 0xc60002b8  lwc1        $f0, 0x2B8($s0)
    ctx->pc = 0x375b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375b60:
    // 0x375b60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x375b60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375b64:
    // 0x375b64: 0x45010128  bc1t        . + 4 + (0x128 << 2)
label_375b68:
    if (ctx->pc == 0x375B68u) {
        ctx->pc = 0x375B6Cu;
        goto label_375b6c;
    }
    ctx->pc = 0x375B64u;
    {
        const bool branch_taken_0x375b64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375b64) {
            ctx->pc = 0x376008u;
            goto label_376008;
        }
    }
    ctx->pc = 0x375B6Cu;
label_375b6c:
    // 0x375b6c: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x375b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
label_375b70:
    // 0x375b70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_375b74:
    // 0x375b74: 0x10000124  b           . + 4 + (0x124 << 2)
label_375b78:
    if (ctx->pc == 0x375B78u) {
        ctx->pc = 0x375B78u;
            // 0x375b78: 0xae0300dc  sw          $v1, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
        ctx->pc = 0x375B7Cu;
        goto label_375b7c;
    }
    ctx->pc = 0x375B74u;
    {
        const bool branch_taken_0x375b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375B74u;
            // 0x375b78: 0xae0300dc  sw          $v1, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375b74) {
            ctx->pc = 0x376008u;
            goto label_376008;
        }
    }
    ctx->pc = 0x375B7Cu;
label_375b7c:
    // 0x375b7c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x375b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_375b80:
    // 0x375b80: 0xc0dc9bc  jal         func_3726F0
label_375b84:
    if (ctx->pc == 0x375B84u) {
        ctx->pc = 0x375B84u;
            // 0x375b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375B88u;
        goto label_375b88;
    }
    ctx->pc = 0x375B80u;
    SET_GPR_U32(ctx, 31, 0x375B88u);
    ctx->pc = 0x375B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375B80u;
            // 0x375b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375B88u; }
        if (ctx->pc != 0x375B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375B88u; }
        if (ctx->pc != 0x375B88u) { return; }
    }
    ctx->pc = 0x375B88u;
label_375b88:
    // 0x375b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x375b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_375b8c:
    // 0x375b8c: 0xc0dc9a0  jal         func_372680
label_375b90:
    if (ctx->pc == 0x375B90u) {
        ctx->pc = 0x375B90u;
            // 0x375b90: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x375B94u;
        goto label_375b94;
    }
    ctx->pc = 0x375B8Cu;
    SET_GPR_U32(ctx, 31, 0x375B94u);
    ctx->pc = 0x375B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375B8Cu;
            // 0x375b90: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375B94u; }
        if (ctx->pc != 0x375B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375B94u; }
        if (ctx->pc != 0x375B94u) { return; }
    }
    ctx->pc = 0x375B94u;
label_375b94:
    // 0x375b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375b98:
    // 0x375b98: 0xc0dd8d8  jal         func_376360
label_375b9c:
    if (ctx->pc == 0x375B9Cu) {
        ctx->pc = 0x375B9Cu;
            // 0x375b9c: 0x261100f0  addiu       $s1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x375BA0u;
        goto label_375ba0;
    }
    ctx->pc = 0x375B98u;
    SET_GPR_U32(ctx, 31, 0x375BA0u);
    ctx->pc = 0x375B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375B98u;
            // 0x375b9c: 0x261100f0  addiu       $s1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376360u;
    if (runtime->hasFunction(0x376360u)) {
        auto targetFn = runtime->lookupFunction(0x376360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BA0u; }
        if (ctx->pc != 0x375BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376360_0x376360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BA0u; }
        if (ctx->pc != 0x375BA0u) { return; }
    }
    ctx->pc = 0x375BA0u;
label_375ba0:
    // 0x375ba0: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x375ba0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_375ba4:
    // 0x375ba4: 0x102000d2  beqz        $at, . + 4 + (0xD2 << 2)
label_375ba8:
    if (ctx->pc == 0x375BA8u) {
        ctx->pc = 0x375BACu;
        goto label_375bac;
    }
    ctx->pc = 0x375BA4u;
    {
        const bool branch_taken_0x375ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x375ba4) {
            ctx->pc = 0x375EF0u;
            goto label_375ef0;
        }
    }
    ctx->pc = 0x375BACu;
label_375bac:
    // 0x375bac: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x375bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_375bb0:
    // 0x375bb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x375bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_375bb4:
    // 0x375bb4: 0x24635020  addiu       $v1, $v1, 0x5020
    ctx->pc = 0x375bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20512));
label_375bb8:
    // 0x375bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x375bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_375bbc:
    // 0x375bbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x375bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_375bc0:
    // 0x375bc0: 0x400008  jr          $v0
label_375bc4:
    if (ctx->pc == 0x375BC4u) {
        ctx->pc = 0x375BC8u;
        goto label_375bc8;
    }
    ctx->pc = 0x375BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x375BC8u: goto label_375bc8;
            case 0x375CC0u: goto label_375cc0;
            case 0x375DA0u: goto label_375da0;
            case 0x375E94u: goto label_375e94;
            case 0x375EF0u: goto label_375ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x375BC8u;
label_375bc8:
    // 0x375bc8: 0xc0dc408  jal         func_371020
label_375bcc:
    if (ctx->pc == 0x375BCCu) {
        ctx->pc = 0x375BCCu;
            // 0x375bcc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x375BD0u;
        goto label_375bd0;
    }
    ctx->pc = 0x375BC8u;
    SET_GPR_U32(ctx, 31, 0x375BD0u);
    ctx->pc = 0x375BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375BC8u;
            // 0x375bcc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BD0u; }
        if (ctx->pc != 0x375BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BD0u; }
        if (ctx->pc != 0x375BD0u) { return; }
    }
    ctx->pc = 0x375BD0u;
label_375bd0:
    // 0x375bd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x375bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375bd4:
    // 0x375bd4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x375bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_375bd8:
    // 0x375bd8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x375bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_375bdc:
    // 0x375bdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x375bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_375be0:
    // 0x375be0: 0xc0d88a4  jal         func_362290
label_375be4:
    if (ctx->pc == 0x375BE4u) {
        ctx->pc = 0x375BE4u;
            // 0x375be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375BE8u;
        goto label_375be8;
    }
    ctx->pc = 0x375BE0u;
    SET_GPR_U32(ctx, 31, 0x375BE8u);
    ctx->pc = 0x375BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375BE0u;
            // 0x375be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362290u;
    if (runtime->hasFunction(0x362290u)) {
        auto targetFn = runtime->lookupFunction(0x362290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BE8u; }
        if (ctx->pc != 0x375BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362290_0x362290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BE8u; }
        if (ctx->pc != 0x375BE8u) { return; }
    }
    ctx->pc = 0x375BE8u;
label_375be8:
    // 0x375be8: 0xc0775b8  jal         func_1DD6E0
label_375bec:
    if (ctx->pc == 0x375BECu) {
        ctx->pc = 0x375BF0u;
        goto label_375bf0;
    }
    ctx->pc = 0x375BE8u;
    SET_GPR_U32(ctx, 31, 0x375BF0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BF0u; }
        if (ctx->pc != 0x375BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BF0u; }
        if (ctx->pc != 0x375BF0u) { return; }
    }
    ctx->pc = 0x375BF0u;
label_375bf0:
    // 0x375bf0: 0xc0775b4  jal         func_1DD6D0
label_375bf4:
    if (ctx->pc == 0x375BF4u) {
        ctx->pc = 0x375BF4u;
            // 0x375bf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x375BF8u;
        goto label_375bf8;
    }
    ctx->pc = 0x375BF0u;
    SET_GPR_U32(ctx, 31, 0x375BF8u);
    ctx->pc = 0x375BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375BF0u;
            // 0x375bf4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BF8u; }
        if (ctx->pc != 0x375BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375BF8u; }
        if (ctx->pc != 0x375BF8u) { return; }
    }
    ctx->pc = 0x375BF8u;
label_375bf8:
    // 0x375bf8: 0xc6020280  lwc1        $f2, 0x280($s0)
    ctx->pc = 0x375bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_375bfc:
    // 0x375bfc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x375bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_375c00:
    // 0x375c00: 0x0  nop
    ctx->pc = 0x375c00u;
    // NOP
label_375c04:
    // 0x375c04: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x375c04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_375c08:
    // 0x375c08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x375c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375c0c:
    // 0x375c0c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_375c10:
    if (ctx->pc == 0x375C10u) {
        ctx->pc = 0x375C10u;
            // 0x375c10: 0xe6000280  swc1        $f0, 0x280($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
        ctx->pc = 0x375C14u;
        goto label_375c14;
    }
    ctx->pc = 0x375C0Cu;
    {
        const bool branch_taken_0x375c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x375C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375C0Cu;
            // 0x375c10: 0xe6000280  swc1        $f0, 0x280($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375c0c) {
            ctx->pc = 0x375C88u;
            goto label_375c88;
        }
    }
    ctx->pc = 0x375C14u;
label_375c14:
    // 0x375c14: 0xc6000284  lwc1        $f0, 0x284($s0)
    ctx->pc = 0x375c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_375c18:
    // 0x375c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375c1c:
    // 0x375c1c: 0xc0dd8d4  jal         func_376350
label_375c20:
    if (ctx->pc == 0x375C20u) {
        ctx->pc = 0x375C20u;
            // 0x375c20: 0xe6000280  swc1        $f0, 0x280($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
        ctx->pc = 0x375C24u;
        goto label_375c24;
    }
    ctx->pc = 0x375C1Cu;
    SET_GPR_U32(ctx, 31, 0x375C24u);
    ctx->pc = 0x375C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375C1Cu;
            // 0x375c20: 0xe6000280  swc1        $f0, 0x280($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x376350u;
    if (runtime->hasFunction(0x376350u)) {
        auto targetFn = runtime->lookupFunction(0x376350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C24u; }
        if (ctx->pc != 0x375C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376350_0x376350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C24u; }
        if (ctx->pc != 0x375C24u) { return; }
    }
    ctx->pc = 0x375C24u;
label_375c24:
    // 0x375c24: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_375c28:
    if (ctx->pc == 0x375C28u) {
        ctx->pc = 0x375C28u;
            // 0x375c28: 0xae000288  sw          $zero, 0x288($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
        ctx->pc = 0x375C2Cu;
        goto label_375c2c;
    }
    ctx->pc = 0x375C24u;
    {
        const bool branch_taken_0x375c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x375c24) {
            ctx->pc = 0x375C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x375C24u;
            // 0x375c28: 0xae000288  sw          $zero, 0x288($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x375C88u;
            goto label_375c88;
        }
    }
    ctx->pc = 0x375C2Cu;
label_375c2c:
    // 0x375c2c: 0xae020288  sw          $v0, 0x288($s0)
    ctx->pc = 0x375c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 2));
label_375c30:
    // 0x375c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375c34:
    // 0x375c34: 0xc0dd8c0  jal         func_376300
label_375c38:
    if (ctx->pc == 0x375C38u) {
        ctx->pc = 0x375C38u;
            // 0x375c38: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x375C3Cu;
        goto label_375c3c;
    }
    ctx->pc = 0x375C34u;
    SET_GPR_U32(ctx, 31, 0x375C3Cu);
    ctx->pc = 0x375C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375C34u;
            // 0x375c38: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376300u;
    if (runtime->hasFunction(0x376300u)) {
        auto targetFn = runtime->lookupFunction(0x376300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C3Cu; }
        if (ctx->pc != 0x375C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376300_0x376300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C3Cu; }
        if (ctx->pc != 0x375C3Cu) { return; }
    }
    ctx->pc = 0x375C3Cu;
label_375c3c:
    // 0x375c3c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x375c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_375c40:
    // 0x375c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375c44:
    // 0x375c44: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x375c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_375c48:
    // 0x375c48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x375c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_375c4c:
    // 0x375c4c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x375c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_375c50:
    // 0x375c50: 0xc0dda40  jal         func_376900
label_375c54:
    if (ctx->pc == 0x375C54u) {
        ctx->pc = 0x375C54u;
            // 0x375c54: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x375C58u;
        goto label_375c58;
    }
    ctx->pc = 0x375C50u;
    SET_GPR_U32(ctx, 31, 0x375C58u);
    ctx->pc = 0x375C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375C50u;
            // 0x375c54: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376900u;
    if (runtime->hasFunction(0x376900u)) {
        auto targetFn = runtime->lookupFunction(0x376900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C58u; }
        if (ctx->pc != 0x375C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376900_0x376900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C58u; }
        if (ctx->pc != 0x375C58u) { return; }
    }
    ctx->pc = 0x375C58u;
label_375c58:
    // 0x375c58: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x375c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_375c5c:
    // 0x375c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375c60:
    // 0x375c60: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x375c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_375c64:
    // 0x375c64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x375c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_375c68:
    // 0x375c68: 0xc0dd898  jal         func_376260
label_375c6c:
    if (ctx->pc == 0x375C6Cu) {
        ctx->pc = 0x375C6Cu;
            // 0x375c6c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x375C70u;
        goto label_375c70;
    }
    ctx->pc = 0x375C68u;
    SET_GPR_U32(ctx, 31, 0x375C70u);
    ctx->pc = 0x375C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375C68u;
            // 0x375c6c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376260u;
    if (runtime->hasFunction(0x376260u)) {
        auto targetFn = runtime->lookupFunction(0x376260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C70u; }
        if (ctx->pc != 0x375C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376260_0x376260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C70u; }
        if (ctx->pc != 0x375C70u) { return; }
    }
    ctx->pc = 0x375C70u;
label_375c70:
    // 0x375c70: 0x26040290  addiu       $a0, $s0, 0x290
    ctx->pc = 0x375c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
label_375c74:
    // 0x375c74: 0xc04cc04  jal         func_133010
label_375c78:
    if (ctx->pc == 0x375C78u) {
        ctx->pc = 0x375C78u;
            // 0x375c78: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x375C7Cu;
        goto label_375c7c;
    }
    ctx->pc = 0x375C74u;
    SET_GPR_U32(ctx, 31, 0x375C7Cu);
    ctx->pc = 0x375C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375C74u;
            // 0x375c78: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C7Cu; }
        if (ctx->pc != 0x375C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C7Cu; }
        if (ctx->pc != 0x375C7Cu) { return; }
    }
    ctx->pc = 0x375C7Cu;
label_375c7c:
    // 0x375c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375c80:
    // 0x375c80: 0xc0dd894  jal         func_376250
label_375c84:
    if (ctx->pc == 0x375C84u) {
        ctx->pc = 0x375C84u;
            // 0x375c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x375C88u;
        goto label_375c88;
    }
    ctx->pc = 0x375C80u;
    SET_GPR_U32(ctx, 31, 0x375C88u);
    ctx->pc = 0x375C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375C80u;
            // 0x375c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376250u;
    if (runtime->hasFunction(0x376250u)) {
        auto targetFn = runtime->lookupFunction(0x376250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C88u; }
        if (ctx->pc != 0x375C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376250_0x376250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C88u; }
        if (ctx->pc != 0x375C88u) { return; }
    }
    ctx->pc = 0x375C88u;
label_375c88:
    // 0x375c88: 0xc0dd890  jal         func_376240
label_375c8c:
    if (ctx->pc == 0x375C8Cu) {
        ctx->pc = 0x375C8Cu;
            // 0x375c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375C90u;
        goto label_375c90;
    }
    ctx->pc = 0x375C88u;
    SET_GPR_U32(ctx, 31, 0x375C90u);
    ctx->pc = 0x375C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375C88u;
            // 0x375c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376240u;
    if (runtime->hasFunction(0x376240u)) {
        auto targetFn = runtime->lookupFunction(0x376240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C90u; }
        if (ctx->pc != 0x375C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376240_0x376240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375C90u; }
        if (ctx->pc != 0x375C90u) { return; }
    }
    ctx->pc = 0x375C90u;
label_375c90:
    // 0x375c90: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_375c94:
    if (ctx->pc == 0x375C94u) {
        ctx->pc = 0x375C94u;
            // 0x375c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375C98u;
        goto label_375c98;
    }
    ctx->pc = 0x375C90u;
    {
        const bool branch_taken_0x375c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x375c90) {
            ctx->pc = 0x375C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x375C90u;
            // 0x375c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x375CB0u;
            goto label_375cb0;
        }
    }
    ctx->pc = 0x375C98u;
label_375c98:
    // 0x375c98: 0xc0dd88c  jal         func_376230
label_375c9c:
    if (ctx->pc == 0x375C9Cu) {
        ctx->pc = 0x375C9Cu;
            // 0x375c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375CA0u;
        goto label_375ca0;
    }
    ctx->pc = 0x375C98u;
    SET_GPR_U32(ctx, 31, 0x375CA0u);
    ctx->pc = 0x375C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375C98u;
            // 0x375c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376230u;
    if (runtime->hasFunction(0x376230u)) {
        auto targetFn = runtime->lookupFunction(0x376230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CA0u; }
        if (ctx->pc != 0x375CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376230_0x376230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CA0u; }
        if (ctx->pc != 0x375CA0u) { return; }
    }
    ctx->pc = 0x375CA0u;
label_375ca0:
    // 0x375ca0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_375ca4:
    // 0x375ca4: 0x14430092  bne         $v0, $v1, . + 4 + (0x92 << 2)
label_375ca8:
    if (ctx->pc == 0x375CA8u) {
        ctx->pc = 0x375CACu;
        goto label_375cac;
    }
    ctx->pc = 0x375CA4u;
    {
        const bool branch_taken_0x375ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x375ca4) {
            ctx->pc = 0x375EF0u;
            goto label_375ef0;
        }
    }
    ctx->pc = 0x375CACu;
label_375cac:
    // 0x375cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375cb0:
    // 0x375cb0: 0xc0dd888  jal         func_376220
label_375cb4:
    if (ctx->pc == 0x375CB4u) {
        ctx->pc = 0x375CB4u;
            // 0x375cb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x375CB8u;
        goto label_375cb8;
    }
    ctx->pc = 0x375CB0u;
    SET_GPR_U32(ctx, 31, 0x375CB8u);
    ctx->pc = 0x375CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375CB0u;
            // 0x375cb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376220u;
    if (runtime->hasFunction(0x376220u)) {
        auto targetFn = runtime->lookupFunction(0x376220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CB8u; }
        if (ctx->pc != 0x375CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376220_0x376220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CB8u; }
        if (ctx->pc != 0x375CB8u) { return; }
    }
    ctx->pc = 0x375CB8u;
label_375cb8:
    // 0x375cb8: 0x1000008d  b           . + 4 + (0x8D << 2)
label_375cbc:
    if (ctx->pc == 0x375CBCu) {
        ctx->pc = 0x375CC0u;
        goto label_375cc0;
    }
    ctx->pc = 0x375CB8u;
    {
        const bool branch_taken_0x375cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375cb8) {
            ctx->pc = 0x375EF0u;
            goto label_375ef0;
        }
    }
    ctx->pc = 0x375CC0u;
label_375cc0:
    // 0x375cc0: 0xc0dd878  jal         func_3761E0
label_375cc4:
    if (ctx->pc == 0x375CC4u) {
        ctx->pc = 0x375CC4u;
            // 0x375cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375CC8u;
        goto label_375cc8;
    }
    ctx->pc = 0x375CC0u;
    SET_GPR_U32(ctx, 31, 0x375CC8u);
    ctx->pc = 0x375CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375CC0u;
            // 0x375cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3761E0u;
    if (runtime->hasFunction(0x3761E0u)) {
        auto targetFn = runtime->lookupFunction(0x3761E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CC8u; }
        if (ctx->pc != 0x375CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003761E0_0x3761e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CC8u; }
        if (ctx->pc != 0x375CC8u) { return; }
    }
    ctx->pc = 0x375CC8u;
label_375cc8:
    // 0x375cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375ccc:
    // 0x375ccc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x375cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_375cd0:
    // 0x375cd0: 0xc0dd9d0  jal         func_376740
label_375cd4:
    if (ctx->pc == 0x375CD4u) {
        ctx->pc = 0x375CD4u;
            // 0x375cd4: 0x26060290  addiu       $a2, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->pc = 0x375CD8u;
        goto label_375cd8;
    }
    ctx->pc = 0x375CD0u;
    SET_GPR_U32(ctx, 31, 0x375CD8u);
    ctx->pc = 0x375CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375CD0u;
            // 0x375cd4: 0x26060290  addiu       $a2, $s0, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376740u;
    if (runtime->hasFunction(0x376740u)) {
        auto targetFn = runtime->lookupFunction(0x376740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CD8u; }
        if (ctx->pc != 0x375CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376740_0x376740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CD8u; }
        if (ctx->pc != 0x375CD8u) { return; }
    }
    ctx->pc = 0x375CD8u;
label_375cd8:
    // 0x375cd8: 0xc04f26c  jal         func_13C9B0
label_375cdc:
    if (ctx->pc == 0x375CDCu) {
        ctx->pc = 0x375CDCu;
            // 0x375cdc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x375CE0u;
        goto label_375ce0;
    }
    ctx->pc = 0x375CD8u;
    SET_GPR_U32(ctx, 31, 0x375CE0u);
    ctx->pc = 0x375CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375CD8u;
            // 0x375cdc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CE0u; }
        if (ctx->pc != 0x375CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CE0u; }
        if (ctx->pc != 0x375CE0u) { return; }
    }
    ctx->pc = 0x375CE0u;
label_375ce0:
    // 0x375ce0: 0xc0d1c14  jal         func_347050
label_375ce4:
    if (ctx->pc == 0x375CE4u) {
        ctx->pc = 0x375CE4u;
            // 0x375ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375CE8u;
        goto label_375ce8;
    }
    ctx->pc = 0x375CE0u;
    SET_GPR_U32(ctx, 31, 0x375CE8u);
    ctx->pc = 0x375CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375CE0u;
            // 0x375ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CE8u; }
        if (ctx->pc != 0x375CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CE8u; }
        if (ctx->pc != 0x375CE8u) { return; }
    }
    ctx->pc = 0x375CE8u;
label_375ce8:
    // 0x375ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x375ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375cec:
    // 0x375cec: 0xc04f278  jal         func_13C9E0
label_375cf0:
    if (ctx->pc == 0x375CF0u) {
        ctx->pc = 0x375CF0u;
            // 0x375cf0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x375CF4u;
        goto label_375cf4;
    }
    ctx->pc = 0x375CECu;
    SET_GPR_U32(ctx, 31, 0x375CF4u);
    ctx->pc = 0x375CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375CECu;
            // 0x375cf0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CF4u; }
        if (ctx->pc != 0x375CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CF4u; }
        if (ctx->pc != 0x375CF4u) { return; }
    }
    ctx->pc = 0x375CF4u;
label_375cf4:
    // 0x375cf4: 0xc0d1c10  jal         func_347040
label_375cf8:
    if (ctx->pc == 0x375CF8u) {
        ctx->pc = 0x375CF8u;
            // 0x375cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375CFCu;
        goto label_375cfc;
    }
    ctx->pc = 0x375CF4u;
    SET_GPR_U32(ctx, 31, 0x375CFCu);
    ctx->pc = 0x375CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375CF4u;
            // 0x375cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CFCu; }
        if (ctx->pc != 0x375CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375CFCu; }
        if (ctx->pc != 0x375CFCu) { return; }
    }
    ctx->pc = 0x375CFCu;
label_375cfc:
    // 0x375cfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x375cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375d00:
    // 0x375d00: 0xc04ce80  jal         func_133A00
label_375d04:
    if (ctx->pc == 0x375D04u) {
        ctx->pc = 0x375D04u;
            // 0x375d04: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x375D08u;
        goto label_375d08;
    }
    ctx->pc = 0x375D00u;
    SET_GPR_U32(ctx, 31, 0x375D08u);
    ctx->pc = 0x375D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375D00u;
            // 0x375d04: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D08u; }
        if (ctx->pc != 0x375D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D08u; }
        if (ctx->pc != 0x375D08u) { return; }
    }
    ctx->pc = 0x375D08u;
label_375d08:
    // 0x375d08: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x375d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_375d0c:
    // 0x375d0c: 0xc04ccf4  jal         func_1333D0
label_375d10:
    if (ctx->pc == 0x375D10u) {
        ctx->pc = 0x375D10u;
            // 0x375d10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375D14u;
        goto label_375d14;
    }
    ctx->pc = 0x375D0Cu;
    SET_GPR_U32(ctx, 31, 0x375D14u);
    ctx->pc = 0x375D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375D0Cu;
            // 0x375d10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D14u; }
        if (ctx->pc != 0x375D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D14u; }
        if (ctx->pc != 0x375D14u) { return; }
    }
    ctx->pc = 0x375D14u;
label_375d14:
    // 0x375d14: 0xc077264  jal         func_1DC990
label_375d18:
    if (ctx->pc == 0x375D18u) {
        ctx->pc = 0x375D18u;
            // 0x375d18: 0x8e040288  lw          $a0, 0x288($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
        ctx->pc = 0x375D1Cu;
        goto label_375d1c;
    }
    ctx->pc = 0x375D14u;
    SET_GPR_U32(ctx, 31, 0x375D1Cu);
    ctx->pc = 0x375D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375D14u;
            // 0x375d18: 0x8e040288  lw          $a0, 0x288($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D1Cu; }
        if (ctx->pc != 0x375D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D1Cu; }
        if (ctx->pc != 0x375D1Cu) { return; }
    }
    ctx->pc = 0x375D1Cu;
label_375d1c:
    // 0x375d1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x375d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375d20:
    // 0x375d20: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x375d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_375d24:
    // 0x375d24: 0xc04cca0  jal         func_133280
label_375d28:
    if (ctx->pc == 0x375D28u) {
        ctx->pc = 0x375D28u;
            // 0x375d28: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x375D2Cu;
        goto label_375d2c;
    }
    ctx->pc = 0x375D24u;
    SET_GPR_U32(ctx, 31, 0x375D2Cu);
    ctx->pc = 0x375D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375D24u;
            // 0x375d28: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D2Cu; }
        if (ctx->pc != 0x375D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D2Cu; }
        if (ctx->pc != 0x375D2Cu) { return; }
    }
    ctx->pc = 0x375D2Cu;
label_375d2c:
    // 0x375d2c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x375d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375d30:
    // 0x375d30: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x375d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_375d34:
    // 0x375d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_375d38:
    // 0x375d38: 0x0  nop
    ctx->pc = 0x375d38u;
    // NOP
label_375d3c:
    // 0x375d3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375d40:
    // 0x375d40: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_375d44:
    if (ctx->pc == 0x375D44u) {
        ctx->pc = 0x375D44u;
            // 0x375d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375D48u;
        goto label_375d48;
    }
    ctx->pc = 0x375D40u;
    {
        const bool branch_taken_0x375d40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375d40) {
            ctx->pc = 0x375D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x375D40u;
            // 0x375d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x375D60u;
            goto label_375d60;
        }
    }
    ctx->pc = 0x375D48u;
label_375d48:
    // 0x375d48: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x375d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_375d4c:
    // 0x375d4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x375d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_375d50:
    // 0x375d50: 0xc0dd860  jal         func_376180
label_375d54:
    if (ctx->pc == 0x375D54u) {
        ctx->pc = 0x375D54u;
            // 0x375d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375D58u;
        goto label_375d58;
    }
    ctx->pc = 0x375D50u;
    SET_GPR_U32(ctx, 31, 0x375D58u);
    ctx->pc = 0x375D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375D50u;
            // 0x375d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376180u;
    if (runtime->hasFunction(0x376180u)) {
        auto targetFn = runtime->lookupFunction(0x376180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D58u; }
        if (ctx->pc != 0x375D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376180_0x376180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D58u; }
        if (ctx->pc != 0x375D58u) { return; }
    }
    ctx->pc = 0x375D58u;
label_375d58:
    // 0x375d58: 0x10000004  b           . + 4 + (0x4 << 2)
label_375d5c:
    if (ctx->pc == 0x375D5Cu) {
        ctx->pc = 0x375D5Cu;
            // 0x375d5c: 0xc7a100e8  lwc1        $f1, 0xE8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x375D60u;
        goto label_375d60;
    }
    ctx->pc = 0x375D58u;
    {
        const bool branch_taken_0x375d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375D58u;
            // 0x375d5c: 0xc7a100e8  lwc1        $f1, 0xE8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375d58) {
            ctx->pc = 0x375D6Cu;
            goto label_375d6c;
        }
    }
    ctx->pc = 0x375D60u;
label_375d60:
    // 0x375d60: 0xc0dd848  jal         func_376120
label_375d64:
    if (ctx->pc == 0x375D64u) {
        ctx->pc = 0x375D68u;
        goto label_375d68;
    }
    ctx->pc = 0x375D60u;
    SET_GPR_U32(ctx, 31, 0x375D68u);
    ctx->pc = 0x376120u;
    if (runtime->hasFunction(0x376120u)) {
        auto targetFn = runtime->lookupFunction(0x376120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D68u; }
        if (ctx->pc != 0x375D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376120_0x376120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D68u; }
        if (ctx->pc != 0x375D68u) { return; }
    }
    ctx->pc = 0x375D68u;
label_375d68:
    // 0x375d68: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x375d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375d6c:
    // 0x375d6c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x375d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_375d70:
    // 0x375d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_375d74:
    // 0x375d74: 0x0  nop
    ctx->pc = 0x375d74u;
    // NOP
label_375d78:
    // 0x375d78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375d7c:
    // 0x375d7c: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
label_375d80:
    if (ctx->pc == 0x375D80u) {
        ctx->pc = 0x375D84u;
        goto label_375d84;
    }
    ctx->pc = 0x375D7Cu;
    {
        const bool branch_taken_0x375d7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375d7c) {
            ctx->pc = 0x375EF0u;
            goto label_375ef0;
        }
    }
    ctx->pc = 0x375D84u;
label_375d84:
    // 0x375d84: 0xc0dd828  jal         func_3760A0
label_375d88:
    if (ctx->pc == 0x375D88u) {
        ctx->pc = 0x375D88u;
            // 0x375d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375D8Cu;
        goto label_375d8c;
    }
    ctx->pc = 0x375D84u;
    SET_GPR_U32(ctx, 31, 0x375D8Cu);
    ctx->pc = 0x375D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375D84u;
            // 0x375d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3760A0u;
    if (runtime->hasFunction(0x3760A0u)) {
        auto targetFn = runtime->lookupFunction(0x3760A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D8Cu; }
        if (ctx->pc != 0x375D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003760A0_0x3760a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D8Cu; }
        if (ctx->pc != 0x375D8Cu) { return; }
    }
    ctx->pc = 0x375D8Cu;
label_375d8c:
    // 0x375d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375d90:
    // 0x375d90: 0xc0dd894  jal         func_376250
label_375d94:
    if (ctx->pc == 0x375D94u) {
        ctx->pc = 0x375D94u;
            // 0x375d94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x375D98u;
        goto label_375d98;
    }
    ctx->pc = 0x375D90u;
    SET_GPR_U32(ctx, 31, 0x375D98u);
    ctx->pc = 0x375D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375D90u;
            // 0x375d94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376250u;
    if (runtime->hasFunction(0x376250u)) {
        auto targetFn = runtime->lookupFunction(0x376250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D98u; }
        if (ctx->pc != 0x375D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376250_0x376250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375D98u; }
        if (ctx->pc != 0x375D98u) { return; }
    }
    ctx->pc = 0x375D98u;
label_375d98:
    // 0x375d98: 0x10000055  b           . + 4 + (0x55 << 2)
label_375d9c:
    if (ctx->pc == 0x375D9Cu) {
        ctx->pc = 0x375DA0u;
        goto label_375da0;
    }
    ctx->pc = 0x375D98u;
    {
        const bool branch_taken_0x375d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375d98) {
            ctx->pc = 0x375EF0u;
            goto label_375ef0;
        }
    }
    ctx->pc = 0x375DA0u;
label_375da0:
    // 0x375da0: 0xc0dd878  jal         func_3761E0
label_375da4:
    if (ctx->pc == 0x375DA4u) {
        ctx->pc = 0x375DA4u;
            // 0x375da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375DA8u;
        goto label_375da8;
    }
    ctx->pc = 0x375DA0u;
    SET_GPR_U32(ctx, 31, 0x375DA8u);
    ctx->pc = 0x375DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375DA0u;
            // 0x375da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3761E0u;
    if (runtime->hasFunction(0x3761E0u)) {
        auto targetFn = runtime->lookupFunction(0x3761E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DA8u; }
        if (ctx->pc != 0x375DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003761E0_0x3761e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DA8u; }
        if (ctx->pc != 0x375DA8u) { return; }
    }
    ctx->pc = 0x375DA8u;
label_375da8:
    // 0x375da8: 0xc04f26c  jal         func_13C9B0
label_375dac:
    if (ctx->pc == 0x375DACu) {
        ctx->pc = 0x375DACu;
            // 0x375dac: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x375DB0u;
        goto label_375db0;
    }
    ctx->pc = 0x375DA8u;
    SET_GPR_U32(ctx, 31, 0x375DB0u);
    ctx->pc = 0x375DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375DA8u;
            // 0x375dac: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DB0u; }
        if (ctx->pc != 0x375DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DB0u; }
        if (ctx->pc != 0x375DB0u) { return; }
    }
    ctx->pc = 0x375DB0u;
label_375db0:
    // 0x375db0: 0xc0d1c14  jal         func_347050
label_375db4:
    if (ctx->pc == 0x375DB4u) {
        ctx->pc = 0x375DB4u;
            // 0x375db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375DB8u;
        goto label_375db8;
    }
    ctx->pc = 0x375DB0u;
    SET_GPR_U32(ctx, 31, 0x375DB8u);
    ctx->pc = 0x375DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375DB0u;
            // 0x375db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DB8u; }
        if (ctx->pc != 0x375DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DB8u; }
        if (ctx->pc != 0x375DB8u) { return; }
    }
    ctx->pc = 0x375DB8u;
label_375db8:
    // 0x375db8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x375db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375dbc:
    // 0x375dbc: 0xc04f278  jal         func_13C9E0
label_375dc0:
    if (ctx->pc == 0x375DC0u) {
        ctx->pc = 0x375DC0u;
            // 0x375dc0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x375DC4u;
        goto label_375dc4;
    }
    ctx->pc = 0x375DBCu;
    SET_GPR_U32(ctx, 31, 0x375DC4u);
    ctx->pc = 0x375DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375DBCu;
            // 0x375dc0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DC4u; }
        if (ctx->pc != 0x375DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DC4u; }
        if (ctx->pc != 0x375DC4u) { return; }
    }
    ctx->pc = 0x375DC4u;
label_375dc4:
    // 0x375dc4: 0xc0d1c10  jal         func_347040
label_375dc8:
    if (ctx->pc == 0x375DC8u) {
        ctx->pc = 0x375DC8u;
            // 0x375dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375DCCu;
        goto label_375dcc;
    }
    ctx->pc = 0x375DC4u;
    SET_GPR_U32(ctx, 31, 0x375DCCu);
    ctx->pc = 0x375DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375DC4u;
            // 0x375dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DCCu; }
        if (ctx->pc != 0x375DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DCCu; }
        if (ctx->pc != 0x375DCCu) { return; }
    }
    ctx->pc = 0x375DCCu;
label_375dcc:
    // 0x375dcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x375dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375dd0:
    // 0x375dd0: 0xc04ce80  jal         func_133A00
label_375dd4:
    if (ctx->pc == 0x375DD4u) {
        ctx->pc = 0x375DD4u;
            // 0x375dd4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x375DD8u;
        goto label_375dd8;
    }
    ctx->pc = 0x375DD0u;
    SET_GPR_U32(ctx, 31, 0x375DD8u);
    ctx->pc = 0x375DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375DD0u;
            // 0x375dd4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DD8u; }
        if (ctx->pc != 0x375DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DD8u; }
        if (ctx->pc != 0x375DD8u) { return; }
    }
    ctx->pc = 0x375DD8u;
label_375dd8:
    // 0x375dd8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x375dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_375ddc:
    // 0x375ddc: 0xc04ccf4  jal         func_1333D0
label_375de0:
    if (ctx->pc == 0x375DE0u) {
        ctx->pc = 0x375DE0u;
            // 0x375de0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375DE4u;
        goto label_375de4;
    }
    ctx->pc = 0x375DDCu;
    SET_GPR_U32(ctx, 31, 0x375DE4u);
    ctx->pc = 0x375DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375DDCu;
            // 0x375de0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DE4u; }
        if (ctx->pc != 0x375DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DE4u; }
        if (ctx->pc != 0x375DE4u) { return; }
    }
    ctx->pc = 0x375DE4u;
label_375de4:
    // 0x375de4: 0xc077264  jal         func_1DC990
label_375de8:
    if (ctx->pc == 0x375DE8u) {
        ctx->pc = 0x375DE8u;
            // 0x375de8: 0x8e040288  lw          $a0, 0x288($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
        ctx->pc = 0x375DECu;
        goto label_375dec;
    }
    ctx->pc = 0x375DE4u;
    SET_GPR_U32(ctx, 31, 0x375DECu);
    ctx->pc = 0x375DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375DE4u;
            // 0x375de8: 0x8e040288  lw          $a0, 0x288($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DECu; }
        if (ctx->pc != 0x375DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DECu; }
        if (ctx->pc != 0x375DECu) { return; }
    }
    ctx->pc = 0x375DECu;
label_375dec:
    // 0x375dec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x375decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375df0:
    // 0x375df0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x375df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_375df4:
    // 0x375df4: 0xc04cca0  jal         func_133280
label_375df8:
    if (ctx->pc == 0x375DF8u) {
        ctx->pc = 0x375DF8u;
            // 0x375df8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x375DFCu;
        goto label_375dfc;
    }
    ctx->pc = 0x375DF4u;
    SET_GPR_U32(ctx, 31, 0x375DFCu);
    ctx->pc = 0x375DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375DF4u;
            // 0x375df8: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DFCu; }
        if (ctx->pc != 0x375DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375DFCu; }
        if (ctx->pc != 0x375DFCu) { return; }
    }
    ctx->pc = 0x375DFCu;
label_375dfc:
    // 0x375dfc: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x375dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375e00:
    // 0x375e00: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x375e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_375e04:
    // 0x375e04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_375e08:
    // 0x375e08: 0x0  nop
    ctx->pc = 0x375e08u;
    // NOP
label_375e0c:
    // 0x375e0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375e10:
    // 0x375e10: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_375e14:
    if (ctx->pc == 0x375E14u) {
        ctx->pc = 0x375E14u;
            // 0x375e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375E18u;
        goto label_375e18;
    }
    ctx->pc = 0x375E10u;
    {
        const bool branch_taken_0x375e10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375e10) {
            ctx->pc = 0x375E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x375E10u;
            // 0x375e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x375E30u;
            goto label_375e30;
        }
    }
    ctx->pc = 0x375E18u;
label_375e18:
    // 0x375e18: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x375e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_375e1c:
    // 0x375e1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x375e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_375e20:
    // 0x375e20: 0xc0dd860  jal         func_376180
label_375e24:
    if (ctx->pc == 0x375E24u) {
        ctx->pc = 0x375E24u;
            // 0x375e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375E28u;
        goto label_375e28;
    }
    ctx->pc = 0x375E20u;
    SET_GPR_U32(ctx, 31, 0x375E28u);
    ctx->pc = 0x375E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375E20u;
            // 0x375e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376180u;
    if (runtime->hasFunction(0x376180u)) {
        auto targetFn = runtime->lookupFunction(0x376180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E28u; }
        if (ctx->pc != 0x375E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376180_0x376180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E28u; }
        if (ctx->pc != 0x375E28u) { return; }
    }
    ctx->pc = 0x375E28u;
label_375e28:
    // 0x375e28: 0x10000004  b           . + 4 + (0x4 << 2)
label_375e2c:
    if (ctx->pc == 0x375E2Cu) {
        ctx->pc = 0x375E2Cu;
            // 0x375e2c: 0xc7a100e8  lwc1        $f1, 0xE8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x375E30u;
        goto label_375e30;
    }
    ctx->pc = 0x375E28u;
    {
        const bool branch_taken_0x375e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375E28u;
            // 0x375e2c: 0xc7a100e8  lwc1        $f1, 0xE8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e28) {
            ctx->pc = 0x375E3Cu;
            goto label_375e3c;
        }
    }
    ctx->pc = 0x375E30u;
label_375e30:
    // 0x375e30: 0xc0dd848  jal         func_376120
label_375e34:
    if (ctx->pc == 0x375E34u) {
        ctx->pc = 0x375E38u;
        goto label_375e38;
    }
    ctx->pc = 0x375E30u;
    SET_GPR_U32(ctx, 31, 0x375E38u);
    ctx->pc = 0x376120u;
    if (runtime->hasFunction(0x376120u)) {
        auto targetFn = runtime->lookupFunction(0x376120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E38u; }
        if (ctx->pc != 0x375E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376120_0x376120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E38u; }
        if (ctx->pc != 0x375E38u) { return; }
    }
    ctx->pc = 0x375E38u;
label_375e38:
    // 0x375e38: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x375e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375e3c:
    // 0x375e3c: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x375e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
label_375e40:
    // 0x375e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_375e44:
    // 0x375e44: 0x0  nop
    ctx->pc = 0x375e44u;
    // NOP
label_375e48:
    // 0x375e48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375e4c:
    // 0x375e4c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_375e50:
    if (ctx->pc == 0x375E50u) {
        ctx->pc = 0x375E54u;
        goto label_375e54;
    }
    ctx->pc = 0x375E4Cu;
    {
        const bool branch_taken_0x375e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375e4c) {
            ctx->pc = 0x375EF0u;
            goto label_375ef0;
        }
    }
    ctx->pc = 0x375E54u;
label_375e54:
    // 0x375e54: 0xc0dd8f8  jal         func_3763E0
label_375e58:
    if (ctx->pc == 0x375E58u) {
        ctx->pc = 0x375E58u;
            // 0x375e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375E5Cu;
        goto label_375e5c;
    }
    ctx->pc = 0x375E54u;
    SET_GPR_U32(ctx, 31, 0x375E5Cu);
    ctx->pc = 0x375E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375E54u;
            // 0x375e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3763E0u;
    if (runtime->hasFunction(0x3763E0u)) {
        auto targetFn = runtime->lookupFunction(0x3763E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E5Cu; }
        if (ctx->pc != 0x375E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003763E0_0x3763e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E5Cu; }
        if (ctx->pc != 0x375E5Cu) { return; }
    }
    ctx->pc = 0x375E5Cu;
label_375e5c:
    // 0x375e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375e60:
    // 0x375e60: 0xc0dd894  jal         func_376250
label_375e64:
    if (ctx->pc == 0x375E64u) {
        ctx->pc = 0x375E64u;
            // 0x375e64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x375E68u;
        goto label_375e68;
    }
    ctx->pc = 0x375E60u;
    SET_GPR_U32(ctx, 31, 0x375E68u);
    ctx->pc = 0x375E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375E60u;
            // 0x375e64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376250u;
    if (runtime->hasFunction(0x376250u)) {
        auto targetFn = runtime->lookupFunction(0x376250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E68u; }
        if (ctx->pc != 0x375E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376250_0x376250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E68u; }
        if (ctx->pc != 0x375E68u) { return; }
    }
    ctx->pc = 0x375E68u;
label_375e68:
    // 0x375e68: 0xc0dd824  jal         func_376090
label_375e6c:
    if (ctx->pc == 0x375E6Cu) {
        ctx->pc = 0x375E6Cu;
            // 0x375e6c: 0x8e040288  lw          $a0, 0x288($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
        ctx->pc = 0x375E70u;
        goto label_375e70;
    }
    ctx->pc = 0x375E68u;
    SET_GPR_U32(ctx, 31, 0x375E70u);
    ctx->pc = 0x375E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375E68u;
            // 0x375e6c: 0x8e040288  lw          $a0, 0x288($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376090u;
    if (runtime->hasFunction(0x376090u)) {
        auto targetFn = runtime->lookupFunction(0x376090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E70u; }
        if (ctx->pc != 0x375E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376090_0x376090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E70u; }
        if (ctx->pc != 0x375E70u) { return; }
    }
    ctx->pc = 0x375E70u;
label_375e70:
    // 0x375e70: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x375e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_375e74:
    // 0x375e74: 0x8e040288  lw          $a0, 0x288($s0)
    ctx->pc = 0x375e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
label_375e78:
    // 0x375e78: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x375e78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_375e7c:
    // 0x375e7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x375e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_375e80:
    // 0x375e80: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x375e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_375e84:
    // 0x375e84: 0xc0dd820  jal         func_376080
label_375e88:
    if (ctx->pc == 0x375E88u) {
        ctx->pc = 0x375E88u;
            // 0x375e88: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->pc = 0x375E8Cu;
        goto label_375e8c;
    }
    ctx->pc = 0x375E84u;
    SET_GPR_U32(ctx, 31, 0x375E8Cu);
    ctx->pc = 0x375E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375E84u;
            // 0x375e88: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376080u;
    if (runtime->hasFunction(0x376080u)) {
        auto targetFn = runtime->lookupFunction(0x376080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E8Cu; }
        if (ctx->pc != 0x375E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376080_0x376080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E8Cu; }
        if (ctx->pc != 0x375E8Cu) { return; }
    }
    ctx->pc = 0x375E8Cu;
label_375e8c:
    // 0x375e8c: 0x10000018  b           . + 4 + (0x18 << 2)
label_375e90:
    if (ctx->pc == 0x375E90u) {
        ctx->pc = 0x375E90u;
            // 0x375e90: 0xae000288  sw          $zero, 0x288($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
        ctx->pc = 0x375E94u;
        goto label_375e94;
    }
    ctx->pc = 0x375E8Cu;
    {
        const bool branch_taken_0x375e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375E8Cu;
            // 0x375e90: 0xae000288  sw          $zero, 0x288($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e8c) {
            ctx->pc = 0x375EF0u;
            goto label_375ef0;
        }
    }
    ctx->pc = 0x375E94u;
label_375e94:
    // 0x375e94: 0xc0dd878  jal         func_3761E0
label_375e98:
    if (ctx->pc == 0x375E98u) {
        ctx->pc = 0x375E98u;
            // 0x375e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375E9Cu;
        goto label_375e9c;
    }
    ctx->pc = 0x375E94u;
    SET_GPR_U32(ctx, 31, 0x375E9Cu);
    ctx->pc = 0x375E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375E94u;
            // 0x375e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3761E0u;
    if (runtime->hasFunction(0x3761E0u)) {
        auto targetFn = runtime->lookupFunction(0x3761E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E9Cu; }
        if (ctx->pc != 0x375E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003761E0_0x3761e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375E9Cu; }
        if (ctx->pc != 0x375E9Cu) { return; }
    }
    ctx->pc = 0x375E9Cu;
label_375e9c:
    // 0x375e9c: 0xc0d1c10  jal         func_347040
label_375ea0:
    if (ctx->pc == 0x375EA0u) {
        ctx->pc = 0x375EA0u;
            // 0x375ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375EA4u;
        goto label_375ea4;
    }
    ctx->pc = 0x375E9Cu;
    SET_GPR_U32(ctx, 31, 0x375EA4u);
    ctx->pc = 0x375EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375E9Cu;
            // 0x375ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375EA4u; }
        if (ctx->pc != 0x375EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375EA4u; }
        if (ctx->pc != 0x375EA4u) { return; }
    }
    ctx->pc = 0x375EA4u;
label_375ea4:
    // 0x375ea4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x375ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375ea8:
    // 0x375ea8: 0xc04cc34  jal         func_1330D0
label_375eac:
    if (ctx->pc == 0x375EACu) {
        ctx->pc = 0x375EACu;
            // 0x375eac: 0x260402a0  addiu       $a0, $s0, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
        ctx->pc = 0x375EB0u;
        goto label_375eb0;
    }
    ctx->pc = 0x375EA8u;
    SET_GPR_U32(ctx, 31, 0x375EB0u);
    ctx->pc = 0x375EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375EA8u;
            // 0x375eac: 0x260402a0  addiu       $a0, $s0, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375EB0u; }
        if (ctx->pc != 0x375EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375EB0u; }
        if (ctx->pc != 0x375EB0u) { return; }
    }
    ctx->pc = 0x375EB0u;
label_375eb0:
    // 0x375eb0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x375eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_375eb4:
    // 0x375eb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x375eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_375eb8:
    // 0x375eb8: 0x0  nop
    ctx->pc = 0x375eb8u;
    // NOP
label_375ebc:
    // 0x375ebc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x375ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375ec0:
    // 0x375ec0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_375ec4:
    if (ctx->pc == 0x375EC4u) {
        ctx->pc = 0x375EC8u;
        goto label_375ec8;
    }
    ctx->pc = 0x375EC0u;
    {
        const bool branch_taken_0x375ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375ec0) {
            ctx->pc = 0x375EF0u;
            goto label_375ef0;
        }
    }
    ctx->pc = 0x375EC8u;
label_375ec8:
    // 0x375ec8: 0xc0dd828  jal         func_3760A0
label_375ecc:
    if (ctx->pc == 0x375ECCu) {
        ctx->pc = 0x375ECCu;
            // 0x375ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375ED0u;
        goto label_375ed0;
    }
    ctx->pc = 0x375EC8u;
    SET_GPR_U32(ctx, 31, 0x375ED0u);
    ctx->pc = 0x375ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375EC8u;
            // 0x375ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3760A0u;
    if (runtime->hasFunction(0x3760A0u)) {
        auto targetFn = runtime->lookupFunction(0x3760A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375ED0u; }
        if (ctx->pc != 0x375ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003760A0_0x3760a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375ED0u; }
        if (ctx->pc != 0x375ED0u) { return; }
    }
    ctx->pc = 0x375ED0u;
label_375ed0:
    // 0x375ed0: 0xc0dc408  jal         func_371020
label_375ed4:
    if (ctx->pc == 0x375ED4u) {
        ctx->pc = 0x375ED4u;
            // 0x375ed4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x375ED8u;
        goto label_375ed8;
    }
    ctx->pc = 0x375ED0u;
    SET_GPR_U32(ctx, 31, 0x375ED8u);
    ctx->pc = 0x375ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375ED0u;
            // 0x375ed4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375ED8u; }
        if (ctx->pc != 0x375ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375ED8u; }
        if (ctx->pc != 0x375ED8u) { return; }
    }
    ctx->pc = 0x375ED8u;
label_375ed8:
    // 0x375ed8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x375ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375edc:
    // 0x375edc: 0xc0dd810  jal         func_376040
label_375ee0:
    if (ctx->pc == 0x375EE0u) {
        ctx->pc = 0x375EE0u;
            // 0x375ee0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x375EE4u;
        goto label_375ee4;
    }
    ctx->pc = 0x375EDCu;
    SET_GPR_U32(ctx, 31, 0x375EE4u);
    ctx->pc = 0x375EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375EDCu;
            // 0x375ee0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376040u;
    if (runtime->hasFunction(0x376040u)) {
        auto targetFn = runtime->lookupFunction(0x376040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375EE4u; }
        if (ctx->pc != 0x375EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376040_0x376040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375EE4u; }
        if (ctx->pc != 0x375EE4u) { return; }
    }
    ctx->pc = 0x375EE4u;
label_375ee4:
    // 0x375ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_375ee8:
    // 0x375ee8: 0xc0dd894  jal         func_376250
label_375eec:
    if (ctx->pc == 0x375EECu) {
        ctx->pc = 0x375EECu;
            // 0x375eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x375EF0u;
        goto label_375ef0;
    }
    ctx->pc = 0x375EE8u;
    SET_GPR_U32(ctx, 31, 0x375EF0u);
    ctx->pc = 0x375EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375EE8u;
            // 0x375eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x376250u;
    if (runtime->hasFunction(0x376250u)) {
        auto targetFn = runtime->lookupFunction(0x376250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375EF0u; }
        if (ctx->pc != 0x375EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00376250_0x376250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375EF0u; }
        if (ctx->pc != 0x375EF0u) { return; }
    }
    ctx->pc = 0x375EF0u;
label_375ef0:
    // 0x375ef0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x375ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_375ef4:
    // 0x375ef4: 0x26150010  addiu       $s5, $s0, 0x10
    ctx->pc = 0x375ef4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_375ef8:
    // 0x375ef8: 0x8c5489e8  lw          $s4, -0x7618($v0)
    ctx->pc = 0x375ef8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_375efc:
    // 0x375efc: 0x261300d4  addiu       $s3, $s0, 0xD4
    ctx->pc = 0x375efcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
label_375f00:
    // 0x375f00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x375f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375f04:
    // 0x375f04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x375f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375f08:
    // 0x375f08: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x375f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_375f0c:
    // 0x375f0c: 0x8c56d120  lw          $s6, -0x2EE0($v0)
    ctx->pc = 0x375f0cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_375f10:
    // 0x375f10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x375f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_375f14:
    // 0x375f14: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x375f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_375f18:
    // 0x375f18: 0x805e007a  lb          $fp, 0x7A($v0)
    ctx->pc = 0x375f18u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_375f1c:
    // 0x375f1c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x375f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_375f20:
    // 0x375f20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x375f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_375f24:
    // 0x375f24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x375f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_375f28:
    // 0x375f28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x375f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_375f2c:
    // 0x375f2c: 0xc04cc34  jal         func_1330D0
label_375f30:
    if (ctx->pc == 0x375F30u) {
        ctx->pc = 0x375F30u;
            // 0x375f30: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->pc = 0x375F34u;
        goto label_375f34;
    }
    ctx->pc = 0x375F2Cu;
    SET_GPR_U32(ctx, 31, 0x375F34u);
    ctx->pc = 0x375F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x375F2Cu;
            // 0x375f30: 0x24450200  addiu       $a1, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375F34u; }
        if (ctx->pc != 0x375F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x375F34u; }
        if (ctx->pc != 0x375F34u) { return; }
    }
    ctx->pc = 0x375F34u;
label_375f34:
    // 0x375f34: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x375f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_375f38:
    // 0x375f38: 0xc4611aa8  lwc1        $f1, 0x1AA8($v1)
    ctx->pc = 0x375f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_375f3c:
    // 0x375f3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x375f3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_375f40:
    // 0x375f40: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_375f44:
    if (ctx->pc == 0x375F44u) {
        ctx->pc = 0x375F48u;
        goto label_375f48;
    }
    ctx->pc = 0x375F40u;
    {
        const bool branch_taken_0x375f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375f40) {
            ctx->pc = 0x375FB0u;
            goto label_375fb0;
        }
    }
    ctx->pc = 0x375F48u;
label_375f48:
    // 0x375f48: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x375f48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_375f4c:
    // 0x375f4c: 0x4610028  bgez        $v1, . + 4 + (0x28 << 2)
label_375f50:
    if (ctx->pc == 0x375F50u) {
        ctx->pc = 0x375F54u;
        goto label_375f54;
    }
    ctx->pc = 0x375F4Cu;
    {
        const bool branch_taken_0x375f4c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x375f4c) {
            ctx->pc = 0x375FF0u;
            goto label_375ff0;
        }
    }
    ctx->pc = 0x375F54u;
label_375f54:
    // 0x375f54: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x375f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_375f58:
    // 0x375f58: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x375f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_375f5c:
    // 0x375f5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x375f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_375f60:
    // 0x375f60: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x375f60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_375f64:
    // 0x375f64: 0x320f809  jalr        $t9
label_375f68:
    if (ctx->pc == 0x375F68u) {
        ctx->pc = 0x375F68u;
            // 0x375f68: 0x34450bae  ori         $a1, $v0, 0xBAE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2990);
        ctx->pc = 0x375F6Cu;
        goto label_375f6c;
    }
    ctx->pc = 0x375F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x375F6Cu);
        ctx->pc = 0x375F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375F64u;
            // 0x375f68: 0x34450bae  ori         $a1, $v0, 0xBAE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2990);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x375F6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x375F6Cu; }
            if (ctx->pc != 0x375F6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x375F6Cu;
label_375f6c:
    // 0x375f6c: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x375f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_375f70:
    // 0x375f70: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x375f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_375f74:
    // 0x375f74: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x375f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_375f78:
    // 0x375f78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x375f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_375f7c:
    // 0x375f7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x375f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_375f80:
    // 0x375f80: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x375f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_375f84:
    // 0x375f84: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x375f84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_375f88:
    // 0x375f88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x375f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_375f8c:
    // 0x375f8c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x375f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_375f90:
    // 0x375f90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x375f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_375f94:
    // 0x375f94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x375f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_375f98:
    // 0x375f98: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x375f98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_375f9c:
    // 0x375f9c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x375f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_375fa0:
    // 0x375fa0: 0x320f809  jalr        $t9
label_375fa4:
    if (ctx->pc == 0x375FA4u) {
        ctx->pc = 0x375FA4u;
            // 0x375fa4: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x375FA8u;
        goto label_375fa8;
    }
    ctx->pc = 0x375FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x375FA8u);
        ctx->pc = 0x375FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375FA0u;
            // 0x375fa4: 0x24470010  addiu       $a3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x375FA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x375FA8u; }
            if (ctx->pc != 0x375FA8u) { return; }
        }
        }
    }
    ctx->pc = 0x375FA8u;
label_375fa8:
    // 0x375fa8: 0x10000011  b           . + 4 + (0x11 << 2)
label_375fac:
    if (ctx->pc == 0x375FACu) {
        ctx->pc = 0x375FB0u;
        goto label_375fb0;
    }
    ctx->pc = 0x375FA8u;
    {
        const bool branch_taken_0x375fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375fa8) {
            ctx->pc = 0x375FF0u;
            goto label_375ff0;
        }
    }
    ctx->pc = 0x375FB0u;
label_375fb0:
    // 0x375fb0: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x375fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
label_375fb4:
    // 0x375fb4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x375fb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_375fb8:
    // 0x375fb8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x375fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_375fbc:
    // 0x375fbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x375fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_375fc0:
    // 0x375fc0: 0x846500d4  lh          $a1, 0xD4($v1)
    ctx->pc = 0x375fc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 212)));
label_375fc4:
    // 0x375fc4: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_375fc8:
    if (ctx->pc == 0x375FC8u) {
        ctx->pc = 0x375FC8u;
            // 0x375fc8: 0x247700d4  addiu       $s7, $v1, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 212));
        ctx->pc = 0x375FCCu;
        goto label_375fcc;
    }
    ctx->pc = 0x375FC4u;
    {
        const bool branch_taken_0x375fc4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x375FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375FC4u;
            // 0x375fc8: 0x247700d4  addiu       $s7, $v1, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375fc4) {
            ctx->pc = 0x375FF0u;
            goto label_375ff0;
        }
    }
    ctx->pc = 0x375FCCu;
label_375fcc:
    // 0x375fcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x375fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_375fd0:
    // 0x375fd0: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x375fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_375fd4:
    // 0x375fd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x375fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_375fd8:
    // 0x375fd8: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x375fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_375fdc:
    // 0x375fdc: 0x320f809  jalr        $t9
label_375fe0:
    if (ctx->pc == 0x375FE0u) {
        ctx->pc = 0x375FE4u;
        goto label_375fe4;
    }
    ctx->pc = 0x375FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x375FE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x375FE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x375FE4u; }
            if (ctx->pc != 0x375FE4u) { return; }
        }
        }
    }
    ctx->pc = 0x375FE4u;
label_375fe4:
    // 0x375fe4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x375fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_375fe8:
    // 0x375fe8: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x375fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
label_375fec:
    // 0x375fec: 0x0  nop
    ctx->pc = 0x375fecu;
    // NOP
label_375ff0:
    // 0x375ff0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x375ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_375ff4:
    // 0x375ff4: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x375ff4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_375ff8:
    // 0x375ff8: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x375ff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_375ffc:
    // 0x375ffc: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
label_376000:
    if (ctx->pc == 0x376000u) {
        ctx->pc = 0x376000u;
            // 0x376000: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x376004u;
        goto label_376004;
    }
    ctx->pc = 0x375FFCu;
    {
        const bool branch_taken_0x375ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x376000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x375FFCu;
            // 0x376000: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375ffc) {
            ctx->pc = 0x375F1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_375f1c;
        }
    }
    ctx->pc = 0x376004u;
label_376004:
    // 0x376004: 0x0  nop
    ctx->pc = 0x376004u;
    // NOP
label_376008:
    // 0x376008: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x376008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_37600c:
    // 0x37600c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x37600cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_376010:
    // 0x376010: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x376010u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_376014:
    // 0x376014: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x376014u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_376018:
    // 0x376018: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x376018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37601c:
    // 0x37601c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37601cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_376020:
    // 0x376020: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x376020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_376024:
    // 0x376024: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x376024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_376028:
    // 0x376028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37602c:
    // 0x37602c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37602cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_376030:
    // 0x376030: 0x3e00008  jr          $ra
label_376034:
    if (ctx->pc == 0x376034u) {
        ctx->pc = 0x376034u;
            // 0x376034: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x376038u;
        goto label_376038;
    }
    ctx->pc = 0x376030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376030u;
            // 0x376034: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376038u;
label_376038:
    // 0x376038: 0x0  nop
    ctx->pc = 0x376038u;
    // NOP
label_37603c:
    // 0x37603c: 0x0  nop
    ctx->pc = 0x37603cu;
    // NOP
}
