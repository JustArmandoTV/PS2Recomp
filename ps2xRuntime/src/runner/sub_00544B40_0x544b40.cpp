#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00544B40
// Address: 0x544b40 - 0x544ff0
void sub_00544B40_0x544b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00544B40_0x544b40");
#endif

    switch (ctx->pc) {
        case 0x544b40u: goto label_544b40;
        case 0x544b44u: goto label_544b44;
        case 0x544b48u: goto label_544b48;
        case 0x544b4cu: goto label_544b4c;
        case 0x544b50u: goto label_544b50;
        case 0x544b54u: goto label_544b54;
        case 0x544b58u: goto label_544b58;
        case 0x544b5cu: goto label_544b5c;
        case 0x544b60u: goto label_544b60;
        case 0x544b64u: goto label_544b64;
        case 0x544b68u: goto label_544b68;
        case 0x544b6cu: goto label_544b6c;
        case 0x544b70u: goto label_544b70;
        case 0x544b74u: goto label_544b74;
        case 0x544b78u: goto label_544b78;
        case 0x544b7cu: goto label_544b7c;
        case 0x544b80u: goto label_544b80;
        case 0x544b84u: goto label_544b84;
        case 0x544b88u: goto label_544b88;
        case 0x544b8cu: goto label_544b8c;
        case 0x544b90u: goto label_544b90;
        case 0x544b94u: goto label_544b94;
        case 0x544b98u: goto label_544b98;
        case 0x544b9cu: goto label_544b9c;
        case 0x544ba0u: goto label_544ba0;
        case 0x544ba4u: goto label_544ba4;
        case 0x544ba8u: goto label_544ba8;
        case 0x544bacu: goto label_544bac;
        case 0x544bb0u: goto label_544bb0;
        case 0x544bb4u: goto label_544bb4;
        case 0x544bb8u: goto label_544bb8;
        case 0x544bbcu: goto label_544bbc;
        case 0x544bc0u: goto label_544bc0;
        case 0x544bc4u: goto label_544bc4;
        case 0x544bc8u: goto label_544bc8;
        case 0x544bccu: goto label_544bcc;
        case 0x544bd0u: goto label_544bd0;
        case 0x544bd4u: goto label_544bd4;
        case 0x544bd8u: goto label_544bd8;
        case 0x544bdcu: goto label_544bdc;
        case 0x544be0u: goto label_544be0;
        case 0x544be4u: goto label_544be4;
        case 0x544be8u: goto label_544be8;
        case 0x544becu: goto label_544bec;
        case 0x544bf0u: goto label_544bf0;
        case 0x544bf4u: goto label_544bf4;
        case 0x544bf8u: goto label_544bf8;
        case 0x544bfcu: goto label_544bfc;
        case 0x544c00u: goto label_544c00;
        case 0x544c04u: goto label_544c04;
        case 0x544c08u: goto label_544c08;
        case 0x544c0cu: goto label_544c0c;
        case 0x544c10u: goto label_544c10;
        case 0x544c14u: goto label_544c14;
        case 0x544c18u: goto label_544c18;
        case 0x544c1cu: goto label_544c1c;
        case 0x544c20u: goto label_544c20;
        case 0x544c24u: goto label_544c24;
        case 0x544c28u: goto label_544c28;
        case 0x544c2cu: goto label_544c2c;
        case 0x544c30u: goto label_544c30;
        case 0x544c34u: goto label_544c34;
        case 0x544c38u: goto label_544c38;
        case 0x544c3cu: goto label_544c3c;
        case 0x544c40u: goto label_544c40;
        case 0x544c44u: goto label_544c44;
        case 0x544c48u: goto label_544c48;
        case 0x544c4cu: goto label_544c4c;
        case 0x544c50u: goto label_544c50;
        case 0x544c54u: goto label_544c54;
        case 0x544c58u: goto label_544c58;
        case 0x544c5cu: goto label_544c5c;
        case 0x544c60u: goto label_544c60;
        case 0x544c64u: goto label_544c64;
        case 0x544c68u: goto label_544c68;
        case 0x544c6cu: goto label_544c6c;
        case 0x544c70u: goto label_544c70;
        case 0x544c74u: goto label_544c74;
        case 0x544c78u: goto label_544c78;
        case 0x544c7cu: goto label_544c7c;
        case 0x544c80u: goto label_544c80;
        case 0x544c84u: goto label_544c84;
        case 0x544c88u: goto label_544c88;
        case 0x544c8cu: goto label_544c8c;
        case 0x544c90u: goto label_544c90;
        case 0x544c94u: goto label_544c94;
        case 0x544c98u: goto label_544c98;
        case 0x544c9cu: goto label_544c9c;
        case 0x544ca0u: goto label_544ca0;
        case 0x544ca4u: goto label_544ca4;
        case 0x544ca8u: goto label_544ca8;
        case 0x544cacu: goto label_544cac;
        case 0x544cb0u: goto label_544cb0;
        case 0x544cb4u: goto label_544cb4;
        case 0x544cb8u: goto label_544cb8;
        case 0x544cbcu: goto label_544cbc;
        case 0x544cc0u: goto label_544cc0;
        case 0x544cc4u: goto label_544cc4;
        case 0x544cc8u: goto label_544cc8;
        case 0x544cccu: goto label_544ccc;
        case 0x544cd0u: goto label_544cd0;
        case 0x544cd4u: goto label_544cd4;
        case 0x544cd8u: goto label_544cd8;
        case 0x544cdcu: goto label_544cdc;
        case 0x544ce0u: goto label_544ce0;
        case 0x544ce4u: goto label_544ce4;
        case 0x544ce8u: goto label_544ce8;
        case 0x544cecu: goto label_544cec;
        case 0x544cf0u: goto label_544cf0;
        case 0x544cf4u: goto label_544cf4;
        case 0x544cf8u: goto label_544cf8;
        case 0x544cfcu: goto label_544cfc;
        case 0x544d00u: goto label_544d00;
        case 0x544d04u: goto label_544d04;
        case 0x544d08u: goto label_544d08;
        case 0x544d0cu: goto label_544d0c;
        case 0x544d10u: goto label_544d10;
        case 0x544d14u: goto label_544d14;
        case 0x544d18u: goto label_544d18;
        case 0x544d1cu: goto label_544d1c;
        case 0x544d20u: goto label_544d20;
        case 0x544d24u: goto label_544d24;
        case 0x544d28u: goto label_544d28;
        case 0x544d2cu: goto label_544d2c;
        case 0x544d30u: goto label_544d30;
        case 0x544d34u: goto label_544d34;
        case 0x544d38u: goto label_544d38;
        case 0x544d3cu: goto label_544d3c;
        case 0x544d40u: goto label_544d40;
        case 0x544d44u: goto label_544d44;
        case 0x544d48u: goto label_544d48;
        case 0x544d4cu: goto label_544d4c;
        case 0x544d50u: goto label_544d50;
        case 0x544d54u: goto label_544d54;
        case 0x544d58u: goto label_544d58;
        case 0x544d5cu: goto label_544d5c;
        case 0x544d60u: goto label_544d60;
        case 0x544d64u: goto label_544d64;
        case 0x544d68u: goto label_544d68;
        case 0x544d6cu: goto label_544d6c;
        case 0x544d70u: goto label_544d70;
        case 0x544d74u: goto label_544d74;
        case 0x544d78u: goto label_544d78;
        case 0x544d7cu: goto label_544d7c;
        case 0x544d80u: goto label_544d80;
        case 0x544d84u: goto label_544d84;
        case 0x544d88u: goto label_544d88;
        case 0x544d8cu: goto label_544d8c;
        case 0x544d90u: goto label_544d90;
        case 0x544d94u: goto label_544d94;
        case 0x544d98u: goto label_544d98;
        case 0x544d9cu: goto label_544d9c;
        case 0x544da0u: goto label_544da0;
        case 0x544da4u: goto label_544da4;
        case 0x544da8u: goto label_544da8;
        case 0x544dacu: goto label_544dac;
        case 0x544db0u: goto label_544db0;
        case 0x544db4u: goto label_544db4;
        case 0x544db8u: goto label_544db8;
        case 0x544dbcu: goto label_544dbc;
        case 0x544dc0u: goto label_544dc0;
        case 0x544dc4u: goto label_544dc4;
        case 0x544dc8u: goto label_544dc8;
        case 0x544dccu: goto label_544dcc;
        case 0x544dd0u: goto label_544dd0;
        case 0x544dd4u: goto label_544dd4;
        case 0x544dd8u: goto label_544dd8;
        case 0x544ddcu: goto label_544ddc;
        case 0x544de0u: goto label_544de0;
        case 0x544de4u: goto label_544de4;
        case 0x544de8u: goto label_544de8;
        case 0x544decu: goto label_544dec;
        case 0x544df0u: goto label_544df0;
        case 0x544df4u: goto label_544df4;
        case 0x544df8u: goto label_544df8;
        case 0x544dfcu: goto label_544dfc;
        case 0x544e00u: goto label_544e00;
        case 0x544e04u: goto label_544e04;
        case 0x544e08u: goto label_544e08;
        case 0x544e0cu: goto label_544e0c;
        case 0x544e10u: goto label_544e10;
        case 0x544e14u: goto label_544e14;
        case 0x544e18u: goto label_544e18;
        case 0x544e1cu: goto label_544e1c;
        case 0x544e20u: goto label_544e20;
        case 0x544e24u: goto label_544e24;
        case 0x544e28u: goto label_544e28;
        case 0x544e2cu: goto label_544e2c;
        case 0x544e30u: goto label_544e30;
        case 0x544e34u: goto label_544e34;
        case 0x544e38u: goto label_544e38;
        case 0x544e3cu: goto label_544e3c;
        case 0x544e40u: goto label_544e40;
        case 0x544e44u: goto label_544e44;
        case 0x544e48u: goto label_544e48;
        case 0x544e4cu: goto label_544e4c;
        case 0x544e50u: goto label_544e50;
        case 0x544e54u: goto label_544e54;
        case 0x544e58u: goto label_544e58;
        case 0x544e5cu: goto label_544e5c;
        case 0x544e60u: goto label_544e60;
        case 0x544e64u: goto label_544e64;
        case 0x544e68u: goto label_544e68;
        case 0x544e6cu: goto label_544e6c;
        case 0x544e70u: goto label_544e70;
        case 0x544e74u: goto label_544e74;
        case 0x544e78u: goto label_544e78;
        case 0x544e7cu: goto label_544e7c;
        case 0x544e80u: goto label_544e80;
        case 0x544e84u: goto label_544e84;
        case 0x544e88u: goto label_544e88;
        case 0x544e8cu: goto label_544e8c;
        case 0x544e90u: goto label_544e90;
        case 0x544e94u: goto label_544e94;
        case 0x544e98u: goto label_544e98;
        case 0x544e9cu: goto label_544e9c;
        case 0x544ea0u: goto label_544ea0;
        case 0x544ea4u: goto label_544ea4;
        case 0x544ea8u: goto label_544ea8;
        case 0x544eacu: goto label_544eac;
        case 0x544eb0u: goto label_544eb0;
        case 0x544eb4u: goto label_544eb4;
        case 0x544eb8u: goto label_544eb8;
        case 0x544ebcu: goto label_544ebc;
        case 0x544ec0u: goto label_544ec0;
        case 0x544ec4u: goto label_544ec4;
        case 0x544ec8u: goto label_544ec8;
        case 0x544eccu: goto label_544ecc;
        case 0x544ed0u: goto label_544ed0;
        case 0x544ed4u: goto label_544ed4;
        case 0x544ed8u: goto label_544ed8;
        case 0x544edcu: goto label_544edc;
        case 0x544ee0u: goto label_544ee0;
        case 0x544ee4u: goto label_544ee4;
        case 0x544ee8u: goto label_544ee8;
        case 0x544eecu: goto label_544eec;
        case 0x544ef0u: goto label_544ef0;
        case 0x544ef4u: goto label_544ef4;
        case 0x544ef8u: goto label_544ef8;
        case 0x544efcu: goto label_544efc;
        case 0x544f00u: goto label_544f00;
        case 0x544f04u: goto label_544f04;
        case 0x544f08u: goto label_544f08;
        case 0x544f0cu: goto label_544f0c;
        case 0x544f10u: goto label_544f10;
        case 0x544f14u: goto label_544f14;
        case 0x544f18u: goto label_544f18;
        case 0x544f1cu: goto label_544f1c;
        case 0x544f20u: goto label_544f20;
        case 0x544f24u: goto label_544f24;
        case 0x544f28u: goto label_544f28;
        case 0x544f2cu: goto label_544f2c;
        case 0x544f30u: goto label_544f30;
        case 0x544f34u: goto label_544f34;
        case 0x544f38u: goto label_544f38;
        case 0x544f3cu: goto label_544f3c;
        case 0x544f40u: goto label_544f40;
        case 0x544f44u: goto label_544f44;
        case 0x544f48u: goto label_544f48;
        case 0x544f4cu: goto label_544f4c;
        case 0x544f50u: goto label_544f50;
        case 0x544f54u: goto label_544f54;
        case 0x544f58u: goto label_544f58;
        case 0x544f5cu: goto label_544f5c;
        case 0x544f60u: goto label_544f60;
        case 0x544f64u: goto label_544f64;
        case 0x544f68u: goto label_544f68;
        case 0x544f6cu: goto label_544f6c;
        case 0x544f70u: goto label_544f70;
        case 0x544f74u: goto label_544f74;
        case 0x544f78u: goto label_544f78;
        case 0x544f7cu: goto label_544f7c;
        case 0x544f80u: goto label_544f80;
        case 0x544f84u: goto label_544f84;
        case 0x544f88u: goto label_544f88;
        case 0x544f8cu: goto label_544f8c;
        case 0x544f90u: goto label_544f90;
        case 0x544f94u: goto label_544f94;
        case 0x544f98u: goto label_544f98;
        case 0x544f9cu: goto label_544f9c;
        case 0x544fa0u: goto label_544fa0;
        case 0x544fa4u: goto label_544fa4;
        case 0x544fa8u: goto label_544fa8;
        case 0x544facu: goto label_544fac;
        case 0x544fb0u: goto label_544fb0;
        case 0x544fb4u: goto label_544fb4;
        case 0x544fb8u: goto label_544fb8;
        case 0x544fbcu: goto label_544fbc;
        case 0x544fc0u: goto label_544fc0;
        case 0x544fc4u: goto label_544fc4;
        case 0x544fc8u: goto label_544fc8;
        case 0x544fccu: goto label_544fcc;
        case 0x544fd0u: goto label_544fd0;
        case 0x544fd4u: goto label_544fd4;
        case 0x544fd8u: goto label_544fd8;
        case 0x544fdcu: goto label_544fdc;
        case 0x544fe0u: goto label_544fe0;
        case 0x544fe4u: goto label_544fe4;
        case 0x544fe8u: goto label_544fe8;
        case 0x544fecu: goto label_544fec;
        default: break;
    }

    ctx->pc = 0x544b40u;

label_544b40:
    // 0x544b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x544b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_544b44:
    // 0x544b44: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x544b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_544b48:
    // 0x544b48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x544b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_544b4c:
    // 0x544b4c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x544b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_544b50:
    // 0x544b50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x544b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_544b54:
    // 0x544b54: 0x8c50b6b0  lw          $s0, -0x4950($v0)
    ctx->pc = 0x544b54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
label_544b58:
    // 0x544b58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x544b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_544b5c:
    // 0x544b5c: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x544b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_544b60:
    // 0x544b60: 0xc0fe5bc  jal         func_3F96F0
label_544b64:
    if (ctx->pc == 0x544B64u) {
        ctx->pc = 0x544B64u;
            // 0x544b64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544B68u;
        goto label_544b68;
    }
    ctx->pc = 0x544B60u;
    SET_GPR_U32(ctx, 31, 0x544B68u);
    ctx->pc = 0x544B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544B60u;
            // 0x544b64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544B68u; }
        if (ctx->pc != 0x544B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544B68u; }
        if (ctx->pc != 0x544B68u) { return; }
    }
    ctx->pc = 0x544B68u;
label_544b68:
    // 0x544b68: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x544b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_544b6c:
    // 0x544b6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x544b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_544b70:
    // 0x544b70: 0xac62b6b8  sw          $v0, -0x4948($v1)
    ctx->pc = 0x544b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948536), GPR_U32(ctx, 2));
label_544b74:
    // 0x544b74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x544b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_544b78:
    // 0x544b78: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x544b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_544b7c:
    // 0x544b7c: 0xc0fe5bc  jal         func_3F96F0
label_544b80:
    if (ctx->pc == 0x544B80u) {
        ctx->pc = 0x544B80u;
            // 0x544b80: 0x3405fd40  ori         $a1, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->pc = 0x544B84u;
        goto label_544b84;
    }
    ctx->pc = 0x544B7Cu;
    SET_GPR_U32(ctx, 31, 0x544B84u);
    ctx->pc = 0x544B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544B7Cu;
            // 0x544b80: 0x3405fd40  ori         $a1, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544B84u; }
        if (ctx->pc != 0x544B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544B84u; }
        if (ctx->pc != 0x544B84u) { return; }
    }
    ctx->pc = 0x544B84u;
label_544b84:
    // 0x544b84: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x544b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_544b88:
    // 0x544b88: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x544b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_544b8c:
    // 0x544b8c: 0xac62b6c0  sw          $v0, -0x4940($v1)
    ctx->pc = 0x544b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948544), GPR_U32(ctx, 2));
label_544b90:
    // 0x544b90: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x544b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_544b94:
    // 0x544b94: 0xa080b6c8  sb          $zero, -0x4938($a0)
    ctx->pc = 0x544b94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294948552), (uint8_t)GPR_U32(ctx, 0));
label_544b98:
    // 0x544b98: 0xa060b6d0  sb          $zero, -0x4930($v1)
    ctx->pc = 0x544b98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948560), (uint8_t)GPR_U32(ctx, 0));
label_544b9c:
    // 0x544b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x544b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_544ba0:
    // 0x544ba0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x544ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_544ba4:
    // 0x544ba4: 0x3e00008  jr          $ra
label_544ba8:
    if (ctx->pc == 0x544BA8u) {
        ctx->pc = 0x544BA8u;
            // 0x544ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x544BACu;
        goto label_544bac;
    }
    ctx->pc = 0x544BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x544BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544BA4u;
            // 0x544ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x544BACu;
label_544bac:
    // 0x544bac: 0x0  nop
    ctx->pc = 0x544bacu;
    // NOP
label_544bb0:
    // 0x544bb0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x544bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_544bb4:
    // 0x544bb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x544bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_544bb8:
    // 0x544bb8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x544bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_544bbc:
    // 0x544bbc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x544bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_544bc0:
    // 0x544bc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x544bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_544bc4:
    // 0x544bc4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x544bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_544bc8:
    // 0x544bc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x544bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_544bcc:
    // 0x544bcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x544bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_544bd0:
    // 0x544bd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x544bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_544bd4:
    // 0x544bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x544bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_544bd8:
    // 0x544bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x544bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_544bdc:
    // 0x544bdc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x544bdcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_544be0:
    // 0x544be0: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_544be4:
    if (ctx->pc == 0x544BE4u) {
        ctx->pc = 0x544BE4u;
            // 0x544be4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544BE8u;
        goto label_544be8;
    }
    ctx->pc = 0x544BE0u;
    {
        const bool branch_taken_0x544be0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x544BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544BE0u;
            // 0x544be4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x544be0) {
            ctx->pc = 0x544C30u;
            goto label_544c30;
        }
    }
    ctx->pc = 0x544BE8u;
label_544be8:
    // 0x544be8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x544be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_544bec:
    // 0x544bec: 0x50a3005a  beql        $a1, $v1, . + 4 + (0x5A << 2)
label_544bf0:
    if (ctx->pc == 0x544BF0u) {
        ctx->pc = 0x544BF0u;
            // 0x544bf0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x544BF4u;
        goto label_544bf4;
    }
    ctx->pc = 0x544BECu;
    {
        const bool branch_taken_0x544bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x544bec) {
            ctx->pc = 0x544BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x544BECu;
            // 0x544bf0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x544D58u;
            goto label_544d58;
        }
    }
    ctx->pc = 0x544BF4u;
label_544bf4:
    // 0x544bf4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x544bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_544bf8:
    // 0x544bf8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_544bfc:
    if (ctx->pc == 0x544BFCu) {
        ctx->pc = 0x544C00u;
        goto label_544c00;
    }
    ctx->pc = 0x544BF8u;
    {
        const bool branch_taken_0x544bf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x544bf8) {
            ctx->pc = 0x544C08u;
            goto label_544c08;
        }
    }
    ctx->pc = 0x544C00u;
label_544c00:
    // 0x544c00: 0x10000054  b           . + 4 + (0x54 << 2)
label_544c04:
    if (ctx->pc == 0x544C04u) {
        ctx->pc = 0x544C08u;
        goto label_544c08;
    }
    ctx->pc = 0x544C00u;
    {
        const bool branch_taken_0x544c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x544c00) {
            ctx->pc = 0x544D54u;
            goto label_544d54;
        }
    }
    ctx->pc = 0x544C08u;
label_544c08:
    // 0x544c08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x544c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_544c0c:
    // 0x544c0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x544c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_544c10:
    // 0x544c10: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x544c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_544c14:
    // 0x544c14: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x544c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_544c18:
    // 0x544c18: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x544c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_544c1c:
    // 0x544c1c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x544c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_544c20:
    // 0x544c20: 0x320f809  jalr        $t9
label_544c24:
    if (ctx->pc == 0x544C24u) {
        ctx->pc = 0x544C24u;
            // 0x544c24: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x544C28u;
        goto label_544c28;
    }
    ctx->pc = 0x544C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x544C28u);
        ctx->pc = 0x544C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544C20u;
            // 0x544c24: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x544C28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x544C28u; }
            if (ctx->pc != 0x544C28u) { return; }
        }
        }
    }
    ctx->pc = 0x544C28u;
label_544c28:
    // 0x544c28: 0x1000004a  b           . + 4 + (0x4A << 2)
label_544c2c:
    if (ctx->pc == 0x544C2Cu) {
        ctx->pc = 0x544C30u;
        goto label_544c30;
    }
    ctx->pc = 0x544C28u;
    {
        const bool branch_taken_0x544c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x544c28) {
            ctx->pc = 0x544D54u;
            goto label_544d54;
        }
    }
    ctx->pc = 0x544C30u;
label_544c30:
    // 0x544c30: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x544c30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_544c34:
    // 0x544c34: 0x12c00047  beqz        $s6, . + 4 + (0x47 << 2)
label_544c38:
    if (ctx->pc == 0x544C38u) {
        ctx->pc = 0x544C3Cu;
        goto label_544c3c;
    }
    ctx->pc = 0x544C34u;
    {
        const bool branch_taken_0x544c34 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x544c34) {
            ctx->pc = 0x544D54u;
            goto label_544d54;
        }
    }
    ctx->pc = 0x544C3Cu;
label_544c3c:
    // 0x544c3c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x544c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_544c40:
    // 0x544c40: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x544c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_544c44:
    // 0x544c44: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x544c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_544c48:
    // 0x544c48: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x544c48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_544c4c:
    // 0x544c4c: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x544c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_544c50:
    // 0x544c50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x544c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_544c54:
    // 0x544c54: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x544c54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_544c58:
    // 0x544c58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x544c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_544c5c:
    // 0x544c5c: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x544c5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_544c60:
    // 0x544c60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x544c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_544c64:
    // 0x544c64: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x544c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_544c68:
    // 0x544c68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x544c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_544c6c:
    // 0x544c6c: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x544c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_544c70:
    // 0x544c70: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x544c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_544c74:
    // 0x544c74: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x544c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_544c78:
    // 0x544c78: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x544c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_544c7c:
    // 0x544c7c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x544c7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_544c80:
    // 0x544c80: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x544c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_544c84:
    // 0x544c84: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x544c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_544c88:
    // 0x544c88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x544c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_544c8c:
    // 0x544c8c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x544c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_544c90:
    // 0x544c90: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x544c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_544c94:
    // 0x544c94: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x544c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_544c98:
    // 0x544c98: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x544c98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_544c9c:
    // 0x544c9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x544c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_544ca0:
    // 0x544ca0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x544ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_544ca4:
    // 0x544ca4: 0xc1513fc  jal         func_544FF0
label_544ca8:
    if (ctx->pc == 0x544CA8u) {
        ctx->pc = 0x544CA8u;
            // 0x544ca8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544CACu;
        goto label_544cac;
    }
    ctx->pc = 0x544CA4u;
    SET_GPR_U32(ctx, 31, 0x544CACu);
    ctx->pc = 0x544CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544CA4u;
            // 0x544ca8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544FF0u;
    if (runtime->hasFunction(0x544FF0u)) {
        auto targetFn = runtime->lookupFunction(0x544FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544CACu; }
        if (ctx->pc != 0x544CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544FF0_0x544ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544CACu; }
        if (ctx->pc != 0x544CACu) { return; }
    }
    ctx->pc = 0x544CACu;
label_544cac:
    // 0x544cac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_544cb0:
    if (ctx->pc == 0x544CB0u) {
        ctx->pc = 0x544CB4u;
        goto label_544cb4;
    }
    ctx->pc = 0x544CACu;
    {
        const bool branch_taken_0x544cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x544cac) {
            ctx->pc = 0x544D00u;
            goto label_544d00;
        }
    }
    ctx->pc = 0x544CB4u;
label_544cb4:
    // 0x544cb4: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x544cb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_544cb8:
    // 0x544cb8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x544cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_544cbc:
    // 0x544cbc: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x544cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_544cc0:
    // 0x544cc0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x544cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_544cc4:
    // 0x544cc4: 0xc04cce8  jal         func_1333A0
label_544cc8:
    if (ctx->pc == 0x544CC8u) {
        ctx->pc = 0x544CC8u;
            // 0x544cc8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x544CCCu;
        goto label_544ccc;
    }
    ctx->pc = 0x544CC4u;
    SET_GPR_U32(ctx, 31, 0x544CCCu);
    ctx->pc = 0x544CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544CC4u;
            // 0x544cc8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544CCCu; }
        if (ctx->pc != 0x544CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544CCCu; }
        if (ctx->pc != 0x544CCCu) { return; }
    }
    ctx->pc = 0x544CCCu;
label_544ccc:
    // 0x544ccc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x544cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_544cd0:
    // 0x544cd0: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x544cd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_544cd4:
    // 0x544cd4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x544cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_544cd8:
    // 0x544cd8: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x544cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_544cdc:
    // 0x544cdc: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x544cdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_544ce0:
    // 0x544ce0: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x544ce0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_544ce4:
    // 0x544ce4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x544ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_544ce8:
    // 0x544ce8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x544ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_544cec:
    // 0x544cec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x544cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_544cf0:
    // 0x544cf0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x544cf0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_544cf4:
    // 0x544cf4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x544cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_544cf8:
    // 0x544cf8: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x544cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_544cfc:
    // 0x544cfc: 0x0  nop
    ctx->pc = 0x544cfcu;
    // NOP
label_544d00:
    // 0x544d00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x544d00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_544d04:
    // 0x544d04: 0x256182b  sltu        $v1, $s2, $s6
    ctx->pc = 0x544d04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_544d08:
    // 0x544d08: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_544d0c:
    if (ctx->pc == 0x544D0Cu) {
        ctx->pc = 0x544D0Cu;
            // 0x544d0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x544D10u;
        goto label_544d10;
    }
    ctx->pc = 0x544D08u;
    {
        const bool branch_taken_0x544d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x544D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544D08u;
            // 0x544d0c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x544d08) {
            ctx->pc = 0x544C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_544c84;
        }
    }
    ctx->pc = 0x544D10u;
label_544d10:
    // 0x544d10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x544d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_544d14:
    // 0x544d14: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x544d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_544d18:
    // 0x544d18: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_544d1c:
    if (ctx->pc == 0x544D1Cu) {
        ctx->pc = 0x544D20u;
        goto label_544d20;
    }
    ctx->pc = 0x544D18u;
    {
        const bool branch_taken_0x544d18 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x544d18) {
            ctx->pc = 0x544D54u;
            goto label_544d54;
        }
    }
    ctx->pc = 0x544D20u;
label_544d20:
    // 0x544d20: 0xc04e738  jal         func_139CE0
label_544d24:
    if (ctx->pc == 0x544D24u) {
        ctx->pc = 0x544D24u;
            // 0x544d24: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x544D28u;
        goto label_544d28;
    }
    ctx->pc = 0x544D20u;
    SET_GPR_U32(ctx, 31, 0x544D28u);
    ctx->pc = 0x544D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544D20u;
            // 0x544d24: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544D28u; }
        if (ctx->pc != 0x544D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544D28u; }
        if (ctx->pc != 0x544D28u) { return; }
    }
    ctx->pc = 0x544D28u;
label_544d28:
    // 0x544d28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x544d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_544d2c:
    // 0x544d2c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x544d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_544d30:
    // 0x544d30: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x544d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_544d34:
    // 0x544d34: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x544d34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_544d38:
    // 0x544d38: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x544d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_544d3c:
    // 0x544d3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x544d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_544d40:
    // 0x544d40: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x544d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_544d44:
    // 0x544d44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x544d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_544d48:
    // 0x544d48: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x544d48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_544d4c:
    // 0x544d4c: 0xc055ea8  jal         func_157AA0
label_544d50:
    if (ctx->pc == 0x544D50u) {
        ctx->pc = 0x544D50u;
            // 0x544d50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544D54u;
        goto label_544d54;
    }
    ctx->pc = 0x544D4Cu;
    SET_GPR_U32(ctx, 31, 0x544D54u);
    ctx->pc = 0x544D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544D4Cu;
            // 0x544d50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544D54u; }
        if (ctx->pc != 0x544D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544D54u; }
        if (ctx->pc != 0x544D54u) { return; }
    }
    ctx->pc = 0x544D54u;
label_544d54:
    // 0x544d54: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x544d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_544d58:
    // 0x544d58: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x544d58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_544d5c:
    // 0x544d5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x544d5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_544d60:
    // 0x544d60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x544d60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_544d64:
    // 0x544d64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x544d64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_544d68:
    // 0x544d68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x544d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_544d6c:
    // 0x544d6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x544d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_544d70:
    // 0x544d70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x544d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_544d74:
    // 0x544d74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x544d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_544d78:
    // 0x544d78: 0x3e00008  jr          $ra
label_544d7c:
    if (ctx->pc == 0x544D7Cu) {
        ctx->pc = 0x544D7Cu;
            // 0x544d7c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x544D80u;
        goto label_544d80;
    }
    ctx->pc = 0x544D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x544D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544D78u;
            // 0x544d7c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x544D80u;
label_544d80:
    // 0x544d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x544d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_544d84:
    // 0x544d84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x544d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_544d88:
    // 0x544d88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x544d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_544d8c:
    // 0x544d8c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x544d8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_544d90:
    // 0x544d90: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_544d94:
    if (ctx->pc == 0x544D94u) {
        ctx->pc = 0x544D94u;
            // 0x544d94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x544D98u;
        goto label_544d98;
    }
    ctx->pc = 0x544D90u;
    {
        const bool branch_taken_0x544d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x544d90) {
            ctx->pc = 0x544D94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x544D90u;
            // 0x544d94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x544DC8u;
            goto label_544dc8;
        }
    }
    ctx->pc = 0x544D98u;
label_544d98:
    // 0x544d98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x544d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_544d9c:
    // 0x544d9c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_544da0:
    if (ctx->pc == 0x544DA0u) {
        ctx->pc = 0x544DA0u;
            // 0x544da0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x544DA4u;
        goto label_544da4;
    }
    ctx->pc = 0x544D9Cu;
    {
        const bool branch_taken_0x544d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x544d9c) {
            ctx->pc = 0x544DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x544D9Cu;
            // 0x544da0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x544DB8u;
            goto label_544db8;
        }
    }
    ctx->pc = 0x544DA4u;
label_544da4:
    // 0x544da4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x544da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_544da8:
    // 0x544da8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_544dac:
    if (ctx->pc == 0x544DACu) {
        ctx->pc = 0x544DB0u;
        goto label_544db0;
    }
    ctx->pc = 0x544DA8u;
    {
        const bool branch_taken_0x544da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x544da8) {
            ctx->pc = 0x544DC4u;
            goto label_544dc4;
        }
    }
    ctx->pc = 0x544DB0u;
label_544db0:
    // 0x544db0: 0x10000004  b           . + 4 + (0x4 << 2)
label_544db4:
    if (ctx->pc == 0x544DB4u) {
        ctx->pc = 0x544DB8u;
        goto label_544db8;
    }
    ctx->pc = 0x544DB0u;
    {
        const bool branch_taken_0x544db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x544db0) {
            ctx->pc = 0x544DC4u;
            goto label_544dc4;
        }
    }
    ctx->pc = 0x544DB8u;
label_544db8:
    // 0x544db8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x544db8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_544dbc:
    // 0x544dbc: 0x320f809  jalr        $t9
label_544dc0:
    if (ctx->pc == 0x544DC0u) {
        ctx->pc = 0x544DC4u;
        goto label_544dc4;
    }
    ctx->pc = 0x544DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x544DC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x544DC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x544DC4u; }
            if (ctx->pc != 0x544DC4u) { return; }
        }
        }
    }
    ctx->pc = 0x544DC4u;
label_544dc4:
    // 0x544dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x544dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_544dc8:
    // 0x544dc8: 0x3e00008  jr          $ra
label_544dcc:
    if (ctx->pc == 0x544DCCu) {
        ctx->pc = 0x544DCCu;
            // 0x544dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x544DD0u;
        goto label_544dd0;
    }
    ctx->pc = 0x544DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x544DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544DC8u;
            // 0x544dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x544DD0u;
label_544dd0:
    // 0x544dd0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x544dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_544dd4:
    // 0x544dd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x544dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_544dd8:
    // 0x544dd8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x544dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_544ddc:
    // 0x544ddc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x544ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_544de0:
    // 0x544de0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x544de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_544de4:
    // 0x544de4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x544de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_544de8:
    // 0x544de8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x544de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_544dec:
    // 0x544dec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x544decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_544df0:
    // 0x544df0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x544df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_544df4:
    // 0x544df4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x544df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_544df8:
    // 0x544df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x544df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_544dfc:
    // 0x544dfc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x544dfcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_544e00:
    // 0x544e00: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_544e04:
    if (ctx->pc == 0x544E04u) {
        ctx->pc = 0x544E04u;
            // 0x544e04: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544E08u;
        goto label_544e08;
    }
    ctx->pc = 0x544E00u;
    {
        const bool branch_taken_0x544e00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x544E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544E00u;
            // 0x544e04: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x544e00) {
            ctx->pc = 0x544E50u;
            goto label_544e50;
        }
    }
    ctx->pc = 0x544E08u;
label_544e08:
    // 0x544e08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x544e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_544e0c:
    // 0x544e0c: 0x50a3005a  beql        $a1, $v1, . + 4 + (0x5A << 2)
label_544e10:
    if (ctx->pc == 0x544E10u) {
        ctx->pc = 0x544E10u;
            // 0x544e10: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x544E14u;
        goto label_544e14;
    }
    ctx->pc = 0x544E0Cu;
    {
        const bool branch_taken_0x544e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x544e0c) {
            ctx->pc = 0x544E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x544E0Cu;
            // 0x544e10: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x544F78u;
            goto label_544f78;
        }
    }
    ctx->pc = 0x544E14u;
label_544e14:
    // 0x544e14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x544e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_544e18:
    // 0x544e18: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_544e1c:
    if (ctx->pc == 0x544E1Cu) {
        ctx->pc = 0x544E20u;
        goto label_544e20;
    }
    ctx->pc = 0x544E18u;
    {
        const bool branch_taken_0x544e18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x544e18) {
            ctx->pc = 0x544E28u;
            goto label_544e28;
        }
    }
    ctx->pc = 0x544E20u;
label_544e20:
    // 0x544e20: 0x10000054  b           . + 4 + (0x54 << 2)
label_544e24:
    if (ctx->pc == 0x544E24u) {
        ctx->pc = 0x544E28u;
        goto label_544e28;
    }
    ctx->pc = 0x544E20u;
    {
        const bool branch_taken_0x544e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x544e20) {
            ctx->pc = 0x544F74u;
            goto label_544f74;
        }
    }
    ctx->pc = 0x544E28u;
label_544e28:
    // 0x544e28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x544e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_544e2c:
    // 0x544e2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x544e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_544e30:
    // 0x544e30: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x544e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_544e34:
    // 0x544e34: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x544e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_544e38:
    // 0x544e38: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x544e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_544e3c:
    // 0x544e3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x544e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_544e40:
    // 0x544e40: 0x320f809  jalr        $t9
label_544e44:
    if (ctx->pc == 0x544E44u) {
        ctx->pc = 0x544E44u;
            // 0x544e44: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x544E48u;
        goto label_544e48;
    }
    ctx->pc = 0x544E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x544E48u);
        ctx->pc = 0x544E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544E40u;
            // 0x544e44: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x544E48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x544E48u; }
            if (ctx->pc != 0x544E48u) { return; }
        }
        }
    }
    ctx->pc = 0x544E48u;
label_544e48:
    // 0x544e48: 0x1000004a  b           . + 4 + (0x4A << 2)
label_544e4c:
    if (ctx->pc == 0x544E4Cu) {
        ctx->pc = 0x544E50u;
        goto label_544e50;
    }
    ctx->pc = 0x544E48u;
    {
        const bool branch_taken_0x544e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x544e48) {
            ctx->pc = 0x544F74u;
            goto label_544f74;
        }
    }
    ctx->pc = 0x544E50u;
label_544e50:
    // 0x544e50: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x544e50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_544e54:
    // 0x544e54: 0x12c00047  beqz        $s6, . + 4 + (0x47 << 2)
label_544e58:
    if (ctx->pc == 0x544E58u) {
        ctx->pc = 0x544E5Cu;
        goto label_544e5c;
    }
    ctx->pc = 0x544E54u;
    {
        const bool branch_taken_0x544e54 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x544e54) {
            ctx->pc = 0x544F74u;
            goto label_544f74;
        }
    }
    ctx->pc = 0x544E5Cu;
label_544e5c:
    // 0x544e5c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x544e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_544e60:
    // 0x544e60: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x544e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_544e64:
    // 0x544e64: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x544e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_544e68:
    // 0x544e68: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x544e68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_544e6c:
    // 0x544e6c: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x544e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_544e70:
    // 0x544e70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x544e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_544e74:
    // 0x544e74: 0x8eb0008c  lw          $s0, 0x8C($s5)
    ctx->pc = 0x544e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_544e78:
    // 0x544e78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x544e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_544e7c:
    // 0x544e7c: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x544e7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_544e80:
    // 0x544e80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x544e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_544e84:
    // 0x544e84: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x544e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_544e88:
    // 0x544e88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x544e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_544e8c:
    // 0x544e8c: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x544e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_544e90:
    // 0x544e90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x544e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_544e94:
    // 0x544e94: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x544e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_544e98:
    // 0x544e98: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x544e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_544e9c:
    // 0x544e9c: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x544e9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_544ea0:
    // 0x544ea0: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x544ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_544ea4:
    // 0x544ea4: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x544ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_544ea8:
    // 0x544ea8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x544ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_544eac:
    // 0x544eac: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x544eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_544eb0:
    // 0x544eb0: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x544eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_544eb4:
    // 0x544eb4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x544eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_544eb8:
    // 0x544eb8: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x544eb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_544ebc:
    // 0x544ebc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x544ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_544ec0:
    // 0x544ec0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x544ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_544ec4:
    // 0x544ec4: 0xc1513fc  jal         func_544FF0
label_544ec8:
    if (ctx->pc == 0x544EC8u) {
        ctx->pc = 0x544EC8u;
            // 0x544ec8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544ECCu;
        goto label_544ecc;
    }
    ctx->pc = 0x544EC4u;
    SET_GPR_U32(ctx, 31, 0x544ECCu);
    ctx->pc = 0x544EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544EC4u;
            // 0x544ec8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544FF0u;
    if (runtime->hasFunction(0x544FF0u)) {
        auto targetFn = runtime->lookupFunction(0x544FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544ECCu; }
        if (ctx->pc != 0x544ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544FF0_0x544ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544ECCu; }
        if (ctx->pc != 0x544ECCu) { return; }
    }
    ctx->pc = 0x544ECCu;
label_544ecc:
    // 0x544ecc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_544ed0:
    if (ctx->pc == 0x544ED0u) {
        ctx->pc = 0x544ED4u;
        goto label_544ed4;
    }
    ctx->pc = 0x544ECCu;
    {
        const bool branch_taken_0x544ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x544ecc) {
            ctx->pc = 0x544F20u;
            goto label_544f20;
        }
    }
    ctx->pc = 0x544ED4u;
label_544ed4:
    // 0x544ed4: 0x86030066  lh          $v1, 0x66($s0)
    ctx->pc = 0x544ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_544ed8:
    // 0x544ed8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x544ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_544edc:
    // 0x544edc: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x544edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_544ee0:
    // 0x544ee0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x544ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_544ee4:
    // 0x544ee4: 0xc04cce8  jal         func_1333A0
label_544ee8:
    if (ctx->pc == 0x544EE8u) {
        ctx->pc = 0x544EE8u;
            // 0x544ee8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x544EECu;
        goto label_544eec;
    }
    ctx->pc = 0x544EE4u;
    SET_GPR_U32(ctx, 31, 0x544EECu);
    ctx->pc = 0x544EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544EE4u;
            // 0x544ee8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544EECu; }
        if (ctx->pc != 0x544EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544EECu; }
        if (ctx->pc != 0x544EECu) { return; }
    }
    ctx->pc = 0x544EECu;
label_544eec:
    // 0x544eec: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x544eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_544ef0:
    // 0x544ef0: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x544ef0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
label_544ef4:
    // 0x544ef4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x544ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_544ef8:
    // 0x544ef8: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x544ef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
label_544efc:
    // 0x544efc: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x544efcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
label_544f00:
    // 0x544f00: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x544f00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_544f04:
    // 0x544f04: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x544f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_544f08:
    // 0x544f08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x544f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_544f0c:
    // 0x544f0c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x544f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_544f10:
    // 0x544f10: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x544f10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_544f14:
    // 0x544f14: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x544f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_544f18:
    // 0x544f18: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x544f18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
label_544f1c:
    // 0x544f1c: 0x0  nop
    ctx->pc = 0x544f1cu;
    // NOP
label_544f20:
    // 0x544f20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x544f20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_544f24:
    // 0x544f24: 0x256182b  sltu        $v1, $s2, $s6
    ctx->pc = 0x544f24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_544f28:
    // 0x544f28: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_544f2c:
    if (ctx->pc == 0x544F2Cu) {
        ctx->pc = 0x544F2Cu;
            // 0x544f2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x544F30u;
        goto label_544f30;
    }
    ctx->pc = 0x544F28u;
    {
        const bool branch_taken_0x544f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x544F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544F28u;
            // 0x544f2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x544f28) {
            ctx->pc = 0x544EA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_544ea4;
        }
    }
    ctx->pc = 0x544F30u;
label_544f30:
    // 0x544f30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x544f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_544f34:
    // 0x544f34: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x544f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_544f38:
    // 0x544f38: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_544f3c:
    if (ctx->pc == 0x544F3Cu) {
        ctx->pc = 0x544F40u;
        goto label_544f40;
    }
    ctx->pc = 0x544F38u;
    {
        const bool branch_taken_0x544f38 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x544f38) {
            ctx->pc = 0x544F74u;
            goto label_544f74;
        }
    }
    ctx->pc = 0x544F40u;
label_544f40:
    // 0x544f40: 0xc04e738  jal         func_139CE0
label_544f44:
    if (ctx->pc == 0x544F44u) {
        ctx->pc = 0x544F44u;
            // 0x544f44: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x544F48u;
        goto label_544f48;
    }
    ctx->pc = 0x544F40u;
    SET_GPR_U32(ctx, 31, 0x544F48u);
    ctx->pc = 0x544F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544F40u;
            // 0x544f44: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544F48u; }
        if (ctx->pc != 0x544F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544F48u; }
        if (ctx->pc != 0x544F48u) { return; }
    }
    ctx->pc = 0x544F48u;
label_544f48:
    // 0x544f48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x544f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_544f4c:
    // 0x544f4c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x544f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_544f50:
    // 0x544f50: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x544f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_544f54:
    // 0x544f54: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x544f54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_544f58:
    // 0x544f58: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x544f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_544f5c:
    // 0x544f5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x544f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_544f60:
    // 0x544f60: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x544f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_544f64:
    // 0x544f64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x544f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_544f68:
    // 0x544f68: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x544f68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_544f6c:
    // 0x544f6c: 0xc055ea8  jal         func_157AA0
label_544f70:
    if (ctx->pc == 0x544F70u) {
        ctx->pc = 0x544F70u;
            // 0x544f70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x544F74u;
        goto label_544f74;
    }
    ctx->pc = 0x544F6Cu;
    SET_GPR_U32(ctx, 31, 0x544F74u);
    ctx->pc = 0x544F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x544F6Cu;
            // 0x544f70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544F74u; }
        if (ctx->pc != 0x544F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x544F74u; }
        if (ctx->pc != 0x544F74u) { return; }
    }
    ctx->pc = 0x544F74u;
label_544f74:
    // 0x544f74: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x544f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_544f78:
    // 0x544f78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x544f78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_544f7c:
    // 0x544f7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x544f7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_544f80:
    // 0x544f80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x544f80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_544f84:
    // 0x544f84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x544f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_544f88:
    // 0x544f88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x544f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_544f8c:
    // 0x544f8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x544f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_544f90:
    // 0x544f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x544f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_544f94:
    // 0x544f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x544f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_544f98:
    // 0x544f98: 0x3e00008  jr          $ra
label_544f9c:
    if (ctx->pc == 0x544F9Cu) {
        ctx->pc = 0x544F9Cu;
            // 0x544f9c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x544FA0u;
        goto label_544fa0;
    }
    ctx->pc = 0x544F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x544F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544F98u;
            // 0x544f9c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x544FA0u;
label_544fa0:
    // 0x544fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x544fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_544fa4:
    // 0x544fa4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x544fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_544fa8:
    // 0x544fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x544fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_544fac:
    // 0x544fac: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x544facu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_544fb0:
    // 0x544fb0: 0x50a3000d  beql        $a1, $v1, . + 4 + (0xD << 2)
label_544fb4:
    if (ctx->pc == 0x544FB4u) {
        ctx->pc = 0x544FB4u;
            // 0x544fb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x544FB8u;
        goto label_544fb8;
    }
    ctx->pc = 0x544FB0u;
    {
        const bool branch_taken_0x544fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x544fb0) {
            ctx->pc = 0x544FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x544FB0u;
            // 0x544fb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x544FE8u;
            goto label_544fe8;
        }
    }
    ctx->pc = 0x544FB8u;
label_544fb8:
    // 0x544fb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x544fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_544fbc:
    // 0x544fbc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_544fc0:
    if (ctx->pc == 0x544FC0u) {
        ctx->pc = 0x544FC0u;
            // 0x544fc0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x544FC4u;
        goto label_544fc4;
    }
    ctx->pc = 0x544FBCu;
    {
        const bool branch_taken_0x544fbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x544fbc) {
            ctx->pc = 0x544FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x544FBCu;
            // 0x544fc0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x544FD8u;
            goto label_544fd8;
        }
    }
    ctx->pc = 0x544FC4u;
label_544fc4:
    // 0x544fc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x544fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_544fc8:
    // 0x544fc8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_544fcc:
    if (ctx->pc == 0x544FCCu) {
        ctx->pc = 0x544FD0u;
        goto label_544fd0;
    }
    ctx->pc = 0x544FC8u;
    {
        const bool branch_taken_0x544fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x544fc8) {
            ctx->pc = 0x544FE4u;
            goto label_544fe4;
        }
    }
    ctx->pc = 0x544FD0u;
label_544fd0:
    // 0x544fd0: 0x10000004  b           . + 4 + (0x4 << 2)
label_544fd4:
    if (ctx->pc == 0x544FD4u) {
        ctx->pc = 0x544FD8u;
        goto label_544fd8;
    }
    ctx->pc = 0x544FD0u;
    {
        const bool branch_taken_0x544fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x544fd0) {
            ctx->pc = 0x544FE4u;
            goto label_544fe4;
        }
    }
    ctx->pc = 0x544FD8u;
label_544fd8:
    // 0x544fd8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x544fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_544fdc:
    // 0x544fdc: 0x320f809  jalr        $t9
label_544fe0:
    if (ctx->pc == 0x544FE0u) {
        ctx->pc = 0x544FE4u;
        goto label_544fe4;
    }
    ctx->pc = 0x544FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x544FE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x544FE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x544FE4u; }
            if (ctx->pc != 0x544FE4u) { return; }
        }
        }
    }
    ctx->pc = 0x544FE4u;
label_544fe4:
    // 0x544fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x544fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_544fe8:
    // 0x544fe8: 0x3e00008  jr          $ra
label_544fec:
    if (ctx->pc == 0x544FECu) {
        ctx->pc = 0x544FECu;
            // 0x544fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x544FF0u;
        goto label_fallthrough_0x544fe8;
    }
    ctx->pc = 0x544FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x544FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x544FE8u;
            // 0x544fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x544fe8:
    ctx->pc = 0x544FF0u;
}
