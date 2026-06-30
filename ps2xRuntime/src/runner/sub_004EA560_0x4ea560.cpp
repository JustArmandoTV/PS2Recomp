#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EA560
// Address: 0x4ea560 - 0x4ea5f0
void sub_004EA560_0x4ea560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA560_0x4ea560");
#endif

    switch (ctx->pc) {
        case 0x4ea5c4u: goto label_4ea5c4;
        default: break;
    }

    ctx->pc = 0x4ea560u;

    // 0x4ea560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ea560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ea564: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ea564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4ea568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ea568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ea56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ea56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ea570: 0x8c630e68  lw          $v1, 0xE68($v1)
    ctx->pc = 0x4ea570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3688)));
    // 0x4ea574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ea574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea578: 0x90840196  lbu         $a0, 0x196($a0)
    ctx->pc = 0x4ea578u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 406)));
    // 0x4ea57c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x4ea57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4ea580: 0x18800014  blez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4EA580u;
    {
        const bool branch_taken_0x4ea580 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x4EA584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA580u;
            // 0x4ea584: 0x8c650030  lw          $a1, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea580) {
            ctx->pc = 0x4EA5D4u;
            goto label_4ea5d4;
        }
    }
    ctx->pc = 0x4EA588u;
    // 0x4ea588: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x4ea588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4ea58c: 0xa2030196  sb          $v1, 0x196($s0)
    ctx->pc = 0x4ea58cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 406), (uint8_t)GPR_U32(ctx, 3));
    // 0x4ea590: 0x92040196  lbu         $a0, 0x196($s0)
    ctx->pc = 0x4ea590u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
    // 0x4ea594: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4EA594u;
    {
        const bool branch_taken_0x4ea594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea594) {
            ctx->pc = 0x4EA598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA594u;
            // 0x4ea598: 0x92030196  lbu         $v1, 0x196($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA5C8u;
            goto label_4ea5c8;
        }
    }
    ctx->pc = 0x4EA59Cu;
    // 0x4ea59c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x4ea59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4ea5a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ea5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ea5a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ea5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ea5a8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x4ea5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x4ea5ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ea5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4ea5b0: 0x27a6002e  addiu       $a2, $sp, 0x2E
    ctx->pc = 0x4ea5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
    // 0x4ea5b4: 0x94420148  lhu         $v0, 0x148($v0)
    ctx->pc = 0x4ea5b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x4ea5b8: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x4ea5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x4ea5bc: 0xc0ee610  jal         func_3B9840
    ctx->pc = 0x4EA5BCu;
    SET_GPR_U32(ctx, 31, 0x4EA5C4u);
    ctx->pc = 0x4EA5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA5BCu;
            // 0x4ea5c0: 0xa7a2002e  sh          $v0, 0x2E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9840u;
    if (runtime->hasFunction(0x3B9840u)) {
        auto targetFn = runtime->lookupFunction(0x3B9840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA5C4u; }
        if (ctx->pc != 0x4EA5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9840_0x3b9840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA5C4u; }
        if (ctx->pc != 0x4EA5C4u) { return; }
    }
    ctx->pc = 0x4EA5C4u;
label_4ea5c4:
    // 0x4ea5c4: 0x92030196  lbu         $v1, 0x196($s0)
    ctx->pc = 0x4ea5c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4ea5c8:
    // 0x4ea5c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ea5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ea5cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4ea5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4ea5d0: 0xa4600148  sh          $zero, 0x148($v1)
    ctx->pc = 0x4ea5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 0));
label_4ea5d4:
    // 0x4ea5d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ea5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ea5d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ea5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4EA5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA5DCu;
            // 0x4ea5e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EA5E4u;
    // 0x4ea5e4: 0x0  nop
    ctx->pc = 0x4ea5e4u;
    // NOP
    // 0x4ea5e8: 0x0  nop
    ctx->pc = 0x4ea5e8u;
    // NOP
    // 0x4ea5ec: 0x0  nop
    ctx->pc = 0x4ea5ecu;
    // NOP
}
