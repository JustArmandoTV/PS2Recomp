#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196BA8
// Address: 0x196ba8 - 0x196f98
void sub_00196BA8_0x196ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196BA8_0x196ba8");
#endif

    switch (ctx->pc) {
        case 0x196ba8u: goto label_196ba8;
        case 0x196bacu: goto label_196bac;
        case 0x196bb0u: goto label_196bb0;
        case 0x196bb4u: goto label_196bb4;
        case 0x196bb8u: goto label_196bb8;
        case 0x196bbcu: goto label_196bbc;
        case 0x196bc0u: goto label_196bc0;
        case 0x196bc4u: goto label_196bc4;
        case 0x196bc8u: goto label_196bc8;
        case 0x196bccu: goto label_196bcc;
        case 0x196bd0u: goto label_196bd0;
        case 0x196bd4u: goto label_196bd4;
        case 0x196bd8u: goto label_196bd8;
        case 0x196bdcu: goto label_196bdc;
        case 0x196be0u: goto label_196be0;
        case 0x196be4u: goto label_196be4;
        case 0x196be8u: goto label_196be8;
        case 0x196becu: goto label_196bec;
        case 0x196bf0u: goto label_196bf0;
        case 0x196bf4u: goto label_196bf4;
        case 0x196bf8u: goto label_196bf8;
        case 0x196bfcu: goto label_196bfc;
        case 0x196c00u: goto label_196c00;
        case 0x196c04u: goto label_196c04;
        case 0x196c08u: goto label_196c08;
        case 0x196c0cu: goto label_196c0c;
        case 0x196c10u: goto label_196c10;
        case 0x196c14u: goto label_196c14;
        case 0x196c18u: goto label_196c18;
        case 0x196c1cu: goto label_196c1c;
        case 0x196c20u: goto label_196c20;
        case 0x196c24u: goto label_196c24;
        case 0x196c28u: goto label_196c28;
        case 0x196c2cu: goto label_196c2c;
        case 0x196c30u: goto label_196c30;
        case 0x196c34u: goto label_196c34;
        case 0x196c38u: goto label_196c38;
        case 0x196c3cu: goto label_196c3c;
        case 0x196c40u: goto label_196c40;
        case 0x196c44u: goto label_196c44;
        case 0x196c48u: goto label_196c48;
        case 0x196c4cu: goto label_196c4c;
        case 0x196c50u: goto label_196c50;
        case 0x196c54u: goto label_196c54;
        case 0x196c58u: goto label_196c58;
        case 0x196c5cu: goto label_196c5c;
        case 0x196c60u: goto label_196c60;
        case 0x196c64u: goto label_196c64;
        case 0x196c68u: goto label_196c68;
        case 0x196c6cu: goto label_196c6c;
        case 0x196c70u: goto label_196c70;
        case 0x196c74u: goto label_196c74;
        case 0x196c78u: goto label_196c78;
        case 0x196c7cu: goto label_196c7c;
        case 0x196c80u: goto label_196c80;
        case 0x196c84u: goto label_196c84;
        case 0x196c88u: goto label_196c88;
        case 0x196c8cu: goto label_196c8c;
        case 0x196c90u: goto label_196c90;
        case 0x196c94u: goto label_196c94;
        case 0x196c98u: goto label_196c98;
        case 0x196c9cu: goto label_196c9c;
        case 0x196ca0u: goto label_196ca0;
        case 0x196ca4u: goto label_196ca4;
        case 0x196ca8u: goto label_196ca8;
        case 0x196cacu: goto label_196cac;
        case 0x196cb0u: goto label_196cb0;
        case 0x196cb4u: goto label_196cb4;
        case 0x196cb8u: goto label_196cb8;
        case 0x196cbcu: goto label_196cbc;
        case 0x196cc0u: goto label_196cc0;
        case 0x196cc4u: goto label_196cc4;
        case 0x196cc8u: goto label_196cc8;
        case 0x196cccu: goto label_196ccc;
        case 0x196cd0u: goto label_196cd0;
        case 0x196cd4u: goto label_196cd4;
        case 0x196cd8u: goto label_196cd8;
        case 0x196cdcu: goto label_196cdc;
        case 0x196ce0u: goto label_196ce0;
        case 0x196ce4u: goto label_196ce4;
        case 0x196ce8u: goto label_196ce8;
        case 0x196cecu: goto label_196cec;
        case 0x196cf0u: goto label_196cf0;
        case 0x196cf4u: goto label_196cf4;
        case 0x196cf8u: goto label_196cf8;
        case 0x196cfcu: goto label_196cfc;
        case 0x196d00u: goto label_196d00;
        case 0x196d04u: goto label_196d04;
        case 0x196d08u: goto label_196d08;
        case 0x196d0cu: goto label_196d0c;
        case 0x196d10u: goto label_196d10;
        case 0x196d14u: goto label_196d14;
        case 0x196d18u: goto label_196d18;
        case 0x196d1cu: goto label_196d1c;
        case 0x196d20u: goto label_196d20;
        case 0x196d24u: goto label_196d24;
        case 0x196d28u: goto label_196d28;
        case 0x196d2cu: goto label_196d2c;
        case 0x196d30u: goto label_196d30;
        case 0x196d34u: goto label_196d34;
        case 0x196d38u: goto label_196d38;
        case 0x196d3cu: goto label_196d3c;
        case 0x196d40u: goto label_196d40;
        case 0x196d44u: goto label_196d44;
        case 0x196d48u: goto label_196d48;
        case 0x196d4cu: goto label_196d4c;
        case 0x196d50u: goto label_196d50;
        case 0x196d54u: goto label_196d54;
        case 0x196d58u: goto label_196d58;
        case 0x196d5cu: goto label_196d5c;
        case 0x196d60u: goto label_196d60;
        case 0x196d64u: goto label_196d64;
        case 0x196d68u: goto label_196d68;
        case 0x196d6cu: goto label_196d6c;
        case 0x196d70u: goto label_196d70;
        case 0x196d74u: goto label_196d74;
        case 0x196d78u: goto label_196d78;
        case 0x196d7cu: goto label_196d7c;
        case 0x196d80u: goto label_196d80;
        case 0x196d84u: goto label_196d84;
        case 0x196d88u: goto label_196d88;
        case 0x196d8cu: goto label_196d8c;
        case 0x196d90u: goto label_196d90;
        case 0x196d94u: goto label_196d94;
        case 0x196d98u: goto label_196d98;
        case 0x196d9cu: goto label_196d9c;
        case 0x196da0u: goto label_196da0;
        case 0x196da4u: goto label_196da4;
        case 0x196da8u: goto label_196da8;
        case 0x196dacu: goto label_196dac;
        case 0x196db0u: goto label_196db0;
        case 0x196db4u: goto label_196db4;
        case 0x196db8u: goto label_196db8;
        case 0x196dbcu: goto label_196dbc;
        case 0x196dc0u: goto label_196dc0;
        case 0x196dc4u: goto label_196dc4;
        case 0x196dc8u: goto label_196dc8;
        case 0x196dccu: goto label_196dcc;
        case 0x196dd0u: goto label_196dd0;
        case 0x196dd4u: goto label_196dd4;
        case 0x196dd8u: goto label_196dd8;
        case 0x196ddcu: goto label_196ddc;
        case 0x196de0u: goto label_196de0;
        case 0x196de4u: goto label_196de4;
        case 0x196de8u: goto label_196de8;
        case 0x196decu: goto label_196dec;
        case 0x196df0u: goto label_196df0;
        case 0x196df4u: goto label_196df4;
        case 0x196df8u: goto label_196df8;
        case 0x196dfcu: goto label_196dfc;
        case 0x196e00u: goto label_196e00;
        case 0x196e04u: goto label_196e04;
        case 0x196e08u: goto label_196e08;
        case 0x196e0cu: goto label_196e0c;
        case 0x196e10u: goto label_196e10;
        case 0x196e14u: goto label_196e14;
        case 0x196e18u: goto label_196e18;
        case 0x196e1cu: goto label_196e1c;
        case 0x196e20u: goto label_196e20;
        case 0x196e24u: goto label_196e24;
        case 0x196e28u: goto label_196e28;
        case 0x196e2cu: goto label_196e2c;
        case 0x196e30u: goto label_196e30;
        case 0x196e34u: goto label_196e34;
        case 0x196e38u: goto label_196e38;
        case 0x196e3cu: goto label_196e3c;
        case 0x196e40u: goto label_196e40;
        case 0x196e44u: goto label_196e44;
        case 0x196e48u: goto label_196e48;
        case 0x196e4cu: goto label_196e4c;
        case 0x196e50u: goto label_196e50;
        case 0x196e54u: goto label_196e54;
        case 0x196e58u: goto label_196e58;
        case 0x196e5cu: goto label_196e5c;
        case 0x196e60u: goto label_196e60;
        case 0x196e64u: goto label_196e64;
        case 0x196e68u: goto label_196e68;
        case 0x196e6cu: goto label_196e6c;
        case 0x196e70u: goto label_196e70;
        case 0x196e74u: goto label_196e74;
        case 0x196e78u: goto label_196e78;
        case 0x196e7cu: goto label_196e7c;
        case 0x196e80u: goto label_196e80;
        case 0x196e84u: goto label_196e84;
        case 0x196e88u: goto label_196e88;
        case 0x196e8cu: goto label_196e8c;
        case 0x196e90u: goto label_196e90;
        case 0x196e94u: goto label_196e94;
        case 0x196e98u: goto label_196e98;
        case 0x196e9cu: goto label_196e9c;
        case 0x196ea0u: goto label_196ea0;
        case 0x196ea4u: goto label_196ea4;
        case 0x196ea8u: goto label_196ea8;
        case 0x196eacu: goto label_196eac;
        case 0x196eb0u: goto label_196eb0;
        case 0x196eb4u: goto label_196eb4;
        case 0x196eb8u: goto label_196eb8;
        case 0x196ebcu: goto label_196ebc;
        case 0x196ec0u: goto label_196ec0;
        case 0x196ec4u: goto label_196ec4;
        case 0x196ec8u: goto label_196ec8;
        case 0x196eccu: goto label_196ecc;
        case 0x196ed0u: goto label_196ed0;
        case 0x196ed4u: goto label_196ed4;
        case 0x196ed8u: goto label_196ed8;
        case 0x196edcu: goto label_196edc;
        case 0x196ee0u: goto label_196ee0;
        case 0x196ee4u: goto label_196ee4;
        case 0x196ee8u: goto label_196ee8;
        case 0x196eecu: goto label_196eec;
        case 0x196ef0u: goto label_196ef0;
        case 0x196ef4u: goto label_196ef4;
        case 0x196ef8u: goto label_196ef8;
        case 0x196efcu: goto label_196efc;
        case 0x196f00u: goto label_196f00;
        case 0x196f04u: goto label_196f04;
        case 0x196f08u: goto label_196f08;
        case 0x196f0cu: goto label_196f0c;
        case 0x196f10u: goto label_196f10;
        case 0x196f14u: goto label_196f14;
        case 0x196f18u: goto label_196f18;
        case 0x196f1cu: goto label_196f1c;
        case 0x196f20u: goto label_196f20;
        case 0x196f24u: goto label_196f24;
        case 0x196f28u: goto label_196f28;
        case 0x196f2cu: goto label_196f2c;
        case 0x196f30u: goto label_196f30;
        case 0x196f34u: goto label_196f34;
        case 0x196f38u: goto label_196f38;
        case 0x196f3cu: goto label_196f3c;
        case 0x196f40u: goto label_196f40;
        case 0x196f44u: goto label_196f44;
        case 0x196f48u: goto label_196f48;
        case 0x196f4cu: goto label_196f4c;
        case 0x196f50u: goto label_196f50;
        case 0x196f54u: goto label_196f54;
        case 0x196f58u: goto label_196f58;
        case 0x196f5cu: goto label_196f5c;
        case 0x196f60u: goto label_196f60;
        case 0x196f64u: goto label_196f64;
        case 0x196f68u: goto label_196f68;
        case 0x196f6cu: goto label_196f6c;
        case 0x196f70u: goto label_196f70;
        case 0x196f74u: goto label_196f74;
        case 0x196f78u: goto label_196f78;
        case 0x196f7cu: goto label_196f7c;
        case 0x196f80u: goto label_196f80;
        case 0x196f84u: goto label_196f84;
        case 0x196f88u: goto label_196f88;
        case 0x196f8cu: goto label_196f8c;
        case 0x196f90u: goto label_196f90;
        case 0x196f94u: goto label_196f94;
        default: break;
    }

    ctx->pc = 0x196ba8u;

label_196ba8:
    // 0x196ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196bac:
    // 0x196bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196bb0:
    // 0x196bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196bb4:
    // 0x196bb4: 0x8065b30  j           func_196CC0
label_196bb8:
    if (ctx->pc == 0x196BB8u) {
        ctx->pc = 0x196BB8u;
            // 0x196bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196BBCu;
        goto label_196bbc;
    }
    ctx->pc = 0x196BB4u;
    ctx->pc = 0x196BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196BB4u;
            // 0x196bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    goto label_196cc0;
    ctx->pc = 0x196BBCu;
label_196bbc:
    // 0x196bbc: 0x0  nop
    ctx->pc = 0x196bbcu;
    // NOP
label_196bc0:
    // 0x196bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_196bc4:
    // 0x196bc4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x196bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_196bc8:
    // 0x196bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_196bcc:
    // 0x196bcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196bd0:
    // 0x196bd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x196bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_196bd4:
    // 0x196bd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x196bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196bd8:
    // 0x196bd8: 0x24446aa8  addiu       $a0, $v0, 0x6AA8
    ctx->pc = 0x196bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27304));
label_196bdc:
    // 0x196bdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196be0:
    // 0x196be0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_196be4:
    // 0x196be4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x196be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_196be8:
    // 0x196be8: 0xc0685ce  jal         func_1A1738
label_196bec:
    if (ctx->pc == 0x196BECu) {
        ctx->pc = 0x196BECu;
            // 0x196bec: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196BF0u;
        goto label_196bf0;
    }
    ctx->pc = 0x196BE8u;
    SET_GPR_U32(ctx, 31, 0x196BF0u);
    ctx->pc = 0x196BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196BE8u;
            // 0x196bec: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1738u;
    if (runtime->hasFunction(0x1A1738u)) {
        auto targetFn = runtime->lookupFunction(0x1A1738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BF0u; }
        if (ctx->pc != 0x196BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1738_0x1a1738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BF0u; }
        if (ctx->pc != 0x196BF0u) { return; }
    }
    ctx->pc = 0x196BF0u;
label_196bf0:
    // 0x196bf0: 0xc0670be  jal         func_19C2F8
label_196bf4:
    if (ctx->pc == 0x196BF4u) {
        ctx->pc = 0x196BF4u;
            // 0x196bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196BF8u;
        goto label_196bf8;
    }
    ctx->pc = 0x196BF0u;
    SET_GPR_U32(ctx, 31, 0x196BF8u);
    ctx->pc = 0x196BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196BF0u;
            // 0x196bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2F8u;
    if (runtime->hasFunction(0x19C2F8u)) {
        auto targetFn = runtime->lookupFunction(0x19C2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BF8u; }
        if (ctx->pc != 0x196BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C2F8_0x19c2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BF8u; }
        if (ctx->pc != 0x196BF8u) { return; }
    }
    ctx->pc = 0x196BF8u;
label_196bf8:
    // 0x196bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196bfc:
    // 0x196bfc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x196bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_196c00:
    // 0x196c00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x196c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196c04:
    // 0x196c04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x196c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196c08:
    // 0x196c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_196c0c:
    // 0x196c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196c10:
    // 0x196c10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196c14:
    // 0x196c14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x196c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_196c18:
    // 0x196c18: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x196c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_196c1c:
    // 0x196c1c: 0x8068530  j           func_1A14C0
label_196c20:
    if (ctx->pc == 0x196C20u) {
        ctx->pc = 0x196C20u;
            // 0x196c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x196C24u;
        goto label_196c24;
    }
    ctx->pc = 0x196C1Cu;
    ctx->pc = 0x196C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C1Cu;
            // 0x196c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A14C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1A14C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x196C24u;
label_196c24:
    // 0x196c24: 0x0  nop
    ctx->pc = 0x196c24u;
    // NOP
label_196c28:
    // 0x196c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196c2c:
    // 0x196c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_196c30:
    // 0x196c30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x196c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_196c34:
    // 0x196c34: 0xc0670be  jal         func_19C2F8
label_196c38:
    if (ctx->pc == 0x196C38u) {
        ctx->pc = 0x196C38u;
            // 0x196c38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196C3Cu;
        goto label_196c3c;
    }
    ctx->pc = 0x196C34u;
    SET_GPR_U32(ctx, 31, 0x196C3Cu);
    ctx->pc = 0x196C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C34u;
            // 0x196c38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2F8u;
    if (runtime->hasFunction(0x19C2F8u)) {
        auto targetFn = runtime->lookupFunction(0x19C2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C3Cu; }
        if (ctx->pc != 0x196C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C2F8_0x19c2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C3Cu; }
        if (ctx->pc != 0x196C3Cu) { return; }
    }
    ctx->pc = 0x196C3Cu;
label_196c3c:
    // 0x196c3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x196c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_196c40:
    // 0x196c40: 0x2604051c  addiu       $a0, $s0, 0x51C
    ctx->pc = 0x196c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1308));
label_196c44:
    // 0x196c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196c48:
    // 0x196c48: 0x8068596  j           func_1A1658
label_196c4c:
    if (ctx->pc == 0x196C4Cu) {
        ctx->pc = 0x196C4Cu;
            // 0x196c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196C50u;
        goto label_196c50;
    }
    ctx->pc = 0x196C48u;
    ctx->pc = 0x196C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C48u;
            // 0x196c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1658u;
    if (runtime->hasFunction(0x1A1658u)) {
        auto targetFn = runtime->lookupFunction(0x1A1658u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1658_0x1a1658(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196C50u;
label_196c50:
    // 0x196c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_196c54:
    // 0x196c54: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x196c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_196c58:
    // 0x196c58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_196c5c:
    // 0x196c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196c60:
    // 0x196c60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x196c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_196c64:
    // 0x196c64: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x196c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196c68:
    // 0x196c68: 0x24446a70  addiu       $a0, $v0, 0x6A70
    ctx->pc = 0x196c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27248));
label_196c6c:
    // 0x196c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196c70:
    // 0x196c70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_196c74:
    // 0x196c74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x196c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_196c78:
    // 0x196c78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x196c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_196c7c:
    // 0x196c7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_196c80:
    // 0x196c80: 0xc0685ce  jal         func_1A1738
label_196c84:
    if (ctx->pc == 0x196C84u) {
        ctx->pc = 0x196C84u;
            // 0x196c84: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196C88u;
        goto label_196c88;
    }
    ctx->pc = 0x196C80u;
    SET_GPR_U32(ctx, 31, 0x196C88u);
    ctx->pc = 0x196C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C80u;
            // 0x196c84: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1738u;
    if (runtime->hasFunction(0x1A1738u)) {
        auto targetFn = runtime->lookupFunction(0x1A1738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C88u; }
        if (ctx->pc != 0x196C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1738_0x1a1738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C88u; }
        if (ctx->pc != 0x196C88u) { return; }
    }
    ctx->pc = 0x196C88u;
label_196c88:
    // 0x196c88: 0xc0670be  jal         func_19C2F8
label_196c8c:
    if (ctx->pc == 0x196C8Cu) {
        ctx->pc = 0x196C8Cu;
            // 0x196c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196C90u;
        goto label_196c90;
    }
    ctx->pc = 0x196C88u;
    SET_GPR_U32(ctx, 31, 0x196C90u);
    ctx->pc = 0x196C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196C88u;
            // 0x196c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2F8u;
    if (runtime->hasFunction(0x19C2F8u)) {
        auto targetFn = runtime->lookupFunction(0x19C2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C90u; }
        if (ctx->pc != 0x196C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C2F8_0x19c2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196C90u; }
        if (ctx->pc != 0x196C90u) { return; }
    }
    ctx->pc = 0x196C90u;
label_196c90:
    // 0x196c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196c94:
    // 0x196c94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x196c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_196c98:
    // 0x196c98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x196c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_196c9c:
    // 0x196c9c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x196c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196ca0:
    // 0x196ca0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_196ca4:
    // 0x196ca4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x196ca4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_196ca8:
    // 0x196ca8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x196ca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196cac:
    // 0x196cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196cb0:
    // 0x196cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x196cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196cb4:
    // 0x196cb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x196cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_196cb8:
    // 0x196cb8: 0x8068530  j           func_1A14C0
label_196cbc:
    if (ctx->pc == 0x196CBCu) {
        ctx->pc = 0x196CBCu;
            // 0x196cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x196CC0u;
        goto label_196cc0;
    }
    ctx->pc = 0x196CB8u;
    ctx->pc = 0x196CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196CB8u;
            // 0x196cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A14C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1A14C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x196CC0u;
label_196cc0:
    // 0x196cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196cc4:
    // 0x196cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_196cc8:
    // 0x196cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x196cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_196ccc:
    // 0x196ccc: 0xc0670be  jal         func_19C2F8
label_196cd0:
    if (ctx->pc == 0x196CD0u) {
        ctx->pc = 0x196CD0u;
            // 0x196cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196CD4u;
        goto label_196cd4;
    }
    ctx->pc = 0x196CCCu;
    SET_GPR_U32(ctx, 31, 0x196CD4u);
    ctx->pc = 0x196CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196CCCu;
            // 0x196cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2F8u;
    if (runtime->hasFunction(0x19C2F8u)) {
        auto targetFn = runtime->lookupFunction(0x19C2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CD4u; }
        if (ctx->pc != 0x196CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C2F8_0x19c2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196CD4u; }
        if (ctx->pc != 0x196CD4u) { return; }
    }
    ctx->pc = 0x196CD4u;
label_196cd4:
    // 0x196cd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x196cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_196cd8:
    // 0x196cd8: 0x260404f8  addiu       $a0, $s0, 0x4F8
    ctx->pc = 0x196cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1272));
label_196cdc:
    // 0x196cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196ce0:
    // 0x196ce0: 0x8068596  j           func_1A1658
label_196ce4:
    if (ctx->pc == 0x196CE4u) {
        ctx->pc = 0x196CE4u;
            // 0x196ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196CE8u;
        goto label_196ce8;
    }
    ctx->pc = 0x196CE0u;
    ctx->pc = 0x196CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196CE0u;
            // 0x196ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1658u;
    if (runtime->hasFunction(0x1A1658u)) {
        auto targetFn = runtime->lookupFunction(0x1A1658u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1658_0x1a1658(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196CE8u;
label_196ce8:
    // 0x196ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196cec:
    // 0x196cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196cf0:
    // 0x196cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196cf4:
    // 0x196cf4: 0x805aea2  j           func_16BA88
label_196cf8:
    if (ctx->pc == 0x196CF8u) {
        ctx->pc = 0x196CF8u;
            // 0x196cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196CFCu;
        goto label_196cfc;
    }
    ctx->pc = 0x196CF4u;
    ctx->pc = 0x196CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196CF4u;
            // 0x196cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BA88u;
    if (runtime->hasFunction(0x16BA88u)) {
        auto targetFn = runtime->lookupFunction(0x16BA88u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016BA88_0x16ba88(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196CFCu;
label_196cfc:
    // 0x196cfc: 0x0  nop
    ctx->pc = 0x196cfcu;
    // NOP
label_196d00:
    // 0x196d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196d04:
    // 0x196d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196d08:
    // 0x196d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196d0c:
    // 0x196d0c: 0x805af0e  j           func_16BC38
label_196d10:
    if (ctx->pc == 0x196D10u) {
        ctx->pc = 0x196D10u;
            // 0x196d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196D14u;
        goto label_196d14;
    }
    ctx->pc = 0x196D0Cu;
    ctx->pc = 0x196D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196D0Cu;
            // 0x196d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC38u;
    if (runtime->hasFunction(0x16BC38u)) {
        auto targetFn = runtime->lookupFunction(0x16BC38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016BC38_0x16bc38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196D14u;
label_196d14:
    // 0x196d14: 0x0  nop
    ctx->pc = 0x196d14u;
    // NOP
label_196d18:
    // 0x196d18: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x196d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_196d1c:
    // 0x196d1c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x196d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_196d20:
    // 0x196d20: 0x344249e4  ori         $v0, $v0, 0x49E4
    ctx->pc = 0x196d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18916);
label_196d24:
    // 0x196d24: 0x34039c40  ori         $v1, $zero, 0x9C40
    ctx->pc = 0x196d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
label_196d28:
    // 0x196d28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x196d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_196d2c:
    // 0x196d2c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x196d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_196d30:
    // 0x196d30: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x196d30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_196d34:
    // 0x196d34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x196d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_196d38:
    // 0x196d38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x196d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_196d3c:
    // 0x196d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196d40:
    // 0x196d40: 0x3e00008  jr          $ra
label_196d44:
    if (ctx->pc == 0x196D44u) {
        ctx->pc = 0x196D44u;
            // 0x196d44: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->pc = 0x196D48u;
        goto label_196d48;
    }
    ctx->pc = 0x196D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196D40u;
            // 0x196d44: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196D48u;
label_196d48:
    // 0x196d48: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x196d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_196d4c:
    // 0x196d4c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x196d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_196d50:
    // 0x196d50: 0x344249e4  ori         $v0, $v0, 0x49E4
    ctx->pc = 0x196d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18916);
label_196d54:
    // 0x196d54: 0x24036978  addiu       $v1, $zero, 0x6978
    ctx->pc = 0x196d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27000));
label_196d58:
    // 0x196d58: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x196d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_196d5c:
    // 0x196d5c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x196d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_196d60:
    // 0x196d60: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x196d60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_196d64:
    // 0x196d64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x196d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_196d68:
    // 0x196d68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x196d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_196d6c:
    // 0x196d6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196d70:
    // 0x196d70: 0x3e00008  jr          $ra
label_196d74:
    if (ctx->pc == 0x196D74u) {
        ctx->pc = 0x196D74u;
            // 0x196d74: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->pc = 0x196D78u;
        goto label_196d78;
    }
    ctx->pc = 0x196D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196D70u;
            // 0x196d74: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196D78u;
label_196d78:
    // 0x196d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_196d7c:
    // 0x196d7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_196d80:
    // 0x196d80: 0x24b1e800  addiu       $s1, $a1, -0x1800
    ctx->pc = 0x196d80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961152));
label_196d84:
    // 0x196d84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x196d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_196d88:
    // 0x196d88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x196d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196d8c:
    // 0x196d8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x196d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_196d90:
    // 0x196d90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x196d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196d94:
    // 0x196d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_196d98:
    // 0x196d98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x196d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_196d9c:
    // 0x196d9c: 0xc05c9ce  jal         func_172738
label_196da0:
    if (ctx->pc == 0x196DA0u) {
        ctx->pc = 0x196DA0u;
            // 0x196da0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x196DA4u;
        goto label_196da4;
    }
    ctx->pc = 0x196D9Cu;
    SET_GPR_U32(ctx, 31, 0x196DA4u);
    ctx->pc = 0x196DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196D9Cu;
            // 0x196da0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172738u;
    if (runtime->hasFunction(0x172738u)) {
        auto targetFn = runtime->lookupFunction(0x172738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196DA4u; }
        if (ctx->pc != 0x196DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172738_0x172738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196DA4u; }
        if (ctx->pc != 0x196DA4u) { return; }
    }
    ctx->pc = 0x196DA4u;
label_196da4:
    // 0x196da4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x196da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196da8:
    // 0x196da8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_196dac:
    if (ctx->pc == 0x196DACu) {
        ctx->pc = 0x196DACu;
            // 0x196dac: 0x2512821  addu        $a1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->pc = 0x196DB0u;
        goto label_196db0;
    }
    ctx->pc = 0x196DA8u;
    {
        const bool branch_taken_0x196da8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x196DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196DA8u;
            // 0x196dac: 0x2512821  addu        $a1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196da8) {
            ctx->pc = 0x196DD0u;
            goto label_196dd0;
        }
    }
    ctx->pc = 0x196DB0u;
label_196db0:
    // 0x196db0: 0x0  nop
    ctx->pc = 0x196db0u;
    // NOP
label_196db4:
    // 0x196db4: 0x0  nop
    ctx->pc = 0x196db4u;
    // NOP
label_196db8:
    // 0x196db8: 0x0  nop
    ctx->pc = 0x196db8u;
    // NOP
label_196dbc:
    // 0x196dbc: 0x0  nop
    ctx->pc = 0x196dbcu;
    // NOP
label_196dc0:
    // 0x196dc0: 0x0  nop
    ctx->pc = 0x196dc0u;
    // NOP
label_196dc4:
    // 0x196dc4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_196dc8:
    if (ctx->pc == 0x196DC8u) {
        ctx->pc = 0x196DCCu;
        goto label_196dcc;
    }
    ctx->pc = 0x196DC4u;
    {
        const bool branch_taken_0x196dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196dc4) {
            ctx->pc = 0x196DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196db0;
        }
    }
    ctx->pc = 0x196DCCu;
label_196dcc:
    // 0x196dcc: 0x0  nop
    ctx->pc = 0x196dccu;
    // NOP
label_196dd0:
    // 0x196dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196dd4:
    // 0x196dd4: 0xc058866  jal         func_162198
label_196dd8:
    if (ctx->pc == 0x196DD8u) {
        ctx->pc = 0x196DD8u;
            // 0x196dd8: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->pc = 0x196DDCu;
        goto label_196ddc;
    }
    ctx->pc = 0x196DD4u;
    SET_GPR_U32(ctx, 31, 0x196DDCu);
    ctx->pc = 0x196DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196DD4u;
            // 0x196dd8: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162198u;
    if (runtime->hasFunction(0x162198u)) {
        auto targetFn = runtime->lookupFunction(0x162198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196DDCu; }
        if (ctx->pc != 0x196DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162198_0x162198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196DDCu; }
        if (ctx->pc != 0x196DDCu) { return; }
    }
    ctx->pc = 0x196DDCu;
label_196ddc:
    // 0x196ddc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196de0:
    // 0x196de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_196de4:
    // 0x196de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196de8:
    // 0x196de8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x196de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196dec:
    // 0x196dec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x196decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_196df0:
    // 0x196df0: 0x3e00008  jr          $ra
label_196df4:
    if (ctx->pc == 0x196DF4u) {
        ctx->pc = 0x196DF4u;
            // 0x196df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x196DF8u;
        goto label_196df8;
    }
    ctx->pc = 0x196DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196DF0u;
            // 0x196df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196DF8u;
label_196df8:
    // 0x196df8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196dfc:
    // 0x196dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_196e00:
    // 0x196e00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x196e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_196e04:
    // 0x196e04: 0xc0588be  jal         func_1622F8
label_196e08:
    if (ctx->pc == 0x196E08u) {
        ctx->pc = 0x196E08u;
            // 0x196e08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196E0Cu;
        goto label_196e0c;
    }
    ctx->pc = 0x196E04u;
    SET_GPR_U32(ctx, 31, 0x196E0Cu);
    ctx->pc = 0x196E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196E04u;
            // 0x196e08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1622F8u;
    if (runtime->hasFunction(0x1622F8u)) {
        auto targetFn = runtime->lookupFunction(0x1622F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E0Cu; }
        if (ctx->pc != 0x196E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001622F8_0x1622f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E0Cu; }
        if (ctx->pc != 0x196E0Cu) { return; }
    }
    ctx->pc = 0x196E0Cu;
label_196e0c:
    // 0x196e0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x196e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_196e10:
    // 0x196e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196e14:
    // 0x196e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196e18:
    // 0x196e18: 0x805caf4  j           func_172BD0
label_196e1c:
    if (ctx->pc == 0x196E1Cu) {
        ctx->pc = 0x196E1Cu;
            // 0x196e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196E20u;
        goto label_196e20;
    }
    ctx->pc = 0x196E18u;
    ctx->pc = 0x196E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196E18u;
            // 0x196e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172BD0u;
    if (runtime->hasFunction(0x172BD0u)) {
        auto targetFn = runtime->lookupFunction(0x172BD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172BD0_0x172bd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196E20u;
label_196e20:
    // 0x196e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_196e24:
    // 0x196e24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_196e28:
    // 0x196e28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x196e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196e2c:
    // 0x196e2c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x196e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_196e30:
    // 0x196e30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_196e34:
    // 0x196e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_196e38:
    // 0x196e38: 0xc05d0e4  jal         func_174390
label_196e3c:
    if (ctx->pc == 0x196E3Cu) {
        ctx->pc = 0x196E3Cu;
            // 0x196e3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196E40u;
        goto label_196e40;
    }
    ctx->pc = 0x196E38u;
    SET_GPR_U32(ctx, 31, 0x196E40u);
    ctx->pc = 0x196E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196E38u;
            // 0x196e3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174390u;
    if (runtime->hasFunction(0x174390u)) {
        auto targetFn = runtime->lookupFunction(0x174390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E40u; }
        if (ctx->pc != 0x196E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174390_0x174390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E40u; }
        if (ctx->pc != 0x196E40u) { return; }
    }
    ctx->pc = 0x196E40u;
label_196e40:
    // 0x196e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196e44:
    // 0x196e44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196e48:
    // 0x196e48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_196e4c:
    // 0x196e4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196e50:
    // 0x196e50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_196e54:
    // 0x196e54: 0x805cc1e  j           func_173078
label_196e58:
    if (ctx->pc == 0x196E58u) {
        ctx->pc = 0x196E58u;
            // 0x196e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x196E5Cu;
        goto label_196e5c;
    }
    ctx->pc = 0x196E54u;
    ctx->pc = 0x196E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196E54u;
            // 0x196e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173078u;
    if (runtime->hasFunction(0x173078u)) {
        auto targetFn = runtime->lookupFunction(0x173078u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00173078_0x173078(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196E5Cu;
label_196e5c:
    // 0x196e5c: 0x0  nop
    ctx->pc = 0x196e5cu;
    // NOP
label_196e60:
    // 0x196e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196e64:
    // 0x196e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196e68:
    // 0x196e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196e6c:
    // 0x196e6c: 0x805cc84  j           func_173210
label_196e70:
    if (ctx->pc == 0x196E70u) {
        ctx->pc = 0x196E70u;
            // 0x196e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196E74u;
        goto label_196e74;
    }
    ctx->pc = 0x196E6Cu;
    ctx->pc = 0x196E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196E6Cu;
            // 0x196e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00173210_0x173210(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196E74u;
label_196e74:
    // 0x196e74: 0x0  nop
    ctx->pc = 0x196e74u;
    // NOP
label_196e78:
    // 0x196e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196e7c:
    // 0x196e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196e80:
    // 0x196e80: 0xc05ccc0  jal         func_173300
label_196e84:
    if (ctx->pc == 0x196E84u) {
        ctx->pc = 0x196E88u;
        goto label_196e88;
    }
    ctx->pc = 0x196E80u;
    SET_GPR_U32(ctx, 31, 0x196E88u);
    ctx->pc = 0x173300u;
    if (runtime->hasFunction(0x173300u)) {
        auto targetFn = runtime->lookupFunction(0x173300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E88u; }
        if (ctx->pc != 0x196E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173300_0x173300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E88u; }
        if (ctx->pc != 0x196E88u) { return; }
    }
    ctx->pc = 0x196E88u;
label_196e88:
    // 0x196e88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x196e88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196e8c:
    // 0x196e8c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x196e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_196e90:
    // 0x196e90: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_196e94:
    if (ctx->pc == 0x196E94u) {
        ctx->pc = 0x196E94u;
            // 0x196e94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x196E98u;
        goto label_196e98;
    }
    ctx->pc = 0x196E90u;
    {
        const bool branch_taken_0x196e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196E90u;
            // 0x196e94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e90) {
            ctx->pc = 0x196ED4u;
            goto label_196ed4;
        }
    }
    ctx->pc = 0x196E98u;
label_196e98:
    // 0x196e98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x196e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_196e9c:
    // 0x196e9c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x196e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_196ea0:
    // 0x196ea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x196ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_196ea4:
    // 0x196ea4: 0x8c638430  lw          $v1, -0x7BD0($v1)
    ctx->pc = 0x196ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935600)));
label_196ea8:
    // 0x196ea8: 0x600008  jr          $v1
label_196eac:
    if (ctx->pc == 0x196EACu) {
        ctx->pc = 0x196EB0u;
        goto label_196eb0;
    }
    ctx->pc = 0x196EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196EB0u: goto label_196eb0;
            case 0x196EB8u: goto label_196eb8;
            case 0x196EC0u: goto label_196ec0;
            case 0x196EC8u: goto label_196ec8;
            case 0x196ED0u: goto label_196ed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196EB0u;
label_196eb0:
    // 0x196eb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_196eb4:
    if (ctx->pc == 0x196EB4u) {
        ctx->pc = 0x196EB4u;
            // 0x196eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196EB8u;
        goto label_196eb8;
    }
    ctx->pc = 0x196EB0u;
    {
        const bool branch_taken_0x196eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196EB0u;
            // 0x196eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196eb0) {
            ctx->pc = 0x196ED4u;
            goto label_196ed4;
        }
    }
    ctx->pc = 0x196EB8u;
label_196eb8:
    // 0x196eb8: 0x10000006  b           . + 4 + (0x6 << 2)
label_196ebc:
    if (ctx->pc == 0x196EBCu) {
        ctx->pc = 0x196EBCu;
            // 0x196ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x196EC0u;
        goto label_196ec0;
    }
    ctx->pc = 0x196EB8u;
    {
        const bool branch_taken_0x196eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196EB8u;
            // 0x196ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196eb8) {
            ctx->pc = 0x196ED4u;
            goto label_196ed4;
        }
    }
    ctx->pc = 0x196EC0u;
label_196ec0:
    // 0x196ec0: 0x10000004  b           . + 4 + (0x4 << 2)
label_196ec4:
    if (ctx->pc == 0x196EC4u) {
        ctx->pc = 0x196EC4u;
            // 0x196ec4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x196EC8u;
        goto label_196ec8;
    }
    ctx->pc = 0x196EC0u;
    {
        const bool branch_taken_0x196ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196EC0u;
            // 0x196ec4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ec0) {
            ctx->pc = 0x196ED4u;
            goto label_196ed4;
        }
    }
    ctx->pc = 0x196EC8u;
label_196ec8:
    // 0x196ec8: 0x10000002  b           . + 4 + (0x2 << 2)
label_196ecc:
    if (ctx->pc == 0x196ECCu) {
        ctx->pc = 0x196ECCu;
            // 0x196ecc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x196ED0u;
        goto label_196ed0;
    }
    ctx->pc = 0x196EC8u;
    {
        const bool branch_taken_0x196ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196EC8u;
            // 0x196ecc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ec8) {
            ctx->pc = 0x196ED4u;
            goto label_196ed4;
        }
    }
    ctx->pc = 0x196ED0u;
label_196ed0:
    // 0x196ed0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x196ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_196ed4:
    // 0x196ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196ed8:
    // 0x196ed8: 0x3e00008  jr          $ra
label_196edc:
    if (ctx->pc == 0x196EDCu) {
        ctx->pc = 0x196EDCu;
            // 0x196edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196EE0u;
        goto label_196ee0;
    }
    ctx->pc = 0x196ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196ED8u;
            // 0x196edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196EE0u;
label_196ee0:
    // 0x196ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196ee4:
    // 0x196ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196ee8:
    // 0x196ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196eec:
    // 0x196eec: 0x805d416  j           func_175058
label_196ef0:
    if (ctx->pc == 0x196EF0u) {
        ctx->pc = 0x196EF0u;
            // 0x196ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196EF4u;
        goto label_196ef4;
    }
    ctx->pc = 0x196EECu;
    ctx->pc = 0x196EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196EECu;
            // 0x196ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175058u;
    if (runtime->hasFunction(0x175058u)) {
        auto targetFn = runtime->lookupFunction(0x175058u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00175058_0x175058(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196EF4u;
label_196ef4:
    // 0x196ef4: 0x0  nop
    ctx->pc = 0x196ef4u;
    // NOP
label_196ef8:
    // 0x196ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196efc:
    // 0x196efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196f00:
    // 0x196f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196f04:
    // 0x196f04: 0x805d006  j           func_174018
label_196f08:
    if (ctx->pc == 0x196F08u) {
        ctx->pc = 0x196F08u;
            // 0x196f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196F0Cu;
        goto label_196f0c;
    }
    ctx->pc = 0x196F04u;
    ctx->pc = 0x196F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F04u;
            // 0x196f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00174018_0x174018(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196F0Cu;
label_196f0c:
    // 0x196f0c: 0x0  nop
    ctx->pc = 0x196f0cu;
    // NOP
label_196f10:
    // 0x196f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196f14:
    // 0x196f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196f18:
    // 0x196f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196f1c:
    // 0x196f1c: 0x805d032  j           func_1740C8
label_196f20:
    if (ctx->pc == 0x196F20u) {
        ctx->pc = 0x196F20u;
            // 0x196f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196F24u;
        goto label_196f24;
    }
    ctx->pc = 0x196F1Cu;
    ctx->pc = 0x196F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F1Cu;
            // 0x196f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1740C8u;
    {
        auto targetFn = runtime->lookupFunction(0x1740C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x196F24u;
label_196f24:
    // 0x196f24: 0x0  nop
    ctx->pc = 0x196f24u;
    // NOP
label_196f28:
    // 0x196f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196f2c:
    // 0x196f2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196f30:
    // 0x196f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196f34:
    // 0x196f34: 0x805d5c0  j           func_175700
label_196f38:
    if (ctx->pc == 0x196F38u) {
        ctx->pc = 0x196F38u;
            // 0x196f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196F3Cu;
        goto label_196f3c;
    }
    ctx->pc = 0x196F34u;
    ctx->pc = 0x196F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F34u;
            // 0x196f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175700u;
    if (runtime->hasFunction(0x175700u)) {
        auto targetFn = runtime->lookupFunction(0x175700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00175700_0x175700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196F3Cu;
label_196f3c:
    // 0x196f3c: 0x0  nop
    ctx->pc = 0x196f3cu;
    // NOP
label_196f40:
    // 0x196f40: 0x3e00008  jr          $ra
label_196f44:
    if (ctx->pc == 0x196F44u) {
        ctx->pc = 0x196F44u;
            // 0x196f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x196F48u;
        goto label_196f48;
    }
    ctx->pc = 0x196F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196F40u;
            // 0x196f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196F48u;
label_196f48:
    // 0x196f48: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x196f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_196f4c:
    // 0x196f4c: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x196f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_196f50:
    // 0x196f50: 0xac446ae4  sw          $a0, 0x6AE4($v0)
    ctx->pc = 0x196f50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27364), GPR_U32(ctx, 4));
label_196f54:
    // 0x196f54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196f58:
    // 0x196f58: 0x3e00008  jr          $ra
label_196f5c:
    if (ctx->pc == 0x196F5Cu) {
        ctx->pc = 0x196F5Cu;
            // 0x196f5c: 0xac656ae8  sw          $a1, 0x6AE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27368), GPR_U32(ctx, 5));
        ctx->pc = 0x196F60u;
        goto label_196f60;
    }
    ctx->pc = 0x196F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196F58u;
            // 0x196f5c: 0xac656ae8  sw          $a1, 0x6AE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27368), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196F60u;
label_196f60:
    // 0x196f60: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x196f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_196f64:
    // 0x196f64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196f64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_196f68:
    // 0x196f68: 0x8c436ae4  lw          $v1, 0x6AE4($v0)
    ctx->pc = 0x196f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27364)));
label_196f6c:
    // 0x196f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x196f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196f70:
    // 0x196f70: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_196f74:
    if (ctx->pc == 0x196F74u) {
        ctx->pc = 0x196F74u;
            // 0x196f74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x196F78u;
        goto label_196f78;
    }
    ctx->pc = 0x196F70u;
    {
        const bool branch_taken_0x196f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x196F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196F70u;
            // 0x196f74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f70) {
            ctx->pc = 0x196F84u;
            goto label_196f84;
        }
    }
    ctx->pc = 0x196F78u;
label_196f78:
    // 0x196f78: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x196f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_196f7c:
    // 0x196f7c: 0x60f809  jalr        $v1
label_196f80:
    if (ctx->pc == 0x196F80u) {
        ctx->pc = 0x196F80u;
            // 0x196f80: 0x8c446ae8  lw          $a0, 0x6AE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27368)));
        ctx->pc = 0x196F84u;
        goto label_196f84;
    }
    ctx->pc = 0x196F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x196F84u);
        ctx->pc = 0x196F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196F7Cu;
            // 0x196f80: 0x8c446ae8  lw          $a0, 0x6AE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27368)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x196F84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x196F84u; }
            if (ctx->pc != 0x196F84u) { return; }
        }
        }
    }
    ctx->pc = 0x196F84u;
label_196f84:
    // 0x196f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196f88:
    // 0x196f88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196f8c:
    // 0x196f8c: 0x3e00008  jr          $ra
label_196f90:
    if (ctx->pc == 0x196F90u) {
        ctx->pc = 0x196F90u;
            // 0x196f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x196F94u;
        goto label_196f94;
    }
    ctx->pc = 0x196F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196F8Cu;
            // 0x196f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196F94u;
label_196f94:
    // 0x196f94: 0x0  nop
    ctx->pc = 0x196f94u;
    // NOP
}
