#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00165520
// Address: 0x165520 - 0x1655e0
void sub_00165520_0x165520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165520_0x165520");
#endif

    switch (ctx->pc) {
        case 0x165528u: goto label_165528;
        case 0x165550u: goto label_165550;
        case 0x165588u: goto label_165588;
        case 0x1655c0u: goto label_1655c0;
        default: break;
    }

    ctx->pc = 0x165520u;

label_165520:
    // 0x165520: 0x18c00008  blez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x165520u;
    {
        const bool branch_taken_0x165520 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x165520) {
            ctx->pc = 0x165544u;
            goto label_165544;
        }
    }
    ctx->pc = 0x165528u;
label_165528:
    // 0x165528: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x165528u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16552c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x16552cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x165530: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x165530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x165534: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x165534u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x165538: 0x0  nop
    ctx->pc = 0x165538u;
    // NOP
    // 0x16553c: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16553Cu;
    {
        const bool branch_taken_0x16553c = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x165540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16553Cu;
            // 0x165540: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16553c) {
            ctx->pc = 0x165528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165528;
        }
    }
    ctx->pc = 0x165544u;
label_165544:
    // 0x165544: 0x3e00008  jr          $ra
    ctx->pc = 0x165544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16554Cu;
    // 0x16554c: 0x0  nop
    ctx->pc = 0x16554cu;
    // NOP
label_165550:
    // 0x165550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165558: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x165558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16555c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165564: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x165564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x165568: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x165568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16556c: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x16556cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x165570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165574: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x165574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x165578: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x165578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16557c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165580: 0xc059548  jal         func_165520
    ctx->pc = 0x165580u;
    SET_GPR_U32(ctx, 31, 0x165588u);
    ctx->pc = 0x165584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165580u;
            // 0x165584: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165520u;
    goto label_165520;
    ctx->pc = 0x165588u;
label_165588:
    // 0x165588: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x165588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x16558c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x16558cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x165590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165594: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x165594u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x165598: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x165598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x16559c: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x16559cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1655a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1655a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1655a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1655a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1655a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1655ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1655acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1655b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1655b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1655b4: 0x8059548  j           func_165520
    ctx->pc = 0x1655B4u;
    ctx->pc = 0x1655B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1655B4u;
            // 0x1655b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165520u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_165520;
    ctx->pc = 0x1655BCu;
    // 0x1655bc: 0x0  nop
    ctx->pc = 0x1655bcu;
    // NOP
label_1655c0:
    // 0x1655c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1655c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1655c4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1655c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1655c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1655c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1655cc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1655ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655d0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1655d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1655d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1655d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1655d8: 0x8059548  j           func_165520
    ctx->pc = 0x1655D8u;
    ctx->pc = 0x1655DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1655D8u;
            // 0x1655dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165520u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_165520;
    ctx->pc = 0x1655E0u;
}
