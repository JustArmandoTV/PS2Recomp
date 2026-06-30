#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9C30
// Address: 0x4a9c30 - 0x4a9e80
void sub_004A9C30_0x4a9c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9C30_0x4a9c30");
#endif

    switch (ctx->pc) {
        case 0x4a9cccu: goto label_4a9ccc;
        case 0x4a9cd4u: goto label_4a9cd4;
        case 0x4a9d0cu: goto label_4a9d0c;
        case 0x4a9d18u: goto label_4a9d18;
        case 0x4a9d2cu: goto label_4a9d2c;
        case 0x4a9d4cu: goto label_4a9d4c;
        case 0x4a9d94u: goto label_4a9d94;
        case 0x4a9dbcu: goto label_4a9dbc;
        case 0x4a9dd8u: goto label_4a9dd8;
        case 0x4a9e14u: goto label_4a9e14;
        default: break;
    }

    ctx->pc = 0x4a9c30u;

    // 0x4a9c30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a9c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a9c34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a9c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4a9c38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a9c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a9c3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a9c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a9c40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a9c40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a9c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a9c48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a9c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c4c: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x4a9c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4a9c50: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x4a9c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4a9c54: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x4a9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a9c58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9C58u;
    {
        const bool branch_taken_0x4a9c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9C58u;
            // 0x4a9c5c: 0xc58021  addu        $s0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c58) {
            ctx->pc = 0x4A9C68u;
            goto label_4a9c68;
        }
    }
    ctx->pc = 0x4A9C60u;
    // 0x4a9c60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9C60u;
    {
        const bool branch_taken_0x4a9c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9C60u;
            // 0x4a9c64: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9c60) {
            ctx->pc = 0x4A9C70u;
            goto label_4a9c70;
        }
    }
    ctx->pc = 0x4A9C68u;
label_4a9c68:
    // 0x4a9c68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a9c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a9c6c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x4a9c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_4a9c70:
    // 0x4a9c70: 0x56030069  bnel        $s0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x4A9C70u;
    {
        const bool branch_taken_0x4a9c70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a9c70) {
            ctx->pc = 0x4A9C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9C70u;
            // 0x4a9c74: 0x8e460010  lw          $a2, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9E18u;
            goto label_4a9e18;
        }
    }
    ctx->pc = 0x4A9C78u;
    // 0x4a9c78: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4a9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4a9c7c: 0x8042a848  lb          $v0, -0x57B8($v0)
    ctx->pc = 0x4a9c7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294944840)));
    // 0x4a9c80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A9C80u;
    {
        const bool branch_taken_0x4a9c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9c80) {
            ctx->pc = 0x4A9CA0u;
            goto label_4a9ca0;
        }
    }
    ctx->pc = 0x4A9C88u;
    // 0x4a9c88: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4a9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a9c8c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4a9c90: 0xac4352a8  sw          $v1, 0x52A8($v0)
    ctx->pc = 0x4a9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21160), GPR_U32(ctx, 3));
    // 0x4a9c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a9c98: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4a9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4a9c9c: 0xa043a848  sb          $v1, -0x57B8($v0)
    ctx->pc = 0x4a9c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294944840), (uint8_t)GPR_U32(ctx, 3));
label_4a9ca0:
    // 0x4a9ca0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a9ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4a9ca4: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4a9ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4a9ca8: 0x8c4252a8  lw          $v0, 0x52A8($v0)
    ctx->pc = 0x4a9ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21160)));
    // 0x4a9cac: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A9CACu;
    {
        const bool branch_taken_0x4a9cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a9cac) {
            ctx->pc = 0x4A9CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9CACu;
            // 0x4a9cb0: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9CD8u;
            goto label_4a9cd8;
        }
    }
    ctx->pc = 0x4A9CB4u;
    // 0x4a9cb4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4a9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4a9cb8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a9cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4a9cbc: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4a9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4a9cc0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4a9cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4a9cc4: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4A9CC4u;
    SET_GPR_U32(ctx, 31, 0x4A9CCCu);
    ctx->pc = 0x4A9CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9CC4u;
            // 0x4a9cc8: 0x24a552b0  addiu       $a1, $a1, 0x52B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9CCCu; }
        if (ctx->pc != 0x4A9CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9CCCu; }
        if (ctx->pc != 0x4A9CCCu) { return; }
    }
    ctx->pc = 0x4A9CCCu;
label_4a9ccc:
    // 0x4a9ccc: 0xc04981a  jal         func_126068
    ctx->pc = 0x4A9CCCu;
    SET_GPR_U32(ctx, 31, 0x4A9CD4u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9CD4u; }
        if (ctx->pc != 0x4A9CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9CD4u; }
        if (ctx->pc != 0x4A9CD4u) { return; }
    }
    ctx->pc = 0x4A9CD4u;
label_4a9cd4:
    // 0x4a9cd4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x4a9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4a9cd8:
    // 0x4a9cd8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9CD8u;
    {
        const bool branch_taken_0x4a9cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9cd8) {
            ctx->pc = 0x4A9CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9CD8u;
            // 0x4a9cdc: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9CECu;
            goto label_4a9cec;
        }
    }
    ctx->pc = 0x4A9CE0u;
    // 0x4a9ce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A9CE0u;
    {
        const bool branch_taken_0x4a9ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9CE0u;
            // 0x4a9ce4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ce0) {
            ctx->pc = 0x4A9CECu;
            goto label_4a9cec;
        }
    }
    ctx->pc = 0x4A9CE8u;
    // 0x4a9ce8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x4a9ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a9cec:
    // 0x4a9cec: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a9cf0: 0x14430034  bne         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x4A9CF0u;
    {
        const bool branch_taken_0x4a9cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a9cf0) {
            ctx->pc = 0x4A9DC4u;
            goto label_4a9dc4;
        }
    }
    ctx->pc = 0x4A9CF8u;
    // 0x4a9cf8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A9CF8u;
    {
        const bool branch_taken_0x4a9cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9cf8) {
            ctx->pc = 0x4A9D18u;
            goto label_4a9d18;
        }
    }
    ctx->pc = 0x4A9D00u;
    // 0x4a9d00: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4a9d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4a9d04: 0xc12a8a0  jal         func_4AA280
    ctx->pc = 0x4A9D04u;
    SET_GPR_U32(ctx, 31, 0x4A9D0Cu);
    ctx->pc = 0x4A9D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9D04u;
            // 0x4a9d08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AA280u;
    if (runtime->hasFunction(0x4AA280u)) {
        auto targetFn = runtime->lookupFunction(0x4AA280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9D0Cu; }
        if (ctx->pc != 0x4A9D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AA280_0x4aa280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9D0Cu; }
        if (ctx->pc != 0x4A9D0Cu) { return; }
    }
    ctx->pc = 0x4A9D0Cu;
label_4a9d0c:
    // 0x4a9d0c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4a9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4a9d10: 0xc12a7dc  jal         func_4A9F70
    ctx->pc = 0x4A9D10u;
    SET_GPR_U32(ctx, 31, 0x4A9D18u);
    ctx->pc = 0x4A9D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9D10u;
            // 0x4a9d14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A9F70u;
    if (runtime->hasFunction(0x4A9F70u)) {
        auto targetFn = runtime->lookupFunction(0x4A9F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9D18u; }
        if (ctx->pc != 0x4A9D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A9F70_0x4a9f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9D18u; }
        if (ctx->pc != 0x4A9D18u) { return; }
    }
    ctx->pc = 0x4A9D18u;
label_4a9d18:
    // 0x4a9d18: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4a9d1c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a9d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a9d20: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x4a9d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x4a9d24: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x4A9D24u;
    SET_GPR_U32(ctx, 31, 0x4A9D2Cu);
    ctx->pc = 0x4A9D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9D24u;
            // 0x4a9d28: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9D2Cu; }
        if (ctx->pc != 0x4A9D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9D2Cu; }
        if (ctx->pc != 0x4A9D2Cu) { return; }
    }
    ctx->pc = 0x4A9D2Cu;
label_4a9d2c:
    // 0x4a9d2c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x4a9d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x4a9d30: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4a9d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4a9d34: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x4a9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4a9d38: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x4a9d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
    // 0x4a9d3c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x4a9d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x4a9d40: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4a9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a9d44: 0xc12a8a0  jal         func_4AA280
    ctx->pc = 0x4A9D44u;
    SET_GPR_U32(ctx, 31, 0x4A9D4Cu);
    ctx->pc = 0x4A9D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9D44u;
            // 0x4a9d48: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AA280u;
    if (runtime->hasFunction(0x4AA280u)) {
        auto targetFn = runtime->lookupFunction(0x4AA280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9D4Cu; }
        if (ctx->pc != 0x4A9D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AA280_0x4aa280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9D4Cu; }
        if (ctx->pc != 0x4A9D4Cu) { return; }
    }
    ctx->pc = 0x4A9D4Cu;
label_4a9d4c:
    // 0x4a9d4c: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x4a9d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4a9d50: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4a9d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4a9d54: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x4a9d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a9d58: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x4a9d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4a9d5c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4a9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a9d60: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4a9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4a9d64: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x4a9d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x4a9d68: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x4a9d68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9d6c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4a9d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4a9d70: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x4a9d70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a9d74: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x4a9d74u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x4a9d78: 0x1810  mfhi        $v1
    ctx->pc = 0x4a9d78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x4a9d7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a9d80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a9d84: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x4a9d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x4a9d88: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x4a9d88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x4a9d8c: 0xc12a844  jal         func_4AA110
    ctx->pc = 0x4A9D8Cu;
    SET_GPR_U32(ctx, 31, 0x4A9D94u);
    ctx->pc = 0x4A9D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9D8Cu;
            // 0x4a9d90: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AA110u;
    if (runtime->hasFunction(0x4AA110u)) {
        auto targetFn = runtime->lookupFunction(0x4AA110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9D94u; }
        if (ctx->pc != 0x4A9D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AA110_0x4aa110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9D94u; }
        if (ctx->pc != 0x4A9D94u) { return; }
    }
    ctx->pc = 0x4A9D94u;
label_4a9d94:
    // 0x4a9d94: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4a9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4a9d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a9d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9d9c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4a9d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x4a9da0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a9da4: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x4A9DA4u;
    {
        const bool branch_taken_0x4a9da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9DA4u;
            // 0x4a9da8: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9da4) {
            ctx->pc = 0x4A9E5Cu;
            goto label_4a9e5c;
        }
    }
    ctx->pc = 0x4A9DACu;
    // 0x4a9dac: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x4A9DACu;
    {
        const bool branch_taken_0x4a9dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9DACu;
            // 0x4a9db0: 0x8fa30048  lw          $v1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9dac) {
            ctx->pc = 0x4A9E5Cu;
            goto label_4a9e5c;
        }
    }
    ctx->pc = 0x4A9DB4u;
    // 0x4a9db4: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x4A9DB4u;
    SET_GPR_U32(ctx, 31, 0x4A9DBCu);
    ctx->pc = 0x4A9DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9DB4u;
            // 0x4a9db8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9DBCu; }
        if (ctx->pc != 0x4A9DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9DBCu; }
        if (ctx->pc != 0x4A9DBCu) { return; }
    }
    ctx->pc = 0x4A9DBCu;
label_4a9dbc:
    // 0x4a9dbc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4A9DBCu;
    {
        const bool branch_taken_0x4a9dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9DBCu;
            // 0x4a9dc0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9dbc) {
            ctx->pc = 0x4A9E60u;
            goto label_4a9e60;
        }
    }
    ctx->pc = 0x4A9DC4u;
label_4a9dc4:
    // 0x4a9dc4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4a9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4a9dc8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a9dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a9dcc: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x4a9dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x4a9dd0: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x4A9DD0u;
    SET_GPR_U32(ctx, 31, 0x4A9DD8u);
    ctx->pc = 0x4A9DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9DD0u;
            // 0x4a9dd4: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9DD8u; }
        if (ctx->pc != 0x4A9DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9DD8u; }
        if (ctx->pc != 0x4A9DD8u) { return; }
    }
    ctx->pc = 0x4A9DD8u;
label_4a9dd8:
    // 0x4a9dd8: 0x8e480010  lw          $t0, 0x10($s2)
    ctx->pc = 0x4a9dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4a9ddc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4a9ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4a9de0: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x4a9de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4a9de4: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x4a9de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x4a9de8: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x4a9de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a9dec: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x4a9decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4a9df0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x4a9df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x4a9df4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4a9df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4a9df8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x4a9df8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x4a9dfc: 0x3010  mfhi        $a2
    ctx->pc = 0x4a9dfcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x4a9e00: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4a9e00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4a9e04: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4a9e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4a9e08: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a9e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a9e0c: 0xc12a844  jal         func_4AA110
    ctx->pc = 0x4A9E0Cu;
    SET_GPR_U32(ctx, 31, 0x4A9E14u);
    ctx->pc = 0x4A9E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9E0Cu;
            // 0x4a9e10: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AA110u;
    if (runtime->hasFunction(0x4AA110u)) {
        auto targetFn = runtime->lookupFunction(0x4AA110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9E14u; }
        if (ctx->pc != 0x4A9E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AA110_0x4aa110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A9E14u; }
        if (ctx->pc != 0x4A9E14u) { return; }
    }
    ctx->pc = 0x4A9E14u;
label_4a9e14:
    // 0x4a9e14: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x4a9e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4a9e18:
    // 0x4a9e18: 0x1039c2  srl         $a3, $s0, 7
    ctx->pc = 0x4a9e18u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 7));
    // 0x4a9e1c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x4a9e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4a9e20: 0x3203007f  andi        $v1, $s0, 0x7F
    ctx->pc = 0x4a9e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)127);
    // 0x4a9e24: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x4a9e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a9e28: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x4a9e28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a9e2c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x4a9e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4a9e30: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x4a9e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4a9e34: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x4a9e34u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x4a9e38: 0x2810  mfhi        $a1
    ctx->pc = 0x4a9e38u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x4a9e3c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4a9e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4a9e40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4a9e44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4a9e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a9e48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a9e4c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x4a9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x4a9e50: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4a9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4a9e54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a9e58: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x4a9e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_4a9e5c:
    // 0x4a9e5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a9e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4a9e60:
    // 0x4a9e60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a9e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a9e64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a9e64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a9e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a9e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9E6Cu;
            // 0x4a9e70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9E74u;
    // 0x4a9e74: 0x0  nop
    ctx->pc = 0x4a9e74u;
    // NOP
    // 0x4a9e78: 0x0  nop
    ctx->pc = 0x4a9e78u;
    // NOP
    // 0x4a9e7c: 0x0  nop
    ctx->pc = 0x4a9e7cu;
    // NOP
}
