#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00274BD0
// Address: 0x274bd0 - 0x275010
void sub_00274BD0_0x274bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274BD0_0x274bd0");
#endif

    switch (ctx->pc) {
        case 0x274bd0u: goto label_274bd0;
        case 0x274bd4u: goto label_274bd4;
        case 0x274bd8u: goto label_274bd8;
        case 0x274bdcu: goto label_274bdc;
        case 0x274be0u: goto label_274be0;
        case 0x274be4u: goto label_274be4;
        case 0x274be8u: goto label_274be8;
        case 0x274becu: goto label_274bec;
        case 0x274bf0u: goto label_274bf0;
        case 0x274bf4u: goto label_274bf4;
        case 0x274bf8u: goto label_274bf8;
        case 0x274bfcu: goto label_274bfc;
        case 0x274c00u: goto label_274c00;
        case 0x274c04u: goto label_274c04;
        case 0x274c08u: goto label_274c08;
        case 0x274c0cu: goto label_274c0c;
        case 0x274c10u: goto label_274c10;
        case 0x274c14u: goto label_274c14;
        case 0x274c18u: goto label_274c18;
        case 0x274c1cu: goto label_274c1c;
        case 0x274c20u: goto label_274c20;
        case 0x274c24u: goto label_274c24;
        case 0x274c28u: goto label_274c28;
        case 0x274c2cu: goto label_274c2c;
        case 0x274c30u: goto label_274c30;
        case 0x274c34u: goto label_274c34;
        case 0x274c38u: goto label_274c38;
        case 0x274c3cu: goto label_274c3c;
        case 0x274c40u: goto label_274c40;
        case 0x274c44u: goto label_274c44;
        case 0x274c48u: goto label_274c48;
        case 0x274c4cu: goto label_274c4c;
        case 0x274c50u: goto label_274c50;
        case 0x274c54u: goto label_274c54;
        case 0x274c58u: goto label_274c58;
        case 0x274c5cu: goto label_274c5c;
        case 0x274c60u: goto label_274c60;
        case 0x274c64u: goto label_274c64;
        case 0x274c68u: goto label_274c68;
        case 0x274c6cu: goto label_274c6c;
        case 0x274c70u: goto label_274c70;
        case 0x274c74u: goto label_274c74;
        case 0x274c78u: goto label_274c78;
        case 0x274c7cu: goto label_274c7c;
        case 0x274c80u: goto label_274c80;
        case 0x274c84u: goto label_274c84;
        case 0x274c88u: goto label_274c88;
        case 0x274c8cu: goto label_274c8c;
        case 0x274c90u: goto label_274c90;
        case 0x274c94u: goto label_274c94;
        case 0x274c98u: goto label_274c98;
        case 0x274c9cu: goto label_274c9c;
        case 0x274ca0u: goto label_274ca0;
        case 0x274ca4u: goto label_274ca4;
        case 0x274ca8u: goto label_274ca8;
        case 0x274cacu: goto label_274cac;
        case 0x274cb0u: goto label_274cb0;
        case 0x274cb4u: goto label_274cb4;
        case 0x274cb8u: goto label_274cb8;
        case 0x274cbcu: goto label_274cbc;
        case 0x274cc0u: goto label_274cc0;
        case 0x274cc4u: goto label_274cc4;
        case 0x274cc8u: goto label_274cc8;
        case 0x274cccu: goto label_274ccc;
        case 0x274cd0u: goto label_274cd0;
        case 0x274cd4u: goto label_274cd4;
        case 0x274cd8u: goto label_274cd8;
        case 0x274cdcu: goto label_274cdc;
        case 0x274ce0u: goto label_274ce0;
        case 0x274ce4u: goto label_274ce4;
        case 0x274ce8u: goto label_274ce8;
        case 0x274cecu: goto label_274cec;
        case 0x274cf0u: goto label_274cf0;
        case 0x274cf4u: goto label_274cf4;
        case 0x274cf8u: goto label_274cf8;
        case 0x274cfcu: goto label_274cfc;
        case 0x274d00u: goto label_274d00;
        case 0x274d04u: goto label_274d04;
        case 0x274d08u: goto label_274d08;
        case 0x274d0cu: goto label_274d0c;
        case 0x274d10u: goto label_274d10;
        case 0x274d14u: goto label_274d14;
        case 0x274d18u: goto label_274d18;
        case 0x274d1cu: goto label_274d1c;
        case 0x274d20u: goto label_274d20;
        case 0x274d24u: goto label_274d24;
        case 0x274d28u: goto label_274d28;
        case 0x274d2cu: goto label_274d2c;
        case 0x274d30u: goto label_274d30;
        case 0x274d34u: goto label_274d34;
        case 0x274d38u: goto label_274d38;
        case 0x274d3cu: goto label_274d3c;
        case 0x274d40u: goto label_274d40;
        case 0x274d44u: goto label_274d44;
        case 0x274d48u: goto label_274d48;
        case 0x274d4cu: goto label_274d4c;
        case 0x274d50u: goto label_274d50;
        case 0x274d54u: goto label_274d54;
        case 0x274d58u: goto label_274d58;
        case 0x274d5cu: goto label_274d5c;
        case 0x274d60u: goto label_274d60;
        case 0x274d64u: goto label_274d64;
        case 0x274d68u: goto label_274d68;
        case 0x274d6cu: goto label_274d6c;
        case 0x274d70u: goto label_274d70;
        case 0x274d74u: goto label_274d74;
        case 0x274d78u: goto label_274d78;
        case 0x274d7cu: goto label_274d7c;
        case 0x274d80u: goto label_274d80;
        case 0x274d84u: goto label_274d84;
        case 0x274d88u: goto label_274d88;
        case 0x274d8cu: goto label_274d8c;
        case 0x274d90u: goto label_274d90;
        case 0x274d94u: goto label_274d94;
        case 0x274d98u: goto label_274d98;
        case 0x274d9cu: goto label_274d9c;
        case 0x274da0u: goto label_274da0;
        case 0x274da4u: goto label_274da4;
        case 0x274da8u: goto label_274da8;
        case 0x274dacu: goto label_274dac;
        case 0x274db0u: goto label_274db0;
        case 0x274db4u: goto label_274db4;
        case 0x274db8u: goto label_274db8;
        case 0x274dbcu: goto label_274dbc;
        case 0x274dc0u: goto label_274dc0;
        case 0x274dc4u: goto label_274dc4;
        case 0x274dc8u: goto label_274dc8;
        case 0x274dccu: goto label_274dcc;
        case 0x274dd0u: goto label_274dd0;
        case 0x274dd4u: goto label_274dd4;
        case 0x274dd8u: goto label_274dd8;
        case 0x274ddcu: goto label_274ddc;
        case 0x274de0u: goto label_274de0;
        case 0x274de4u: goto label_274de4;
        case 0x274de8u: goto label_274de8;
        case 0x274decu: goto label_274dec;
        case 0x274df0u: goto label_274df0;
        case 0x274df4u: goto label_274df4;
        case 0x274df8u: goto label_274df8;
        case 0x274dfcu: goto label_274dfc;
        case 0x274e00u: goto label_274e00;
        case 0x274e04u: goto label_274e04;
        case 0x274e08u: goto label_274e08;
        case 0x274e0cu: goto label_274e0c;
        case 0x274e10u: goto label_274e10;
        case 0x274e14u: goto label_274e14;
        case 0x274e18u: goto label_274e18;
        case 0x274e1cu: goto label_274e1c;
        case 0x274e20u: goto label_274e20;
        case 0x274e24u: goto label_274e24;
        case 0x274e28u: goto label_274e28;
        case 0x274e2cu: goto label_274e2c;
        case 0x274e30u: goto label_274e30;
        case 0x274e34u: goto label_274e34;
        case 0x274e38u: goto label_274e38;
        case 0x274e3cu: goto label_274e3c;
        case 0x274e40u: goto label_274e40;
        case 0x274e44u: goto label_274e44;
        case 0x274e48u: goto label_274e48;
        case 0x274e4cu: goto label_274e4c;
        case 0x274e50u: goto label_274e50;
        case 0x274e54u: goto label_274e54;
        case 0x274e58u: goto label_274e58;
        case 0x274e5cu: goto label_274e5c;
        case 0x274e60u: goto label_274e60;
        case 0x274e64u: goto label_274e64;
        case 0x274e68u: goto label_274e68;
        case 0x274e6cu: goto label_274e6c;
        case 0x274e70u: goto label_274e70;
        case 0x274e74u: goto label_274e74;
        case 0x274e78u: goto label_274e78;
        case 0x274e7cu: goto label_274e7c;
        case 0x274e80u: goto label_274e80;
        case 0x274e84u: goto label_274e84;
        case 0x274e88u: goto label_274e88;
        case 0x274e8cu: goto label_274e8c;
        case 0x274e90u: goto label_274e90;
        case 0x274e94u: goto label_274e94;
        case 0x274e98u: goto label_274e98;
        case 0x274e9cu: goto label_274e9c;
        case 0x274ea0u: goto label_274ea0;
        case 0x274ea4u: goto label_274ea4;
        case 0x274ea8u: goto label_274ea8;
        case 0x274eacu: goto label_274eac;
        case 0x274eb0u: goto label_274eb0;
        case 0x274eb4u: goto label_274eb4;
        case 0x274eb8u: goto label_274eb8;
        case 0x274ebcu: goto label_274ebc;
        case 0x274ec0u: goto label_274ec0;
        case 0x274ec4u: goto label_274ec4;
        case 0x274ec8u: goto label_274ec8;
        case 0x274eccu: goto label_274ecc;
        case 0x274ed0u: goto label_274ed0;
        case 0x274ed4u: goto label_274ed4;
        case 0x274ed8u: goto label_274ed8;
        case 0x274edcu: goto label_274edc;
        case 0x274ee0u: goto label_274ee0;
        case 0x274ee4u: goto label_274ee4;
        case 0x274ee8u: goto label_274ee8;
        case 0x274eecu: goto label_274eec;
        case 0x274ef0u: goto label_274ef0;
        case 0x274ef4u: goto label_274ef4;
        case 0x274ef8u: goto label_274ef8;
        case 0x274efcu: goto label_274efc;
        case 0x274f00u: goto label_274f00;
        case 0x274f04u: goto label_274f04;
        case 0x274f08u: goto label_274f08;
        case 0x274f0cu: goto label_274f0c;
        case 0x274f10u: goto label_274f10;
        case 0x274f14u: goto label_274f14;
        case 0x274f18u: goto label_274f18;
        case 0x274f1cu: goto label_274f1c;
        case 0x274f20u: goto label_274f20;
        case 0x274f24u: goto label_274f24;
        case 0x274f28u: goto label_274f28;
        case 0x274f2cu: goto label_274f2c;
        case 0x274f30u: goto label_274f30;
        case 0x274f34u: goto label_274f34;
        case 0x274f38u: goto label_274f38;
        case 0x274f3cu: goto label_274f3c;
        case 0x274f40u: goto label_274f40;
        case 0x274f44u: goto label_274f44;
        case 0x274f48u: goto label_274f48;
        case 0x274f4cu: goto label_274f4c;
        case 0x274f50u: goto label_274f50;
        case 0x274f54u: goto label_274f54;
        case 0x274f58u: goto label_274f58;
        case 0x274f5cu: goto label_274f5c;
        case 0x274f60u: goto label_274f60;
        case 0x274f64u: goto label_274f64;
        case 0x274f68u: goto label_274f68;
        case 0x274f6cu: goto label_274f6c;
        case 0x274f70u: goto label_274f70;
        case 0x274f74u: goto label_274f74;
        case 0x274f78u: goto label_274f78;
        case 0x274f7cu: goto label_274f7c;
        case 0x274f80u: goto label_274f80;
        case 0x274f84u: goto label_274f84;
        case 0x274f88u: goto label_274f88;
        case 0x274f8cu: goto label_274f8c;
        case 0x274f90u: goto label_274f90;
        case 0x274f94u: goto label_274f94;
        case 0x274f98u: goto label_274f98;
        case 0x274f9cu: goto label_274f9c;
        case 0x274fa0u: goto label_274fa0;
        case 0x274fa4u: goto label_274fa4;
        case 0x274fa8u: goto label_274fa8;
        case 0x274facu: goto label_274fac;
        case 0x274fb0u: goto label_274fb0;
        case 0x274fb4u: goto label_274fb4;
        case 0x274fb8u: goto label_274fb8;
        case 0x274fbcu: goto label_274fbc;
        case 0x274fc0u: goto label_274fc0;
        case 0x274fc4u: goto label_274fc4;
        case 0x274fc8u: goto label_274fc8;
        case 0x274fccu: goto label_274fcc;
        case 0x274fd0u: goto label_274fd0;
        case 0x274fd4u: goto label_274fd4;
        case 0x274fd8u: goto label_274fd8;
        case 0x274fdcu: goto label_274fdc;
        case 0x274fe0u: goto label_274fe0;
        case 0x274fe4u: goto label_274fe4;
        case 0x274fe8u: goto label_274fe8;
        case 0x274fecu: goto label_274fec;
        case 0x274ff0u: goto label_274ff0;
        case 0x274ff4u: goto label_274ff4;
        case 0x274ff8u: goto label_274ff8;
        case 0x274ffcu: goto label_274ffc;
        case 0x275000u: goto label_275000;
        case 0x275004u: goto label_275004;
        case 0x275008u: goto label_275008;
        case 0x27500cu: goto label_27500c;
        default: break;
    }

    ctx->pc = 0x274bd0u;

label_274bd0:
    // 0x274bd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x274bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_274bd4:
    // 0x274bd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x274bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_274bd8:
    // 0x274bd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x274bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_274bdc:
    // 0x274bdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x274bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_274be0:
    // 0x274be0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x274be0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_274be4:
    // 0x274be4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_274be8:
    // 0x274be8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x274be8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274bec:
    // 0x274bec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_274bf0:
    // 0x274bf0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x274bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_274bf4:
    // 0x274bf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_274bf8:
    // 0x274bf8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x274bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_274bfc:
    // 0x274bfc: 0xac940008  sw          $s4, 0x8($a0)
    ctx->pc = 0x274bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 20));
label_274c00:
    // 0x274c00: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x274c00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_274c04:
    // 0x274c04: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x274c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
label_274c08:
    // 0x274c08: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x274c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
label_274c0c:
    // 0x274c0c: 0xac920024  sw          $s2, 0x24($a0)
    ctx->pc = 0x274c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 18));
label_274c10:
    // 0x274c10: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x274c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_274c14:
    // 0x274c14: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x274c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_274c18:
    // 0x274c18: 0x320f809  jalr        $t9
label_274c1c:
    if (ctx->pc == 0x274C1Cu) {
        ctx->pc = 0x274C1Cu;
            // 0x274c1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274C20u;
        goto label_274c20;
    }
    ctx->pc = 0x274C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x274C20u);
        ctx->pc = 0x274C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274C18u;
            // 0x274c1c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x274C20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x274C20u; }
            if (ctx->pc != 0x274C20u) { return; }
        }
        }
    }
    ctx->pc = 0x274C20u;
label_274c20:
    // 0x274c20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x274c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_274c24:
    // 0x274c24: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x274c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_274c28:
    // 0x274c28: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x274c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_274c2c:
    // 0x274c2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x274c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_274c30:
    // 0x274c30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x274c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_274c34:
    // 0x274c34: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x274c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_274c38:
    // 0x274c38: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x274c38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_274c3c:
    // 0x274c3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x274c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_274c40:
    // 0x274c40: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_274c44:
    if (ctx->pc == 0x274C44u) {
        ctx->pc = 0x274C48u;
        goto label_274c48;
    }
    ctx->pc = 0x274C40u;
    {
        const bool branch_taken_0x274c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c40) {
            ctx->pc = 0x274C68u;
            goto label_274c68;
        }
    }
    ctx->pc = 0x274C48u;
label_274c48:
    // 0x274c48: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x274c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_274c4c:
    // 0x274c4c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x274c4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_274c50:
    // 0x274c50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x274c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_274c54:
    // 0x274c54: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x274c54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_274c58:
    // 0x274c58: 0x0  nop
    ctx->pc = 0x274c58u;
    // NOP
label_274c5c:
    // 0x274c5c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_274c60:
    if (ctx->pc == 0x274C60u) {
        ctx->pc = 0x274C64u;
        goto label_274c64;
    }
    ctx->pc = 0x274C5Cu;
    {
        const bool branch_taken_0x274c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274c5c) {
            ctx->pc = 0x274C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274c48;
        }
    }
    ctx->pc = 0x274C64u;
label_274c64:
    // 0x274c64: 0x0  nop
    ctx->pc = 0x274c64u;
    // NOP
label_274c68:
    // 0x274c68: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x274c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_274c6c:
    // 0x274c6c: 0x80420014  lb          $v0, 0x14($v0)
    ctx->pc = 0x274c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_274c70:
    // 0x274c70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_274c74:
    if (ctx->pc == 0x274C74u) {
        ctx->pc = 0x274C78u;
        goto label_274c78;
    }
    ctx->pc = 0x274C70u;
    {
        const bool branch_taken_0x274c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274c70) {
            ctx->pc = 0x274C80u;
            goto label_274c80;
        }
    }
    ctx->pc = 0x274C78u;
label_274c78:
    // 0x274c78: 0x10000004  b           . + 4 + (0x4 << 2)
label_274c7c:
    if (ctx->pc == 0x274C7Cu) {
        ctx->pc = 0x274C7Cu;
            // 0x274c7c: 0x24101000  addiu       $s0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x274C80u;
        goto label_274c80;
    }
    ctx->pc = 0x274C78u;
    {
        const bool branch_taken_0x274c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274C78u;
            // 0x274c7c: 0x24101000  addiu       $s0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c78) {
            ctx->pc = 0x274C8Cu;
            goto label_274c8c;
        }
    }
    ctx->pc = 0x274C80u;
label_274c80:
    // 0x274c80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x274c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_274c84:
    // 0x274c84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x274c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_274c88:
    // 0x274c88: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x274c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_274c8c:
    // 0x274c8c: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x274c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_274c90:
    // 0x274c90: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x274c90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_274c94:
    // 0x274c94: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x274c94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
label_274c98:
    // 0x274c98: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x274c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_274c9c:
    // 0x274c9c: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
label_274ca0:
    if (ctx->pc == 0x274CA0u) {
        ctx->pc = 0x274CA0u;
            // 0x274ca0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274CA4u;
        goto label_274ca4;
    }
    ctx->pc = 0x274C9Cu;
    {
        const bool branch_taken_0x274c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274C9Cu;
            // 0x274ca0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c9c) {
            ctx->pc = 0x274DE0u;
            goto label_274de0;
        }
    }
    ctx->pc = 0x274CA4u;
label_274ca4:
    // 0x274ca4: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x274ca4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_274ca8:
    // 0x274ca8: 0x1420003d  bnez        $at, . + 4 + (0x3D << 2)
label_274cac:
    if (ctx->pc == 0x274CACu) {
        ctx->pc = 0x274CACu;
            // 0x274cac: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->pc = 0x274CB0u;
        goto label_274cb0;
    }
    ctx->pc = 0x274CA8u;
    {
        const bool branch_taken_0x274ca8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x274CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274CA8u;
            // 0x274cac: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ca8) {
            ctx->pc = 0x274DA0u;
            goto label_274da0;
        }
    }
    ctx->pc = 0x274CB0u;
label_274cb0:
    // 0x274cb0: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x274cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_274cb4:
    // 0x274cb4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x274cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_274cb8:
    // 0x274cb8: 0x2488007c  addiu       $t0, $a0, 0x7C
    ctx->pc = 0x274cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
label_274cbc:
    // 0x274cbc: 0x62282a  slt         $a1, $v1, $v0
    ctx->pc = 0x274cbcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274cc0:
    // 0x274cc0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x274cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_274cc4:
    // 0x274cc4: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x274cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_274cc8:
    // 0x274cc8: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x274cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_274ccc:
    // 0x274ccc: 0x248400f8  addiu       $a0, $a0, 0xF8
    ctx->pc = 0x274cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
label_274cd0:
    // 0x274cd0: 0x2487007c  addiu       $a3, $a0, 0x7C
    ctx->pc = 0x274cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
label_274cd4:
    // 0x274cd4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274cd8:
    // 0x274cd8: 0xae660014  sw          $a2, 0x14($s3)
    ctx->pc = 0x274cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
label_274cdc:
    // 0x274cdc: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x274cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_274ce0:
    // 0x274ce0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x274ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_274ce4:
    // 0x274ce4: 0xae680010  sw          $t0, 0x10($s3)
    ctx->pc = 0x274ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 8));
label_274ce8:
    // 0x274ce8: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x274ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_274cec:
    // 0x274cec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274cf0:
    // 0x274cf0: 0xae660014  sw          $a2, 0x14($s3)
    ctx->pc = 0x274cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
label_274cf4:
    // 0x274cf4: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x274cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_274cf8:
    // 0x274cf8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x274cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_274cfc:
    // 0x274cfc: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x274cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_274d00:
    // 0x274d00: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x274d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_274d04:
    // 0x274d04: 0x248400f8  addiu       $a0, $a0, 0xF8
    ctx->pc = 0x274d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
label_274d08:
    // 0x274d08: 0x2488007c  addiu       $t0, $a0, 0x7C
    ctx->pc = 0x274d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
label_274d0c:
    // 0x274d0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274d10:
    // 0x274d10: 0xae660014  sw          $a2, 0x14($s3)
    ctx->pc = 0x274d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
label_274d14:
    // 0x274d14: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x274d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_274d18:
    // 0x274d18: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x274d18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_274d1c:
    // 0x274d1c: 0xae670010  sw          $a3, 0x10($s3)
    ctx->pc = 0x274d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 7));
label_274d20:
    // 0x274d20: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x274d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_274d24:
    // 0x274d24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274d28:
    // 0x274d28: 0xae660014  sw          $a2, 0x14($s3)
    ctx->pc = 0x274d28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
label_274d2c:
    // 0x274d2c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x274d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_274d30:
    // 0x274d30: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x274d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_274d34:
    // 0x274d34: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x274d34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_274d38:
    // 0x274d38: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x274d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_274d3c:
    // 0x274d3c: 0x248400f8  addiu       $a0, $a0, 0xF8
    ctx->pc = 0x274d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
label_274d40:
    // 0x274d40: 0x2487007c  addiu       $a3, $a0, 0x7C
    ctx->pc = 0x274d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
label_274d44:
    // 0x274d44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274d48:
    // 0x274d48: 0xae660014  sw          $a2, 0x14($s3)
    ctx->pc = 0x274d48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
label_274d4c:
    // 0x274d4c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x274d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_274d50:
    // 0x274d50: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x274d50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_274d54:
    // 0x274d54: 0xae680010  sw          $t0, 0x10($s3)
    ctx->pc = 0x274d54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 8));
label_274d58:
    // 0x274d58: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x274d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_274d5c:
    // 0x274d5c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274d60:
    // 0x274d60: 0xae660014  sw          $a2, 0x14($s3)
    ctx->pc = 0x274d60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
label_274d64:
    // 0x274d64: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x274d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_274d68:
    // 0x274d68: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x274d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_274d6c:
    // 0x274d6c: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x274d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_274d70:
    // 0x274d70: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x274d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_274d74:
    // 0x274d74: 0x248400f8  addiu       $a0, $a0, 0xF8
    ctx->pc = 0x274d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
label_274d78:
    // 0x274d78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274d7c:
    // 0x274d7c: 0xae660014  sw          $a2, 0x14($s3)
    ctx->pc = 0x274d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
label_274d80:
    // 0x274d80: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x274d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_274d84:
    // 0x274d84: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x274d84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_274d88:
    // 0x274d88: 0xae670010  sw          $a3, 0x10($s3)
    ctx->pc = 0x274d88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 7));
label_274d8c:
    // 0x274d8c: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x274d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_274d90:
    // 0x274d90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274d94:
    // 0x274d94: 0x14a0ffc6  bnez        $a1, . + 4 + (-0x3A << 2)
label_274d98:
    if (ctx->pc == 0x274D98u) {
        ctx->pc = 0x274D98u;
            // 0x274d98: 0xae660014  sw          $a2, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
        ctx->pc = 0x274D9Cu;
        goto label_274d9c;
    }
    ctx->pc = 0x274D94u;
    {
        const bool branch_taken_0x274d94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x274D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274D94u;
            // 0x274d98: 0xae660014  sw          $a2, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d94) {
            ctx->pc = 0x274CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274cb0;
        }
    }
    ctx->pc = 0x274D9Cu;
label_274d9c:
    // 0x274d9c: 0x0  nop
    ctx->pc = 0x274d9cu;
    // NOP
label_274da0:
    // 0x274da0: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x274da0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_274da4:
    // 0x274da4: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_274da8:
    if (ctx->pc == 0x274DA8u) {
        ctx->pc = 0x274DACu;
        goto label_274dac;
    }
    ctx->pc = 0x274DA4u;
    {
        const bool branch_taken_0x274da4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x274da4) {
            ctx->pc = 0x274DE0u;
            goto label_274de0;
        }
    }
    ctx->pc = 0x274DACu;
label_274dac:
    // 0x274dac: 0x0  nop
    ctx->pc = 0x274dacu;
    // NOP
label_274db0:
    // 0x274db0: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x274db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_274db4:
    // 0x274db4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x274db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274db8:
    // 0x274db8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_274dbc:
    // 0x274dbc: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x274dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_274dc0:
    // 0x274dc0: 0x2484007c  addiu       $a0, $a0, 0x7C
    ctx->pc = 0x274dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 124));
label_274dc4:
    // 0x274dc4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x274dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_274dc8:
    // 0x274dc8: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x274dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
label_274dcc:
    // 0x274dcc: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x274dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_274dd0:
    // 0x274dd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x274dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_274dd4:
    // 0x274dd4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_274dd8:
    if (ctx->pc == 0x274DD8u) {
        ctx->pc = 0x274DD8u;
            // 0x274dd8: 0xae650014  sw          $a1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 5));
        ctx->pc = 0x274DDCu;
        goto label_274ddc;
    }
    ctx->pc = 0x274DD4u;
    {
        const bool branch_taken_0x274dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274DD4u;
            // 0x274dd8: 0xae650014  sw          $a1, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274dd4) {
            ctx->pc = 0x274DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274db0;
        }
    }
    ctx->pc = 0x274DDCu;
label_274ddc:
    // 0x274ddc: 0x0  nop
    ctx->pc = 0x274ddcu;
    // NOP
label_274de0:
    // 0x274de0: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x274de0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_274de4:
    // 0x274de4: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x274de4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_274de8:
    // 0x274de8: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x274de8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_274dec:
    // 0x274dec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x274decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_274df0:
    // 0x274df0: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
label_274df4:
    if (ctx->pc == 0x274DF4u) {
        ctx->pc = 0x274DF4u;
            // 0x274df4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274DF8u;
        goto label_274df8;
    }
    ctx->pc = 0x274DF0u;
    {
        const bool branch_taken_0x274df0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274DF0u;
            // 0x274df4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274df0) {
            ctx->pc = 0x274F38u;
            goto label_274f38;
        }
    }
    ctx->pc = 0x274DF8u;
label_274df8:
    // 0x274df8: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x274df8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_274dfc:
    // 0x274dfc: 0x1420003e  bnez        $at, . + 4 + (0x3E << 2)
label_274e00:
    if (ctx->pc == 0x274E00u) {
        ctx->pc = 0x274E00u;
            // 0x274e00: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->pc = 0x274E04u;
        goto label_274e04;
    }
    ctx->pc = 0x274DFCu;
    {
        const bool branch_taken_0x274dfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x274E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274DFCu;
            // 0x274e00: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274dfc) {
            ctx->pc = 0x274EF8u;
            goto label_274ef8;
        }
    }
    ctx->pc = 0x274E04u;
label_274e04:
    // 0x274e04: 0x0  nop
    ctx->pc = 0x274e04u;
    // NOP
label_274e08:
    // 0x274e08: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x274e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_274e0c:
    // 0x274e0c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x274e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_274e10:
    // 0x274e10: 0x24880064  addiu       $t0, $a0, 0x64
    ctx->pc = 0x274e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_274e14:
    // 0x274e14: 0x62282a  slt         $a1, $v1, $v0
    ctx->pc = 0x274e14u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_274e18:
    // 0x274e18: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x274e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_274e1c:
    // 0x274e1c: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x274e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
label_274e20:
    // 0x274e20: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x274e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_274e24:
    // 0x274e24: 0x248400c8  addiu       $a0, $a0, 0xC8
    ctx->pc = 0x274e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
label_274e28:
    // 0x274e28: 0x24870064  addiu       $a3, $a0, 0x64
    ctx->pc = 0x274e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_274e2c:
    // 0x274e2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274e30:
    // 0x274e30: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x274e30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
label_274e34:
    // 0x274e34: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x274e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_274e38:
    // 0x274e38: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x274e38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_274e3c:
    // 0x274e3c: 0xae680018  sw          $t0, 0x18($s3)
    ctx->pc = 0x274e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 8));
label_274e40:
    // 0x274e40: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x274e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_274e44:
    // 0x274e44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274e48:
    // 0x274e48: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x274e48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
label_274e4c:
    // 0x274e4c: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x274e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_274e50:
    // 0x274e50: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x274e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_274e54:
    // 0x274e54: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x274e54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
label_274e58:
    // 0x274e58: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x274e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_274e5c:
    // 0x274e5c: 0x248400c8  addiu       $a0, $a0, 0xC8
    ctx->pc = 0x274e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
label_274e60:
    // 0x274e60: 0x24880064  addiu       $t0, $a0, 0x64
    ctx->pc = 0x274e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_274e64:
    // 0x274e64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274e68:
    // 0x274e68: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x274e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
label_274e6c:
    // 0x274e6c: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x274e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_274e70:
    // 0x274e70: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x274e70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_274e74:
    // 0x274e74: 0xae670018  sw          $a3, 0x18($s3)
    ctx->pc = 0x274e74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 7));
label_274e78:
    // 0x274e78: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x274e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_274e7c:
    // 0x274e7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274e80:
    // 0x274e80: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x274e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
label_274e84:
    // 0x274e84: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x274e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_274e88:
    // 0x274e88: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x274e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_274e8c:
    // 0x274e8c: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x274e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
label_274e90:
    // 0x274e90: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x274e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_274e94:
    // 0x274e94: 0x248400c8  addiu       $a0, $a0, 0xC8
    ctx->pc = 0x274e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
label_274e98:
    // 0x274e98: 0x24870064  addiu       $a3, $a0, 0x64
    ctx->pc = 0x274e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_274e9c:
    // 0x274e9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274ea0:
    // 0x274ea0: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x274ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
label_274ea4:
    // 0x274ea4: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x274ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_274ea8:
    // 0x274ea8: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x274ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_274eac:
    // 0x274eac: 0xae680018  sw          $t0, 0x18($s3)
    ctx->pc = 0x274eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 8));
label_274eb0:
    // 0x274eb0: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x274eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_274eb4:
    // 0x274eb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274eb8:
    // 0x274eb8: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x274eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
label_274ebc:
    // 0x274ebc: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x274ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_274ec0:
    // 0x274ec0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x274ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_274ec4:
    // 0x274ec4: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x274ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
label_274ec8:
    // 0x274ec8: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x274ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_274ecc:
    // 0x274ecc: 0x248400c8  addiu       $a0, $a0, 0xC8
    ctx->pc = 0x274eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
label_274ed0:
    // 0x274ed0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274ed4:
    // 0x274ed4: 0xae66001c  sw          $a2, 0x1C($s3)
    ctx->pc = 0x274ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
label_274ed8:
    // 0x274ed8: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x274ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_274edc:
    // 0x274edc: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x274edcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_274ee0:
    // 0x274ee0: 0xae670018  sw          $a3, 0x18($s3)
    ctx->pc = 0x274ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 7));
label_274ee4:
    // 0x274ee4: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x274ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_274ee8:
    // 0x274ee8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_274eec:
    // 0x274eec: 0x14a0ffc6  bnez        $a1, . + 4 + (-0x3A << 2)
label_274ef0:
    if (ctx->pc == 0x274EF0u) {
        ctx->pc = 0x274EF0u;
            // 0x274ef0: 0xae66001c  sw          $a2, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
        ctx->pc = 0x274EF4u;
        goto label_274ef4;
    }
    ctx->pc = 0x274EECu;
    {
        const bool branch_taken_0x274eec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x274EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274EECu;
            // 0x274ef0: 0xae66001c  sw          $a2, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274eec) {
            ctx->pc = 0x274E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274e08;
        }
    }
    ctx->pc = 0x274EF4u;
label_274ef4:
    // 0x274ef4: 0x0  nop
    ctx->pc = 0x274ef4u;
    // NOP
label_274ef8:
    // 0x274ef8: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x274ef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_274efc:
    // 0x274efc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_274f00:
    if (ctx->pc == 0x274F00u) {
        ctx->pc = 0x274F04u;
        goto label_274f04;
    }
    ctx->pc = 0x274EFCu;
    {
        const bool branch_taken_0x274efc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x274efc) {
            ctx->pc = 0x274F38u;
            goto label_274f38;
        }
    }
    ctx->pc = 0x274F04u;
label_274f04:
    // 0x274f04: 0x0  nop
    ctx->pc = 0x274f04u;
    // NOP
label_274f08:
    // 0x274f08: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x274f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_274f0c:
    // 0x274f0c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x274f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_274f10:
    // 0x274f10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_274f14:
    // 0x274f14: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x274f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_274f18:
    // 0x274f18: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x274f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_274f1c:
    // 0x274f1c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x274f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_274f20:
    // 0x274f20: 0xae660018  sw          $a2, 0x18($s3)
    ctx->pc = 0x274f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 6));
label_274f24:
    // 0x274f24: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x274f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_274f28:
    // 0x274f28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x274f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_274f2c:
    // 0x274f2c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_274f30:
    if (ctx->pc == 0x274F30u) {
        ctx->pc = 0x274F30u;
            // 0x274f30: 0xae65001c  sw          $a1, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 5));
        ctx->pc = 0x274F34u;
        goto label_274f34;
    }
    ctx->pc = 0x274F2Cu;
    {
        const bool branch_taken_0x274f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274F2Cu;
            // 0x274f30: 0xae65001c  sw          $a1, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f2c) {
            ctx->pc = 0x274F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274f08;
        }
    }
    ctx->pc = 0x274F34u;
label_274f34:
    // 0x274f34: 0x0  nop
    ctx->pc = 0x274f34u;
    // NOP
label_274f38:
    // 0x274f38: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x274f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_274f3c:
    // 0x274f3c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x274f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_274f40:
    // 0x274f40: 0x320f809  jalr        $t9
label_274f44:
    if (ctx->pc == 0x274F44u) {
        ctx->pc = 0x274F44u;
            // 0x274f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274F48u;
        goto label_274f48;
    }
    ctx->pc = 0x274F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x274F48u);
        ctx->pc = 0x274F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274F40u;
            // 0x274f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x274F48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x274F48u; }
            if (ctx->pc != 0x274F48u) { return; }
        }
        }
    }
    ctx->pc = 0x274F48u;
label_274f48:
    // 0x274f48: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x274f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_274f4c:
    // 0x274f4c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x274f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_274f50:
    // 0x274f50: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x274f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_274f54:
    // 0x274f54: 0x320f809  jalr        $t9
label_274f58:
    if (ctx->pc == 0x274F58u) {
        ctx->pc = 0x274F58u;
            // 0x274f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274F5Cu;
        goto label_274f5c;
    }
    ctx->pc = 0x274F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x274F5Cu);
        ctx->pc = 0x274F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274F54u;
            // 0x274f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x274F5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x274F5Cu; }
            if (ctx->pc != 0x274F5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x274F5Cu;
label_274f5c:
    // 0x274f5c: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x274f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_274f60:
    // 0x274f60: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x274f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_274f64:
    // 0x274f64: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x274f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_274f68:
    // 0x274f68: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x274f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_274f6c:
    // 0x274f6c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x274f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_274f70:
    // 0x274f70: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x274f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_274f74:
    // 0x274f74: 0x24540002  addiu       $s4, $v0, 0x2
    ctx->pc = 0x274f74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_274f78:
    // 0x274f78: 0xc0a7a34  jal         func_29E8D0
label_274f7c:
    if (ctx->pc == 0x274F7Cu) {
        ctx->pc = 0x274F7Cu;
            // 0x274f7c: 0x142880  sll         $a1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->pc = 0x274F80u;
        goto label_274f80;
    }
    ctx->pc = 0x274F78u;
    SET_GPR_U32(ctx, 31, 0x274F80u);
    ctx->pc = 0x274F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274F78u;
            // 0x274f7c: 0x142880  sll         $a1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E8D0u;
    if (runtime->hasFunction(0x29E8D0u)) {
        auto targetFn = runtime->lookupFunction(0x29E8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F80u; }
        if (ctx->pc != 0x274F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E8D0_0x29e8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274F80u; }
        if (ctx->pc != 0x274F80u) { return; }
    }
    ctx->pc = 0x274F80u;
label_274f80:
    // 0x274f80: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x274f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_274f84:
    // 0x274f84: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x274f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_274f88:
    // 0x274f88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x274f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_274f8c:
    // 0x274f8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x274f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_274f90:
    // 0x274f90: 0xafb40064  sw          $s4, 0x64($sp)
    ctx->pc = 0x274f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 20));
label_274f94:
    // 0x274f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x274f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274f98:
    // 0x274f98: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x274f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_274f9c:
    // 0x274f9c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x274f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_274fa0:
    // 0x274fa0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x274fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_274fa4:
    // 0x274fa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x274fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274fa8:
    // 0x274fa8: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x274fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_274fac:
    // 0x274fac: 0xc09d1a0  jal         func_274680
label_274fb0:
    if (ctx->pc == 0x274FB0u) {
        ctx->pc = 0x274FB0u;
            // 0x274fb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274FB4u;
        goto label_274fb4;
    }
    ctx->pc = 0x274FACu;
    SET_GPR_U32(ctx, 31, 0x274FB4u);
    ctx->pc = 0x274FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274FACu;
            // 0x274fb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274680u;
    if (runtime->hasFunction(0x274680u)) {
        auto targetFn = runtime->lookupFunction(0x274680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FB4u; }
        if (ctx->pc != 0x274FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274680_0x274680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FB4u; }
        if (ctx->pc != 0x274FB4u) { return; }
    }
    ctx->pc = 0x274FB4u;
label_274fb4:
    // 0x274fb4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x274fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_274fb8:
    // 0x274fb8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x274fb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_274fbc:
    // 0x274fbc: 0x103840  sll         $a3, $s0, 1
    ctx->pc = 0x274fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_274fc0:
    // 0x274fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x274fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_274fc4:
    // 0x274fc4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x274fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_274fc8:
    // 0x274fc8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x274fc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_274fcc:
    // 0x274fcc: 0x320f809  jalr        $t9
label_274fd0:
    if (ctx->pc == 0x274FD0u) {
        ctx->pc = 0x274FD0u;
            // 0x274fd0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x274FD4u;
        goto label_274fd4;
    }
    ctx->pc = 0x274FCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x274FD4u);
        ctx->pc = 0x274FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274FCCu;
            // 0x274fd0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x274FD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x274FD4u; }
            if (ctx->pc != 0x274FD4u) { return; }
        }
        }
    }
    ctx->pc = 0x274FD4u;
label_274fd4:
    // 0x274fd4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x274fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_274fd8:
    // 0x274fd8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x274fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_274fdc:
    // 0x274fdc: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x274fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_274fe0:
    // 0x274fe0: 0xc0a7a48  jal         func_29E920
label_274fe4:
    if (ctx->pc == 0x274FE4u) {
        ctx->pc = 0x274FE4u;
            // 0x274fe4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x274FE8u;
        goto label_274fe8;
    }
    ctx->pc = 0x274FE0u;
    SET_GPR_U32(ctx, 31, 0x274FE8u);
    ctx->pc = 0x274FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274FE0u;
            // 0x274fe4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FE8u; }
        if (ctx->pc != 0x274FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274FE8u; }
        if (ctx->pc != 0x274FE8u) { return; }
    }
    ctx->pc = 0x274FE8u;
label_274fe8:
    // 0x274fe8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x274fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_274fec:
    // 0x274fec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x274fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_274ff0:
    // 0x274ff0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x274ff0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_274ff4:
    // 0x274ff4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_274ff8:
    // 0x274ff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x274ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_274ffc:
    // 0x274ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_275000:
    // 0x275000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_275004:
    // 0x275004: 0x3e00008  jr          $ra
label_275008:
    if (ctx->pc == 0x275008u) {
        ctx->pc = 0x275008u;
            // 0x275008: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x27500Cu;
        goto label_27500c;
    }
    ctx->pc = 0x275004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275004u;
            // 0x275008: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27500Cu;
label_27500c:
    // 0x27500c: 0x0  nop
    ctx->pc = 0x27500cu;
    // NOP
}
