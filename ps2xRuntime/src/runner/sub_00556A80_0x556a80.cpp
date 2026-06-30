#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00556A80
// Address: 0x556a80 - 0x556f60
void sub_00556A80_0x556a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00556A80_0x556a80");
#endif

    switch (ctx->pc) {
        case 0x556a80u: goto label_556a80;
        case 0x556a84u: goto label_556a84;
        case 0x556a88u: goto label_556a88;
        case 0x556a8cu: goto label_556a8c;
        case 0x556a90u: goto label_556a90;
        case 0x556a94u: goto label_556a94;
        case 0x556a98u: goto label_556a98;
        case 0x556a9cu: goto label_556a9c;
        case 0x556aa0u: goto label_556aa0;
        case 0x556aa4u: goto label_556aa4;
        case 0x556aa8u: goto label_556aa8;
        case 0x556aacu: goto label_556aac;
        case 0x556ab0u: goto label_556ab0;
        case 0x556ab4u: goto label_556ab4;
        case 0x556ab8u: goto label_556ab8;
        case 0x556abcu: goto label_556abc;
        case 0x556ac0u: goto label_556ac0;
        case 0x556ac4u: goto label_556ac4;
        case 0x556ac8u: goto label_556ac8;
        case 0x556accu: goto label_556acc;
        case 0x556ad0u: goto label_556ad0;
        case 0x556ad4u: goto label_556ad4;
        case 0x556ad8u: goto label_556ad8;
        case 0x556adcu: goto label_556adc;
        case 0x556ae0u: goto label_556ae0;
        case 0x556ae4u: goto label_556ae4;
        case 0x556ae8u: goto label_556ae8;
        case 0x556aecu: goto label_556aec;
        case 0x556af0u: goto label_556af0;
        case 0x556af4u: goto label_556af4;
        case 0x556af8u: goto label_556af8;
        case 0x556afcu: goto label_556afc;
        case 0x556b00u: goto label_556b00;
        case 0x556b04u: goto label_556b04;
        case 0x556b08u: goto label_556b08;
        case 0x556b0cu: goto label_556b0c;
        case 0x556b10u: goto label_556b10;
        case 0x556b14u: goto label_556b14;
        case 0x556b18u: goto label_556b18;
        case 0x556b1cu: goto label_556b1c;
        case 0x556b20u: goto label_556b20;
        case 0x556b24u: goto label_556b24;
        case 0x556b28u: goto label_556b28;
        case 0x556b2cu: goto label_556b2c;
        case 0x556b30u: goto label_556b30;
        case 0x556b34u: goto label_556b34;
        case 0x556b38u: goto label_556b38;
        case 0x556b3cu: goto label_556b3c;
        case 0x556b40u: goto label_556b40;
        case 0x556b44u: goto label_556b44;
        case 0x556b48u: goto label_556b48;
        case 0x556b4cu: goto label_556b4c;
        case 0x556b50u: goto label_556b50;
        case 0x556b54u: goto label_556b54;
        case 0x556b58u: goto label_556b58;
        case 0x556b5cu: goto label_556b5c;
        case 0x556b60u: goto label_556b60;
        case 0x556b64u: goto label_556b64;
        case 0x556b68u: goto label_556b68;
        case 0x556b6cu: goto label_556b6c;
        case 0x556b70u: goto label_556b70;
        case 0x556b74u: goto label_556b74;
        case 0x556b78u: goto label_556b78;
        case 0x556b7cu: goto label_556b7c;
        case 0x556b80u: goto label_556b80;
        case 0x556b84u: goto label_556b84;
        case 0x556b88u: goto label_556b88;
        case 0x556b8cu: goto label_556b8c;
        case 0x556b90u: goto label_556b90;
        case 0x556b94u: goto label_556b94;
        case 0x556b98u: goto label_556b98;
        case 0x556b9cu: goto label_556b9c;
        case 0x556ba0u: goto label_556ba0;
        case 0x556ba4u: goto label_556ba4;
        case 0x556ba8u: goto label_556ba8;
        case 0x556bacu: goto label_556bac;
        case 0x556bb0u: goto label_556bb0;
        case 0x556bb4u: goto label_556bb4;
        case 0x556bb8u: goto label_556bb8;
        case 0x556bbcu: goto label_556bbc;
        case 0x556bc0u: goto label_556bc0;
        case 0x556bc4u: goto label_556bc4;
        case 0x556bc8u: goto label_556bc8;
        case 0x556bccu: goto label_556bcc;
        case 0x556bd0u: goto label_556bd0;
        case 0x556bd4u: goto label_556bd4;
        case 0x556bd8u: goto label_556bd8;
        case 0x556bdcu: goto label_556bdc;
        case 0x556be0u: goto label_556be0;
        case 0x556be4u: goto label_556be4;
        case 0x556be8u: goto label_556be8;
        case 0x556becu: goto label_556bec;
        case 0x556bf0u: goto label_556bf0;
        case 0x556bf4u: goto label_556bf4;
        case 0x556bf8u: goto label_556bf8;
        case 0x556bfcu: goto label_556bfc;
        case 0x556c00u: goto label_556c00;
        case 0x556c04u: goto label_556c04;
        case 0x556c08u: goto label_556c08;
        case 0x556c0cu: goto label_556c0c;
        case 0x556c10u: goto label_556c10;
        case 0x556c14u: goto label_556c14;
        case 0x556c18u: goto label_556c18;
        case 0x556c1cu: goto label_556c1c;
        case 0x556c20u: goto label_556c20;
        case 0x556c24u: goto label_556c24;
        case 0x556c28u: goto label_556c28;
        case 0x556c2cu: goto label_556c2c;
        case 0x556c30u: goto label_556c30;
        case 0x556c34u: goto label_556c34;
        case 0x556c38u: goto label_556c38;
        case 0x556c3cu: goto label_556c3c;
        case 0x556c40u: goto label_556c40;
        case 0x556c44u: goto label_556c44;
        case 0x556c48u: goto label_556c48;
        case 0x556c4cu: goto label_556c4c;
        case 0x556c50u: goto label_556c50;
        case 0x556c54u: goto label_556c54;
        case 0x556c58u: goto label_556c58;
        case 0x556c5cu: goto label_556c5c;
        case 0x556c60u: goto label_556c60;
        case 0x556c64u: goto label_556c64;
        case 0x556c68u: goto label_556c68;
        case 0x556c6cu: goto label_556c6c;
        case 0x556c70u: goto label_556c70;
        case 0x556c74u: goto label_556c74;
        case 0x556c78u: goto label_556c78;
        case 0x556c7cu: goto label_556c7c;
        case 0x556c80u: goto label_556c80;
        case 0x556c84u: goto label_556c84;
        case 0x556c88u: goto label_556c88;
        case 0x556c8cu: goto label_556c8c;
        case 0x556c90u: goto label_556c90;
        case 0x556c94u: goto label_556c94;
        case 0x556c98u: goto label_556c98;
        case 0x556c9cu: goto label_556c9c;
        case 0x556ca0u: goto label_556ca0;
        case 0x556ca4u: goto label_556ca4;
        case 0x556ca8u: goto label_556ca8;
        case 0x556cacu: goto label_556cac;
        case 0x556cb0u: goto label_556cb0;
        case 0x556cb4u: goto label_556cb4;
        case 0x556cb8u: goto label_556cb8;
        case 0x556cbcu: goto label_556cbc;
        case 0x556cc0u: goto label_556cc0;
        case 0x556cc4u: goto label_556cc4;
        case 0x556cc8u: goto label_556cc8;
        case 0x556cccu: goto label_556ccc;
        case 0x556cd0u: goto label_556cd0;
        case 0x556cd4u: goto label_556cd4;
        case 0x556cd8u: goto label_556cd8;
        case 0x556cdcu: goto label_556cdc;
        case 0x556ce0u: goto label_556ce0;
        case 0x556ce4u: goto label_556ce4;
        case 0x556ce8u: goto label_556ce8;
        case 0x556cecu: goto label_556cec;
        case 0x556cf0u: goto label_556cf0;
        case 0x556cf4u: goto label_556cf4;
        case 0x556cf8u: goto label_556cf8;
        case 0x556cfcu: goto label_556cfc;
        case 0x556d00u: goto label_556d00;
        case 0x556d04u: goto label_556d04;
        case 0x556d08u: goto label_556d08;
        case 0x556d0cu: goto label_556d0c;
        case 0x556d10u: goto label_556d10;
        case 0x556d14u: goto label_556d14;
        case 0x556d18u: goto label_556d18;
        case 0x556d1cu: goto label_556d1c;
        case 0x556d20u: goto label_556d20;
        case 0x556d24u: goto label_556d24;
        case 0x556d28u: goto label_556d28;
        case 0x556d2cu: goto label_556d2c;
        case 0x556d30u: goto label_556d30;
        case 0x556d34u: goto label_556d34;
        case 0x556d38u: goto label_556d38;
        case 0x556d3cu: goto label_556d3c;
        case 0x556d40u: goto label_556d40;
        case 0x556d44u: goto label_556d44;
        case 0x556d48u: goto label_556d48;
        case 0x556d4cu: goto label_556d4c;
        case 0x556d50u: goto label_556d50;
        case 0x556d54u: goto label_556d54;
        case 0x556d58u: goto label_556d58;
        case 0x556d5cu: goto label_556d5c;
        case 0x556d60u: goto label_556d60;
        case 0x556d64u: goto label_556d64;
        case 0x556d68u: goto label_556d68;
        case 0x556d6cu: goto label_556d6c;
        case 0x556d70u: goto label_556d70;
        case 0x556d74u: goto label_556d74;
        case 0x556d78u: goto label_556d78;
        case 0x556d7cu: goto label_556d7c;
        case 0x556d80u: goto label_556d80;
        case 0x556d84u: goto label_556d84;
        case 0x556d88u: goto label_556d88;
        case 0x556d8cu: goto label_556d8c;
        case 0x556d90u: goto label_556d90;
        case 0x556d94u: goto label_556d94;
        case 0x556d98u: goto label_556d98;
        case 0x556d9cu: goto label_556d9c;
        case 0x556da0u: goto label_556da0;
        case 0x556da4u: goto label_556da4;
        case 0x556da8u: goto label_556da8;
        case 0x556dacu: goto label_556dac;
        case 0x556db0u: goto label_556db0;
        case 0x556db4u: goto label_556db4;
        case 0x556db8u: goto label_556db8;
        case 0x556dbcu: goto label_556dbc;
        case 0x556dc0u: goto label_556dc0;
        case 0x556dc4u: goto label_556dc4;
        case 0x556dc8u: goto label_556dc8;
        case 0x556dccu: goto label_556dcc;
        case 0x556dd0u: goto label_556dd0;
        case 0x556dd4u: goto label_556dd4;
        case 0x556dd8u: goto label_556dd8;
        case 0x556ddcu: goto label_556ddc;
        case 0x556de0u: goto label_556de0;
        case 0x556de4u: goto label_556de4;
        case 0x556de8u: goto label_556de8;
        case 0x556decu: goto label_556dec;
        case 0x556df0u: goto label_556df0;
        case 0x556df4u: goto label_556df4;
        case 0x556df8u: goto label_556df8;
        case 0x556dfcu: goto label_556dfc;
        case 0x556e00u: goto label_556e00;
        case 0x556e04u: goto label_556e04;
        case 0x556e08u: goto label_556e08;
        case 0x556e0cu: goto label_556e0c;
        case 0x556e10u: goto label_556e10;
        case 0x556e14u: goto label_556e14;
        case 0x556e18u: goto label_556e18;
        case 0x556e1cu: goto label_556e1c;
        case 0x556e20u: goto label_556e20;
        case 0x556e24u: goto label_556e24;
        case 0x556e28u: goto label_556e28;
        case 0x556e2cu: goto label_556e2c;
        case 0x556e30u: goto label_556e30;
        case 0x556e34u: goto label_556e34;
        case 0x556e38u: goto label_556e38;
        case 0x556e3cu: goto label_556e3c;
        case 0x556e40u: goto label_556e40;
        case 0x556e44u: goto label_556e44;
        case 0x556e48u: goto label_556e48;
        case 0x556e4cu: goto label_556e4c;
        case 0x556e50u: goto label_556e50;
        case 0x556e54u: goto label_556e54;
        case 0x556e58u: goto label_556e58;
        case 0x556e5cu: goto label_556e5c;
        case 0x556e60u: goto label_556e60;
        case 0x556e64u: goto label_556e64;
        case 0x556e68u: goto label_556e68;
        case 0x556e6cu: goto label_556e6c;
        case 0x556e70u: goto label_556e70;
        case 0x556e74u: goto label_556e74;
        case 0x556e78u: goto label_556e78;
        case 0x556e7cu: goto label_556e7c;
        case 0x556e80u: goto label_556e80;
        case 0x556e84u: goto label_556e84;
        case 0x556e88u: goto label_556e88;
        case 0x556e8cu: goto label_556e8c;
        case 0x556e90u: goto label_556e90;
        case 0x556e94u: goto label_556e94;
        case 0x556e98u: goto label_556e98;
        case 0x556e9cu: goto label_556e9c;
        case 0x556ea0u: goto label_556ea0;
        case 0x556ea4u: goto label_556ea4;
        case 0x556ea8u: goto label_556ea8;
        case 0x556eacu: goto label_556eac;
        case 0x556eb0u: goto label_556eb0;
        case 0x556eb4u: goto label_556eb4;
        case 0x556eb8u: goto label_556eb8;
        case 0x556ebcu: goto label_556ebc;
        case 0x556ec0u: goto label_556ec0;
        case 0x556ec4u: goto label_556ec4;
        case 0x556ec8u: goto label_556ec8;
        case 0x556eccu: goto label_556ecc;
        case 0x556ed0u: goto label_556ed0;
        case 0x556ed4u: goto label_556ed4;
        case 0x556ed8u: goto label_556ed8;
        case 0x556edcu: goto label_556edc;
        case 0x556ee0u: goto label_556ee0;
        case 0x556ee4u: goto label_556ee4;
        case 0x556ee8u: goto label_556ee8;
        case 0x556eecu: goto label_556eec;
        case 0x556ef0u: goto label_556ef0;
        case 0x556ef4u: goto label_556ef4;
        case 0x556ef8u: goto label_556ef8;
        case 0x556efcu: goto label_556efc;
        case 0x556f00u: goto label_556f00;
        case 0x556f04u: goto label_556f04;
        case 0x556f08u: goto label_556f08;
        case 0x556f0cu: goto label_556f0c;
        case 0x556f10u: goto label_556f10;
        case 0x556f14u: goto label_556f14;
        case 0x556f18u: goto label_556f18;
        case 0x556f1cu: goto label_556f1c;
        case 0x556f20u: goto label_556f20;
        case 0x556f24u: goto label_556f24;
        case 0x556f28u: goto label_556f28;
        case 0x556f2cu: goto label_556f2c;
        case 0x556f30u: goto label_556f30;
        case 0x556f34u: goto label_556f34;
        case 0x556f38u: goto label_556f38;
        case 0x556f3cu: goto label_556f3c;
        case 0x556f40u: goto label_556f40;
        case 0x556f44u: goto label_556f44;
        case 0x556f48u: goto label_556f48;
        case 0x556f4cu: goto label_556f4c;
        case 0x556f50u: goto label_556f50;
        case 0x556f54u: goto label_556f54;
        case 0x556f58u: goto label_556f58;
        case 0x556f5cu: goto label_556f5c;
        default: break;
    }

    ctx->pc = 0x556a80u;

label_556a80:
    // 0x556a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x556a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_556a84:
    // 0x556a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x556a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_556a88:
    // 0x556a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x556a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_556a8c:
    // 0x556a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x556a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_556a90:
    // 0x556a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x556a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_556a94:
    // 0x556a94: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_556a98:
    if (ctx->pc == 0x556A98u) {
        ctx->pc = 0x556A98u;
            // 0x556a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556A9Cu;
        goto label_556a9c;
    }
    ctx->pc = 0x556A94u;
    {
        const bool branch_taken_0x556a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x556A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556A94u;
            // 0x556a98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556a94) {
            ctx->pc = 0x556BC8u;
            goto label_556bc8;
        }
    }
    ctx->pc = 0x556A9Cu;
label_556a9c:
    // 0x556a9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x556a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_556aa0:
    // 0x556aa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x556aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_556aa4:
    // 0x556aa4: 0x24637b40  addiu       $v1, $v1, 0x7B40
    ctx->pc = 0x556aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31552));
label_556aa8:
    // 0x556aa8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x556aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_556aac:
    // 0x556aac: 0x24427b78  addiu       $v0, $v0, 0x7B78
    ctx->pc = 0x556aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31608));
label_556ab0:
    // 0x556ab0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x556ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_556ab4:
    // 0x556ab4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x556ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_556ab8:
    // 0x556ab8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x556ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_556abc:
    // 0x556abc: 0xc0407c0  jal         func_101F00
label_556ac0:
    if (ctx->pc == 0x556AC0u) {
        ctx->pc = 0x556AC0u;
            // 0x556ac0: 0x24a56be0  addiu       $a1, $a1, 0x6BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27616));
        ctx->pc = 0x556AC4u;
        goto label_556ac4;
    }
    ctx->pc = 0x556ABCu;
    SET_GPR_U32(ctx, 31, 0x556AC4u);
    ctx->pc = 0x556AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556ABCu;
            // 0x556ac0: 0x24a56be0  addiu       $a1, $a1, 0x6BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556AC4u; }
        if (ctx->pc != 0x556AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556AC4u; }
        if (ctx->pc != 0x556AC4u) { return; }
    }
    ctx->pc = 0x556AC4u;
label_556ac4:
    // 0x556ac4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x556ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_556ac8:
    // 0x556ac8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_556acc:
    if (ctx->pc == 0x556ACCu) {
        ctx->pc = 0x556ACCu;
            // 0x556acc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x556AD0u;
        goto label_556ad0;
    }
    ctx->pc = 0x556AC8u;
    {
        const bool branch_taken_0x556ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556ac8) {
            ctx->pc = 0x556ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556AC8u;
            // 0x556acc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556ADCu;
            goto label_556adc;
        }
    }
    ctx->pc = 0x556AD0u;
label_556ad0:
    // 0x556ad0: 0xc07507c  jal         func_1D41F0
label_556ad4:
    if (ctx->pc == 0x556AD4u) {
        ctx->pc = 0x556AD4u;
            // 0x556ad4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x556AD8u;
        goto label_556ad8;
    }
    ctx->pc = 0x556AD0u;
    SET_GPR_U32(ctx, 31, 0x556AD8u);
    ctx->pc = 0x556AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556AD0u;
            // 0x556ad4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556AD8u; }
        if (ctx->pc != 0x556AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556AD8u; }
        if (ctx->pc != 0x556AD8u) { return; }
    }
    ctx->pc = 0x556AD8u;
label_556ad8:
    // 0x556ad8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x556ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_556adc:
    // 0x556adc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_556ae0:
    if (ctx->pc == 0x556AE0u) {
        ctx->pc = 0x556AE0u;
            // 0x556ae0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x556AE4u;
        goto label_556ae4;
    }
    ctx->pc = 0x556ADCu;
    {
        const bool branch_taken_0x556adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556adc) {
            ctx->pc = 0x556AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556ADCu;
            // 0x556ae0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556B0Cu;
            goto label_556b0c;
        }
    }
    ctx->pc = 0x556AE4u;
label_556ae4:
    // 0x556ae4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_556ae8:
    if (ctx->pc == 0x556AE8u) {
        ctx->pc = 0x556AECu;
        goto label_556aec;
    }
    ctx->pc = 0x556AE4u;
    {
        const bool branch_taken_0x556ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556ae4) {
            ctx->pc = 0x556B08u;
            goto label_556b08;
        }
    }
    ctx->pc = 0x556AECu;
label_556aec:
    // 0x556aec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_556af0:
    if (ctx->pc == 0x556AF0u) {
        ctx->pc = 0x556AF4u;
        goto label_556af4;
    }
    ctx->pc = 0x556AECu;
    {
        const bool branch_taken_0x556aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556aec) {
            ctx->pc = 0x556B08u;
            goto label_556b08;
        }
    }
    ctx->pc = 0x556AF4u;
label_556af4:
    // 0x556af4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x556af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_556af8:
    // 0x556af8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_556afc:
    if (ctx->pc == 0x556AFCu) {
        ctx->pc = 0x556B00u;
        goto label_556b00;
    }
    ctx->pc = 0x556AF8u;
    {
        const bool branch_taken_0x556af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x556af8) {
            ctx->pc = 0x556B08u;
            goto label_556b08;
        }
    }
    ctx->pc = 0x556B00u;
label_556b00:
    // 0x556b00: 0xc0400a8  jal         func_1002A0
label_556b04:
    if (ctx->pc == 0x556B04u) {
        ctx->pc = 0x556B08u;
        goto label_556b08;
    }
    ctx->pc = 0x556B00u;
    SET_GPR_U32(ctx, 31, 0x556B08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556B08u; }
        if (ctx->pc != 0x556B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556B08u; }
        if (ctx->pc != 0x556B08u) { return; }
    }
    ctx->pc = 0x556B08u;
label_556b08:
    // 0x556b08: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x556b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_556b0c:
    // 0x556b0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_556b10:
    if (ctx->pc == 0x556B10u) {
        ctx->pc = 0x556B10u;
            // 0x556b10: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x556B14u;
        goto label_556b14;
    }
    ctx->pc = 0x556B0Cu;
    {
        const bool branch_taken_0x556b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556b0c) {
            ctx->pc = 0x556B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556B0Cu;
            // 0x556b10: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556B3Cu;
            goto label_556b3c;
        }
    }
    ctx->pc = 0x556B14u;
label_556b14:
    // 0x556b14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_556b18:
    if (ctx->pc == 0x556B18u) {
        ctx->pc = 0x556B1Cu;
        goto label_556b1c;
    }
    ctx->pc = 0x556B14u;
    {
        const bool branch_taken_0x556b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556b14) {
            ctx->pc = 0x556B38u;
            goto label_556b38;
        }
    }
    ctx->pc = 0x556B1Cu;
label_556b1c:
    // 0x556b1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_556b20:
    if (ctx->pc == 0x556B20u) {
        ctx->pc = 0x556B24u;
        goto label_556b24;
    }
    ctx->pc = 0x556B1Cu;
    {
        const bool branch_taken_0x556b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556b1c) {
            ctx->pc = 0x556B38u;
            goto label_556b38;
        }
    }
    ctx->pc = 0x556B24u;
label_556b24:
    // 0x556b24: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x556b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_556b28:
    // 0x556b28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_556b2c:
    if (ctx->pc == 0x556B2Cu) {
        ctx->pc = 0x556B30u;
        goto label_556b30;
    }
    ctx->pc = 0x556B28u;
    {
        const bool branch_taken_0x556b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x556b28) {
            ctx->pc = 0x556B38u;
            goto label_556b38;
        }
    }
    ctx->pc = 0x556B30u;
label_556b30:
    // 0x556b30: 0xc0400a8  jal         func_1002A0
label_556b34:
    if (ctx->pc == 0x556B34u) {
        ctx->pc = 0x556B38u;
        goto label_556b38;
    }
    ctx->pc = 0x556B30u;
    SET_GPR_U32(ctx, 31, 0x556B38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556B38u; }
        if (ctx->pc != 0x556B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556B38u; }
        if (ctx->pc != 0x556B38u) { return; }
    }
    ctx->pc = 0x556B38u;
label_556b38:
    // 0x556b38: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x556b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_556b3c:
    // 0x556b3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_556b40:
    if (ctx->pc == 0x556B40u) {
        ctx->pc = 0x556B44u;
        goto label_556b44;
    }
    ctx->pc = 0x556B3Cu;
    {
        const bool branch_taken_0x556b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556b3c) {
            ctx->pc = 0x556B58u;
            goto label_556b58;
        }
    }
    ctx->pc = 0x556B44u;
label_556b44:
    // 0x556b44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x556b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_556b48:
    // 0x556b48: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x556b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_556b4c:
    // 0x556b4c: 0x24637b30  addiu       $v1, $v1, 0x7B30
    ctx->pc = 0x556b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31536));
label_556b50:
    // 0x556b50: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x556b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_556b54:
    // 0x556b54: 0xac40b7b8  sw          $zero, -0x4848($v0)
    ctx->pc = 0x556b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948792), GPR_U32(ctx, 0));
label_556b58:
    // 0x556b58: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_556b5c:
    if (ctx->pc == 0x556B5Cu) {
        ctx->pc = 0x556B5Cu;
            // 0x556b5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x556B60u;
        goto label_556b60;
    }
    ctx->pc = 0x556B58u;
    {
        const bool branch_taken_0x556b58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x556b58) {
            ctx->pc = 0x556B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556B58u;
            // 0x556b5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556BB4u;
            goto label_556bb4;
        }
    }
    ctx->pc = 0x556B60u;
label_556b60:
    // 0x556b60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x556b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_556b64:
    // 0x556b64: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x556b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_556b68:
    // 0x556b68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x556b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_556b6c:
    // 0x556b6c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x556b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_556b70:
    // 0x556b70: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_556b74:
    if (ctx->pc == 0x556B74u) {
        ctx->pc = 0x556B74u;
            // 0x556b74: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x556B78u;
        goto label_556b78;
    }
    ctx->pc = 0x556B70u;
    {
        const bool branch_taken_0x556b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x556b70) {
            ctx->pc = 0x556B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556B70u;
            // 0x556b74: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556B8Cu;
            goto label_556b8c;
        }
    }
    ctx->pc = 0x556B78u;
label_556b78:
    // 0x556b78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x556b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_556b7c:
    // 0x556b7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x556b7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_556b80:
    // 0x556b80: 0x320f809  jalr        $t9
label_556b84:
    if (ctx->pc == 0x556B84u) {
        ctx->pc = 0x556B84u;
            // 0x556b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x556B88u;
        goto label_556b88;
    }
    ctx->pc = 0x556B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x556B88u);
        ctx->pc = 0x556B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556B80u;
            // 0x556b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x556B88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x556B88u; }
            if (ctx->pc != 0x556B88u) { return; }
        }
        }
    }
    ctx->pc = 0x556B88u;
label_556b88:
    // 0x556b88: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x556b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_556b8c:
    // 0x556b8c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_556b90:
    if (ctx->pc == 0x556B90u) {
        ctx->pc = 0x556B90u;
            // 0x556b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556B94u;
        goto label_556b94;
    }
    ctx->pc = 0x556B8Cu;
    {
        const bool branch_taken_0x556b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x556b8c) {
            ctx->pc = 0x556B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556B8Cu;
            // 0x556b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556BA8u;
            goto label_556ba8;
        }
    }
    ctx->pc = 0x556B94u;
label_556b94:
    // 0x556b94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x556b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_556b98:
    // 0x556b98: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x556b98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_556b9c:
    // 0x556b9c: 0x320f809  jalr        $t9
label_556ba0:
    if (ctx->pc == 0x556BA0u) {
        ctx->pc = 0x556BA0u;
            // 0x556ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x556BA4u;
        goto label_556ba4;
    }
    ctx->pc = 0x556B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x556BA4u);
        ctx->pc = 0x556BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556B9Cu;
            // 0x556ba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x556BA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x556BA4u; }
            if (ctx->pc != 0x556BA4u) { return; }
        }
        }
    }
    ctx->pc = 0x556BA4u;
label_556ba4:
    // 0x556ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x556ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_556ba8:
    // 0x556ba8: 0xc075bf8  jal         func_1D6FE0
label_556bac:
    if (ctx->pc == 0x556BACu) {
        ctx->pc = 0x556BACu;
            // 0x556bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556BB0u;
        goto label_556bb0;
    }
    ctx->pc = 0x556BA8u;
    SET_GPR_U32(ctx, 31, 0x556BB0u);
    ctx->pc = 0x556BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556BA8u;
            // 0x556bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556BB0u; }
        if (ctx->pc != 0x556BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556BB0u; }
        if (ctx->pc != 0x556BB0u) { return; }
    }
    ctx->pc = 0x556BB0u;
label_556bb0:
    // 0x556bb0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x556bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_556bb4:
    // 0x556bb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x556bb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_556bb8:
    // 0x556bb8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_556bbc:
    if (ctx->pc == 0x556BBCu) {
        ctx->pc = 0x556BBCu;
            // 0x556bbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556BC0u;
        goto label_556bc0;
    }
    ctx->pc = 0x556BB8u;
    {
        const bool branch_taken_0x556bb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x556bb8) {
            ctx->pc = 0x556BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556BB8u;
            // 0x556bbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556BCCu;
            goto label_556bcc;
        }
    }
    ctx->pc = 0x556BC0u;
label_556bc0:
    // 0x556bc0: 0xc0400a8  jal         func_1002A0
label_556bc4:
    if (ctx->pc == 0x556BC4u) {
        ctx->pc = 0x556BC4u;
            // 0x556bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556BC8u;
        goto label_556bc8;
    }
    ctx->pc = 0x556BC0u;
    SET_GPR_U32(ctx, 31, 0x556BC8u);
    ctx->pc = 0x556BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556BC0u;
            // 0x556bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556BC8u; }
        if (ctx->pc != 0x556BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556BC8u; }
        if (ctx->pc != 0x556BC8u) { return; }
    }
    ctx->pc = 0x556BC8u;
label_556bc8:
    // 0x556bc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x556bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_556bcc:
    // 0x556bcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x556bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_556bd0:
    // 0x556bd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x556bd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_556bd4:
    // 0x556bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x556bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_556bd8:
    // 0x556bd8: 0x3e00008  jr          $ra
label_556bdc:
    if (ctx->pc == 0x556BDCu) {
        ctx->pc = 0x556BDCu;
            // 0x556bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x556BE0u;
        goto label_556be0;
    }
    ctx->pc = 0x556BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x556BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556BD8u;
            // 0x556bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x556BE0u;
label_556be0:
    // 0x556be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x556be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_556be4:
    // 0x556be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x556be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_556be8:
    // 0x556be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x556be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_556bec:
    // 0x556bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x556becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_556bf0:
    // 0x556bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x556bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_556bf4:
    // 0x556bf4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_556bf8:
    if (ctx->pc == 0x556BF8u) {
        ctx->pc = 0x556BF8u;
            // 0x556bf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556BFCu;
        goto label_556bfc;
    }
    ctx->pc = 0x556BF4u;
    {
        const bool branch_taken_0x556bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x556BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556BF4u;
            // 0x556bf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556bf4) {
            ctx->pc = 0x556C68u;
            goto label_556c68;
        }
    }
    ctx->pc = 0x556BFCu;
label_556bfc:
    // 0x556bfc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x556bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_556c00:
    // 0x556c00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x556c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_556c04:
    // 0x556c04: 0x24637a80  addiu       $v1, $v1, 0x7A80
    ctx->pc = 0x556c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31360));
label_556c08:
    // 0x556c08: 0x24427ac0  addiu       $v0, $v0, 0x7AC0
    ctx->pc = 0x556c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31424));
label_556c0c:
    // 0x556c0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x556c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_556c10:
    // 0x556c10: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x556c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_556c14:
    // 0x556c14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x556c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_556c18:
    // 0x556c18: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x556c18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_556c1c:
    // 0x556c1c: 0x320f809  jalr        $t9
label_556c20:
    if (ctx->pc == 0x556C20u) {
        ctx->pc = 0x556C24u;
        goto label_556c24;
    }
    ctx->pc = 0x556C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x556C24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x556C24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x556C24u; }
            if (ctx->pc != 0x556C24u) { return; }
        }
        }
    }
    ctx->pc = 0x556C24u;
label_556c24:
    // 0x556c24: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_556c28:
    if (ctx->pc == 0x556C28u) {
        ctx->pc = 0x556C28u;
            // 0x556c28: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x556C2Cu;
        goto label_556c2c;
    }
    ctx->pc = 0x556C24u;
    {
        const bool branch_taken_0x556c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x556c24) {
            ctx->pc = 0x556C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556C24u;
            // 0x556c28: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556C54u;
            goto label_556c54;
        }
    }
    ctx->pc = 0x556C2Cu;
label_556c2c:
    // 0x556c2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x556c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_556c30:
    // 0x556c30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x556c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_556c34:
    // 0x556c34: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x556c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_556c38:
    // 0x556c38: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x556c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_556c3c:
    // 0x556c3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x556c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_556c40:
    // 0x556c40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x556c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_556c44:
    // 0x556c44: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x556c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_556c48:
    // 0x556c48: 0xc0aee40  jal         func_2BB900
label_556c4c:
    if (ctx->pc == 0x556C4Cu) {
        ctx->pc = 0x556C4Cu;
            // 0x556c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556C50u;
        goto label_556c50;
    }
    ctx->pc = 0x556C48u;
    SET_GPR_U32(ctx, 31, 0x556C50u);
    ctx->pc = 0x556C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556C48u;
            // 0x556c4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556C50u; }
        if (ctx->pc != 0x556C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556C50u; }
        if (ctx->pc != 0x556C50u) { return; }
    }
    ctx->pc = 0x556C50u;
label_556c50:
    // 0x556c50: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x556c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_556c54:
    // 0x556c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x556c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_556c58:
    // 0x556c58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_556c5c:
    if (ctx->pc == 0x556C5Cu) {
        ctx->pc = 0x556C5Cu;
            // 0x556c5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556C60u;
        goto label_556c60;
    }
    ctx->pc = 0x556C58u;
    {
        const bool branch_taken_0x556c58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x556c58) {
            ctx->pc = 0x556C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556C58u;
            // 0x556c5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556C6Cu;
            goto label_556c6c;
        }
    }
    ctx->pc = 0x556C60u;
label_556c60:
    // 0x556c60: 0xc0400a8  jal         func_1002A0
label_556c64:
    if (ctx->pc == 0x556C64u) {
        ctx->pc = 0x556C64u;
            // 0x556c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556C68u;
        goto label_556c68;
    }
    ctx->pc = 0x556C60u;
    SET_GPR_U32(ctx, 31, 0x556C68u);
    ctx->pc = 0x556C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556C60u;
            // 0x556c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556C68u; }
        if (ctx->pc != 0x556C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556C68u; }
        if (ctx->pc != 0x556C68u) { return; }
    }
    ctx->pc = 0x556C68u;
label_556c68:
    // 0x556c68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x556c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_556c6c:
    // 0x556c6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x556c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_556c70:
    // 0x556c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x556c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_556c74:
    // 0x556c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x556c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_556c78:
    // 0x556c78: 0x3e00008  jr          $ra
label_556c7c:
    if (ctx->pc == 0x556C7Cu) {
        ctx->pc = 0x556C7Cu;
            // 0x556c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x556C80u;
        goto label_556c80;
    }
    ctx->pc = 0x556C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x556C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556C78u;
            // 0x556c7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x556C80u;
label_556c80:
    // 0x556c80: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x556c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_556c84:
    // 0x556c84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x556c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_556c88:
    // 0x556c88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x556c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_556c8c:
    // 0x556c8c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x556c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_556c90:
    // 0x556c90: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x556c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_556c94:
    // 0x556c94: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x556c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_556c98:
    // 0x556c98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x556c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_556c9c:
    // 0x556c9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x556c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_556ca0:
    // 0x556ca0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x556ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_556ca4:
    // 0x556ca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x556ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_556ca8:
    // 0x556ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x556ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_556cac:
    // 0x556cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x556cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_556cb0:
    // 0x556cb0: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x556cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_556cb4:
    // 0x556cb4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x556cb4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_556cb8:
    // 0x556cb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x556cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_556cbc:
    // 0x556cbc: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_556cc0:
    if (ctx->pc == 0x556CC0u) {
        ctx->pc = 0x556CC0u;
            // 0x556cc0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556CC4u;
        goto label_556cc4;
    }
    ctx->pc = 0x556CBCu;
    {
        const bool branch_taken_0x556cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x556CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556CBCu;
            // 0x556cc0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556cbc) {
            ctx->pc = 0x556D00u;
            goto label_556d00;
        }
    }
    ctx->pc = 0x556CC4u;
label_556cc4:
    // 0x556cc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x556cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_556cc8:
    // 0x556cc8: 0x50a3005d  beql        $a1, $v1, . + 4 + (0x5D << 2)
label_556ccc:
    if (ctx->pc == 0x556CCCu) {
        ctx->pc = 0x556CCCu;
            // 0x556ccc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x556CD0u;
        goto label_556cd0;
    }
    ctx->pc = 0x556CC8u;
    {
        const bool branch_taken_0x556cc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x556cc8) {
            ctx->pc = 0x556CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556CC8u;
            // 0x556ccc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556E40u;
            goto label_556e40;
        }
    }
    ctx->pc = 0x556CD0u;
label_556cd0:
    // 0x556cd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x556cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_556cd4:
    // 0x556cd4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_556cd8:
    if (ctx->pc == 0x556CD8u) {
        ctx->pc = 0x556CD8u;
            // 0x556cd8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x556CDCu;
        goto label_556cdc;
    }
    ctx->pc = 0x556CD4u;
    {
        const bool branch_taken_0x556cd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x556cd4) {
            ctx->pc = 0x556CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556CD4u;
            // 0x556cd8: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556CE4u;
            goto label_556ce4;
        }
    }
    ctx->pc = 0x556CDCu;
label_556cdc:
    // 0x556cdc: 0x10000057  b           . + 4 + (0x57 << 2)
label_556ce0:
    if (ctx->pc == 0x556CE0u) {
        ctx->pc = 0x556CE4u;
        goto label_556ce4;
    }
    ctx->pc = 0x556CDCu;
    {
        const bool branch_taken_0x556cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x556cdc) {
            ctx->pc = 0x556E3Cu;
            goto label_556e3c;
        }
    }
    ctx->pc = 0x556CE4u;
label_556ce4:
    // 0x556ce4: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x556ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_556ce8:
    // 0x556ce8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x556ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_556cec:
    // 0x556cec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x556cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_556cf0:
    // 0x556cf0: 0x320f809  jalr        $t9
label_556cf4:
    if (ctx->pc == 0x556CF4u) {
        ctx->pc = 0x556CF4u;
            // 0x556cf4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x556CF8u;
        goto label_556cf8;
    }
    ctx->pc = 0x556CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x556CF8u);
        ctx->pc = 0x556CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556CF0u;
            // 0x556cf4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x556CF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x556CF8u; }
            if (ctx->pc != 0x556CF8u) { return; }
        }
        }
    }
    ctx->pc = 0x556CF8u;
label_556cf8:
    // 0x556cf8: 0x10000050  b           . + 4 + (0x50 << 2)
label_556cfc:
    if (ctx->pc == 0x556CFCu) {
        ctx->pc = 0x556D00u;
        goto label_556d00;
    }
    ctx->pc = 0x556CF8u;
    {
        const bool branch_taken_0x556cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x556cf8) {
            ctx->pc = 0x556E3Cu;
            goto label_556e3c;
        }
    }
    ctx->pc = 0x556D00u;
label_556d00:
    // 0x556d00: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x556d00u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_556d04:
    // 0x556d04: 0x12c0004d  beqz        $s6, . + 4 + (0x4D << 2)
label_556d08:
    if (ctx->pc == 0x556D08u) {
        ctx->pc = 0x556D0Cu;
        goto label_556d0c;
    }
    ctx->pc = 0x556D04u;
    {
        const bool branch_taken_0x556d04 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x556d04) {
            ctx->pc = 0x556E3Cu;
            goto label_556e3c;
        }
    }
    ctx->pc = 0x556D0Cu;
label_556d0c:
    // 0x556d0c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x556d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_556d10:
    // 0x556d10: 0x8eb00090  lw          $s0, 0x90($s5)
    ctx->pc = 0x556d10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_556d14:
    // 0x556d14: 0x8c45b7b8  lw          $a1, -0x4848($v0)
    ctx->pc = 0x556d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948792)));
label_556d18:
    // 0x556d18: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x556d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_556d1c:
    // 0x556d1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x556d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_556d20:
    // 0x556d20: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x556d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_556d24:
    // 0x556d24: 0x24b10084  addiu       $s1, $a1, 0x84
    ctx->pc = 0x556d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
label_556d28:
    // 0x556d28: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x556d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_556d2c:
    // 0x556d2c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x556d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_556d30:
    // 0x556d30: 0x8c930130  lw          $s3, 0x130($a0)
    ctx->pc = 0x556d30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_556d34:
    // 0x556d34: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x556d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_556d38:
    // 0x556d38: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x556d38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_556d3c:
    // 0x556d3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x556d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_556d40:
    // 0x556d40: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x556d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_556d44:
    // 0x556d44: 0x8c5ee378  lw          $fp, -0x1C88($v0)
    ctx->pc = 0x556d44u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_556d48:
    // 0x556d48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x556d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_556d4c:
    // 0x556d4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x556d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_556d50:
    // 0x556d50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x556d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_556d54:
    // 0x556d54: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x556d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_556d58:
    // 0x556d58: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x556d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_556d5c:
    // 0x556d5c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x556d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_556d60:
    // 0x556d60: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x556d60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_556d64:
    // 0x556d64: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x556d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_556d68:
    // 0x556d68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x556d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_556d6c:
    // 0x556d6c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x556d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_556d70:
    // 0x556d70: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x556d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_556d74:
    // 0x556d74: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x556d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_556d78:
    // 0x556d78: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x556d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_556d7c:
    // 0x556d7c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x556d7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_556d80:
    // 0x556d80: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x556d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_556d84:
    // 0x556d84: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x556d84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_556d88:
    // 0x556d88: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x556d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_556d8c:
    // 0x556d8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x556d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_556d90:
    // 0x556d90: 0xc155f00  jal         func_557C00
label_556d94:
    if (ctx->pc == 0x556D94u) {
        ctx->pc = 0x556D94u;
            // 0x556d94: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556D98u;
        goto label_556d98;
    }
    ctx->pc = 0x556D90u;
    SET_GPR_U32(ctx, 31, 0x556D98u);
    ctx->pc = 0x556D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556D90u;
            // 0x556d94: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x557C00u;
    if (runtime->hasFunction(0x557C00u)) {
        auto targetFn = runtime->lookupFunction(0x557C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556D98u; }
        if (ctx->pc != 0x556D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00557C00_0x557c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556D98u; }
        if (ctx->pc != 0x556D98u) { return; }
    }
    ctx->pc = 0x556D98u;
label_556d98:
    // 0x556d98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_556d9c:
    if (ctx->pc == 0x556D9Cu) {
        ctx->pc = 0x556DA0u;
        goto label_556da0;
    }
    ctx->pc = 0x556D98u;
    {
        const bool branch_taken_0x556d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556d98) {
            ctx->pc = 0x556DE8u;
            goto label_556de8;
        }
    }
    ctx->pc = 0x556DA0u;
label_556da0:
    // 0x556da0: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x556da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_556da4:
    // 0x556da4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x556da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_556da8:
    // 0x556da8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x556da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_556dac:
    // 0x556dac: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x556dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_556db0:
    // 0x556db0: 0xc04cce8  jal         func_1333A0
label_556db4:
    if (ctx->pc == 0x556DB4u) {
        ctx->pc = 0x556DB4u;
            // 0x556db4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x556DB8u;
        goto label_556db8;
    }
    ctx->pc = 0x556DB0u;
    SET_GPR_U32(ctx, 31, 0x556DB8u);
    ctx->pc = 0x556DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556DB0u;
            // 0x556db4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556DB8u; }
        if (ctx->pc != 0x556DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556DB8u; }
        if (ctx->pc != 0x556DB8u) { return; }
    }
    ctx->pc = 0x556DB8u;
label_556db8:
    // 0x556db8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x556db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_556dbc:
    // 0x556dbc: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x556dbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_556dc0:
    // 0x556dc0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x556dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_556dc4:
    // 0x556dc4: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x556dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_556dc8:
    // 0x556dc8: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x556dc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_556dcc:
    // 0x556dcc: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x556dccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_556dd0:
    // 0x556dd0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x556dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_556dd4:
    // 0x556dd4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x556dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_556dd8:
    // 0x556dd8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x556dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_556ddc:
    // 0x556ddc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x556ddcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_556de0:
    // 0x556de0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x556de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_556de4:
    // 0x556de4: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x556de4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_556de8:
    // 0x556de8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x556de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_556dec:
    // 0x556dec: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x556decu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_556df0:
    // 0x556df0: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_556df4:
    if (ctx->pc == 0x556DF4u) {
        ctx->pc = 0x556DF4u;
            // 0x556df4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x556DF8u;
        goto label_556df8;
    }
    ctx->pc = 0x556DF0u;
    {
        const bool branch_taken_0x556df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x556DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556DF0u;
            // 0x556df4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556df0) {
            ctx->pc = 0x556D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_556d70;
        }
    }
    ctx->pc = 0x556DF8u;
label_556df8:
    // 0x556df8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x556df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_556dfc:
    // 0x556dfc: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x556dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_556e00:
    // 0x556e00: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_556e04:
    if (ctx->pc == 0x556E04u) {
        ctx->pc = 0x556E08u;
        goto label_556e08;
    }
    ctx->pc = 0x556E00u;
    {
        const bool branch_taken_0x556e00 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x556e00) {
            ctx->pc = 0x556E3Cu;
            goto label_556e3c;
        }
    }
    ctx->pc = 0x556E08u;
label_556e08:
    // 0x556e08: 0xc04e738  jal         func_139CE0
label_556e0c:
    if (ctx->pc == 0x556E0Cu) {
        ctx->pc = 0x556E0Cu;
            // 0x556e0c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x556E10u;
        goto label_556e10;
    }
    ctx->pc = 0x556E08u;
    SET_GPR_U32(ctx, 31, 0x556E10u);
    ctx->pc = 0x556E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556E08u;
            // 0x556e0c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556E10u; }
        if (ctx->pc != 0x556E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556E10u; }
        if (ctx->pc != 0x556E10u) { return; }
    }
    ctx->pc = 0x556E10u;
label_556e10:
    // 0x556e10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x556e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_556e14:
    // 0x556e14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x556e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_556e18:
    // 0x556e18: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x556e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_556e1c:
    // 0x556e1c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x556e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_556e20:
    // 0x556e20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x556e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_556e24:
    // 0x556e24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x556e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_556e28:
    // 0x556e28: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x556e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_556e2c:
    // 0x556e2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x556e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_556e30:
    // 0x556e30: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x556e30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_556e34:
    // 0x556e34: 0xc055d28  jal         func_1574A0
label_556e38:
    if (ctx->pc == 0x556E38u) {
        ctx->pc = 0x556E38u;
            // 0x556e38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556E3Cu;
        goto label_556e3c;
    }
    ctx->pc = 0x556E34u;
    SET_GPR_U32(ctx, 31, 0x556E3Cu);
    ctx->pc = 0x556E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556E34u;
            // 0x556e38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556E3Cu; }
        if (ctx->pc != 0x556E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556E3Cu; }
        if (ctx->pc != 0x556E3Cu) { return; }
    }
    ctx->pc = 0x556E3Cu;
label_556e3c:
    // 0x556e3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x556e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_556e40:
    // 0x556e40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x556e40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_556e44:
    // 0x556e44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x556e44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_556e48:
    // 0x556e48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x556e48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_556e4c:
    // 0x556e4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x556e4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_556e50:
    // 0x556e50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x556e50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_556e54:
    // 0x556e54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x556e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_556e58:
    // 0x556e58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x556e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_556e5c:
    // 0x556e5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x556e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_556e60:
    // 0x556e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x556e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_556e64:
    // 0x556e64: 0x3e00008  jr          $ra
label_556e68:
    if (ctx->pc == 0x556E68u) {
        ctx->pc = 0x556E68u;
            // 0x556e68: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x556E6Cu;
        goto label_556e6c;
    }
    ctx->pc = 0x556E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x556E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556E64u;
            // 0x556e68: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x556E6Cu;
label_556e6c:
    // 0x556e6c: 0x0  nop
    ctx->pc = 0x556e6cu;
    // NOP
label_556e70:
    // 0x556e70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x556e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_556e74:
    // 0x556e74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x556e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_556e78:
    // 0x556e78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x556e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_556e7c:
    // 0x556e7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x556e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_556e80:
    // 0x556e80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x556e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_556e84:
    // 0x556e84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x556e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_556e88:
    // 0x556e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x556e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_556e8c:
    // 0x556e8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x556e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_556e90:
    // 0x556e90: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x556e90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_556e94:
    // 0x556e94: 0x5083001e  beql        $a0, $v1, . + 4 + (0x1E << 2)
label_556e98:
    if (ctx->pc == 0x556E98u) {
        ctx->pc = 0x556E98u;
            // 0x556e98: 0x8e110070  lw          $s1, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->pc = 0x556E9Cu;
        goto label_556e9c;
    }
    ctx->pc = 0x556E94u;
    {
        const bool branch_taken_0x556e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x556e94) {
            ctx->pc = 0x556E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556E94u;
            // 0x556e98: 0x8e110070  lw          $s1, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556F10u;
            goto label_556f10;
        }
    }
    ctx->pc = 0x556E9Cu;
label_556e9c:
    // 0x556e9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x556e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_556ea0:
    // 0x556ea0: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_556ea4:
    if (ctx->pc == 0x556EA4u) {
        ctx->pc = 0x556EA4u;
            // 0x556ea4: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->pc = 0x556EA8u;
        goto label_556ea8;
    }
    ctx->pc = 0x556EA0u;
    {
        const bool branch_taken_0x556ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x556ea0) {
            ctx->pc = 0x556EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556EA0u;
            // 0x556ea4: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556EBCu;
            goto label_556ebc;
        }
    }
    ctx->pc = 0x556EA8u;
label_556ea8:
    // 0x556ea8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x556ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_556eac:
    // 0x556eac: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
label_556eb0:
    if (ctx->pc == 0x556EB0u) {
        ctx->pc = 0x556EB4u;
        goto label_556eb4;
    }
    ctx->pc = 0x556EACu;
    {
        const bool branch_taken_0x556eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x556eac) {
            ctx->pc = 0x556F40u;
            goto label_556f40;
        }
    }
    ctx->pc = 0x556EB4u;
label_556eb4:
    // 0x556eb4: 0x10000022  b           . + 4 + (0x22 << 2)
label_556eb8:
    if (ctx->pc == 0x556EB8u) {
        ctx->pc = 0x556EBCu;
        goto label_556ebc;
    }
    ctx->pc = 0x556EB4u;
    {
        const bool branch_taken_0x556eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x556eb4) {
            ctx->pc = 0x556F40u;
            goto label_556f40;
        }
    }
    ctx->pc = 0x556EBCu;
label_556ebc:
    // 0x556ebc: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x556ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_556ec0:
    // 0x556ec0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x556ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_556ec4:
    // 0x556ec4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x556ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_556ec8:
    // 0x556ec8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x556ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_556ecc:
    // 0x556ecc: 0xc040140  jal         func_100500
label_556ed0:
    if (ctx->pc == 0x556ED0u) {
        ctx->pc = 0x556ED0u;
            // 0x556ed0: 0x113980  sll         $a3, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->pc = 0x556ED4u;
        goto label_556ed4;
    }
    ctx->pc = 0x556ECCu;
    SET_GPR_U32(ctx, 31, 0x556ED4u);
    ctx->pc = 0x556ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556ECCu;
            // 0x556ed0: 0x113980  sll         $a3, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556ED4u; }
        if (ctx->pc != 0x556ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556ED4u; }
        if (ctx->pc != 0x556ED4u) { return; }
    }
    ctx->pc = 0x556ED4u;
label_556ed4:
    // 0x556ed4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_556ed8:
    if (ctx->pc == 0x556ED8u) {
        ctx->pc = 0x556ED8u;
            // 0x556ed8: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->pc = 0x556EDCu;
        goto label_556edc;
    }
    ctx->pc = 0x556ED4u;
    {
        const bool branch_taken_0x556ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556ed4) {
            ctx->pc = 0x556ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556ED4u;
            // 0x556ed8: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x556EFCu;
            goto label_556efc;
        }
    }
    ctx->pc = 0x556EDCu;
label_556edc:
    // 0x556edc: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x556edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_556ee0:
    // 0x556ee0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x556ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_556ee4:
    // 0x556ee4: 0x8c63b7b8  lw          $v1, -0x4848($v1)
    ctx->pc = 0x556ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948792)));
label_556ee8:
    // 0x556ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x556ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_556eec:
    // 0x556eec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x556eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_556ef0:
    // 0x556ef0: 0xc0b4554  jal         func_2D1550
label_556ef4:
    if (ctx->pc == 0x556EF4u) {
        ctx->pc = 0x556EF4u;
            // 0x556ef4: 0x24650084  addiu       $a1, $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
        ctx->pc = 0x556EF8u;
        goto label_556ef8;
    }
    ctx->pc = 0x556EF0u;
    SET_GPR_U32(ctx, 31, 0x556EF8u);
    ctx->pc = 0x556EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556EF0u;
            // 0x556ef4: 0x24650084  addiu       $a1, $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556EF8u; }
        if (ctx->pc != 0x556EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556EF8u; }
        if (ctx->pc != 0x556EF8u) { return; }
    }
    ctx->pc = 0x556EF8u;
label_556ef8:
    // 0x556ef8: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x556ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_556efc:
    // 0x556efc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x556efcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_556f00:
    // 0x556f00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x556f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_556f04:
    // 0x556f04: 0x320f809  jalr        $t9
label_556f08:
    if (ctx->pc == 0x556F08u) {
        ctx->pc = 0x556F08u;
            // 0x556f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x556F0Cu;
        goto label_556f0c;
    }
    ctx->pc = 0x556F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x556F0Cu);
        ctx->pc = 0x556F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556F04u;
            // 0x556f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x556F0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x556F0Cu; }
            if (ctx->pc != 0x556F0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x556F0Cu;
label_556f0c:
    // 0x556f0c: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x556f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_556f10:
    // 0x556f10: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_556f14:
    if (ctx->pc == 0x556F14u) {
        ctx->pc = 0x556F18u;
        goto label_556f18;
    }
    ctx->pc = 0x556F10u;
    {
        const bool branch_taken_0x556f10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x556f10) {
            ctx->pc = 0x556F40u;
            goto label_556f40;
        }
    }
    ctx->pc = 0x556F18u;
label_556f18:
    // 0x556f18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x556f18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_556f1c:
    // 0x556f1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x556f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_556f20:
    // 0x556f20: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x556f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_556f24:
    // 0x556f24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x556f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_556f28:
    // 0x556f28: 0xc0e3658  jal         func_38D960
label_556f2c:
    if (ctx->pc == 0x556F2Cu) {
        ctx->pc = 0x556F2Cu;
            // 0x556f2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x556F30u;
        goto label_556f30;
    }
    ctx->pc = 0x556F28u;
    SET_GPR_U32(ctx, 31, 0x556F30u);
    ctx->pc = 0x556F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x556F28u;
            // 0x556f2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556F30u; }
        if (ctx->pc != 0x556F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x556F30u; }
        if (ctx->pc != 0x556F30u) { return; }
    }
    ctx->pc = 0x556F30u;
label_556f30:
    // 0x556f30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x556f30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_556f34:
    // 0x556f34: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x556f34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_556f38:
    // 0x556f38: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_556f3c:
    if (ctx->pc == 0x556F3Cu) {
        ctx->pc = 0x556F3Cu;
            // 0x556f3c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x556F40u;
        goto label_556f40;
    }
    ctx->pc = 0x556F38u;
    {
        const bool branch_taken_0x556f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x556F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556F38u;
            // 0x556f3c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x556f38) {
            ctx->pc = 0x556F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_556f20;
        }
    }
    ctx->pc = 0x556F40u;
label_556f40:
    // 0x556f40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x556f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_556f44:
    // 0x556f44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x556f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_556f48:
    // 0x556f48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x556f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_556f4c:
    // 0x556f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x556f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_556f50:
    // 0x556f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x556f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_556f54:
    // 0x556f54: 0x3e00008  jr          $ra
label_556f58:
    if (ctx->pc == 0x556F58u) {
        ctx->pc = 0x556F58u;
            // 0x556f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x556F5Cu;
        goto label_556f5c;
    }
    ctx->pc = 0x556F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x556F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x556F54u;
            // 0x556f58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x556F5Cu;
label_556f5c:
    // 0x556f5c: 0x0  nop
    ctx->pc = 0x556f5cu;
    // NOP
}
