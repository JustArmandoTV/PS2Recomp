#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00350A40
// Address: 0x350a40 - 0x351010
void sub_00350A40_0x350a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350A40_0x350a40");
#endif

    switch (ctx->pc) {
        case 0x350a40u: goto label_350a40;
        case 0x350a44u: goto label_350a44;
        case 0x350a48u: goto label_350a48;
        case 0x350a4cu: goto label_350a4c;
        case 0x350a50u: goto label_350a50;
        case 0x350a54u: goto label_350a54;
        case 0x350a58u: goto label_350a58;
        case 0x350a5cu: goto label_350a5c;
        case 0x350a60u: goto label_350a60;
        case 0x350a64u: goto label_350a64;
        case 0x350a68u: goto label_350a68;
        case 0x350a6cu: goto label_350a6c;
        case 0x350a70u: goto label_350a70;
        case 0x350a74u: goto label_350a74;
        case 0x350a78u: goto label_350a78;
        case 0x350a7cu: goto label_350a7c;
        case 0x350a80u: goto label_350a80;
        case 0x350a84u: goto label_350a84;
        case 0x350a88u: goto label_350a88;
        case 0x350a8cu: goto label_350a8c;
        case 0x350a90u: goto label_350a90;
        case 0x350a94u: goto label_350a94;
        case 0x350a98u: goto label_350a98;
        case 0x350a9cu: goto label_350a9c;
        case 0x350aa0u: goto label_350aa0;
        case 0x350aa4u: goto label_350aa4;
        case 0x350aa8u: goto label_350aa8;
        case 0x350aacu: goto label_350aac;
        case 0x350ab0u: goto label_350ab0;
        case 0x350ab4u: goto label_350ab4;
        case 0x350ab8u: goto label_350ab8;
        case 0x350abcu: goto label_350abc;
        case 0x350ac0u: goto label_350ac0;
        case 0x350ac4u: goto label_350ac4;
        case 0x350ac8u: goto label_350ac8;
        case 0x350accu: goto label_350acc;
        case 0x350ad0u: goto label_350ad0;
        case 0x350ad4u: goto label_350ad4;
        case 0x350ad8u: goto label_350ad8;
        case 0x350adcu: goto label_350adc;
        case 0x350ae0u: goto label_350ae0;
        case 0x350ae4u: goto label_350ae4;
        case 0x350ae8u: goto label_350ae8;
        case 0x350aecu: goto label_350aec;
        case 0x350af0u: goto label_350af0;
        case 0x350af4u: goto label_350af4;
        case 0x350af8u: goto label_350af8;
        case 0x350afcu: goto label_350afc;
        case 0x350b00u: goto label_350b00;
        case 0x350b04u: goto label_350b04;
        case 0x350b08u: goto label_350b08;
        case 0x350b0cu: goto label_350b0c;
        case 0x350b10u: goto label_350b10;
        case 0x350b14u: goto label_350b14;
        case 0x350b18u: goto label_350b18;
        case 0x350b1cu: goto label_350b1c;
        case 0x350b20u: goto label_350b20;
        case 0x350b24u: goto label_350b24;
        case 0x350b28u: goto label_350b28;
        case 0x350b2cu: goto label_350b2c;
        case 0x350b30u: goto label_350b30;
        case 0x350b34u: goto label_350b34;
        case 0x350b38u: goto label_350b38;
        case 0x350b3cu: goto label_350b3c;
        case 0x350b40u: goto label_350b40;
        case 0x350b44u: goto label_350b44;
        case 0x350b48u: goto label_350b48;
        case 0x350b4cu: goto label_350b4c;
        case 0x350b50u: goto label_350b50;
        case 0x350b54u: goto label_350b54;
        case 0x350b58u: goto label_350b58;
        case 0x350b5cu: goto label_350b5c;
        case 0x350b60u: goto label_350b60;
        case 0x350b64u: goto label_350b64;
        case 0x350b68u: goto label_350b68;
        case 0x350b6cu: goto label_350b6c;
        case 0x350b70u: goto label_350b70;
        case 0x350b74u: goto label_350b74;
        case 0x350b78u: goto label_350b78;
        case 0x350b7cu: goto label_350b7c;
        case 0x350b80u: goto label_350b80;
        case 0x350b84u: goto label_350b84;
        case 0x350b88u: goto label_350b88;
        case 0x350b8cu: goto label_350b8c;
        case 0x350b90u: goto label_350b90;
        case 0x350b94u: goto label_350b94;
        case 0x350b98u: goto label_350b98;
        case 0x350b9cu: goto label_350b9c;
        case 0x350ba0u: goto label_350ba0;
        case 0x350ba4u: goto label_350ba4;
        case 0x350ba8u: goto label_350ba8;
        case 0x350bacu: goto label_350bac;
        case 0x350bb0u: goto label_350bb0;
        case 0x350bb4u: goto label_350bb4;
        case 0x350bb8u: goto label_350bb8;
        case 0x350bbcu: goto label_350bbc;
        case 0x350bc0u: goto label_350bc0;
        case 0x350bc4u: goto label_350bc4;
        case 0x350bc8u: goto label_350bc8;
        case 0x350bccu: goto label_350bcc;
        case 0x350bd0u: goto label_350bd0;
        case 0x350bd4u: goto label_350bd4;
        case 0x350bd8u: goto label_350bd8;
        case 0x350bdcu: goto label_350bdc;
        case 0x350be0u: goto label_350be0;
        case 0x350be4u: goto label_350be4;
        case 0x350be8u: goto label_350be8;
        case 0x350becu: goto label_350bec;
        case 0x350bf0u: goto label_350bf0;
        case 0x350bf4u: goto label_350bf4;
        case 0x350bf8u: goto label_350bf8;
        case 0x350bfcu: goto label_350bfc;
        case 0x350c00u: goto label_350c00;
        case 0x350c04u: goto label_350c04;
        case 0x350c08u: goto label_350c08;
        case 0x350c0cu: goto label_350c0c;
        case 0x350c10u: goto label_350c10;
        case 0x350c14u: goto label_350c14;
        case 0x350c18u: goto label_350c18;
        case 0x350c1cu: goto label_350c1c;
        case 0x350c20u: goto label_350c20;
        case 0x350c24u: goto label_350c24;
        case 0x350c28u: goto label_350c28;
        case 0x350c2cu: goto label_350c2c;
        case 0x350c30u: goto label_350c30;
        case 0x350c34u: goto label_350c34;
        case 0x350c38u: goto label_350c38;
        case 0x350c3cu: goto label_350c3c;
        case 0x350c40u: goto label_350c40;
        case 0x350c44u: goto label_350c44;
        case 0x350c48u: goto label_350c48;
        case 0x350c4cu: goto label_350c4c;
        case 0x350c50u: goto label_350c50;
        case 0x350c54u: goto label_350c54;
        case 0x350c58u: goto label_350c58;
        case 0x350c5cu: goto label_350c5c;
        case 0x350c60u: goto label_350c60;
        case 0x350c64u: goto label_350c64;
        case 0x350c68u: goto label_350c68;
        case 0x350c6cu: goto label_350c6c;
        case 0x350c70u: goto label_350c70;
        case 0x350c74u: goto label_350c74;
        case 0x350c78u: goto label_350c78;
        case 0x350c7cu: goto label_350c7c;
        case 0x350c80u: goto label_350c80;
        case 0x350c84u: goto label_350c84;
        case 0x350c88u: goto label_350c88;
        case 0x350c8cu: goto label_350c8c;
        case 0x350c90u: goto label_350c90;
        case 0x350c94u: goto label_350c94;
        case 0x350c98u: goto label_350c98;
        case 0x350c9cu: goto label_350c9c;
        case 0x350ca0u: goto label_350ca0;
        case 0x350ca4u: goto label_350ca4;
        case 0x350ca8u: goto label_350ca8;
        case 0x350cacu: goto label_350cac;
        case 0x350cb0u: goto label_350cb0;
        case 0x350cb4u: goto label_350cb4;
        case 0x350cb8u: goto label_350cb8;
        case 0x350cbcu: goto label_350cbc;
        case 0x350cc0u: goto label_350cc0;
        case 0x350cc4u: goto label_350cc4;
        case 0x350cc8u: goto label_350cc8;
        case 0x350cccu: goto label_350ccc;
        case 0x350cd0u: goto label_350cd0;
        case 0x350cd4u: goto label_350cd4;
        case 0x350cd8u: goto label_350cd8;
        case 0x350cdcu: goto label_350cdc;
        case 0x350ce0u: goto label_350ce0;
        case 0x350ce4u: goto label_350ce4;
        case 0x350ce8u: goto label_350ce8;
        case 0x350cecu: goto label_350cec;
        case 0x350cf0u: goto label_350cf0;
        case 0x350cf4u: goto label_350cf4;
        case 0x350cf8u: goto label_350cf8;
        case 0x350cfcu: goto label_350cfc;
        case 0x350d00u: goto label_350d00;
        case 0x350d04u: goto label_350d04;
        case 0x350d08u: goto label_350d08;
        case 0x350d0cu: goto label_350d0c;
        case 0x350d10u: goto label_350d10;
        case 0x350d14u: goto label_350d14;
        case 0x350d18u: goto label_350d18;
        case 0x350d1cu: goto label_350d1c;
        case 0x350d20u: goto label_350d20;
        case 0x350d24u: goto label_350d24;
        case 0x350d28u: goto label_350d28;
        case 0x350d2cu: goto label_350d2c;
        case 0x350d30u: goto label_350d30;
        case 0x350d34u: goto label_350d34;
        case 0x350d38u: goto label_350d38;
        case 0x350d3cu: goto label_350d3c;
        case 0x350d40u: goto label_350d40;
        case 0x350d44u: goto label_350d44;
        case 0x350d48u: goto label_350d48;
        case 0x350d4cu: goto label_350d4c;
        case 0x350d50u: goto label_350d50;
        case 0x350d54u: goto label_350d54;
        case 0x350d58u: goto label_350d58;
        case 0x350d5cu: goto label_350d5c;
        case 0x350d60u: goto label_350d60;
        case 0x350d64u: goto label_350d64;
        case 0x350d68u: goto label_350d68;
        case 0x350d6cu: goto label_350d6c;
        case 0x350d70u: goto label_350d70;
        case 0x350d74u: goto label_350d74;
        case 0x350d78u: goto label_350d78;
        case 0x350d7cu: goto label_350d7c;
        case 0x350d80u: goto label_350d80;
        case 0x350d84u: goto label_350d84;
        case 0x350d88u: goto label_350d88;
        case 0x350d8cu: goto label_350d8c;
        case 0x350d90u: goto label_350d90;
        case 0x350d94u: goto label_350d94;
        case 0x350d98u: goto label_350d98;
        case 0x350d9cu: goto label_350d9c;
        case 0x350da0u: goto label_350da0;
        case 0x350da4u: goto label_350da4;
        case 0x350da8u: goto label_350da8;
        case 0x350dacu: goto label_350dac;
        case 0x350db0u: goto label_350db0;
        case 0x350db4u: goto label_350db4;
        case 0x350db8u: goto label_350db8;
        case 0x350dbcu: goto label_350dbc;
        case 0x350dc0u: goto label_350dc0;
        case 0x350dc4u: goto label_350dc4;
        case 0x350dc8u: goto label_350dc8;
        case 0x350dccu: goto label_350dcc;
        case 0x350dd0u: goto label_350dd0;
        case 0x350dd4u: goto label_350dd4;
        case 0x350dd8u: goto label_350dd8;
        case 0x350ddcu: goto label_350ddc;
        case 0x350de0u: goto label_350de0;
        case 0x350de4u: goto label_350de4;
        case 0x350de8u: goto label_350de8;
        case 0x350decu: goto label_350dec;
        case 0x350df0u: goto label_350df0;
        case 0x350df4u: goto label_350df4;
        case 0x350df8u: goto label_350df8;
        case 0x350dfcu: goto label_350dfc;
        case 0x350e00u: goto label_350e00;
        case 0x350e04u: goto label_350e04;
        case 0x350e08u: goto label_350e08;
        case 0x350e0cu: goto label_350e0c;
        case 0x350e10u: goto label_350e10;
        case 0x350e14u: goto label_350e14;
        case 0x350e18u: goto label_350e18;
        case 0x350e1cu: goto label_350e1c;
        case 0x350e20u: goto label_350e20;
        case 0x350e24u: goto label_350e24;
        case 0x350e28u: goto label_350e28;
        case 0x350e2cu: goto label_350e2c;
        case 0x350e30u: goto label_350e30;
        case 0x350e34u: goto label_350e34;
        case 0x350e38u: goto label_350e38;
        case 0x350e3cu: goto label_350e3c;
        case 0x350e40u: goto label_350e40;
        case 0x350e44u: goto label_350e44;
        case 0x350e48u: goto label_350e48;
        case 0x350e4cu: goto label_350e4c;
        case 0x350e50u: goto label_350e50;
        case 0x350e54u: goto label_350e54;
        case 0x350e58u: goto label_350e58;
        case 0x350e5cu: goto label_350e5c;
        case 0x350e60u: goto label_350e60;
        case 0x350e64u: goto label_350e64;
        case 0x350e68u: goto label_350e68;
        case 0x350e6cu: goto label_350e6c;
        case 0x350e70u: goto label_350e70;
        case 0x350e74u: goto label_350e74;
        case 0x350e78u: goto label_350e78;
        case 0x350e7cu: goto label_350e7c;
        case 0x350e80u: goto label_350e80;
        case 0x350e84u: goto label_350e84;
        case 0x350e88u: goto label_350e88;
        case 0x350e8cu: goto label_350e8c;
        case 0x350e90u: goto label_350e90;
        case 0x350e94u: goto label_350e94;
        case 0x350e98u: goto label_350e98;
        case 0x350e9cu: goto label_350e9c;
        case 0x350ea0u: goto label_350ea0;
        case 0x350ea4u: goto label_350ea4;
        case 0x350ea8u: goto label_350ea8;
        case 0x350eacu: goto label_350eac;
        case 0x350eb0u: goto label_350eb0;
        case 0x350eb4u: goto label_350eb4;
        case 0x350eb8u: goto label_350eb8;
        case 0x350ebcu: goto label_350ebc;
        case 0x350ec0u: goto label_350ec0;
        case 0x350ec4u: goto label_350ec4;
        case 0x350ec8u: goto label_350ec8;
        case 0x350eccu: goto label_350ecc;
        case 0x350ed0u: goto label_350ed0;
        case 0x350ed4u: goto label_350ed4;
        case 0x350ed8u: goto label_350ed8;
        case 0x350edcu: goto label_350edc;
        case 0x350ee0u: goto label_350ee0;
        case 0x350ee4u: goto label_350ee4;
        case 0x350ee8u: goto label_350ee8;
        case 0x350eecu: goto label_350eec;
        case 0x350ef0u: goto label_350ef0;
        case 0x350ef4u: goto label_350ef4;
        case 0x350ef8u: goto label_350ef8;
        case 0x350efcu: goto label_350efc;
        case 0x350f00u: goto label_350f00;
        case 0x350f04u: goto label_350f04;
        case 0x350f08u: goto label_350f08;
        case 0x350f0cu: goto label_350f0c;
        case 0x350f10u: goto label_350f10;
        case 0x350f14u: goto label_350f14;
        case 0x350f18u: goto label_350f18;
        case 0x350f1cu: goto label_350f1c;
        case 0x350f20u: goto label_350f20;
        case 0x350f24u: goto label_350f24;
        case 0x350f28u: goto label_350f28;
        case 0x350f2cu: goto label_350f2c;
        case 0x350f30u: goto label_350f30;
        case 0x350f34u: goto label_350f34;
        case 0x350f38u: goto label_350f38;
        case 0x350f3cu: goto label_350f3c;
        case 0x350f40u: goto label_350f40;
        case 0x350f44u: goto label_350f44;
        case 0x350f48u: goto label_350f48;
        case 0x350f4cu: goto label_350f4c;
        case 0x350f50u: goto label_350f50;
        case 0x350f54u: goto label_350f54;
        case 0x350f58u: goto label_350f58;
        case 0x350f5cu: goto label_350f5c;
        case 0x350f60u: goto label_350f60;
        case 0x350f64u: goto label_350f64;
        case 0x350f68u: goto label_350f68;
        case 0x350f6cu: goto label_350f6c;
        case 0x350f70u: goto label_350f70;
        case 0x350f74u: goto label_350f74;
        case 0x350f78u: goto label_350f78;
        case 0x350f7cu: goto label_350f7c;
        case 0x350f80u: goto label_350f80;
        case 0x350f84u: goto label_350f84;
        case 0x350f88u: goto label_350f88;
        case 0x350f8cu: goto label_350f8c;
        case 0x350f90u: goto label_350f90;
        case 0x350f94u: goto label_350f94;
        case 0x350f98u: goto label_350f98;
        case 0x350f9cu: goto label_350f9c;
        case 0x350fa0u: goto label_350fa0;
        case 0x350fa4u: goto label_350fa4;
        case 0x350fa8u: goto label_350fa8;
        case 0x350facu: goto label_350fac;
        case 0x350fb0u: goto label_350fb0;
        case 0x350fb4u: goto label_350fb4;
        case 0x350fb8u: goto label_350fb8;
        case 0x350fbcu: goto label_350fbc;
        case 0x350fc0u: goto label_350fc0;
        case 0x350fc4u: goto label_350fc4;
        case 0x350fc8u: goto label_350fc8;
        case 0x350fccu: goto label_350fcc;
        case 0x350fd0u: goto label_350fd0;
        case 0x350fd4u: goto label_350fd4;
        case 0x350fd8u: goto label_350fd8;
        case 0x350fdcu: goto label_350fdc;
        case 0x350fe0u: goto label_350fe0;
        case 0x350fe4u: goto label_350fe4;
        case 0x350fe8u: goto label_350fe8;
        case 0x350fecu: goto label_350fec;
        case 0x350ff0u: goto label_350ff0;
        case 0x350ff4u: goto label_350ff4;
        case 0x350ff8u: goto label_350ff8;
        case 0x350ffcu: goto label_350ffc;
        case 0x351000u: goto label_351000;
        case 0x351004u: goto label_351004;
        case 0x351008u: goto label_351008;
        case 0x35100cu: goto label_35100c;
        default: break;
    }

    ctx->pc = 0x350a40u;

label_350a40:
    // 0x350a40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x350a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_350a44:
    // 0x350a44: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x350a44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_350a48:
    // 0x350a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_350a4c:
    // 0x350a4c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x350a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_350a50:
    // 0x350a50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x350a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_350a54:
    // 0x350a54: 0x3e00008  jr          $ra
label_350a58:
    if (ctx->pc == 0x350A58u) {
        ctx->pc = 0x350A58u;
            // 0x350a58: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x350A5Cu;
        goto label_350a5c;
    }
    ctx->pc = 0x350A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350A54u;
            // 0x350a58: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350A5Cu;
label_350a5c:
    // 0x350a5c: 0x0  nop
    ctx->pc = 0x350a5cu;
    // NOP
label_350a60:
    // 0x350a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x350a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_350a64:
    // 0x350a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_350a68:
    // 0x350a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_350a6c:
    // 0x350a6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x350a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_350a70:
    // 0x350a70: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x350a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_350a74:
    // 0x350a74: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_350a78:
    if (ctx->pc == 0x350A78u) {
        ctx->pc = 0x350A78u;
            // 0x350a78: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x350A7Cu;
        goto label_350a7c;
    }
    ctx->pc = 0x350A74u;
    {
        const bool branch_taken_0x350a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x350a74) {
            ctx->pc = 0x350A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350A74u;
            // 0x350a78: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350A9Cu;
            goto label_350a9c;
        }
    }
    ctx->pc = 0x350A7Cu;
label_350a7c:
    // 0x350a7c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_350a80:
    if (ctx->pc == 0x350A80u) {
        ctx->pc = 0x350A80u;
            // 0x350a80: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x350A84u;
        goto label_350a84;
    }
    ctx->pc = 0x350A7Cu;
    {
        const bool branch_taken_0x350a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x350a7c) {
            ctx->pc = 0x350A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350A7Cu;
            // 0x350a80: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350A98u;
            goto label_350a98;
        }
    }
    ctx->pc = 0x350A84u;
label_350a84:
    // 0x350a84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x350a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_350a88:
    // 0x350a88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x350a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_350a8c:
    // 0x350a8c: 0x320f809  jalr        $t9
label_350a90:
    if (ctx->pc == 0x350A90u) {
        ctx->pc = 0x350A90u;
            // 0x350a90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x350A94u;
        goto label_350a94;
    }
    ctx->pc = 0x350A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350A94u);
        ctx->pc = 0x350A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350A8Cu;
            // 0x350a90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x350A94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350A94u; }
            if (ctx->pc != 0x350A94u) { return; }
        }
        }
    }
    ctx->pc = 0x350A94u;
label_350a94:
    // 0x350a94: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x350a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_350a98:
    // 0x350a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_350a9c:
    // 0x350a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_350aa0:
    // 0x350aa0: 0x3e00008  jr          $ra
label_350aa4:
    if (ctx->pc == 0x350AA4u) {
        ctx->pc = 0x350AA4u;
            // 0x350aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x350AA8u;
        goto label_350aa8;
    }
    ctx->pc = 0x350AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350AA0u;
            // 0x350aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350AA8u;
label_350aa8:
    // 0x350aa8: 0x0  nop
    ctx->pc = 0x350aa8u;
    // NOP
label_350aac:
    // 0x350aac: 0x0  nop
    ctx->pc = 0x350aacu;
    // NOP
label_350ab0:
    // 0x350ab0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x350ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_350ab4:
    // 0x350ab4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x350ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_350ab8:
    // 0x350ab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x350ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_350abc:
    // 0x350abc: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x350abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_350ac0:
    // 0x350ac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x350ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_350ac4:
    // 0x350ac4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x350ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_350ac8:
    // 0x350ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_350acc:
    // 0x350acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_350ad0:
    // 0x350ad0: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x350ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_350ad4:
    // 0x350ad4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x350ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_350ad8:
    // 0x350ad8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x350ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_350adc:
    // 0x350adc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350ae0:
    // 0x350ae0: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x350ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_350ae4:
    // 0x350ae4: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x350ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_350ae8:
    // 0x350ae8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x350ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_350aec:
    // 0x350aec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x350aecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_350af0:
    // 0x350af0: 0x0  nop
    ctx->pc = 0x350af0u;
    // NOP
label_350af4:
    // 0x350af4: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x350af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
label_350af8:
    // 0x350af8: 0xc0a7a88  jal         func_29EA20
label_350afc:
    if (ctx->pc == 0x350AFCu) {
        ctx->pc = 0x350AFCu;
            // 0x350afc: 0x8c44ea40  lw          $a0, -0x15C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
        ctx->pc = 0x350B00u;
        goto label_350b00;
    }
    ctx->pc = 0x350AF8u;
    SET_GPR_U32(ctx, 31, 0x350B00u);
    ctx->pc = 0x350AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350AF8u;
            // 0x350afc: 0x8c44ea40  lw          $a0, -0x15C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350B00u; }
        if (ctx->pc != 0x350B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350B00u; }
        if (ctx->pc != 0x350B00u) { return; }
    }
    ctx->pc = 0x350B00u;
label_350b00:
    // 0x350b00: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x350b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_350b04:
    // 0x350b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x350b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350b08:
    // 0x350b08: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_350b0c:
    if (ctx->pc == 0x350B0Cu) {
        ctx->pc = 0x350B0Cu;
            // 0x350b0c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x350B10u;
        goto label_350b10;
    }
    ctx->pc = 0x350B08u;
    {
        const bool branch_taken_0x350b08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x350B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350B08u;
            // 0x350b0c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350b08) {
            ctx->pc = 0x350B44u;
            goto label_350b44;
        }
    }
    ctx->pc = 0x350B10u;
label_350b10:
    // 0x350b10: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x350b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_350b14:
    // 0x350b14: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x350b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_350b18:
    // 0x350b18: 0x8c420e40  lw          $v0, 0xE40($v0)
    ctx->pc = 0x350b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3648)));
label_350b1c:
    // 0x350b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350b20:
    // 0x350b20: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x350b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_350b24:
    // 0x350b24: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x350b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_350b28:
    // 0x350b28: 0xc08afe0  jal         func_22BF80
label_350b2c:
    if (ctx->pc == 0x350B2Cu) {
        ctx->pc = 0x350B2Cu;
            // 0x350b2c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x350B30u;
        goto label_350b30;
    }
    ctx->pc = 0x350B28u;
    SET_GPR_U32(ctx, 31, 0x350B30u);
    ctx->pc = 0x350B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350B28u;
            // 0x350b2c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350B30u; }
        if (ctx->pc != 0x350B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350B30u; }
        if (ctx->pc != 0x350B30u) { return; }
    }
    ctx->pc = 0x350B30u;
label_350b30:
    // 0x350b30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x350b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_350b34:
    // 0x350b34: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x350b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_350b38:
    // 0x350b38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x350b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_350b3c:
    // 0x350b3c: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x350b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_350b40:
    // 0x350b40: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x350b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_350b44:
    // 0x350b44: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x350b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_350b48:
    // 0x350b48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350b4c:
    // 0x350b4c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x350b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_350b50:
    // 0x350b50: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x350b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_350b54:
    // 0x350b54: 0xc08c798  jal         func_231E60
label_350b58:
    if (ctx->pc == 0x350B58u) {
        ctx->pc = 0x350B58u;
            // 0x350b58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350B5Cu;
        goto label_350b5c;
    }
    ctx->pc = 0x350B54u;
    SET_GPR_U32(ctx, 31, 0x350B5Cu);
    ctx->pc = 0x350B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350B54u;
            // 0x350b58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350B5Cu; }
        if (ctx->pc != 0x350B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350B5Cu; }
        if (ctx->pc != 0x350B5Cu) { return; }
    }
    ctx->pc = 0x350B5Cu;
label_350b5c:
    // 0x350b5c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x350b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_350b60:
    // 0x350b60: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x350b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_350b64:
    // 0x350b64: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x350b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_350b68:
    // 0x350b68: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x350b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_350b6c:
    // 0x350b6c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x350b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_350b70:
    // 0x350b70: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x350b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_350b74:
    // 0x350b74: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x350b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_350b78:
    // 0x350b78: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x350b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_350b7c:
    // 0x350b7c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x350b7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_350b80:
    // 0x350b80: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x350b80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_350b84:
    // 0x350b84: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x350b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_350b88:
    // 0x350b88: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x350b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_350b8c:
    // 0x350b8c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x350b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_350b90:
    // 0x350b90: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x350b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_350b94:
    // 0x350b94: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x350b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_350b98:
    // 0x350b98: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x350b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_350b9c:
    // 0x350b9c: 0xc0a3830  jal         func_28E0C0
label_350ba0:
    if (ctx->pc == 0x350BA0u) {
        ctx->pc = 0x350BA0u;
            // 0x350ba0: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x350BA4u;
        goto label_350ba4;
    }
    ctx->pc = 0x350B9Cu;
    SET_GPR_U32(ctx, 31, 0x350BA4u);
    ctx->pc = 0x350BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350B9Cu;
            // 0x350ba0: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350BA4u; }
        if (ctx->pc != 0x350BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350BA4u; }
        if (ctx->pc != 0x350BA4u) { return; }
    }
    ctx->pc = 0x350BA4u;
label_350ba4:
    // 0x350ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350ba8:
    // 0x350ba8: 0xc08af10  jal         func_22BC40
label_350bac:
    if (ctx->pc == 0x350BACu) {
        ctx->pc = 0x350BACu;
            // 0x350bac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x350BB0u;
        goto label_350bb0;
    }
    ctx->pc = 0x350BA8u;
    SET_GPR_U32(ctx, 31, 0x350BB0u);
    ctx->pc = 0x350BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350BA8u;
            // 0x350bac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350BB0u; }
        if (ctx->pc != 0x350BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350BB0u; }
        if (ctx->pc != 0x350BB0u) { return; }
    }
    ctx->pc = 0x350BB0u;
label_350bb0:
    // 0x350bb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_350bb4:
    // 0x350bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_350bb8:
    // 0x350bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_350bbc:
    // 0x350bbc: 0x3e00008  jr          $ra
label_350bc0:
    if (ctx->pc == 0x350BC0u) {
        ctx->pc = 0x350BC0u;
            // 0x350bc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x350BC4u;
        goto label_350bc4;
    }
    ctx->pc = 0x350BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350BBCu;
            // 0x350bc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350BC4u;
label_350bc4:
    // 0x350bc4: 0x0  nop
    ctx->pc = 0x350bc4u;
    // NOP
label_350bc8:
    // 0x350bc8: 0x0  nop
    ctx->pc = 0x350bc8u;
    // NOP
label_350bcc:
    // 0x350bcc: 0x0  nop
    ctx->pc = 0x350bccu;
    // NOP
label_350bd0:
    // 0x350bd0: 0x3e00008  jr          $ra
label_350bd4:
    if (ctx->pc == 0x350BD4u) {
        ctx->pc = 0x350BD4u;
            // 0x350bd4: 0x240207e4  addiu       $v0, $zero, 0x7E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2020));
        ctx->pc = 0x350BD8u;
        goto label_350bd8;
    }
    ctx->pc = 0x350BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350BD0u;
            // 0x350bd4: 0x240207e4  addiu       $v0, $zero, 0x7E4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2020));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350BD8u;
label_350bd8:
    // 0x350bd8: 0x0  nop
    ctx->pc = 0x350bd8u;
    // NOP
label_350bdc:
    // 0x350bdc: 0x0  nop
    ctx->pc = 0x350bdcu;
    // NOP
label_350be0:
    // 0x350be0: 0x80b3170  j           func_2CC5C0
label_350be4:
    if (ctx->pc == 0x350BE4u) {
        ctx->pc = 0x350BE4u;
            // 0x350be4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x350BE8u;
        goto label_350be8;
    }
    ctx->pc = 0x350BE0u;
    ctx->pc = 0x350BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350BE0u;
            // 0x350be4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC5C0u;
    {
        auto targetFn = runtime->lookupFunction(0x2CC5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x350BE8u;
label_350be8:
    // 0x350be8: 0x0  nop
    ctx->pc = 0x350be8u;
    // NOP
label_350bec:
    // 0x350bec: 0x0  nop
    ctx->pc = 0x350becu;
    // NOP
label_350bf0:
    // 0x350bf0: 0x80d3fb4  j           func_34FED0
label_350bf4:
    if (ctx->pc == 0x350BF4u) {
        ctx->pc = 0x350BF4u;
            // 0x350bf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x350BF8u;
        goto label_350bf8;
    }
    ctx->pc = 0x350BF0u;
    ctx->pc = 0x350BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350BF0u;
            // 0x350bf4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34FED0u;
    {
        auto targetFn = runtime->lookupFunction(0x34FED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x350BF8u;
label_350bf8:
    // 0x350bf8: 0x0  nop
    ctx->pc = 0x350bf8u;
    // NOP
label_350bfc:
    // 0x350bfc: 0x0  nop
    ctx->pc = 0x350bfcu;
    // NOP
label_350c00:
    // 0x350c00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x350c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_350c04:
    // 0x350c04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x350c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_350c08:
    // 0x350c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x350c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_350c0c:
    // 0x350c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x350c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_350c10:
    // 0x350c10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x350c10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_350c14:
    // 0x350c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x350c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_350c18:
    // 0x350c18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x350c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_350c1c:
    // 0x350c1c: 0x1260003f  beqz        $s3, . + 4 + (0x3F << 2)
label_350c20:
    if (ctx->pc == 0x350C20u) {
        ctx->pc = 0x350C20u;
            // 0x350c20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x350C24u;
        goto label_350c24;
    }
    ctx->pc = 0x350C1Cu;
    {
        const bool branch_taken_0x350c1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350C1Cu;
            // 0x350c20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c1c) {
            ctx->pc = 0x350D1Cu;
            goto label_350d1c;
        }
    }
    ctx->pc = 0x350C24u;
label_350c24:
    // 0x350c24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x350c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_350c28:
    // 0x350c28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x350c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_350c2c:
    // 0x350c2c: 0x24425cc0  addiu       $v0, $v0, 0x5CC0
    ctx->pc = 0x350c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23744));
label_350c30:
    // 0x350c30: 0x24635cc8  addiu       $v1, $v1, 0x5CC8
    ctx->pc = 0x350c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23752));
label_350c34:
    // 0x350c34: 0xae6200a0  sw          $v0, 0xA0($s3)
    ctx->pc = 0x350c34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 2));
label_350c38:
    // 0x350c38: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x350c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_350c3c:
    // 0x350c3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x350c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_350c40:
    // 0x350c40: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x350c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_350c44:
    // 0x350c44: 0x24425d00  addiu       $v0, $v0, 0x5D00
    ctx->pc = 0x350c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23808));
label_350c48:
    // 0x350c48: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_350c4c:
    if (ctx->pc == 0x350C4Cu) {
        ctx->pc = 0x350C4Cu;
            // 0x350c4c: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x350C50u;
        goto label_350c50;
    }
    ctx->pc = 0x350C48u;
    {
        const bool branch_taken_0x350c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x350C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350C48u;
            // 0x350c4c: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350c48) {
            ctx->pc = 0x350C70u;
            goto label_350c70;
        }
    }
    ctx->pc = 0x350C50u;
label_350c50:
    // 0x350c50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x350c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_350c54:
    // 0x350c54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x350c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_350c58:
    // 0x350c58: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x350c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
label_350c5c:
    // 0x350c5c: 0x244201e8  addiu       $v0, $v0, 0x1E8
    ctx->pc = 0x350c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 488));
label_350c60:
    // 0x350c60: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x350c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_350c64:
    // 0x350c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x350c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350c68:
    // 0x350c68: 0xc0b2df8  jal         func_2CB7E0
label_350c6c:
    if (ctx->pc == 0x350C6Cu) {
        ctx->pc = 0x350C6Cu;
            // 0x350c6c: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x350C70u;
        goto label_350c70;
    }
    ctx->pc = 0x350C68u;
    SET_GPR_U32(ctx, 31, 0x350C70u);
    ctx->pc = 0x350C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350C68u;
            // 0x350c6c: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB7E0u;
    if (runtime->hasFunction(0x2CB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350C70u; }
        if (ctx->pc != 0x350C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CB7E0_0x2cb7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350C70u; }
        if (ctx->pc != 0x350C70u) { return; }
    }
    ctx->pc = 0x350C70u;
label_350c70:
    // 0x350c70: 0x52600025  beql        $s3, $zero, . + 4 + (0x25 << 2)
label_350c74:
    if (ctx->pc == 0x350C74u) {
        ctx->pc = 0x350C74u;
            // 0x350c74: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x350C78u;
        goto label_350c78;
    }
    ctx->pc = 0x350C70u;
    {
        const bool branch_taken_0x350c70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x350c70) {
            ctx->pc = 0x350C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350C70u;
            // 0x350c74: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350D08u;
            goto label_350d08;
        }
    }
    ctx->pc = 0x350C78u;
label_350c78:
    // 0x350c78: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x350c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_350c7c:
    // 0x350c7c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x350c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_350c80:
    // 0x350c80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x350c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_350c84:
    // 0x350c84: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x350c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_350c88:
    // 0x350c88: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x350c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
label_350c8c:
    // 0x350c8c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x350c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_350c90:
    // 0x350c90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x350c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_350c94:
    // 0x350c94: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_350c98:
    if (ctx->pc == 0x350C98u) {
        ctx->pc = 0x350C9Cu;
        goto label_350c9c;
    }
    ctx->pc = 0x350C94u;
    {
        const bool branch_taken_0x350c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x350c94) {
            ctx->pc = 0x350CE8u;
            goto label_350ce8;
        }
    }
    ctx->pc = 0x350C9Cu;
label_350c9c:
    // 0x350c9c: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x350c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_350ca0:
    // 0x350ca0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x350ca0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_350ca4:
    // 0x350ca4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x350ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_350ca8:
    // 0x350ca8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_350cac:
    if (ctx->pc == 0x350CACu) {
        ctx->pc = 0x350CB0u;
        goto label_350cb0;
    }
    ctx->pc = 0x350CA8u;
    {
        const bool branch_taken_0x350ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x350ca8) {
            ctx->pc = 0x350CC0u;
            goto label_350cc0;
        }
    }
    ctx->pc = 0x350CB0u;
label_350cb0:
    // 0x350cb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x350cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_350cb4:
    // 0x350cb4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x350cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_350cb8:
    // 0x350cb8: 0x320f809  jalr        $t9
label_350cbc:
    if (ctx->pc == 0x350CBCu) {
        ctx->pc = 0x350CBCu;
            // 0x350cbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x350CC0u;
        goto label_350cc0;
    }
    ctx->pc = 0x350CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350CC0u);
        ctx->pc = 0x350CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350CB8u;
            // 0x350cbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x350CC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350CC0u; }
            if (ctx->pc != 0x350CC0u) { return; }
        }
        }
    }
    ctx->pc = 0x350CC0u;
label_350cc0:
    // 0x350cc0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x350cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_350cc4:
    // 0x350cc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x350cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_350cc8:
    // 0x350cc8: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x350cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_350ccc:
    // 0x350ccc: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x350cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_350cd0:
    // 0x350cd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x350cd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_350cd4:
    // 0x350cd4: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x350cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_350cd8:
    // 0x350cd8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x350cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_350cdc:
    // 0x350cdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x350cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_350ce0:
    // 0x350ce0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_350ce4:
    if (ctx->pc == 0x350CE4u) {
        ctx->pc = 0x350CE4u;
            // 0x350ce4: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x350CE8u;
        goto label_350ce8;
    }
    ctx->pc = 0x350CE0u;
    {
        const bool branch_taken_0x350ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350ce0) {
            ctx->pc = 0x350CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350CE0u;
            // 0x350ce4: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_350ca0;
        }
    }
    ctx->pc = 0x350CE8u;
label_350ce8:
    // 0x350ce8: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_350cec:
    if (ctx->pc == 0x350CECu) {
        ctx->pc = 0x350CF0u;
        goto label_350cf0;
    }
    ctx->pc = 0x350CE8u;
    {
        const bool branch_taken_0x350ce8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x350ce8) {
            ctx->pc = 0x350D04u;
            goto label_350d04;
        }
    }
    ctx->pc = 0x350CF0u;
label_350cf0:
    // 0x350cf0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_350cf4:
    if (ctx->pc == 0x350CF4u) {
        ctx->pc = 0x350CF8u;
        goto label_350cf8;
    }
    ctx->pc = 0x350CF0u;
    {
        const bool branch_taken_0x350cf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x350cf0) {
            ctx->pc = 0x350D04u;
            goto label_350d04;
        }
    }
    ctx->pc = 0x350CF8u;
label_350cf8:
    // 0x350cf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x350cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_350cfc:
    // 0x350cfc: 0xc0b4b74  jal         func_2D2DD0
label_350d00:
    if (ctx->pc == 0x350D00u) {
        ctx->pc = 0x350D00u;
            // 0x350d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350D04u;
        goto label_350d04;
    }
    ctx->pc = 0x350CFCu;
    SET_GPR_U32(ctx, 31, 0x350D04u);
    ctx->pc = 0x350D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350CFCu;
            // 0x350d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DD0u;
    if (runtime->hasFunction(0x2D2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350D04u; }
        if (ctx->pc != 0x350D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2DD0_0x2d2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350D04u; }
        if (ctx->pc != 0x350D04u) { return; }
    }
    ctx->pc = 0x350D04u;
label_350d04:
    // 0x350d04: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x350d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_350d08:
    // 0x350d08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x350d08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_350d0c:
    // 0x350d0c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_350d10:
    if (ctx->pc == 0x350D10u) {
        ctx->pc = 0x350D10u;
            // 0x350d10: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350D14u;
        goto label_350d14;
    }
    ctx->pc = 0x350D0Cu;
    {
        const bool branch_taken_0x350d0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x350d0c) {
            ctx->pc = 0x350D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350D0Cu;
            // 0x350d10: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350D20u;
            goto label_350d20;
        }
    }
    ctx->pc = 0x350D14u;
label_350d14:
    // 0x350d14: 0xc0400a8  jal         func_1002A0
label_350d18:
    if (ctx->pc == 0x350D18u) {
        ctx->pc = 0x350D18u;
            // 0x350d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350D1Cu;
        goto label_350d1c;
    }
    ctx->pc = 0x350D14u;
    SET_GPR_U32(ctx, 31, 0x350D1Cu);
    ctx->pc = 0x350D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350D14u;
            // 0x350d18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350D1Cu; }
        if (ctx->pc != 0x350D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350D1Cu; }
        if (ctx->pc != 0x350D1Cu) { return; }
    }
    ctx->pc = 0x350D1Cu;
label_350d1c:
    // 0x350d1c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x350d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_350d20:
    // 0x350d20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x350d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_350d24:
    // 0x350d24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x350d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_350d28:
    // 0x350d28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x350d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_350d2c:
    // 0x350d2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_350d30:
    // 0x350d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_350d34:
    // 0x350d34: 0x3e00008  jr          $ra
label_350d38:
    if (ctx->pc == 0x350D38u) {
        ctx->pc = 0x350D38u;
            // 0x350d38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x350D3Cu;
        goto label_350d3c;
    }
    ctx->pc = 0x350D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350D34u;
            // 0x350d38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350D3Cu;
label_350d3c:
    // 0x350d3c: 0x0  nop
    ctx->pc = 0x350d3cu;
    // NOP
label_350d40:
    // 0x350d40: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x350d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_350d44:
    // 0x350d44: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x350d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_350d48:
    // 0x350d48: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x350d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_350d4c:
    // 0x350d4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x350d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_350d50:
    // 0x350d50: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x350d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_350d54:
    // 0x350d54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x350d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_350d58:
    // 0x350d58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x350d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_350d5c:
    // 0x350d5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x350d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_350d60:
    // 0x350d60: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x350d60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_350d64:
    // 0x350d64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x350d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_350d68:
    // 0x350d68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x350d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_350d6c:
    // 0x350d6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x350d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_350d70:
    // 0x350d70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_350d74:
    // 0x350d74: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x350d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_350d78:
    // 0x350d78: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x350d78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_350d7c:
    // 0x350d7c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x350d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_350d80:
    // 0x350d80: 0x50830011  beql        $a0, $v1, . + 4 + (0x11 << 2)
label_350d84:
    if (ctx->pc == 0x350D84u) {
        ctx->pc = 0x350D84u;
            // 0x350d84: 0x8eb7007c  lw          $s7, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->pc = 0x350D88u;
        goto label_350d88;
    }
    ctx->pc = 0x350D80u;
    {
        const bool branch_taken_0x350d80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x350d80) {
            ctx->pc = 0x350D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350D80u;
            // 0x350d84: 0x8eb7007c  lw          $s7, 0x7C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350DC8u;
            goto label_350dc8;
        }
    }
    ctx->pc = 0x350D88u;
label_350d88:
    // 0x350d88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_350d8c:
    // 0x350d8c: 0x50830095  beql        $a0, $v1, . + 4 + (0x95 << 2)
label_350d90:
    if (ctx->pc == 0x350D90u) {
        ctx->pc = 0x350D90u;
            // 0x350d90: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x350D94u;
        goto label_350d94;
    }
    ctx->pc = 0x350D8Cu;
    {
        const bool branch_taken_0x350d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x350d8c) {
            ctx->pc = 0x350D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350D8Cu;
            // 0x350d90: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350FE4u;
            goto label_350fe4;
        }
    }
    ctx->pc = 0x350D94u;
label_350d94:
    // 0x350d94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_350d98:
    // 0x350d98: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_350d9c:
    if (ctx->pc == 0x350D9Cu) {
        ctx->pc = 0x350D9Cu;
            // 0x350d9c: 0x8eb9000c  lw          $t9, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->pc = 0x350DA0u;
        goto label_350da0;
    }
    ctx->pc = 0x350D98u;
    {
        const bool branch_taken_0x350d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x350d98) {
            ctx->pc = 0x350D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350D98u;
            // 0x350d9c: 0x8eb9000c  lw          $t9, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350DA8u;
            goto label_350da8;
        }
    }
    ctx->pc = 0x350DA0u;
label_350da0:
    // 0x350da0: 0x1000008f  b           . + 4 + (0x8F << 2)
label_350da4:
    if (ctx->pc == 0x350DA4u) {
        ctx->pc = 0x350DA8u;
        goto label_350da8;
    }
    ctx->pc = 0x350DA0u;
    {
        const bool branch_taken_0x350da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350da0) {
            ctx->pc = 0x350FE0u;
            goto label_350fe0;
        }
    }
    ctx->pc = 0x350DA8u;
label_350da8:
    // 0x350da8: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x350da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_350dac:
    // 0x350dac: 0x8ca20cb4  lw          $v0, 0xCB4($a1)
    ctx->pc = 0x350dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3252)));
label_350db0:
    // 0x350db0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x350db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_350db4:
    // 0x350db4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x350db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_350db8:
    // 0x350db8: 0x320f809  jalr        $t9
label_350dbc:
    if (ctx->pc == 0x350DBCu) {
        ctx->pc = 0x350DBCu;
            // 0x350dbc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x350DC0u;
        goto label_350dc0;
    }
    ctx->pc = 0x350DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350DC0u);
        ctx->pc = 0x350DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350DB8u;
            // 0x350dbc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x350DC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350DC0u; }
            if (ctx->pc != 0x350DC0u) { return; }
        }
        }
    }
    ctx->pc = 0x350DC0u;
label_350dc0:
    // 0x350dc0: 0x10000087  b           . + 4 + (0x87 << 2)
label_350dc4:
    if (ctx->pc == 0x350DC4u) {
        ctx->pc = 0x350DC8u;
        goto label_350dc8;
    }
    ctx->pc = 0x350DC0u;
    {
        const bool branch_taken_0x350dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350dc0) {
            ctx->pc = 0x350FE0u;
            goto label_350fe0;
        }
    }
    ctx->pc = 0x350DC8u;
label_350dc8:
    // 0x350dc8: 0x12e00085  beqz        $s7, . + 4 + (0x85 << 2)
label_350dcc:
    if (ctx->pc == 0x350DCCu) {
        ctx->pc = 0x350DD0u;
        goto label_350dd0;
    }
    ctx->pc = 0x350DC8u;
    {
        const bool branch_taken_0x350dc8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x350dc8) {
            ctx->pc = 0x350FE0u;
            goto label_350fe0;
        }
    }
    ctx->pc = 0x350DD0u;
label_350dd0:
    // 0x350dd0: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x350dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_350dd4:
    // 0x350dd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350dd8:
    // 0x350dd8: 0x8c85d130  lw          $a1, -0x2ED0($a0)
    ctx->pc = 0x350dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_350ddc:
    // 0x350ddc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x350ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_350de0:
    // 0x350de0: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x350de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_350de4:
    // 0x350de4: 0x26b10090  addiu       $s1, $s5, 0x90
    ctx->pc = 0x350de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_350de8:
    // 0x350de8: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x350de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_350dec:
    // 0x350dec: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x350decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_350df0:
    // 0x350df0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x350df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_350df4:
    // 0x350df4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x350df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_350df8:
    // 0x350df8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350dfc:
    // 0x350dfc: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x350dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_350e00:
    // 0x350e00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x350e00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_350e04:
    // 0x350e04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x350e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_350e08:
    // 0x350e08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x350e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_350e0c:
    // 0x350e0c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x350e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_350e10:
    // 0x350e10: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x350e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_350e14:
    // 0x350e14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350e18:
    // 0x350e18: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x350e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_350e1c:
    // 0x350e1c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x350e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_350e20:
    // 0x350e20: 0x92a2009c  lbu         $v0, 0x9C($s5)
    ctx->pc = 0x350e20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 156)));
label_350e24:
    // 0x350e24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_350e28:
    if (ctx->pc == 0x350E28u) {
        ctx->pc = 0x350E28u;
            // 0x350e28: 0x249e0010  addiu       $fp, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x350E2Cu;
        goto label_350e2c;
    }
    ctx->pc = 0x350E24u;
    {
        const bool branch_taken_0x350e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350E24u;
            // 0x350e28: 0x249e0010  addiu       $fp, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e24) {
            ctx->pc = 0x350E44u;
            goto label_350e44;
        }
    }
    ctx->pc = 0x350E2Cu;
label_350e2c:
    // 0x350e2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350e30:
    // 0x350e30: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x350e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_350e34:
    // 0x350e34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x350e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_350e38:
    // 0x350e38: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x350e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_350e3c:
    // 0x350e3c: 0x320f809  jalr        $t9
label_350e40:
    if (ctx->pc == 0x350E40u) {
        ctx->pc = 0x350E44u;
        goto label_350e44;
    }
    ctx->pc = 0x350E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350E44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x350E44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350E44u; }
            if (ctx->pc != 0x350E44u) { return; }
        }
        }
    }
    ctx->pc = 0x350E44u;
label_350e44:
    // 0x350e44: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x350e44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350e48:
    // 0x350e48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x350e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350e4c:
    // 0x350e4c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x350e4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_350e50:
    // 0x350e50: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x350e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_350e54:
    // 0x350e54: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x350e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_350e58:
    // 0x350e58: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x350e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_350e5c:
    // 0x350e5c: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x350e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_350e60:
    // 0x350e60: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x350e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_350e64:
    // 0x350e64: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x350e64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_350e68:
    // 0x350e68: 0xc0d410c  jal         func_350430
label_350e6c:
    if (ctx->pc == 0x350E6Cu) {
        ctx->pc = 0x350E6Cu;
            // 0x350e6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350E70u;
        goto label_350e70;
    }
    ctx->pc = 0x350E68u;
    SET_GPR_U32(ctx, 31, 0x350E70u);
    ctx->pc = 0x350E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350E68u;
            // 0x350e6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350430u;
    if (runtime->hasFunction(0x350430u)) {
        auto targetFn = runtime->lookupFunction(0x350430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350E70u; }
        if (ctx->pc != 0x350E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350430_0x350430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350E70u; }
        if (ctx->pc != 0x350E70u) { return; }
    }
    ctx->pc = 0x350E70u;
label_350e70:
    // 0x350e70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x350e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_350e74:
    // 0x350e74: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_350e78:
    if (ctx->pc == 0x350E78u) {
        ctx->pc = 0x350E7Cu;
        goto label_350e7c;
    }
    ctx->pc = 0x350E74u;
    {
        const bool branch_taken_0x350e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350e74) {
            ctx->pc = 0x350F68u;
            goto label_350f68;
        }
    }
    ctx->pc = 0x350E7Cu;
label_350e7c:
    // 0x350e7c: 0xc0d1c14  jal         func_347050
label_350e80:
    if (ctx->pc == 0x350E80u) {
        ctx->pc = 0x350E80u;
            // 0x350e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350E84u;
        goto label_350e84;
    }
    ctx->pc = 0x350E7Cu;
    SET_GPR_U32(ctx, 31, 0x350E84u);
    ctx->pc = 0x350E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350E7Cu;
            // 0x350e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350E84u; }
        if (ctx->pc != 0x350E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350E84u; }
        if (ctx->pc != 0x350E84u) { return; }
    }
    ctx->pc = 0x350E84u;
label_350e84:
    // 0x350e84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350e88:
    // 0x350e88: 0xc04f278  jal         func_13C9E0
label_350e8c:
    if (ctx->pc == 0x350E8Cu) {
        ctx->pc = 0x350E8Cu;
            // 0x350e8c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x350E90u;
        goto label_350e90;
    }
    ctx->pc = 0x350E88u;
    SET_GPR_U32(ctx, 31, 0x350E90u);
    ctx->pc = 0x350E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350E88u;
            // 0x350e8c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350E90u; }
        if (ctx->pc != 0x350E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350E90u; }
        if (ctx->pc != 0x350E90u) { return; }
    }
    ctx->pc = 0x350E90u;
label_350e90:
    // 0x350e90: 0xc0d1c10  jal         func_347040
label_350e94:
    if (ctx->pc == 0x350E94u) {
        ctx->pc = 0x350E94u;
            // 0x350e94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350E98u;
        goto label_350e98;
    }
    ctx->pc = 0x350E90u;
    SET_GPR_U32(ctx, 31, 0x350E98u);
    ctx->pc = 0x350E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350E90u;
            // 0x350e94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350E98u; }
        if (ctx->pc != 0x350E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350E98u; }
        if (ctx->pc != 0x350E98u) { return; }
    }
    ctx->pc = 0x350E98u;
label_350e98:
    // 0x350e98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350e9c:
    // 0x350e9c: 0xc04ce80  jal         func_133A00
label_350ea0:
    if (ctx->pc == 0x350EA0u) {
        ctx->pc = 0x350EA0u;
            // 0x350ea0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x350EA4u;
        goto label_350ea4;
    }
    ctx->pc = 0x350E9Cu;
    SET_GPR_U32(ctx, 31, 0x350EA4u);
    ctx->pc = 0x350EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350E9Cu;
            // 0x350ea0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350EA4u; }
        if (ctx->pc != 0x350EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350EA4u; }
        if (ctx->pc != 0x350EA4u) { return; }
    }
    ctx->pc = 0x350EA4u;
label_350ea4:
    // 0x350ea4: 0xc66c0064  lwc1        $f12, 0x64($s3)
    ctx->pc = 0x350ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_350ea8:
    // 0x350ea8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x350ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_350eac:
    // 0x350eac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x350eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_350eb0:
    // 0x350eb0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x350eb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_350eb4:
    // 0x350eb4: 0xc04ce50  jal         func_133940
label_350eb8:
    if (ctx->pc == 0x350EB8u) {
        ctx->pc = 0x350EB8u;
            // 0x350eb8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x350EBCu;
        goto label_350ebc;
    }
    ctx->pc = 0x350EB4u;
    SET_GPR_U32(ctx, 31, 0x350EBCu);
    ctx->pc = 0x350EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350EB4u;
            // 0x350eb8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350EBCu; }
        if (ctx->pc != 0x350EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350EBCu; }
        if (ctx->pc != 0x350EBCu) { return; }
    }
    ctx->pc = 0x350EBCu;
label_350ebc:
    // 0x350ebc: 0xc0d4108  jal         func_350420
label_350ec0:
    if (ctx->pc == 0x350EC0u) {
        ctx->pc = 0x350EC4u;
        goto label_350ec4;
    }
    ctx->pc = 0x350EBCu;
    SET_GPR_U32(ctx, 31, 0x350EC4u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350EC4u; }
        if (ctx->pc != 0x350EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350EC4u; }
        if (ctx->pc != 0x350EC4u) { return; }
    }
    ctx->pc = 0x350EC4u;
label_350ec4:
    // 0x350ec4: 0xc0b36b4  jal         func_2CDAD0
label_350ec8:
    if (ctx->pc == 0x350EC8u) {
        ctx->pc = 0x350EC8u;
            // 0x350ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350ECCu;
        goto label_350ecc;
    }
    ctx->pc = 0x350EC4u;
    SET_GPR_U32(ctx, 31, 0x350ECCu);
    ctx->pc = 0x350EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350EC4u;
            // 0x350ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350ECCu; }
        if (ctx->pc != 0x350ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350ECCu; }
        if (ctx->pc != 0x350ECCu) { return; }
    }
    ctx->pc = 0x350ECCu;
label_350ecc:
    // 0x350ecc: 0xc0b9c64  jal         func_2E7190
label_350ed0:
    if (ctx->pc == 0x350ED0u) {
        ctx->pc = 0x350ED0u;
            // 0x350ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350ED4u;
        goto label_350ed4;
    }
    ctx->pc = 0x350ECCu;
    SET_GPR_U32(ctx, 31, 0x350ED4u);
    ctx->pc = 0x350ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350ECCu;
            // 0x350ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350ED4u; }
        if (ctx->pc != 0x350ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350ED4u; }
        if (ctx->pc != 0x350ED4u) { return; }
    }
    ctx->pc = 0x350ED4u;
label_350ed4:
    // 0x350ed4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x350ed4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350ed8:
    // 0x350ed8: 0xc0d4104  jal         func_350410
label_350edc:
    if (ctx->pc == 0x350EDCu) {
        ctx->pc = 0x350EDCu;
            // 0x350edc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350EE0u;
        goto label_350ee0;
    }
    ctx->pc = 0x350ED8u;
    SET_GPR_U32(ctx, 31, 0x350EE0u);
    ctx->pc = 0x350EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350ED8u;
            // 0x350edc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350EE0u; }
        if (ctx->pc != 0x350EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350EE0u; }
        if (ctx->pc != 0x350EE0u) { return; }
    }
    ctx->pc = 0x350EE0u;
label_350ee0:
    // 0x350ee0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x350ee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350ee4:
    // 0x350ee4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x350ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_350ee8:
    // 0x350ee8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x350ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_350eec:
    // 0x350eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x350eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_350ef0:
    // 0x350ef0: 0xc44c3fe0  lwc1        $f12, 0x3FE0($v0)
    ctx->pc = 0x350ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_350ef4:
    // 0x350ef4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x350ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_350ef8:
    // 0x350ef8: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x350ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_350efc:
    // 0x350efc: 0xc0d40ac  jal         func_3502B0
label_350f00:
    if (ctx->pc == 0x350F00u) {
        ctx->pc = 0x350F00u;
            // 0x350f00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350F04u;
        goto label_350f04;
    }
    ctx->pc = 0x350EFCu;
    SET_GPR_U32(ctx, 31, 0x350F04u);
    ctx->pc = 0x350F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350EFCu;
            // 0x350f00: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F04u; }
        if (ctx->pc != 0x350F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F04u; }
        if (ctx->pc != 0x350F04u) { return; }
    }
    ctx->pc = 0x350F04u;
label_350f04:
    // 0x350f04: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x350f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_350f08:
    // 0x350f08: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_350f0c:
    if (ctx->pc == 0x350F0Cu) {
        ctx->pc = 0x350F0Cu;
            // 0x350f0c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x350F10u;
        goto label_350f10;
    }
    ctx->pc = 0x350F08u;
    {
        const bool branch_taken_0x350f08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350F08u;
            // 0x350f0c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f08) {
            ctx->pc = 0x350F68u;
            goto label_350f68;
        }
    }
    ctx->pc = 0x350F10u;
label_350f10:
    // 0x350f10: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x350f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_350f14:
    // 0x350f14: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x350f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_350f18:
    // 0x350f18: 0xc0d4404  jal         func_351010
label_350f1c:
    if (ctx->pc == 0x350F1Cu) {
        ctx->pc = 0x350F1Cu;
            // 0x350f1c: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->pc = 0x350F20u;
        goto label_350f20;
    }
    ctx->pc = 0x350F18u;
    SET_GPR_U32(ctx, 31, 0x350F20u);
    ctx->pc = 0x350F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350F18u;
            // 0x350f1c: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351010u;
    if (runtime->hasFunction(0x351010u)) {
        auto targetFn = runtime->lookupFunction(0x351010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F20u; }
        if (ctx->pc != 0x350F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351010_0x351010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F20u; }
        if (ctx->pc != 0x350F20u) { return; }
    }
    ctx->pc = 0x350F20u;
label_350f20:
    // 0x350f20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x350f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_350f24:
    // 0x350f24: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x350f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_350f28:
    // 0x350f28: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x350f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_350f2c:
    // 0x350f2c: 0xc04e4a4  jal         func_139290
label_350f30:
    if (ctx->pc == 0x350F30u) {
        ctx->pc = 0x350F30u;
            // 0x350f30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350F34u;
        goto label_350f34;
    }
    ctx->pc = 0x350F2Cu;
    SET_GPR_U32(ctx, 31, 0x350F34u);
    ctx->pc = 0x350F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350F2Cu;
            // 0x350f30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F34u; }
        if (ctx->pc != 0x350F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F34u; }
        if (ctx->pc != 0x350F34u) { return; }
    }
    ctx->pc = 0x350F34u;
label_350f34:
    // 0x350f34: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x350f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_350f38:
    // 0x350f38: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x350f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_350f3c:
    // 0x350f3c: 0xc04cd60  jal         func_133580
label_350f40:
    if (ctx->pc == 0x350F40u) {
        ctx->pc = 0x350F40u;
            // 0x350f40: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x350F44u;
        goto label_350f44;
    }
    ctx->pc = 0x350F3Cu;
    SET_GPR_U32(ctx, 31, 0x350F44u);
    ctx->pc = 0x350F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350F3Cu;
            // 0x350f40: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F44u; }
        if (ctx->pc != 0x350F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F44u; }
        if (ctx->pc != 0x350F44u) { return; }
    }
    ctx->pc = 0x350F44u;
label_350f44:
    // 0x350f44: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x350f44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_350f48:
    // 0x350f48: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x350f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_350f4c:
    // 0x350f4c: 0x320f809  jalr        $t9
label_350f50:
    if (ctx->pc == 0x350F50u) {
        ctx->pc = 0x350F50u;
            // 0x350f50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350F54u;
        goto label_350f54;
    }
    ctx->pc = 0x350F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350F54u);
        ctx->pc = 0x350F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350F4Cu;
            // 0x350f50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x350F54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350F54u; }
            if (ctx->pc != 0x350F54u) { return; }
        }
        }
    }
    ctx->pc = 0x350F54u;
label_350f54:
    // 0x350f54: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x350f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_350f58:
    // 0x350f58: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x350f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_350f5c:
    // 0x350f5c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x350f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_350f60:
    // 0x350f60: 0xc054fd4  jal         func_153F50
label_350f64:
    if (ctx->pc == 0x350F64u) {
        ctx->pc = 0x350F64u;
            // 0x350f64: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350F68u;
        goto label_350f68;
    }
    ctx->pc = 0x350F60u;
    SET_GPR_U32(ctx, 31, 0x350F68u);
    ctx->pc = 0x350F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350F60u;
            // 0x350f64: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F68u; }
        if (ctx->pc != 0x350F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F68u; }
        if (ctx->pc != 0x350F68u) { return; }
    }
    ctx->pc = 0x350F68u;
label_350f68:
    // 0x350f68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x350f68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_350f6c:
    // 0x350f6c: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x350f6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_350f70:
    // 0x350f70: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
label_350f74:
    if (ctx->pc == 0x350F74u) {
        ctx->pc = 0x350F74u;
            // 0x350f74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x350F78u;
        goto label_350f78;
    }
    ctx->pc = 0x350F70u;
    {
        const bool branch_taken_0x350f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x350F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350F70u;
            // 0x350f74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f70) {
            ctx->pc = 0x350E4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_350e4c;
        }
    }
    ctx->pc = 0x350F78u;
label_350f78:
    // 0x350f78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x350f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_350f7c:
    // 0x350f7c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x350f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_350f80:
    // 0x350f80: 0x5860000f  blezl       $v1, . + 4 + (0xF << 2)
label_350f84:
    if (ctx->pc == 0x350F84u) {
        ctx->pc = 0x350F84u;
            // 0x350f84: 0x92a3009c  lbu         $v1, 0x9C($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 156)));
        ctx->pc = 0x350F88u;
        goto label_350f88;
    }
    ctx->pc = 0x350F80u;
    {
        const bool branch_taken_0x350f80 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x350f80) {
            ctx->pc = 0x350F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350F80u;
            // 0x350f84: 0x92a3009c  lbu         $v1, 0x9C($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x350FC0u;
            goto label_350fc0;
        }
    }
    ctx->pc = 0x350F88u;
label_350f88:
    // 0x350f88: 0xc04e738  jal         func_139CE0
label_350f8c:
    if (ctx->pc == 0x350F8Cu) {
        ctx->pc = 0x350F8Cu;
            // 0x350f8c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x350F90u;
        goto label_350f90;
    }
    ctx->pc = 0x350F88u;
    SET_GPR_U32(ctx, 31, 0x350F90u);
    ctx->pc = 0x350F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350F88u;
            // 0x350f8c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F90u; }
        if (ctx->pc != 0x350F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350F90u; }
        if (ctx->pc != 0x350F90u) { return; }
    }
    ctx->pc = 0x350F90u;
label_350f90:
    // 0x350f90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350f94:
    // 0x350f94: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x350f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_350f98:
    // 0x350f98: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x350f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_350f9c:
    // 0x350f9c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x350f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_350fa0:
    // 0x350fa0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x350fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_350fa4:
    // 0x350fa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350fa8:
    // 0x350fa8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x350fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_350fac:
    // 0x350fac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350fb0:
    // 0x350fb0: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x350fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_350fb4:
    // 0x350fb4: 0xc055ea8  jal         func_157AA0
label_350fb8:
    if (ctx->pc == 0x350FB8u) {
        ctx->pc = 0x350FB8u;
            // 0x350fb8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x350FBCu;
        goto label_350fbc;
    }
    ctx->pc = 0x350FB4u;
    SET_GPR_U32(ctx, 31, 0x350FBCu);
    ctx->pc = 0x350FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350FB4u;
            // 0x350fb8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350FBCu; }
        if (ctx->pc != 0x350FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350FBCu; }
        if (ctx->pc != 0x350FBCu) { return; }
    }
    ctx->pc = 0x350FBCu;
label_350fbc:
    // 0x350fbc: 0x92a3009c  lbu         $v1, 0x9C($s5)
    ctx->pc = 0x350fbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 156)));
label_350fc0:
    // 0x350fc0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_350fc4:
    if (ctx->pc == 0x350FC4u) {
        ctx->pc = 0x350FC8u;
        goto label_350fc8;
    }
    ctx->pc = 0x350FC0u;
    {
        const bool branch_taken_0x350fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350fc0) {
            ctx->pc = 0x350FE0u;
            goto label_350fe0;
        }
    }
    ctx->pc = 0x350FC8u;
label_350fc8:
    // 0x350fc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x350fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_350fcc:
    // 0x350fcc: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x350fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_350fd0:
    // 0x350fd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x350fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_350fd4:
    // 0x350fd4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x350fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_350fd8:
    // 0x350fd8: 0x320f809  jalr        $t9
label_350fdc:
    if (ctx->pc == 0x350FDCu) {
        ctx->pc = 0x350FE0u;
        goto label_350fe0;
    }
    ctx->pc = 0x350FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x350FE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x350FE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x350FE0u; }
            if (ctx->pc != 0x350FE0u) { return; }
        }
        }
    }
    ctx->pc = 0x350FE0u;
label_350fe0:
    // 0x350fe0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x350fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_350fe4:
    // 0x350fe4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x350fe4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_350fe8:
    // 0x350fe8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x350fe8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_350fec:
    // 0x350fec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x350fecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_350ff0:
    // 0x350ff0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x350ff0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_350ff4:
    // 0x350ff4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x350ff4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_350ff8:
    // 0x350ff8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x350ff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_350ffc:
    // 0x350ffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x350ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_351000:
    // 0x351000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x351000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_351004:
    // 0x351004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_351008:
    // 0x351008: 0x3e00008  jr          $ra
label_35100c:
    if (ctx->pc == 0x35100Cu) {
        ctx->pc = 0x35100Cu;
            // 0x35100c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x351010u;
        goto label_fallthrough_0x351008;
    }
    ctx->pc = 0x351008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35100Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351008u;
            // 0x35100c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x351008:
    ctx->pc = 0x351010u;
}
