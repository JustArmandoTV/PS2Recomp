#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4C50
// Address: 0x3c4c50 - 0x3c4ed0
void sub_003C4C50_0x3c4c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4C50_0x3c4c50");
#endif

    switch (ctx->pc) {
        case 0x3c4c50u: goto label_3c4c50;
        case 0x3c4c54u: goto label_3c4c54;
        case 0x3c4c58u: goto label_3c4c58;
        case 0x3c4c5cu: goto label_3c4c5c;
        case 0x3c4c60u: goto label_3c4c60;
        case 0x3c4c64u: goto label_3c4c64;
        case 0x3c4c68u: goto label_3c4c68;
        case 0x3c4c6cu: goto label_3c4c6c;
        case 0x3c4c70u: goto label_3c4c70;
        case 0x3c4c74u: goto label_3c4c74;
        case 0x3c4c78u: goto label_3c4c78;
        case 0x3c4c7cu: goto label_3c4c7c;
        case 0x3c4c80u: goto label_3c4c80;
        case 0x3c4c84u: goto label_3c4c84;
        case 0x3c4c88u: goto label_3c4c88;
        case 0x3c4c8cu: goto label_3c4c8c;
        case 0x3c4c90u: goto label_3c4c90;
        case 0x3c4c94u: goto label_3c4c94;
        case 0x3c4c98u: goto label_3c4c98;
        case 0x3c4c9cu: goto label_3c4c9c;
        case 0x3c4ca0u: goto label_3c4ca0;
        case 0x3c4ca4u: goto label_3c4ca4;
        case 0x3c4ca8u: goto label_3c4ca8;
        case 0x3c4cacu: goto label_3c4cac;
        case 0x3c4cb0u: goto label_3c4cb0;
        case 0x3c4cb4u: goto label_3c4cb4;
        case 0x3c4cb8u: goto label_3c4cb8;
        case 0x3c4cbcu: goto label_3c4cbc;
        case 0x3c4cc0u: goto label_3c4cc0;
        case 0x3c4cc4u: goto label_3c4cc4;
        case 0x3c4cc8u: goto label_3c4cc8;
        case 0x3c4cccu: goto label_3c4ccc;
        case 0x3c4cd0u: goto label_3c4cd0;
        case 0x3c4cd4u: goto label_3c4cd4;
        case 0x3c4cd8u: goto label_3c4cd8;
        case 0x3c4cdcu: goto label_3c4cdc;
        case 0x3c4ce0u: goto label_3c4ce0;
        case 0x3c4ce4u: goto label_3c4ce4;
        case 0x3c4ce8u: goto label_3c4ce8;
        case 0x3c4cecu: goto label_3c4cec;
        case 0x3c4cf0u: goto label_3c4cf0;
        case 0x3c4cf4u: goto label_3c4cf4;
        case 0x3c4cf8u: goto label_3c4cf8;
        case 0x3c4cfcu: goto label_3c4cfc;
        case 0x3c4d00u: goto label_3c4d00;
        case 0x3c4d04u: goto label_3c4d04;
        case 0x3c4d08u: goto label_3c4d08;
        case 0x3c4d0cu: goto label_3c4d0c;
        case 0x3c4d10u: goto label_3c4d10;
        case 0x3c4d14u: goto label_3c4d14;
        case 0x3c4d18u: goto label_3c4d18;
        case 0x3c4d1cu: goto label_3c4d1c;
        case 0x3c4d20u: goto label_3c4d20;
        case 0x3c4d24u: goto label_3c4d24;
        case 0x3c4d28u: goto label_3c4d28;
        case 0x3c4d2cu: goto label_3c4d2c;
        case 0x3c4d30u: goto label_3c4d30;
        case 0x3c4d34u: goto label_3c4d34;
        case 0x3c4d38u: goto label_3c4d38;
        case 0x3c4d3cu: goto label_3c4d3c;
        case 0x3c4d40u: goto label_3c4d40;
        case 0x3c4d44u: goto label_3c4d44;
        case 0x3c4d48u: goto label_3c4d48;
        case 0x3c4d4cu: goto label_3c4d4c;
        case 0x3c4d50u: goto label_3c4d50;
        case 0x3c4d54u: goto label_3c4d54;
        case 0x3c4d58u: goto label_3c4d58;
        case 0x3c4d5cu: goto label_3c4d5c;
        case 0x3c4d60u: goto label_3c4d60;
        case 0x3c4d64u: goto label_3c4d64;
        case 0x3c4d68u: goto label_3c4d68;
        case 0x3c4d6cu: goto label_3c4d6c;
        case 0x3c4d70u: goto label_3c4d70;
        case 0x3c4d74u: goto label_3c4d74;
        case 0x3c4d78u: goto label_3c4d78;
        case 0x3c4d7cu: goto label_3c4d7c;
        case 0x3c4d80u: goto label_3c4d80;
        case 0x3c4d84u: goto label_3c4d84;
        case 0x3c4d88u: goto label_3c4d88;
        case 0x3c4d8cu: goto label_3c4d8c;
        case 0x3c4d90u: goto label_3c4d90;
        case 0x3c4d94u: goto label_3c4d94;
        case 0x3c4d98u: goto label_3c4d98;
        case 0x3c4d9cu: goto label_3c4d9c;
        case 0x3c4da0u: goto label_3c4da0;
        case 0x3c4da4u: goto label_3c4da4;
        case 0x3c4da8u: goto label_3c4da8;
        case 0x3c4dacu: goto label_3c4dac;
        case 0x3c4db0u: goto label_3c4db0;
        case 0x3c4db4u: goto label_3c4db4;
        case 0x3c4db8u: goto label_3c4db8;
        case 0x3c4dbcu: goto label_3c4dbc;
        case 0x3c4dc0u: goto label_3c4dc0;
        case 0x3c4dc4u: goto label_3c4dc4;
        case 0x3c4dc8u: goto label_3c4dc8;
        case 0x3c4dccu: goto label_3c4dcc;
        case 0x3c4dd0u: goto label_3c4dd0;
        case 0x3c4dd4u: goto label_3c4dd4;
        case 0x3c4dd8u: goto label_3c4dd8;
        case 0x3c4ddcu: goto label_3c4ddc;
        case 0x3c4de0u: goto label_3c4de0;
        case 0x3c4de4u: goto label_3c4de4;
        case 0x3c4de8u: goto label_3c4de8;
        case 0x3c4decu: goto label_3c4dec;
        case 0x3c4df0u: goto label_3c4df0;
        case 0x3c4df4u: goto label_3c4df4;
        case 0x3c4df8u: goto label_3c4df8;
        case 0x3c4dfcu: goto label_3c4dfc;
        case 0x3c4e00u: goto label_3c4e00;
        case 0x3c4e04u: goto label_3c4e04;
        case 0x3c4e08u: goto label_3c4e08;
        case 0x3c4e0cu: goto label_3c4e0c;
        case 0x3c4e10u: goto label_3c4e10;
        case 0x3c4e14u: goto label_3c4e14;
        case 0x3c4e18u: goto label_3c4e18;
        case 0x3c4e1cu: goto label_3c4e1c;
        case 0x3c4e20u: goto label_3c4e20;
        case 0x3c4e24u: goto label_3c4e24;
        case 0x3c4e28u: goto label_3c4e28;
        case 0x3c4e2cu: goto label_3c4e2c;
        case 0x3c4e30u: goto label_3c4e30;
        case 0x3c4e34u: goto label_3c4e34;
        case 0x3c4e38u: goto label_3c4e38;
        case 0x3c4e3cu: goto label_3c4e3c;
        case 0x3c4e40u: goto label_3c4e40;
        case 0x3c4e44u: goto label_3c4e44;
        case 0x3c4e48u: goto label_3c4e48;
        case 0x3c4e4cu: goto label_3c4e4c;
        case 0x3c4e50u: goto label_3c4e50;
        case 0x3c4e54u: goto label_3c4e54;
        case 0x3c4e58u: goto label_3c4e58;
        case 0x3c4e5cu: goto label_3c4e5c;
        case 0x3c4e60u: goto label_3c4e60;
        case 0x3c4e64u: goto label_3c4e64;
        case 0x3c4e68u: goto label_3c4e68;
        case 0x3c4e6cu: goto label_3c4e6c;
        case 0x3c4e70u: goto label_3c4e70;
        case 0x3c4e74u: goto label_3c4e74;
        case 0x3c4e78u: goto label_3c4e78;
        case 0x3c4e7cu: goto label_3c4e7c;
        case 0x3c4e80u: goto label_3c4e80;
        case 0x3c4e84u: goto label_3c4e84;
        case 0x3c4e88u: goto label_3c4e88;
        case 0x3c4e8cu: goto label_3c4e8c;
        case 0x3c4e90u: goto label_3c4e90;
        case 0x3c4e94u: goto label_3c4e94;
        case 0x3c4e98u: goto label_3c4e98;
        case 0x3c4e9cu: goto label_3c4e9c;
        case 0x3c4ea0u: goto label_3c4ea0;
        case 0x3c4ea4u: goto label_3c4ea4;
        case 0x3c4ea8u: goto label_3c4ea8;
        case 0x3c4eacu: goto label_3c4eac;
        case 0x3c4eb0u: goto label_3c4eb0;
        case 0x3c4eb4u: goto label_3c4eb4;
        case 0x3c4eb8u: goto label_3c4eb8;
        case 0x3c4ebcu: goto label_3c4ebc;
        case 0x3c4ec0u: goto label_3c4ec0;
        case 0x3c4ec4u: goto label_3c4ec4;
        case 0x3c4ec8u: goto label_3c4ec8;
        case 0x3c4eccu: goto label_3c4ecc;
        default: break;
    }

    ctx->pc = 0x3c4c50u;

label_3c4c50:
    // 0x3c4c50: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3c4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3c4c54:
    // 0x3c4c54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c4c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3c4c58:
    // 0x3c4c58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3c4c5c:
    if (ctx->pc == 0x3C4C5Cu) {
        ctx->pc = 0x3C4C60u;
        goto label_3c4c60;
    }
    ctx->pc = 0x3C4C58u;
    {
        const bool branch_taken_0x3c4c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4c58) {
            ctx->pc = 0x3C4C74u;
            goto label_3c4c74;
        }
    }
    ctx->pc = 0x3C4C60u;
label_3c4c60:
    // 0x3c4c60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c4c64:
    // 0x3c4c64: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x3c4c64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_3c4c68:
    // 0x3c4c68: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3c4c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_3c4c6c:
    // 0x3c4c6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c4c70:
    if (ctx->pc == 0x3C4C70u) {
        ctx->pc = 0x3C4C70u;
            // 0x3c4c70: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x3C4C74u;
        goto label_3c4c74;
    }
    ctx->pc = 0x3C4C6Cu;
    {
        const bool branch_taken_0x3c4c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4C6Cu;
            // 0x3c4c70: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4c6c) {
            ctx->pc = 0x3C4C84u;
            goto label_3c4c84;
        }
    }
    ctx->pc = 0x3C4C74u;
label_3c4c74:
    // 0x3c4c74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3c4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3c4c78:
    // 0x3c4c78: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x3c4c78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_3c4c7c:
    // 0x3c4c7c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3c4c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_3c4c80:
    // 0x3c4c80: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x3c4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_3c4c84:
    // 0x3c4c84: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x3c4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_3c4c88:
    // 0x3c4c88: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x3c4c88u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_3c4c8c:
    // 0x3c4c8c: 0x92820029  lbu         $v0, 0x29($s4)
    ctx->pc = 0x3c4c8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 41)));
label_3c4c90:
    // 0x3c4c90: 0x2403f800  addiu       $v1, $zero, -0x800
    ctx->pc = 0x3c4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
label_3c4c94:
    // 0x3c4c94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c4c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4c98:
    // 0x3c4c98: 0x248407ff  addiu       $a0, $a0, 0x7FF
    ctx->pc = 0x3c4c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
label_3c4c9c:
    // 0x3c4c9c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3c4c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3c4ca0:
    // 0x3c4ca0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c4ca4:
    if (ctx->pc == 0x3C4CA4u) {
        ctx->pc = 0x3C4CA4u;
            // 0x3c4ca4: 0x3ba02  srl         $s7, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x3C4CA8u;
        goto label_3c4ca8;
    }
    ctx->pc = 0x3C4CA0u;
    {
        const bool branch_taken_0x3c4ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4CA0u;
            // 0x3c4ca4: 0x3ba02  srl         $s7, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4ca0) {
            ctx->pc = 0x3C4CB4u;
            goto label_3c4cb4;
        }
    }
    ctx->pc = 0x3C4CA8u;
label_3c4ca8:
    // 0x3c4ca8: 0x24150200  addiu       $s5, $zero, 0x200
    ctx->pc = 0x3c4ca8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_3c4cac:
    // 0x3c4cac: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c4cb0:
    if (ctx->pc == 0x3C4CB0u) {
        ctx->pc = 0x3C4CB0u;
            // 0x3c4cb0: 0x3c160014  lui         $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)20 << 16));
        ctx->pc = 0x3C4CB4u;
        goto label_3c4cb4;
    }
    ctx->pc = 0x3C4CACu;
    {
        const bool branch_taken_0x3c4cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4CACu;
            // 0x3c4cb0: 0x3c160014  lui         $s6, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4cac) {
            ctx->pc = 0x3C4CC0u;
            goto label_3c4cc0;
        }
    }
    ctx->pc = 0x3C4CB4u;
label_3c4cb4:
    // 0x3c4cb4: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x3c4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
label_3c4cb8:
    // 0x3c4cb8: 0x241501c0  addiu       $s5, $zero, 0x1C0
    ctx->pc = 0x3c4cb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_3c4cbc:
    // 0x3c4cbc: 0x34568000  ori         $s6, $v0, 0x8000
    ctx->pc = 0x3c4cbcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3c4cc0:
    // 0x3c4cc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3c4cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3c4cc4:
    // 0x3c4cc4: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x3c4cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_3c4cc8:
    // 0x3c4cc8: 0xc05750c  jal         func_15D430
label_3c4ccc:
    if (ctx->pc == 0x3C4CCCu) {
        ctx->pc = 0x3C4CCCu;
            // 0x3c4ccc: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3C4CD0u;
        goto label_3c4cd0;
    }
    ctx->pc = 0x3C4CC8u;
    SET_GPR_U32(ctx, 31, 0x3C4CD0u);
    ctx->pc = 0x3C4CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4CC8u;
            // 0x3c4ccc: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4CD0u; }
        if (ctx->pc != 0x3C4CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4CD0u; }
        if (ctx->pc != 0x3C4CD0u) { return; }
    }
    ctx->pc = 0x3C4CD0u;
label_3c4cd0:
    // 0x3c4cd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c4cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4cd4:
    // 0x3c4cd4: 0x12983c  dsll32      $s3, $s2, 0
    ctx->pc = 0x3c4cd4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) << (32 + 0));
label_3c4cd8:
    // 0x3c4cd8: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x3c4cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
label_3c4cdc:
    // 0x3c4cdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4ce0:
    // 0x3c4ce0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c4ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3c4ce4:
    // 0x3c4ce4: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x3c4ce4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
label_3c4ce8:
    // 0x3c4ce8: 0x3c03020a  lui         $v1, 0x20A
    ctx->pc = 0x3c4ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)522 << 16));
label_3c4cec:
    // 0x3c4cec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c4cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c4cf0:
    // 0x3c4cf0: 0x2639025  or          $s2, $s3, $v1
    ctx->pc = 0x3c4cf0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_3c4cf4:
    // 0x3c4cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4cf8:
    // 0x3c4cf8: 0x2421825  or          $v1, $s2, $v0
    ctx->pc = 0x3c4cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3c4cfc:
    // 0x3c4cfc: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x3c4cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3c4d00:
    // 0x3c4d00: 0x3c020205  lui         $v0, 0x205
    ctx->pc = 0x3c4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)517 << 16));
label_3c4d04:
    // 0x3c4d04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c4d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c4d08:
    // 0x3c4d08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c4d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c4d0c:
    // 0x3c4d0c: 0xc057540  jal         func_15D500
label_3c4d10:
    if (ctx->pc == 0x3C4D10u) {
        ctx->pc = 0x3C4D10u;
            // 0x3c4d10: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x3C4D14u;
        goto label_3c4d14;
    }
    ctx->pc = 0x3C4D0Cu;
    SET_GPR_U32(ctx, 31, 0x3C4D14u);
    ctx->pc = 0x3C4D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4D0Cu;
            // 0x3c4d10: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4D14u; }
        if (ctx->pc != 0x3C4D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4D14u; }
        if (ctx->pc != 0x3C4D14u) { return; }
    }
    ctx->pc = 0x3C4D14u;
label_3c4d14:
    // 0x3c4d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d18:
    // 0x3c4d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d1c:
    // 0x3c4d1c: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x3c4d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_3c4d20:
    // 0x3c4d20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c4d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d24:
    // 0x3c4d24: 0xc057540  jal         func_15D500
label_3c4d28:
    if (ctx->pc == 0x3C4D28u) {
        ctx->pc = 0x3C4D28u;
            // 0x3c4d28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x3C4D2Cu;
        goto label_3c4d2c;
    }
    ctx->pc = 0x3C4D24u;
    SET_GPR_U32(ctx, 31, 0x3C4D2Cu);
    ctx->pc = 0x3C4D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4D24u;
            // 0x3c4d28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4D2Cu; }
        if (ctx->pc != 0x3C4D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4D2Cu; }
        if (ctx->pc != 0x3C4D2Cu) { return; }
    }
    ctx->pc = 0x3C4D2Cu;
label_3c4d2c:
    // 0x3c4d2c: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
label_3c4d30:
    if (ctx->pc == 0x3C4D30u) {
        ctx->pc = 0x3C4D30u;
            // 0x3c4d30: 0x151043  sra         $v0, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
        ctx->pc = 0x3C4D34u;
        goto label_3c4d34;
    }
    ctx->pc = 0x3C4D2Cu;
    {
        const bool branch_taken_0x3c4d2c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x3C4D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4D2Cu;
            // 0x3c4d30: 0x151043  sra         $v0, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4d2c) {
            ctx->pc = 0x3C4D3Cu;
            goto label_3c4d3c;
        }
    }
    ctx->pc = 0x3C4D34u;
label_3c4d34:
    // 0x3c4d34: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x3c4d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3c4d38:
    // 0x3c4d38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3c4d38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3c4d3c:
    // 0x3c4d3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c4d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c4d40:
    // 0x3c4d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d44:
    // 0x3c4d44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c4d44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3c4d48:
    // 0x3c4d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d4c:
    // 0x3c4d4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c4d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c4d50:
    // 0x3c4d50: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x3c4d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_3c4d54:
    // 0x3c4d54: 0x34550140  ori         $s5, $v0, 0x140
    ctx->pc = 0x3c4d54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
label_3c4d58:
    // 0x3c4d58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c4d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c4d5c:
    // 0x3c4d5c: 0xc057540  jal         func_15D500
label_3c4d60:
    if (ctx->pc == 0x3C4D60u) {
        ctx->pc = 0x3C4D60u;
            // 0x3c4d60: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4D64u;
        goto label_3c4d64;
    }
    ctx->pc = 0x3C4D5Cu;
    SET_GPR_U32(ctx, 31, 0x3C4D64u);
    ctx->pc = 0x3C4D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4D5Cu;
            // 0x3c4d60: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4D64u; }
        if (ctx->pc != 0x3C4D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4D64u; }
        if (ctx->pc != 0x3C4D64u) { return; }
    }
    ctx->pc = 0x3C4D64u;
label_3c4d64:
    // 0x3c4d64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d68:
    // 0x3c4d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d6c:
    // 0x3c4d6c: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x3c4d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_3c4d70:
    // 0x3c4d70: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3c4d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4d74:
    // 0x3c4d74: 0xc057540  jal         func_15D500
label_3c4d78:
    if (ctx->pc == 0x3C4D78u) {
        ctx->pc = 0x3C4D78u;
            // 0x3c4d78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x3C4D7Cu;
        goto label_3c4d7c;
    }
    ctx->pc = 0x3C4D74u;
    SET_GPR_U32(ctx, 31, 0x3C4D7Cu);
    ctx->pc = 0x3C4D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4D74u;
            // 0x3c4d78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4D7Cu; }
        if (ctx->pc != 0x3C4D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4D7Cu; }
        if (ctx->pc != 0x3C4D7Cu) { return; }
    }
    ctx->pc = 0x3C4D7Cu;
label_3c4d7c:
    // 0x3c4d7c: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x3c4d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_3c4d80:
    // 0x3c4d80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d84:
    // 0x3c4d84: 0x2421825  or          $v1, $s2, $v0
    ctx->pc = 0x3c4d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3c4d88:
    // 0x3c4d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4d8c:
    // 0x3c4d8c: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x3c4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
label_3c4d90:
    // 0x3c4d90: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x3c4d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3c4d94:
    // 0x3c4d94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c4d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c4d98:
    // 0x3c4d98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c4d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c4d9c:
    // 0x3c4d9c: 0xc057540  jal         func_15D500
label_3c4da0:
    if (ctx->pc == 0x3C4DA0u) {
        ctx->pc = 0x3C4DA0u;
            // 0x3c4da0: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x3C4DA4u;
        goto label_3c4da4;
    }
    ctx->pc = 0x3C4D9Cu;
    SET_GPR_U32(ctx, 31, 0x3C4DA4u);
    ctx->pc = 0x3C4DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4D9Cu;
            // 0x3c4da0: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4DA4u; }
        if (ctx->pc != 0x3C4DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4DA4u; }
        if (ctx->pc != 0x3C4DA4u) { return; }
    }
    ctx->pc = 0x3C4DA4u;
label_3c4da4:
    // 0x3c4da4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4da8:
    // 0x3c4da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4dac:
    // 0x3c4dac: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x3c4dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_3c4db0:
    // 0x3c4db0: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x3c4db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_3c4db4:
    // 0x3c4db4: 0xc057540  jal         func_15D500
label_3c4db8:
    if (ctx->pc == 0x3C4DB8u) {
        ctx->pc = 0x3C4DB8u;
            // 0x3c4db8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x3C4DBCu;
        goto label_3c4dbc;
    }
    ctx->pc = 0x3C4DB4u;
    SET_GPR_U32(ctx, 31, 0x3C4DBCu);
    ctx->pc = 0x3C4DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4DB4u;
            // 0x3c4db8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4DBCu; }
        if (ctx->pc != 0x3C4DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4DBCu; }
        if (ctx->pc != 0x3C4DBCu) { return; }
    }
    ctx->pc = 0x3C4DBCu;
label_3c4dbc:
    // 0x3c4dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4dc0:
    // 0x3c4dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4dc4:
    // 0x3c4dc4: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x3c4dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_3c4dc8:
    // 0x3c4dc8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c4dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c4dcc:
    // 0x3c4dcc: 0xc057540  jal         func_15D500
label_3c4dd0:
    if (ctx->pc == 0x3C4DD0u) {
        ctx->pc = 0x3C4DD0u;
            // 0x3c4dd0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x3C4DD4u;
        goto label_3c4dd4;
    }
    ctx->pc = 0x3C4DCCu;
    SET_GPR_U32(ctx, 31, 0x3C4DD4u);
    ctx->pc = 0x3C4DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4DCCu;
            // 0x3c4dd0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4DD4u; }
        if (ctx->pc != 0x3C4DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4DD4u; }
        if (ctx->pc != 0x3C4DD4u) { return; }
    }
    ctx->pc = 0x3C4DD4u;
label_3c4dd4:
    // 0x3c4dd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4dd8:
    // 0x3c4dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4ddc:
    // 0x3c4ddc: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x3c4ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_3c4de0:
    // 0x3c4de0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3c4de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4de4:
    // 0x3c4de4: 0xc057540  jal         func_15D500
label_3c4de8:
    if (ctx->pc == 0x3C4DE8u) {
        ctx->pc = 0x3C4DE8u;
            // 0x3c4de8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x3C4DECu;
        goto label_3c4dec;
    }
    ctx->pc = 0x3C4DE4u;
    SET_GPR_U32(ctx, 31, 0x3C4DECu);
    ctx->pc = 0x3C4DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4DE4u;
            // 0x3c4de8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4DECu; }
        if (ctx->pc != 0x3C4DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4DECu; }
        if (ctx->pc != 0x3C4DECu) { return; }
    }
    ctx->pc = 0x3C4DECu;
label_3c4dec:
    // 0x3c4dec: 0x161202  srl         $v0, $s6, 8
    ctx->pc = 0x3c4decu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), 8));
label_3c4df0:
    // 0x3c4df0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4df4:
    // 0x3c4df4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3c4df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_3c4df8:
    // 0x3c4df8: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x3c4df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3c4dfc:
    // 0x3c4dfc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3c4dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_3c4e00:
    // 0x3c4e00: 0x3c02320a  lui         $v0, 0x320A
    ctx->pc = 0x3c4e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12810 << 16));
label_3c4e04:
    // 0x3c4e04: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3c4e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_3c4e08:
    // 0x3c4e08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c4e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c4e0c:
    // 0x3c4e0c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3c4e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3c4e10:
    // 0x3c4e10: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3c4e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3c4e14:
    // 0x3c4e14: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c4e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c4e18:
    // 0x3c4e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e1c:
    // 0x3c4e1c: 0xc057540  jal         func_15D500
label_3c4e20:
    if (ctx->pc == 0x3C4E20u) {
        ctx->pc = 0x3C4E20u;
            // 0x3c4e20: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x3C4E24u;
        goto label_3c4e24;
    }
    ctx->pc = 0x3C4E1Cu;
    SET_GPR_U32(ctx, 31, 0x3C4E24u);
    ctx->pc = 0x3C4E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4E1Cu;
            // 0x3c4e20: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E24u; }
        if (ctx->pc != 0x3C4E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E24u; }
        if (ctx->pc != 0x3C4E24u) { return; }
    }
    ctx->pc = 0x3C4E24u;
label_3c4e24:
    // 0x3c4e24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e28:
    // 0x3c4e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e2c:
    // 0x3c4e2c: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x3c4e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_3c4e30:
    // 0x3c4e30: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x3c4e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_3c4e34:
    // 0x3c4e34: 0xc057540  jal         func_15D500
label_3c4e38:
    if (ctx->pc == 0x3C4E38u) {
        ctx->pc = 0x3C4E38u;
            // 0x3c4e38: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x3C4E3Cu;
        goto label_3c4e3c;
    }
    ctx->pc = 0x3C4E34u;
    SET_GPR_U32(ctx, 31, 0x3C4E3Cu);
    ctx->pc = 0x3C4E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4E34u;
            // 0x3c4e38: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E3Cu; }
        if (ctx->pc != 0x3C4E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E3Cu; }
        if (ctx->pc != 0x3C4E3Cu) { return; }
    }
    ctx->pc = 0x3C4E3Cu;
label_3c4e3c:
    // 0x3c4e3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e40:
    // 0x3c4e40: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3c4e40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e44:
    // 0x3c4e44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e48:
    // 0x3c4e48: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x3c4e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_3c4e4c:
    // 0x3c4e4c: 0xc057540  jal         func_15D500
label_3c4e50:
    if (ctx->pc == 0x3C4E50u) {
        ctx->pc = 0x3C4E50u;
            // 0x3c4e50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x3C4E54u;
        goto label_3c4e54;
    }
    ctx->pc = 0x3C4E4Cu;
    SET_GPR_U32(ctx, 31, 0x3C4E54u);
    ctx->pc = 0x3C4E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4E4Cu;
            // 0x3c4e50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E54u; }
        if (ctx->pc != 0x3C4E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E54u; }
        if (ctx->pc != 0x3C4E54u) { return; }
    }
    ctx->pc = 0x3C4E54u;
label_3c4e54:
    // 0x3c4e54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e58:
    // 0x3c4e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e5c:
    // 0x3c4e5c: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x3c4e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_3c4e60:
    // 0x3c4e60: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3c4e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4e64:
    // 0x3c4e64: 0xc057540  jal         func_15D500
label_3c4e68:
    if (ctx->pc == 0x3C4E68u) {
        ctx->pc = 0x3C4E68u;
            // 0x3c4e68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x3C4E6Cu;
        goto label_3c4e6c;
    }
    ctx->pc = 0x3C4E64u;
    SET_GPR_U32(ctx, 31, 0x3C4E6Cu);
    ctx->pc = 0x3C4E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4E64u;
            // 0x3c4e68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E6Cu; }
        if (ctx->pc != 0x3C4E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E6Cu; }
        if (ctx->pc != 0x3C4E6Cu) { return; }
    }
    ctx->pc = 0x3C4E6Cu;
label_3c4e6c:
    // 0x3c4e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c4e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e70:
    // 0x3c4e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e74:
    // 0x3c4e74: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x3c4e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3c4e78:
    // 0x3c4e78: 0xc057540  jal         func_15D500
label_3c4e7c:
    if (ctx->pc == 0x3C4E7Cu) {
        ctx->pc = 0x3C4E7Cu;
            // 0x3c4e7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4E80u;
        goto label_3c4e80;
    }
    ctx->pc = 0x3C4E78u;
    SET_GPR_U32(ctx, 31, 0x3C4E80u);
    ctx->pc = 0x3C4E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4E78u;
            // 0x3c4e7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E80u; }
        if (ctx->pc != 0x3C4E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E80u; }
        if (ctx->pc != 0x3C4E80u) { return; }
    }
    ctx->pc = 0x3C4E80u;
label_3c4e80:
    // 0x3c4e80: 0xc057528  jal         func_15D4A0
label_3c4e84:
    if (ctx->pc == 0x3C4E84u) {
        ctx->pc = 0x3C4E84u;
            // 0x3c4e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4E88u;
        goto label_3c4e88;
    }
    ctx->pc = 0x3C4E80u;
    SET_GPR_U32(ctx, 31, 0x3C4E88u);
    ctx->pc = 0x3C4E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4E80u;
            // 0x3c4e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E88u; }
        if (ctx->pc != 0x3C4E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E88u; }
        if (ctx->pc != 0x3C4E88u) { return; }
    }
    ctx->pc = 0x3C4E88u;
label_3c4e88:
    // 0x3c4e88: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3c4e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3c4e8c:
    // 0x3c4e8c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x3c4e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_3c4e90:
    // 0x3c4e90: 0x320f809  jalr        $t9
label_3c4e94:
    if (ctx->pc == 0x3C4E94u) {
        ctx->pc = 0x3C4E94u;
            // 0x3c4e94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C4E98u;
        goto label_3c4e98;
    }
    ctx->pc = 0x3C4E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C4E98u);
        ctx->pc = 0x3C4E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4E90u;
            // 0x3c4e94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C4E98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C4E98u; }
            if (ctx->pc != 0x3C4E98u) { return; }
        }
        }
    }
    ctx->pc = 0x3C4E98u;
label_3c4e98:
    // 0x3c4e98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3c4e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3c4e9c:
    // 0x3c4e9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3c4e9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c4ea0:
    // 0x3c4ea0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c4ea0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c4ea4:
    // 0x3c4ea4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c4ea4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c4ea8:
    // 0x3c4ea8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c4ea8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4eac:
    // 0x3c4eac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c4eacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c4eb0:
    // 0x3c4eb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c4eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4eb4:
    // 0x3c4eb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c4eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4eb8:
    // 0x3c4eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c4eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c4ebc:
    // 0x3c4ebc: 0x3e00008  jr          $ra
label_3c4ec0:
    if (ctx->pc == 0x3C4EC0u) {
        ctx->pc = 0x3C4EC0u;
            // 0x3c4ec0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x3C4EC4u;
        goto label_3c4ec4;
    }
    ctx->pc = 0x3C4EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4EBCu;
            // 0x3c4ec0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C4EC4u;
label_3c4ec4:
    // 0x3c4ec4: 0x0  nop
    ctx->pc = 0x3c4ec4u;
    // NOP
label_3c4ec8:
    // 0x3c4ec8: 0x0  nop
    ctx->pc = 0x3c4ec8u;
    // NOP
label_3c4ecc:
    // 0x3c4ecc: 0x0  nop
    ctx->pc = 0x3c4eccu;
    // NOP
}
