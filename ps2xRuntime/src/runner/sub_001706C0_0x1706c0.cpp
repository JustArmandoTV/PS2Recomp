#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001706C0
// Address: 0x1706c0 - 0x1707a0
void sub_001706C0_0x1706c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001706C0_0x1706c0");
#endif

    switch (ctx->pc) {
        case 0x170730u: goto label_170730;
        case 0x170788u: goto label_170788;
        default: break;
    }

    ctx->pc = 0x1706c0u;

    // 0x1706c0: 0x3c0d005e  lui         $t5, 0x5E
    ctx->pc = 0x1706c0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)94 << 16));
    // 0x1706c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1706c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1706c8: 0x8da92e68  lw          $t1, 0x2E68($t5)
    ctx->pc = 0x1706c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 11880)));
    // 0x1706cc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1706ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1706d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1706d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1706d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1706d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1706dc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1706dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706e0: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x1706e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706e4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1706e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706e8: 0x1920001f  blez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1706E8u;
    {
        const bool branch_taken_0x1706e8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1706ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1706E8u;
            // 0x1706ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706e8) {
            ctx->pc = 0x170768u;
            goto label_170768;
        }
    }
    ctx->pc = 0x1706F0u;
    // 0x1706f0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1706f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1706f4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1706f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1706f8: 0x24472e64  addiu       $a3, $v0, 0x2E64
    ctx->pc = 0x1706f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 11876));
    // 0x1706fc: 0x24842e80  addiu       $a0, $a0, 0x2E80
    ctx->pc = 0x1706fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11904));
    // 0x170700: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x170700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x170704: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17070c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17070cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170714: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x170714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x170718: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x170718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17071c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x17071cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170720: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x170720u;
    {
        const bool branch_taken_0x170720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170720u;
            // 0x170724: 0x8da32e68  lw          $v1, 0x2E68($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 11880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170720) {
            ctx->pc = 0x17076Cu;
            goto label_17076c;
        }
    }
    ctx->pc = 0x170728u;
    // 0x170728: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x170728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17072c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17072cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_170730:
    // 0x170730: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x170730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x170734: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x170734u;
    {
        const bool branch_taken_0x170734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170734u;
            // 0x170738: 0x8da32e68  lw          $v1, 0x2E68($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 11880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170734) {
            ctx->pc = 0x17076Cu;
            goto label_17076c;
        }
    }
    ctx->pc = 0x17073Cu;
    // 0x17073c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x17073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x170740: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x170740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x170744: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x170744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x170748: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17074c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17074cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x170750: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170754: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x170754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x170758: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x170758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17075c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x17075cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170760: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x170760u;
    {
        const bool branch_taken_0x170760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170760) {
            ctx->pc = 0x170764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x170760u;
            // 0x170764: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_170730;
        }
    }
    ctx->pc = 0x170768u;
label_170768:
    // 0x170768: 0x8da32e68  lw          $v1, 0x2E68($t5)
    ctx->pc = 0x170768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 11880)));
label_17076c:
    // 0x17076c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17076Cu;
    {
        const bool branch_taken_0x17076c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x170770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17076Cu;
            // 0x170770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17076c) {
            ctx->pc = 0x170790u;
            goto label_170790;
        }
    }
    ctx->pc = 0x170774u;
    // 0x170774: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x170774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170778: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x170778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17077c: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x17077cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170780: 0xc05c134  jal         func_1704D0
    ctx->pc = 0x170780u;
    SET_GPR_U32(ctx, 31, 0x170788u);
    ctx->pc = 0x170784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170780u;
            // 0x170784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1704D0u;
    if (runtime->hasFunction(0x1704D0u)) {
        auto targetFn = runtime->lookupFunction(0x1704D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170788u; }
        if (ctx->pc != 0x170788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001704D0_0x1704d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170788u; }
        if (ctx->pc != 0x170788u) { return; }
    }
    ctx->pc = 0x170788u;
label_170788:
    // 0x170788: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x170788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x17078c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17078cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170790:
    // 0x170790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170794: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170798: 0x3e00008  jr          $ra
    ctx->pc = 0x170798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17079Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170798u;
            // 0x17079c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1707A0u;
}
