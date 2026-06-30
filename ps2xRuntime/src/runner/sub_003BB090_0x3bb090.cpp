#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BB090
// Address: 0x3bb090 - 0x3bb220
void sub_003BB090_0x3bb090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB090_0x3bb090");
#endif

    switch (ctx->pc) {
        case 0x3bb090u: goto label_3bb090;
        case 0x3bb094u: goto label_3bb094;
        case 0x3bb098u: goto label_3bb098;
        case 0x3bb09cu: goto label_3bb09c;
        case 0x3bb0a0u: goto label_3bb0a0;
        case 0x3bb0a4u: goto label_3bb0a4;
        case 0x3bb0a8u: goto label_3bb0a8;
        case 0x3bb0acu: goto label_3bb0ac;
        case 0x3bb0b0u: goto label_3bb0b0;
        case 0x3bb0b4u: goto label_3bb0b4;
        case 0x3bb0b8u: goto label_3bb0b8;
        case 0x3bb0bcu: goto label_3bb0bc;
        case 0x3bb0c0u: goto label_3bb0c0;
        case 0x3bb0c4u: goto label_3bb0c4;
        case 0x3bb0c8u: goto label_3bb0c8;
        case 0x3bb0ccu: goto label_3bb0cc;
        case 0x3bb0d0u: goto label_3bb0d0;
        case 0x3bb0d4u: goto label_3bb0d4;
        case 0x3bb0d8u: goto label_3bb0d8;
        case 0x3bb0dcu: goto label_3bb0dc;
        case 0x3bb0e0u: goto label_3bb0e0;
        case 0x3bb0e4u: goto label_3bb0e4;
        case 0x3bb0e8u: goto label_3bb0e8;
        case 0x3bb0ecu: goto label_3bb0ec;
        case 0x3bb0f0u: goto label_3bb0f0;
        case 0x3bb0f4u: goto label_3bb0f4;
        case 0x3bb0f8u: goto label_3bb0f8;
        case 0x3bb0fcu: goto label_3bb0fc;
        case 0x3bb100u: goto label_3bb100;
        case 0x3bb104u: goto label_3bb104;
        case 0x3bb108u: goto label_3bb108;
        case 0x3bb10cu: goto label_3bb10c;
        case 0x3bb110u: goto label_3bb110;
        case 0x3bb114u: goto label_3bb114;
        case 0x3bb118u: goto label_3bb118;
        case 0x3bb11cu: goto label_3bb11c;
        case 0x3bb120u: goto label_3bb120;
        case 0x3bb124u: goto label_3bb124;
        case 0x3bb128u: goto label_3bb128;
        case 0x3bb12cu: goto label_3bb12c;
        case 0x3bb130u: goto label_3bb130;
        case 0x3bb134u: goto label_3bb134;
        case 0x3bb138u: goto label_3bb138;
        case 0x3bb13cu: goto label_3bb13c;
        case 0x3bb140u: goto label_3bb140;
        case 0x3bb144u: goto label_3bb144;
        case 0x3bb148u: goto label_3bb148;
        case 0x3bb14cu: goto label_3bb14c;
        case 0x3bb150u: goto label_3bb150;
        case 0x3bb154u: goto label_3bb154;
        case 0x3bb158u: goto label_3bb158;
        case 0x3bb15cu: goto label_3bb15c;
        case 0x3bb160u: goto label_3bb160;
        case 0x3bb164u: goto label_3bb164;
        case 0x3bb168u: goto label_3bb168;
        case 0x3bb16cu: goto label_3bb16c;
        case 0x3bb170u: goto label_3bb170;
        case 0x3bb174u: goto label_3bb174;
        case 0x3bb178u: goto label_3bb178;
        case 0x3bb17cu: goto label_3bb17c;
        case 0x3bb180u: goto label_3bb180;
        case 0x3bb184u: goto label_3bb184;
        case 0x3bb188u: goto label_3bb188;
        case 0x3bb18cu: goto label_3bb18c;
        case 0x3bb190u: goto label_3bb190;
        case 0x3bb194u: goto label_3bb194;
        case 0x3bb198u: goto label_3bb198;
        case 0x3bb19cu: goto label_3bb19c;
        case 0x3bb1a0u: goto label_3bb1a0;
        case 0x3bb1a4u: goto label_3bb1a4;
        case 0x3bb1a8u: goto label_3bb1a8;
        case 0x3bb1acu: goto label_3bb1ac;
        case 0x3bb1b0u: goto label_3bb1b0;
        case 0x3bb1b4u: goto label_3bb1b4;
        case 0x3bb1b8u: goto label_3bb1b8;
        case 0x3bb1bcu: goto label_3bb1bc;
        case 0x3bb1c0u: goto label_3bb1c0;
        case 0x3bb1c4u: goto label_3bb1c4;
        case 0x3bb1c8u: goto label_3bb1c8;
        case 0x3bb1ccu: goto label_3bb1cc;
        case 0x3bb1d0u: goto label_3bb1d0;
        case 0x3bb1d4u: goto label_3bb1d4;
        case 0x3bb1d8u: goto label_3bb1d8;
        case 0x3bb1dcu: goto label_3bb1dc;
        case 0x3bb1e0u: goto label_3bb1e0;
        case 0x3bb1e4u: goto label_3bb1e4;
        case 0x3bb1e8u: goto label_3bb1e8;
        case 0x3bb1ecu: goto label_3bb1ec;
        case 0x3bb1f0u: goto label_3bb1f0;
        case 0x3bb1f4u: goto label_3bb1f4;
        case 0x3bb1f8u: goto label_3bb1f8;
        case 0x3bb1fcu: goto label_3bb1fc;
        case 0x3bb200u: goto label_3bb200;
        case 0x3bb204u: goto label_3bb204;
        case 0x3bb208u: goto label_3bb208;
        case 0x3bb20cu: goto label_3bb20c;
        case 0x3bb210u: goto label_3bb210;
        case 0x3bb214u: goto label_3bb214;
        case 0x3bb218u: goto label_3bb218;
        case 0x3bb21cu: goto label_3bb21c;
        default: break;
    }

    ctx->pc = 0x3bb090u;

label_3bb090:
    // 0x3bb090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3bb094:
    // 0x3bb094: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3bb094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3bb098:
    // 0x3bb098: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3bb09c:
    // 0x3bb09c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3bb0a0:
    // 0x3bb0a0: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x3bb0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
label_3bb0a4:
    // 0x3bb0a4: 0x10a30046  beq         $a1, $v1, . + 4 + (0x46 << 2)
label_3bb0a8:
    if (ctx->pc == 0x3BB0A8u) {
        ctx->pc = 0x3BB0A8u;
            // 0x3bb0a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BB0ACu;
        goto label_3bb0ac;
    }
    ctx->pc = 0x3BB0A4u;
    {
        const bool branch_taken_0x3bb0a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BB0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB0A4u;
            // 0x3bb0a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb0a4) {
            ctx->pc = 0x3BB1C0u;
            goto label_3bb1c0;
        }
    }
    ctx->pc = 0x3BB0ACu;
label_3bb0ac:
    // 0x3bb0ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3bb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bb0b0:
    // 0x3bb0b0: 0x50a30031  beql        $a1, $v1, . + 4 + (0x31 << 2)
label_3bb0b4:
    if (ctx->pc == 0x3BB0B4u) {
        ctx->pc = 0x3BB0B4u;
            // 0x3bb0b4: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3BB0B8u;
        goto label_3bb0b8;
    }
    ctx->pc = 0x3BB0B0u;
    {
        const bool branch_taken_0x3bb0b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bb0b0) {
            ctx->pc = 0x3BB0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB0B0u;
            // 0x3bb0b4: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB178u;
            goto label_3bb178;
        }
    }
    ctx->pc = 0x3BB0B8u;
label_3bb0b8:
    // 0x3bb0b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3bb0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bb0bc:
    // 0x3bb0bc: 0x50a6001e  beql        $a1, $a2, . + 4 + (0x1E << 2)
label_3bb0c0:
    if (ctx->pc == 0x3BB0C0u) {
        ctx->pc = 0x3BB0C0u;
            // 0x3bb0c0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3BB0C4u;
        goto label_3bb0c4;
    }
    ctx->pc = 0x3BB0BCu;
    {
        const bool branch_taken_0x3bb0bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x3bb0bc) {
            ctx->pc = 0x3BB0C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB0BCu;
            // 0x3bb0c0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB138u;
            goto label_3bb138;
        }
    }
    ctx->pc = 0x3BB0C4u;
label_3bb0c4:
    // 0x3bb0c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3bb0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bb0c8:
    // 0x3bb0c8: 0x50a7000a  beql        $a1, $a3, . + 4 + (0xA << 2)
label_3bb0cc:
    if (ctx->pc == 0x3BB0CCu) {
        ctx->pc = 0x3BB0CCu;
            // 0x3bb0cc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3BB0D0u;
        goto label_3bb0d0;
    }
    ctx->pc = 0x3BB0C8u;
    {
        const bool branch_taken_0x3bb0c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x3bb0c8) {
            ctx->pc = 0x3BB0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB0C8u;
            // 0x3bb0cc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB0F4u;
            goto label_3bb0f4;
        }
    }
    ctx->pc = 0x3BB0D0u;
label_3bb0d0:
    // 0x3bb0d0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_3bb0d4:
    if (ctx->pc == 0x3BB0D4u) {
        ctx->pc = 0x3BB0D4u;
            // 0x3bb0d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3BB0D8u;
        goto label_3bb0d8;
    }
    ctx->pc = 0x3BB0D0u;
    {
        const bool branch_taken_0x3bb0d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb0d0) {
            ctx->pc = 0x3BB0D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB0D0u;
            // 0x3bb0d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB0E0u;
            goto label_3bb0e0;
        }
    }
    ctx->pc = 0x3BB0D8u;
label_3bb0d8:
    // 0x3bb0d8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_3bb0dc:
    if (ctx->pc == 0x3BB0DCu) {
        ctx->pc = 0x3BB0DCu;
            // 0x3bb0dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3BB0E0u;
        goto label_3bb0e0;
    }
    ctx->pc = 0x3BB0D8u;
    {
        const bool branch_taken_0x3bb0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB0D8u;
            // 0x3bb0dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb0d8) {
            ctx->pc = 0x3BB208u;
            goto label_3bb208;
        }
    }
    ctx->pc = 0x3BB0E0u;
label_3bb0e0:
    // 0x3bb0e0: 0x8c830d9c  lw          $v1, 0xD9C($a0)
    ctx->pc = 0x3bb0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
label_3bb0e4:
    // 0x3bb0e4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3bb0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_3bb0e8:
    // 0x3bb0e8: 0xac830d9c  sw          $v1, 0xD9C($a0)
    ctx->pc = 0x3bb0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 3));
label_3bb0ec:
    // 0x3bb0ec: 0x10000045  b           . + 4 + (0x45 << 2)
label_3bb0f0:
    if (ctx->pc == 0x3BB0F0u) {
        ctx->pc = 0x3BB0F0u;
            // 0x3bb0f0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x3BB0F4u;
        goto label_3bb0f4;
    }
    ctx->pc = 0x3BB0ECu;
    {
        const bool branch_taken_0x3bb0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB0ECu;
            // 0x3bb0f0: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb0ec) {
            ctx->pc = 0x3BB204u;
            goto label_3bb204;
        }
    }
    ctx->pc = 0x3BB0F4u;
label_3bb0f4:
    // 0x3bb0f4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x3bb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3bb0f8:
    // 0x3bb0f8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3bb0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3bb0fc:
    // 0x3bb0fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3bb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3bb100:
    // 0x3bb100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bb100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb104:
    // 0x3bb104: 0x8cc40d9c  lw          $a0, 0xD9C($a2)
    ctx->pc = 0x3bb104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3484)));
label_3bb108:
    // 0x3bb108: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3bb108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3bb10c:
    // 0x3bb10c: 0xacc30d9c  sw          $v1, 0xD9C($a2)
    ctx->pc = 0x3bb10cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3484), GPR_U32(ctx, 3));
label_3bb110:
    // 0x3bb110: 0xae070018  sw          $a3, 0x18($s0)
    ctx->pc = 0x3bb110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 7));
label_3bb114:
    // 0x3bb114: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3bb114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3bb118:
    // 0x3bb118: 0xc0f0f84  jal         func_3C3E10
label_3bb11c:
    if (ctx->pc == 0x3BB11Cu) {
        ctx->pc = 0x3BB11Cu;
            // 0x3bb11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BB120u;
        goto label_3bb120;
    }
    ctx->pc = 0x3BB118u;
    SET_GPR_U32(ctx, 31, 0x3BB120u);
    ctx->pc = 0x3BB11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB118u;
            // 0x3bb11c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB120u; }
        if (ctx->pc != 0x3BB120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB120u; }
        if (ctx->pc != 0x3BB120u) { return; }
    }
    ctx->pc = 0x3BB120u;
label_3bb120:
    // 0x3bb120: 0x8e190014  lw          $t9, 0x14($s0)
    ctx->pc = 0x3bb120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3bb124:
    // 0x3bb124: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3bb124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3bb128:
    // 0x3bb128: 0x320f809  jalr        $t9
label_3bb12c:
    if (ctx->pc == 0x3BB12Cu) {
        ctx->pc = 0x3BB12Cu;
            // 0x3bb12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3BB130u;
        goto label_3bb130;
    }
    ctx->pc = 0x3BB128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BB130u);
        ctx->pc = 0x3BB12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB128u;
            // 0x3bb12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BB130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BB130u; }
            if (ctx->pc != 0x3BB130u) { return; }
        }
        }
    }
    ctx->pc = 0x3BB130u;
label_3bb130:
    // 0x3bb130: 0x10000034  b           . + 4 + (0x34 << 2)
label_3bb134:
    if (ctx->pc == 0x3BB134u) {
        ctx->pc = 0x3BB138u;
        goto label_3bb138;
    }
    ctx->pc = 0x3BB130u;
    {
        const bool branch_taken_0x3bb130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb130) {
            ctx->pc = 0x3BB204u;
            goto label_3bb204;
        }
    }
    ctx->pc = 0x3BB138u;
label_3bb138:
    // 0x3bb138: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3bb138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3bb13c:
    // 0x3bb13c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3bb13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3bb140:
    // 0x3bb140: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3bb140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3bb144:
    // 0x3bb144: 0x8ca40d9c  lw          $a0, 0xD9C($a1)
    ctx->pc = 0x3bb144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3484)));
label_3bb148:
    // 0x3bb148: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3bb148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3bb14c:
    // 0x3bb14c: 0xaca30d9c  sw          $v1, 0xD9C($a1)
    ctx->pc = 0x3bb14cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3484), GPR_U32(ctx, 3));
label_3bb150:
    // 0x3bb150: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x3bb150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
label_3bb154:
    // 0x3bb154: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3bb154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3bb158:
    // 0x3bb158: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x3bb158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_3bb15c:
    // 0x3bb15c: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x3bb15cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3bb160:
    // 0x3bb160: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3bb160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3bb164:
    // 0x3bb164: 0x320f809  jalr        $t9
label_3bb168:
    if (ctx->pc == 0x3BB168u) {
        ctx->pc = 0x3BB16Cu;
        goto label_3bb16c;
    }
    ctx->pc = 0x3BB164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BB16Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BB16Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BB16Cu; }
            if (ctx->pc != 0x3BB16Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3BB16Cu;
label_3bb16c:
    // 0x3bb16c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x3bb16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bb170:
    // 0x3bb170: 0x10000024  b           . + 4 + (0x24 << 2)
label_3bb174:
    if (ctx->pc == 0x3BB174u) {
        ctx->pc = 0x3BB174u;
            // 0x3bb174: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->pc = 0x3BB178u;
        goto label_3bb178;
    }
    ctx->pc = 0x3BB170u;
    {
        const bool branch_taken_0x3bb170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB170u;
            // 0x3bb174: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb170) {
            ctx->pc = 0x3BB204u;
            goto label_3bb204;
        }
    }
    ctx->pc = 0x3BB178u;
label_3bb178:
    // 0x3bb178: 0x64030008  daddiu      $v1, $zero, 0x8
    ctx->pc = 0x3bb178u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_3bb17c:
    // 0x3bb17c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x3bb17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3bb180:
    // 0x3bb180: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3bb180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bb184:
    // 0x3bb184: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3bb184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3bb188:
    // 0x3bb188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bb188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bb18c:
    // 0x3bb18c: 0x8ce60d9c  lw          $a2, 0xD9C($a3)
    ctx->pc = 0x3bb18cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3484)));
label_3bb190:
    // 0x3bb190: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3bb190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_3bb194:
    // 0x3bb194: 0xace50d9c  sw          $a1, 0xD9C($a3)
    ctx->pc = 0x3bb194u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 3484), GPR_U32(ctx, 5));
label_3bb198:
    // 0x3bb198: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x3bb198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_3bb19c:
    // 0x3bb19c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3bb19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3bb1a0:
    // 0x3bb1a0: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x3bb1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
label_3bb1a4:
    // 0x3bb1a4: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x3bb1a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3bb1a8:
    // 0x3bb1a8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3bb1a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3bb1ac:
    // 0x3bb1ac: 0x320f809  jalr        $t9
label_3bb1b0:
    if (ctx->pc == 0x3BB1B0u) {
        ctx->pc = 0x3BB1B4u;
        goto label_3bb1b4;
    }
    ctx->pc = 0x3BB1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BB1B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BB1B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BB1B4u; }
            if (ctx->pc != 0x3BB1B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3BB1B4u;
label_3bb1b4:
    // 0x3bb1b4: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x3bb1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bb1b8:
    // 0x3bb1b8: 0x10000012  b           . + 4 + (0x12 << 2)
label_3bb1bc:
    if (ctx->pc == 0x3BB1BCu) {
        ctx->pc = 0x3BB1BCu;
            // 0x3bb1bc: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->pc = 0x3BB1C0u;
        goto label_3bb1c0;
    }
    ctx->pc = 0x3BB1B8u;
    {
        const bool branch_taken_0x3bb1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB1B8u;
            // 0x3bb1bc: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb1b8) {
            ctx->pc = 0x3BB204u;
            goto label_3bb204;
        }
    }
    ctx->pc = 0x3BB1C0u;
label_3bb1c0:
    // 0x3bb1c0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3bb1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3bb1c4:
    // 0x3bb1c4: 0x64020008  daddiu      $v0, $zero, 0x8
    ctx->pc = 0x3bb1c4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_3bb1c8:
    // 0x3bb1c8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x3bb1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3bb1cc:
    // 0x3bb1cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bb1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bb1d0:
    // 0x3bb1d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3bb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3bb1d4:
    // 0x3bb1d4: 0x8cc50d9c  lw          $a1, 0xD9C($a2)
    ctx->pc = 0x3bb1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3484)));
label_3bb1d8:
    // 0x3bb1d8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3bb1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_3bb1dc:
    // 0x3bb1dc: 0xacc40d9c  sw          $a0, 0xD9C($a2)
    ctx->pc = 0x3bb1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3484), GPR_U32(ctx, 4));
label_3bb1e0:
    // 0x3bb1e0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3bb1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_3bb1e4:
    // 0x3bb1e4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3bb1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3bb1e8:
    // 0x3bb1e8: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x3bb1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_3bb1ec:
    // 0x3bb1ec: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x3bb1ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3bb1f0:
    // 0x3bb1f0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3bb1f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3bb1f4:
    // 0x3bb1f4: 0x320f809  jalr        $t9
label_3bb1f8:
    if (ctx->pc == 0x3BB1F8u) {
        ctx->pc = 0x3BB1FCu;
        goto label_3bb1fc;
    }
    ctx->pc = 0x3BB1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BB1FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3BB1FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3BB1FCu; }
            if (ctx->pc != 0x3BB1FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3BB1FCu;
label_3bb1fc:
    // 0x3bb1fc: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x3bb1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bb200:
    // 0x3bb200: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x3bb200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_3bb204:
    // 0x3bb204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3bb208:
    // 0x3bb208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3bb20c:
    // 0x3bb20c: 0x3e00008  jr          $ra
label_3bb210:
    if (ctx->pc == 0x3BB210u) {
        ctx->pc = 0x3BB210u;
            // 0x3bb210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3BB214u;
        goto label_3bb214;
    }
    ctx->pc = 0x3BB20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB20Cu;
            // 0x3bb210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BB214u;
label_3bb214:
    // 0x3bb214: 0x0  nop
    ctx->pc = 0x3bb214u;
    // NOP
label_3bb218:
    // 0x3bb218: 0x0  nop
    ctx->pc = 0x3bb218u;
    // NOP
label_3bb21c:
    // 0x3bb21c: 0x0  nop
    ctx->pc = 0x3bb21cu;
    // NOP
}
