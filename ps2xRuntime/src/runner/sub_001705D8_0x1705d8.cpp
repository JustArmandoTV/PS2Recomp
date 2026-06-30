#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001705D8
// Address: 0x1705d8 - 0x1706c0
void sub_001705D8_0x1705d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001705D8_0x1705d8");
#endif

    switch (ctx->pc) {
        case 0x170648u: goto label_170648;
        case 0x1706a0u: goto label_1706a0;
        default: break;
    }

    ctx->pc = 0x1705d8u;

    // 0x1705d8: 0x3c0d005e  lui         $t5, 0x5E
    ctx->pc = 0x1705d8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)94 << 16));
    // 0x1705dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1705dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1705e0: 0x8da92e60  lw          $t1, 0x2E60($t5)
    ctx->pc = 0x1705e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 11872)));
    // 0x1705e4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1705e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1705e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1705ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1705ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1705f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1705f4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1705f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705f8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x1705f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1705fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1705fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170600: 0x1920001f  blez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x170600u;
    {
        const bool branch_taken_0x170600 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x170604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170600u;
            // 0x170604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170600) {
            ctx->pc = 0x170680u;
            goto label_170680;
        }
    }
    ctx->pc = 0x170608u;
    // 0x170608: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x170608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17060c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17060cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x170610: 0x24472e5c  addiu       $a3, $v0, 0x2E5C
    ctx->pc = 0x170610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 11868));
    // 0x170614: 0x24842e80  addiu       $a0, $a0, 0x2E80
    ctx->pc = 0x170614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11904));
    // 0x170618: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x170618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17061c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17061cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170624: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x170624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17062c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17062cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x170630: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x170630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170634: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x170634u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170638: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x170638u;
    {
        const bool branch_taken_0x170638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17063Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170638u;
            // 0x17063c: 0x8da32e60  lw          $v1, 0x2E60($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 11872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170638) {
            ctx->pc = 0x170684u;
            goto label_170684;
        }
    }
    ctx->pc = 0x170640u;
    // 0x170640: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x170640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170644: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x170644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_170648:
    // 0x170648: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x170648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17064c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x17064Cu;
    {
        const bool branch_taken_0x17064c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17064Cu;
            // 0x170650: 0x8da32e60  lw          $v1, 0x2E60($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 11872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17064c) {
            ctx->pc = 0x170684u;
            goto label_170684;
        }
    }
    ctx->pc = 0x170654u;
    // 0x170654: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x170654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x170658: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x170658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17065c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x17065cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x170660: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170664: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x170668: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17066c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x17066cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x170670: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x170670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170674: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x170674u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170678: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x170678u;
    {
        const bool branch_taken_0x170678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170678) {
            ctx->pc = 0x17067Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170678u;
            // 0x17067c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_170648;
        }
    }
    ctx->pc = 0x170680u;
label_170680:
    // 0x170680: 0x8da32e60  lw          $v1, 0x2E60($t5)
    ctx->pc = 0x170680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 11872)));
label_170684:
    // 0x170684: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x170684u;
    {
        const bool branch_taken_0x170684 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x170688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170684u;
            // 0x170688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170684) {
            ctx->pc = 0x1706ACu;
            goto label_1706ac;
        }
    }
    ctx->pc = 0x17068Cu;
    // 0x17068c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x17068cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170690: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x170690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170694: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x170694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170698: 0xc05c134  jal         func_1704D0
    ctx->pc = 0x170698u;
    SET_GPR_U32(ctx, 31, 0x1706A0u);
    ctx->pc = 0x17069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170698u;
            // 0x17069c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1704D0u;
    if (runtime->hasFunction(0x1704D0u)) {
        auto targetFn = runtime->lookupFunction(0x1704D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1706A0u; }
        if (ctx->pc != 0x1706A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001704D0_0x1704d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1706A0u; }
        if (ctx->pc != 0x1706A0u) { return; }
    }
    ctx->pc = 0x1706A0u;
label_1706a0:
    // 0x1706a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1706a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1706a4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x1706a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1706a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1706a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1706ac:
    // 0x1706ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1706acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1706b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1706b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1706b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1706B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1706B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1706B4u;
            // 0x1706b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1706BCu;
    // 0x1706bc: 0x0  nop
    ctx->pc = 0x1706bcu;
    // NOP
}
