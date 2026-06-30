#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001245A8
// Address: 0x1245a8 - 0x124ca0
void sub_001245A8_0x1245a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001245A8_0x1245a8");
#endif

    switch (ctx->pc) {
        case 0x124600u: goto label_124600;
        case 0x124708u: goto label_124708;
        case 0x1247acu: goto label_1247ac;
        case 0x1247e4u: goto label_1247e4;
        case 0x1248d4u: goto label_1248d4;
        case 0x124a24u: goto label_124a24;
        case 0x124c08u: goto label_124c08;
        default: break;
    }

    ctx->pc = 0x1245a8u;

    // 0x1245a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1245a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1245ac: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x1245acu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1245b0: 0x4c83c  dsll32      $t9, $a0, 0
    ctx->pc = 0x1245b0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1245b4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1245b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1245b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1245b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1245bc: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x1245bcu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1245c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1245c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1245c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1245c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1245c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1245cc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1245ccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1245d0: 0x15200107  bnez        $t1, . + 4 + (0x107 << 2)
    ctx->pc = 0x1245D0u;
    {
        const bool branch_taken_0x1245d0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1245D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1245D0u;
            // 0x1245d4: 0x19c83f  dsra32      $t9, $t9, 0 (Delay Slot)
        SET_GPR_S64(ctx, 25, GPR_S64(ctx, 25) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245d0) {
            ctx->pc = 0x1249F0u;
            goto label_1249f0;
        }
    }
    ctx->pc = 0x1245D8u;
    // 0x1245d8: 0x145782b  sltu        $t7, $t2, $a1
    ctx->pc = 0x1245d8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1245dc: 0x11e00064  beqz        $t7, . + 4 + (0x64 << 2)
    ctx->pc = 0x1245DCu;
    {
        const bool branch_taken_0x1245dc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1245DCu;
            // 0x1245e0: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245dc) {
            ctx->pc = 0x124770u;
            goto label_124770;
        }
    }
    ctx->pc = 0x1245E4u;
    // 0x1245e4: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x1245e4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1245e8: 0x15e00059  bnez        $t7, . + 4 + (0x59 << 2)
    ctx->pc = 0x1245E8u;
    {
        const bool branch_taken_0x1245e8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1245ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1245E8u;
            // 0x1245ec: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245e8) {
            ctx->pc = 0x124750u;
            goto label_124750;
        }
    }
    ctx->pc = 0x1245F0u;
    // 0x1245f0: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x1245f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1245f4: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x1245f4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1245f8: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x1245f8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1245fc: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x1245fcu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_124600:
    // 0x124600: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x124600u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x124604: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x124604u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x124608: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x124608u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x12460c: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x12460cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x124610: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x124610u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x124614: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x124614u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x124618: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x124618u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x12461c: 0x16d3823  subu        $a3, $t3, $t5
    ctx->pc = 0x12461cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x124620: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x124620u;
    {
        const bool branch_taken_0x124620 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x124624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124620u;
            // 0x124624: 0x56402  srl         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124620) {
            ctx->pc = 0x124644u;
            goto label_124644;
        }
    }
    ctx->pc = 0x124628u;
    // 0x124628: 0x1677823  subu        $t7, $t3, $a3
    ctx->pc = 0x124628u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x12462c: 0xea7004  sllv        $t6, $t2, $a3
    ctx->pc = 0x12462cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x124630: 0x1f97806  srlv        $t7, $t9, $t7
    ctx->pc = 0x124630u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
    // 0x124634: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x124634u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x124638: 0x1cf5025  or          $t2, $t6, $t7
    ctx->pc = 0x124638u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12463c: 0xf9c804  sllv        $t9, $t9, $a3
    ctx->pc = 0x12463cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 7) & 0x1F));
    // 0x124640: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x124640u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_124644:
    // 0x124644: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x124644u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x124648: 0x14c001b  divu        $zero, $t2, $t4
    ctx->pc = 0x124648u;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x12464c: 0x196c02  srl         $t5, $t9, 16
    ctx->pc = 0x12464cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 25), 16));
    // 0x124650: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124650u;
    {
        const bool branch_taken_0x124650 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x124650) {
            ctx->pc = 0x124654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124650u;
            // 0x124654: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124658u;
            goto label_124658;
        }
    }
    ctx->pc = 0x124658u;
label_124658:
    // 0x124658: 0x7812  mflo        $t7
    ctx->pc = 0x124658u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x12465c: 0x7010  mfhi        $t6
    ctx->pc = 0x12465cu;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124660: 0x4812  mflo        $t1
    ctx->pc = 0x124660u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x124664: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124664u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124668: 0x1e85018  mult        $t2, $t7, $t0
    ctx->pc = 0x124668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x12466c: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x12466cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124670: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x124670u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x124674: 0x51e0000b  beql        $t7, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x124674u;
    {
        const bool branch_taken_0x124674 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124674) {
            ctx->pc = 0x124678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124674u;
            // 0x124678: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1246A4u;
            goto label_1246a4;
        }
    }
    ctx->pc = 0x12467Cu;
    // 0x12467c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12467cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x124680: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x124680u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124684: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x124684u;
    {
        const bool branch_taken_0x124684 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124684u;
            // 0x124688: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124684) {
            ctx->pc = 0x1246A0u;
            goto label_1246a0;
        }
    }
    ctx->pc = 0x12468Cu;
    // 0x12468c: 0x1ca782b  sltu        $t7, $t6, $t2
    ctx->pc = 0x12468cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x124690: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x124690u;
    {
        const bool branch_taken_0x124690 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124690) {
            ctx->pc = 0x124694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124690u;
            // 0x124694: 0x1ca7023  subu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1246A4u;
            goto label_1246a4;
        }
    }
    ctx->pc = 0x124698u;
    // 0x124698: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x124698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x12469c: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12469cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
label_1246a0:
    // 0x1246a0: 0x1ca7023  subu        $t6, $t6, $t2
    ctx->pc = 0x1246a0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
label_1246a4:
    // 0x1246a4: 0x332dffff  andi        $t5, $t9, 0xFFFF
    ctx->pc = 0x1246a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)65535);
    // 0x1246a8: 0x1cc001b  divu        $zero, $t6, $t4
    ctx->pc = 0x1246a8u;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x1246ac: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1246ACu;
    {
        const bool branch_taken_0x1246ac = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1246ac) {
            ctx->pc = 0x1246B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1246ACu;
            // 0x1246b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1246B4u;
            goto label_1246b4;
        }
    }
    ctx->pc = 0x1246B4u;
label_1246b4:
    // 0x1246b4: 0x7812  mflo        $t7
    ctx->pc = 0x1246b4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x1246b8: 0x7010  mfhi        $t6
    ctx->pc = 0x1246b8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1246bc: 0x5812  mflo        $t3
    ctx->pc = 0x1246bcu;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x1246c0: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x1246c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1246c4: 0x1e85018  mult        $t2, $t7, $t0
    ctx->pc = 0x1246c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1246c8: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x1246c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x1246cc: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x1246ccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1246d0: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1246D0u;
    {
        const bool branch_taken_0x1246d0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1246D0u;
            // 0x1246d4: 0x97c00  sll         $t7, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246d0) {
            ctx->pc = 0x1246FCu;
            goto label_1246fc;
        }
    }
    ctx->pc = 0x1246D8u;
    // 0x1246d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1246d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1246dc: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x1246dcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1246e0: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1246E0u;
    {
        const bool branch_taken_0x1246e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1246E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1246E0u;
            // 0x1246e4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246e0) {
            ctx->pc = 0x1246F8u;
            goto label_1246f8;
        }
    }
    ctx->pc = 0x1246E8u;
    // 0x1246e8: 0x8a782b  sltu        $t7, $a0, $t2
    ctx->pc = 0x1246e8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1246ec: 0x256effff  addiu       $t6, $t3, -0x1
    ctx->pc = 0x1246ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1246f0: 0x39ef0000  xori        $t7, $t7, 0x0
    ctx->pc = 0x1246f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)0);
    // 0x1246f4: 0x1cf580b  movn        $t3, $t6, $t7
    ctx->pc = 0x1246f4u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 14));
label_1246f8:
    // 0x1246f8: 0x97c00  sll         $t7, $t1, 16
    ctx->pc = 0x1246f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_1246fc:
    // 0x1246fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1246fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124700: 0x1eb4025  or          $t0, $t7, $t3
    ctx->pc = 0x124700u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x124704: 0x0  nop
    ctx->pc = 0x124704u;
    // NOP
label_124708:
    // 0x124708: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x124708u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12470c: 0x8703c  dsll32      $t6, $t0, 0
    ctx->pc = 0x12470cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) << (32 + 0));
    // 0x124710: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x124710u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x124714: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x124714u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x124718: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x124718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x12471c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12471cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124720: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x124720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x124724: 0x9783c  dsll32      $t7, $t1, 0
    ctx->pc = 0x124724u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) << (32 + 0));
    // 0x124728: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x124728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12472c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12472cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x124730: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x124730u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x124734: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x124734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x124738: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x124738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x12473c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12473cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124744: 0x3e00008  jr          $ra
    ctx->pc = 0x124744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124744u;
            // 0x124748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12474Cu;
    // 0x12474c: 0x0  nop
    ctx->pc = 0x12474cu;
    // NOP
label_124750:
    // 0x124750: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x124750u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x124754: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x124754u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x124758: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x124758u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12475c: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x12475cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124760: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x124760u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124764: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
    ctx->pc = 0x124764u;
    {
        const bool branch_taken_0x124764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124764u;
            // 0x124768: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124764) {
            ctx->pc = 0x124600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124600;
        }
    }
    ctx->pc = 0x12476Cu;
    // 0x12476c: 0x0  nop
    ctx->pc = 0x12476cu;
    // NOP
label_124770:
    // 0x124770: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x124770u;
    {
        const bool branch_taken_0x124770 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x124774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124770u;
            // 0x124774: 0x1e5782b  sltu        $t7, $t7, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124770) {
            ctx->pc = 0x124794u;
            goto label_124794;
        }
    }
    ctx->pc = 0x124778u;
    // 0x124778: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x124778u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12477c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12477Cu;
    {
        const bool branch_taken_0x12477c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12477c) {
            ctx->pc = 0x124780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12477Cu;
            // 0x124780: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124784u;
            goto label_124784;
        }
    }
    ctx->pc = 0x124784u;
label_124784:
    // 0x124784: 0x1f2001b  divu        $zero, $t7, $s2
    ctx->pc = 0x124784u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x124788: 0x2812  mflo        $a1
    ctx->pc = 0x124788u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x12478c: 0x340fffff  ori         $t7, $zero, 0xFFFF
    ctx->pc = 0x12478cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x124790: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x124790u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_124794:
    // 0x124794: 0x15e0008e  bnez        $t7, . + 4 + (0x8E << 2)
    ctx->pc = 0x124794u;
    {
        const bool branch_taken_0x124794 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124794u;
            // 0x124798: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124794) {
            ctx->pc = 0x1249D0u;
            goto label_1249d0;
        }
    }
    ctx->pc = 0x12479Cu;
    // 0x12479c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x12479cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1247a0: 0x2cae0100  sltiu       $t6, $a1, 0x100
    ctx->pc = 0x1247a0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1247a4: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x1247a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247a8: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x1247a8u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_1247ac:
    // 0x1247ac: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x1247acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x1247b0: 0x1857806  srlv        $t7, $a1, $t4
    ctx->pc = 0x1247b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 12) & 0x1F));
    // 0x1247b4: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x1247b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x1247b8: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x1247b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1247bc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1247bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1247c0: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x1247c0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1247c4: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1247c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1247c8: 0x16d3823  subu        $a3, $t3, $t5
    ctx->pc = 0x1247c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x1247cc: 0x14e00044  bnez        $a3, . + 4 + (0x44 << 2)
    ctx->pc = 0x1247CCu;
    {
        const bool branch_taken_0x1247cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1247D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1247CCu;
            // 0x1247d0: 0x1678023  subu        $s0, $t3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247cc) {
            ctx->pc = 0x1248E0u;
            goto label_1248e0;
        }
    }
    ctx->pc = 0x1247D4u;
    // 0x1247d4: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x1247d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1247d8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1247d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1247dc: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x1247dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1247e0: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x1247e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1247e4:
    // 0x1247e4: 0x14b001b  divu        $zero, $t2, $t3
    ctx->pc = 0x1247e4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1247e8: 0x196c02  srl         $t5, $t9, 16
    ctx->pc = 0x1247e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 25), 16));
    // 0x1247ec: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1247ECu;
    {
        const bool branch_taken_0x1247ec = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x1247ec) {
            ctx->pc = 0x1247F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1247ECu;
            // 0x1247f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1247F4u;
            goto label_1247f4;
        }
    }
    ctx->pc = 0x1247F4u;
label_1247f4:
    // 0x1247f4: 0x7812  mflo        $t7
    ctx->pc = 0x1247f4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x1247f8: 0x7010  mfhi        $t6
    ctx->pc = 0x1247f8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x1247fc: 0x5012  mflo        $t2
    ctx->pc = 0x1247fcu;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x124800: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124800u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124804: 0x1e46018  mult        $t4, $t7, $a0
    ctx->pc = 0x124804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x124808: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x124808u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12480c: 0x1cc782b  sltu        $t7, $t6, $t4
    ctx->pc = 0x12480cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x124810: 0x51e0000c  beql        $t7, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x124810u;
    {
        const bool branch_taken_0x124810 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124810) {
            ctx->pc = 0x124814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124810u;
            // 0x124814: 0x1cc7023  subu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124844u;
            goto label_124844;
        }
    }
    ctx->pc = 0x124818u;
    // 0x124818: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x124818u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12481c: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12481cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124820: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x124820u;
    {
        const bool branch_taken_0x124820 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124820u;
            // 0x124824: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124820) {
            ctx->pc = 0x124840u;
            goto label_124840;
        }
    }
    ctx->pc = 0x124828u;
    // 0x124828: 0x1cc782b  sltu        $t7, $t6, $t4
    ctx->pc = 0x124828u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x12482c: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12482Cu;
    {
        const bool branch_taken_0x12482c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12482c) {
            ctx->pc = 0x124830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12482Cu;
            // 0x124830: 0x1cc7023  subu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124844u;
            goto label_124844;
        }
    }
    ctx->pc = 0x124834u;
    // 0x124834: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x124834u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x124838: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x124838u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12483c: 0x0  nop
    ctx->pc = 0x12483cu;
    // NOP
label_124840:
    // 0x124840: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x124840u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_124844:
    // 0x124844: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124844u;
    {
        const bool branch_taken_0x124844 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x124844) {
            ctx->pc = 0x124848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124844u;
            // 0x124848: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12484Cu;
            goto label_12484c;
        }
    }
    ctx->pc = 0x12484Cu;
label_12484c:
    // 0x12484c: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x12484cu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x124850: 0x332dffff  andi        $t5, $t9, 0xFFFF
    ctx->pc = 0x124850u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)65535);
    // 0x124854: 0x7812  mflo        $t7
    ctx->pc = 0x124854u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124858: 0x7010  mfhi        $t6
    ctx->pc = 0x124858u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12485c: 0x5812  mflo        $t3
    ctx->pc = 0x12485cu;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x124860: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124860u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124864: 0x1e46018  mult        $t4, $t7, $a0
    ctx->pc = 0x124864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x124868: 0x1cd2025  or          $a0, $t6, $t5
    ctx->pc = 0x124868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12486c: 0x8c782b  sltu        $t7, $a0, $t4
    ctx->pc = 0x12486cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x124870: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x124870u;
    {
        const bool branch_taken_0x124870 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124870u;
            // 0x124874: 0xa7c00  sll         $t7, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124870) {
            ctx->pc = 0x1248A4u;
            goto label_1248a4;
        }
    }
    ctx->pc = 0x124878u;
    // 0x124878: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x124878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12487c: 0x85782b  sltu        $t7, $a0, $a1
    ctx->pc = 0x12487cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124880: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x124880u;
    {
        const bool branch_taken_0x124880 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124880u;
            // 0x124884: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124880) {
            ctx->pc = 0x1248A0u;
            goto label_1248a0;
        }
    }
    ctx->pc = 0x124888u;
    // 0x124888: 0x8c782b  sltu        $t7, $a0, $t4
    ctx->pc = 0x124888u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x12488c: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12488Cu;
    {
        const bool branch_taken_0x12488c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12488Cu;
            // 0x124890: 0xa7c00  sll         $t7, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12488c) {
            ctx->pc = 0x1248A4u;
            goto label_1248a4;
        }
    }
    ctx->pc = 0x124894u;
    // 0x124894: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x124894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x124898: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x124898u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x12489c: 0x0  nop
    ctx->pc = 0x12489cu;
    // NOP
label_1248a0:
    // 0x1248a0: 0xa7c00  sll         $t7, $t2, 16
    ctx->pc = 0x1248a0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_1248a4:
    // 0x1248a4: 0x8cc823  subu        $t9, $a0, $t4
    ctx->pc = 0x1248a4u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1248a8: 0x1240ff97  beqz        $s2, . + 4 + (-0x69 << 2)
    ctx->pc = 0x1248A8u;
    {
        const bool branch_taken_0x1248a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1248A8u;
            // 0x1248ac: 0x1eb4025  or          $t0, $t7, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248a8) {
            ctx->pc = 0x124708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124708;
        }
    }
    ctx->pc = 0x1248B0u;
    // 0x1248b0: 0xf97806  srlv        $t7, $t9, $a3
    ctx->pc = 0x1248b0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 7) & 0x1F));
    // 0x1248b4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1248b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1248b8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1248b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x1248bc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x1248bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1248c0: 0x30ec024  and         $t8, $t8, $t6
    ctx->pc = 0x1248c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 14));
    // 0x1248c4: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1248c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x1248c8: 0x30fc025  or          $t8, $t8, $t7
    ctx->pc = 0x1248c8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 15));
    // 0x1248cc: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x1248ccu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
    // 0x1248d0: 0x18c03e  dsrl32      $t8, $t8, 0
    ctx->pc = 0x1248d0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) >> (32 + 0));
label_1248d4:
    // 0x1248d4: 0x1000ff8c  b           . + 4 + (-0x74 << 2)
    ctx->pc = 0x1248D4u;
    {
        const bool branch_taken_0x1248d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1248D4u;
            // 0x1248d8: 0xfc180000  sd          $t8, 0x0($zero) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 0), 0), GPR_U64(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248d4) {
            ctx->pc = 0x124708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124708;
        }
    }
    ctx->pc = 0x1248DCu;
    // 0x1248dc: 0x0  nop
    ctx->pc = 0x1248dcu;
    // NOP
label_1248e0:
    // 0x1248e0: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x1248e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x1248e4: 0x55c02  srl         $t3, $a1, 16
    ctx->pc = 0x1248e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1248e8: 0x20a6006  srlv        $t4, $t2, $s0
    ctx->pc = 0x1248e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 16) & 0x1F));
    // 0x1248ec: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x1248ecu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x1248f0: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x1248f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1248f4: 0x2197006  srlv        $t6, $t9, $s0
    ctx->pc = 0x1248f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 16) & 0x1F));
    // 0x1248f8: 0xea7804  sllv        $t7, $t2, $a3
    ctx->pc = 0x1248f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x1248fc: 0x1ee5025  or          $t2, $t7, $t6
    ctx->pc = 0x1248fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x124900: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124900u;
    {
        const bool branch_taken_0x124900 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x124900) {
            ctx->pc = 0x124904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124900u;
            // 0x124904: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124908u;
            goto label_124908;
        }
    }
    ctx->pc = 0x124908u;
label_124908:
    // 0x124908: 0xa7402  srl         $t6, $t2, 16
    ctx->pc = 0x124908u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x12490c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x12490cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124910: 0xf9c804  sllv        $t9, $t9, $a3
    ctx->pc = 0x124910u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 7) & 0x1F));
    // 0x124914: 0x6012  mflo        $t4
    ctx->pc = 0x124914u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x124918: 0x6810  mfhi        $t5
    ctx->pc = 0x124918u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x12491c: 0x3012  mflo        $a2
    ctx->pc = 0x12491cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x124920: 0xd6c00  sll         $t5, $t5, 16
    ctx->pc = 0x124920u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x124924: 0x1844818  mult        $t1, $t4, $a0
    ctx->pc = 0x124924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x124928: 0x1ae7025  or          $t6, $t5, $t6
    ctx->pc = 0x124928u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x12492c: 0x1c9782b  sltu        $t7, $t6, $t1
    ctx->pc = 0x12492cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x124930: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x124930u;
    {
        const bool branch_taken_0x124930 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124930u;
            // 0x124934: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124930) {
            ctx->pc = 0x124960u;
            goto label_124960;
        }
    }
    ctx->pc = 0x124938u;
    // 0x124938: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x124938u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12493c: 0x1c5782b  sltu        $t7, $t6, $a1
    ctx->pc = 0x12493cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124940: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x124940u;
    {
        const bool branch_taken_0x124940 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124940u;
            // 0x124944: 0x2586ffff  addiu       $a2, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124940) {
            ctx->pc = 0x124960u;
            goto label_124960;
        }
    }
    ctx->pc = 0x124948u;
    // 0x124948: 0x1c9782b  sltu        $t7, $t6, $t1
    ctx->pc = 0x124948u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12494c: 0x51e00005  beql        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12494Cu;
    {
        const bool branch_taken_0x12494c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12494c) {
            ctx->pc = 0x124950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12494Cu;
            // 0x124950: 0x1c97023  subu        $t6, $t6, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124964u;
            goto label_124964;
        }
    }
    ctx->pc = 0x124954u;
    // 0x124954: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x124954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x124958: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x124958u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12495c: 0x0  nop
    ctx->pc = 0x12495cu;
    // NOP
label_124960:
    // 0x124960: 0x1c97023  subu        $t6, $t6, $t1
    ctx->pc = 0x124960u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
label_124964:
    // 0x124964: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124964u;
    {
        const bool branch_taken_0x124964 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x124964) {
            ctx->pc = 0x124968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124964u;
            // 0x124968: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12496Cu;
            goto label_12496c;
        }
    }
    ctx->pc = 0x12496Cu;
label_12496c:
    // 0x12496c: 0x1c8001b  divu        $zero, $t6, $t0
    ctx->pc = 0x12496cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x124970: 0x314dffff  andi        $t5, $t2, 0xFFFF
    ctx->pc = 0x124970u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x124974: 0x7812  mflo        $t7
    ctx->pc = 0x124974u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124978: 0x7010  mfhi        $t6
    ctx->pc = 0x124978u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x12497c: 0x4012  mflo        $t0
    ctx->pc = 0x12497cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x124980: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124980u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124984: 0x1e34818  mult        $t1, $t7, $v1
    ctx->pc = 0x124984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x124988: 0x1cd6025  or          $t4, $t6, $t5
    ctx->pc = 0x124988u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x12498c: 0x189782b  sltu        $t7, $t4, $t1
    ctx->pc = 0x12498cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x124990: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x124990u;
    {
        const bool branch_taken_0x124990 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124990u;
            // 0x124994: 0x67c00  sll         $t7, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124990) {
            ctx->pc = 0x1249C4u;
            goto label_1249c4;
        }
    }
    ctx->pc = 0x124998u;
    // 0x124998: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x124998u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x12499c: 0x185782b  sltu        $t7, $t4, $a1
    ctx->pc = 0x12499cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1249a0: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1249A0u;
    {
        const bool branch_taken_0x1249a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1249A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1249A0u;
            // 0x1249a4: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249a0) {
            ctx->pc = 0x1249C0u;
            goto label_1249c0;
        }
    }
    ctx->pc = 0x1249A8u;
    // 0x1249a8: 0x189782b  sltu        $t7, $t4, $t1
    ctx->pc = 0x1249a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1249ac: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1249ACu;
    {
        const bool branch_taken_0x1249ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1249ACu;
            // 0x1249b0: 0x67c00  sll         $t7, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249ac) {
            ctx->pc = 0x1249C4u;
            goto label_1249c4;
        }
    }
    ctx->pc = 0x1249B4u;
    // 0x1249b4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1249b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1249b8: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x1249b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1249bc: 0x0  nop
    ctx->pc = 0x1249bcu;
    // NOP
label_1249c0:
    // 0x1249c0: 0x67c00  sll         $t7, $a2, 16
    ctx->pc = 0x1249c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_1249c4:
    // 0x1249c4: 0x1895023  subu        $t2, $t4, $t1
    ctx->pc = 0x1249c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x1249c8: 0x1000ff86  b           . + 4 + (-0x7A << 2)
    ctx->pc = 0x1249C8u;
    {
        const bool branch_taken_0x1249c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1249C8u;
            // 0x1249cc: 0x1e84825  or          $t1, $t7, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249c8) {
            ctx->pc = 0x1247E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1247e4;
        }
    }
    ctx->pc = 0x1249D0u;
label_1249d0:
    // 0x1249d0: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x1249d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1249d4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x1249d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x1249d8: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x1249d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1249dc: 0x1e5782b  sltu        $t7, $t7, $a1
    ctx->pc = 0x1249dcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1249e0: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x1249e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249e4: 0x1000ff71  b           . + 4 + (-0x8F << 2)
    ctx->pc = 0x1249E4u;
    {
        const bool branch_taken_0x1249e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1249E4u;
            // 0x1249e8: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249e4) {
            ctx->pc = 0x1247ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1247ac;
        }
    }
    ctx->pc = 0x1249ECu;
    // 0x1249ec: 0x0  nop
    ctx->pc = 0x1249ecu;
    // NOP
label_1249f0:
    // 0x1249f0: 0x149782b  sltu        $t7, $t2, $t1
    ctx->pc = 0x1249f0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1249f4: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1249F4u;
    {
        const bool branch_taken_0x1249f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1249F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1249F4u;
            // 0x1249f8: 0x340fffff  ori         $t7, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249f4) {
            ctx->pc = 0x124A08u;
            goto label_124a08;
        }
    }
    ctx->pc = 0x1249FCu;
    // 0x1249fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1249fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a00: 0x1000ff41  b           . + 4 + (-0xBF << 2)
    ctx->pc = 0x124A00u;
    {
        const bool branch_taken_0x124a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A00u;
            // 0x124a04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a00) {
            ctx->pc = 0x124708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124708;
        }
    }
    ctx->pc = 0x124A08u;
label_124a08:
    // 0x124a08: 0x1e9782b  sltu        $t7, $t7, $t1
    ctx->pc = 0x124a08u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x124a0c: 0x15e0009c  bnez        $t7, . + 4 + (0x9C << 2)
    ctx->pc = 0x124A0Cu;
    {
        const bool branch_taken_0x124a0c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A0Cu;
            // 0x124a10: 0x3c0f00ff  lui         $t7, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a0c) {
            ctx->pc = 0x124C80u;
            goto label_124c80;
        }
    }
    ctx->pc = 0x124A14u;
    // 0x124a14: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x124a14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x124a18: 0x2d2e0100  sltiu       $t6, $t1, 0x100
    ctx->pc = 0x124a18u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x124a1c: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x124a1cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a20: 0xe600b  movn        $t4, $zero, $t6
    ctx->pc = 0x124a20u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
label_124a24:
    // 0x124a24: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x124a24u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x124a28: 0x1897806  srlv        $t7, $t1, $t4
    ctx->pc = 0x124a28u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x124a2c: 0x25ce05d0  addiu       $t6, $t6, 0x5D0
    ctx->pc = 0x124a2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1488));
    // 0x124a30: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x124a30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x124a34: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x124a34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x124a38: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x124a38u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x124a3c: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x124a3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x124a40: 0x16d3823  subu        $a3, $t3, $t5
    ctx->pc = 0x124a40u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x124a44: 0x14e0001c  bnez        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x124A44u;
    {
        const bool branch_taken_0x124a44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A44u;
            // 0x124a48: 0x1678023  subu        $s0, $t3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a44) {
            ctx->pc = 0x124AB8u;
            goto label_124ab8;
        }
    }
    ctx->pc = 0x124A4Cu;
    // 0x124a4c: 0x12a782b  sltu        $t7, $t1, $t2
    ctx->pc = 0x124a4cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x124a50: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x124A50u;
    {
        const bool branch_taken_0x124a50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A50u;
            // 0x124a54: 0x3256823  subu        $t5, $t9, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a50) {
            ctx->pc = 0x124A68u;
            goto label_124a68;
        }
    }
    ctx->pc = 0x124A58u;
    // 0x124a58: 0x325782b  sltu        $t7, $t9, $a1
    ctx->pc = 0x124a58u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x124a5c: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x124A5Cu;
    {
        const bool branch_taken_0x124a5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A5Cu;
            // 0x124a60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a5c) {
            ctx->pc = 0x124A7Cu;
            goto label_124a7c;
        }
    }
    ctx->pc = 0x124A64u;
    // 0x124a64: 0x3256823  subu        $t5, $t9, $a1
    ctx->pc = 0x124a64u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
label_124a68:
    // 0x124a68: 0x1497023  subu        $t6, $t2, $t1
    ctx->pc = 0x124a68u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x124a6c: 0x32d782b  sltu        $t7, $t9, $t5
    ctx->pc = 0x124a6cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x124a70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x124a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124a74: 0x1cf5023  subu        $t2, $t6, $t7
    ctx->pc = 0x124a74u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x124a78: 0x1a0c82d  daddu       $t9, $t5, $zero
    ctx->pc = 0x124a78u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_124a7c:
    // 0x124a7c: 0x1240ff22  beqz        $s2, . + 4 + (-0xDE << 2)
    ctx->pc = 0x124A7Cu;
    {
        const bool branch_taken_0x124a7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A7Cu;
            // 0x124a80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a7c) {
            ctx->pc = 0x124708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124708;
        }
    }
    ctx->pc = 0x124A84u;
    // 0x124a84: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x124a84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124a88: 0x19703c  dsll32      $t6, $t9, 0
    ctx->pc = 0x124a88u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 25) << (32 + 0));
    // 0x124a8c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x124a8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x124a90: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x124a90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x124a94: 0x30fc024  and         $t8, $t8, $t7
    ctx->pc = 0x124a94u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 15));
    // 0x124a98: 0xa783c  dsll32      $t7, $t2, 0
    ctx->pc = 0x124a98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << (32 + 0));
    // 0x124a9c: 0x30ec025  or          $t8, $t8, $t6
    ctx->pc = 0x124a9cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 14));
    // 0x124aa0: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x124aa0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x124aa4: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x124aa4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
    // 0x124aa8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x124aa8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x124aac: 0x18c03e  dsrl32      $t8, $t8, 0
    ctx->pc = 0x124aacu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) >> (32 + 0));
    // 0x124ab0: 0x1000ff88  b           . + 4 + (-0x78 << 2)
    ctx->pc = 0x124AB0u;
    {
        const bool branch_taken_0x124ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124AB0u;
            // 0x124ab4: 0x30fc025  or          $t8, $t8, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ab0) {
            ctx->pc = 0x1248D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1248d4;
        }
    }
    ctx->pc = 0x124AB8u;
label_124ab8:
    // 0x124ab8: 0xe97004  sllv        $t6, $t1, $a3
    ctx->pc = 0x124ab8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x124abc: 0x2057806  srlv        $t7, $a1, $s0
    ctx->pc = 0x124abcu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
    // 0x124ac0: 0x20a6006  srlv        $t4, $t2, $s0
    ctx->pc = 0x124ac0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 16) & 0x1F));
    // 0x124ac4: 0x1cf4825  or          $t1, $t6, $t7
    ctx->pc = 0x124ac4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x124ac8: 0xea6804  sllv        $t5, $t2, $a3
    ctx->pc = 0x124ac8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x124acc: 0x95c02  srl         $t3, $t1, 16
    ctx->pc = 0x124accu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x124ad0: 0x3124ffff  andi        $a0, $t1, 0xFFFF
    ctx->pc = 0x124ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x124ad4: 0x18b001b  divu        $zero, $t4, $t3
    ctx->pc = 0x124ad4u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x124ad8: 0x2197806  srlv        $t7, $t9, $s0
    ctx->pc = 0x124ad8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 16) & 0x1F));
    // 0x124adc: 0x1af5025  or          $t2, $t5, $t7
    ctx->pc = 0x124adcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x124ae0: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124AE0u;
    {
        const bool branch_taken_0x124ae0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ae0) {
            ctx->pc = 0x124AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124AE0u;
            // 0x124ae4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124AE8u;
            goto label_124ae8;
        }
    }
    ctx->pc = 0x124AE8u;
label_124ae8:
    // 0x124ae8: 0xa6c02  srl         $t5, $t2, 16
    ctx->pc = 0x124ae8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x124aec: 0xe52804  sllv        $a1, $a1, $a3
    ctx->pc = 0x124aecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x124af0: 0x6012  mflo        $t4
    ctx->pc = 0x124af0u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x124af4: 0x7010  mfhi        $t6
    ctx->pc = 0x124af4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124af8: 0x4012  mflo        $t0
    ctx->pc = 0x124af8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x124afc: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124afcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124b00: 0x1843018  mult        $a2, $t4, $a0
    ctx->pc = 0x124b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x124b04: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x124b04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124b08: 0x1c6782b  sltu        $t7, $t6, $a2
    ctx->pc = 0x124b08u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x124b0c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x124B0Cu;
    {
        const bool branch_taken_0x124b0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B0Cu;
            // 0x124b10: 0xf9c804  sllv        $t9, $t9, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b0c) {
            ctx->pc = 0x124B38u;
            goto label_124b38;
        }
    }
    ctx->pc = 0x124B14u;
    // 0x124b14: 0x1c97021  addu        $t6, $t6, $t1
    ctx->pc = 0x124b14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x124b18: 0x1c9782b  sltu        $t7, $t6, $t1
    ctx->pc = 0x124b18u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x124b1c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x124B1Cu;
    {
        const bool branch_taken_0x124b1c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B1Cu;
            // 0x124b20: 0x2588ffff  addiu       $t0, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b1c) {
            ctx->pc = 0x124B38u;
            goto label_124b38;
        }
    }
    ctx->pc = 0x124B24u;
    // 0x124b24: 0x1c6782b  sltu        $t7, $t6, $a2
    ctx->pc = 0x124b24u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x124b28: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x124B28u;
    {
        const bool branch_taken_0x124b28 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124b28) {
            ctx->pc = 0x124B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124B28u;
            // 0x124b2c: 0x1c67023  subu        $t6, $t6, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124B3Cu;
            goto label_124b3c;
        }
    }
    ctx->pc = 0x124B30u;
    // 0x124b30: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x124b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x124b34: 0x1c97021  addu        $t6, $t6, $t1
    ctx->pc = 0x124b34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
label_124b38:
    // 0x124b38: 0x1c67023  subu        $t6, $t6, $a2
    ctx->pc = 0x124b38u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_124b3c:
    // 0x124b3c: 0x314dffff  andi        $t5, $t2, 0xFFFF
    ctx->pc = 0x124b3cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x124b40: 0x1cb001b  divu        $zero, $t6, $t3
    ctx->pc = 0x124b40u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x124b44: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x124B44u;
    {
        const bool branch_taken_0x124b44 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x124b44) {
            ctx->pc = 0x124B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124B44u;
            // 0x124b48: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x124B4Cu;
            goto label_124b4c;
        }
    }
    ctx->pc = 0x124B4Cu;
label_124b4c:
    // 0x124b4c: 0x7812  mflo        $t7
    ctx->pc = 0x124b4cu;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x124b50: 0x7010  mfhi        $t6
    ctx->pc = 0x124b50u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    // 0x124b54: 0x6012  mflo        $t4
    ctx->pc = 0x124b54u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x124b58: 0xe7400  sll         $t6, $t6, 16
    ctx->pc = 0x124b58u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x124b5c: 0x1e43018  mult        $a2, $t7, $a0
    ctx->pc = 0x124b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x124b60: 0x1cd1825  or          $v1, $t6, $t5
    ctx->pc = 0x124b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x124b64: 0x66782b  sltu        $t7, $v1, $a2
    ctx->pc = 0x124b64u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x124b68: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x124B68u;
    {
        const bool branch_taken_0x124b68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B68u;
            // 0x124b6c: 0x87c00  sll         $t7, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b68) {
            ctx->pc = 0x124B9Cu;
            goto label_124b9c;
        }
    }
    ctx->pc = 0x124B70u;
    // 0x124b70: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x124b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x124b74: 0x69782b  sltu        $t7, $v1, $t1
    ctx->pc = 0x124b74u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x124b78: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x124B78u;
    {
        const bool branch_taken_0x124b78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B78u;
            // 0x124b7c: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b78) {
            ctx->pc = 0x124B98u;
            goto label_124b98;
        }
    }
    ctx->pc = 0x124B80u;
    // 0x124b80: 0x66782b  sltu        $t7, $v1, $a2
    ctx->pc = 0x124b80u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x124b84: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x124B84u;
    {
        const bool branch_taken_0x124b84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B84u;
            // 0x124b88: 0x87c00  sll         $t7, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b84) {
            ctx->pc = 0x124B9Cu;
            goto label_124b9c;
        }
    }
    ctx->pc = 0x124B8Cu;
    // 0x124b8c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x124b8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x124b90: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x124b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x124b94: 0x0  nop
    ctx->pc = 0x124b94u;
    // NOP
label_124b98:
    // 0x124b98: 0x87c00  sll         $t7, $t0, 16
    ctx->pc = 0x124b98u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_124b9c:
    // 0x124b9c: 0x30aeffff  andi        $t6, $a1, 0xFFFF
    ctx->pc = 0x124b9cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x124ba0: 0x1ec4025  or          $t0, $t7, $t4
    ctx->pc = 0x124ba0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x124ba4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x124ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x124ba8: 0x310fffff  andi        $t7, $t0, 0xFFFF
    ctx->pc = 0x124ba8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x124bac: 0x56402  srl         $t4, $a1, 16
    ctx->pc = 0x124bacu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x124bb0: 0x1ee8818  mult        $s1, $t7, $t6
    ctx->pc = 0x124bb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x124bb4: 0x71ec5818  mult1       $t3, $t7, $t4
    ctx->pc = 0x124bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x124bb8: 0x86c02  srl         $t5, $t0, 16
    ctx->pc = 0x124bb8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x124bbc: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x124bbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bc0: 0x1ae7018  mult        $t6, $t5, $t6
    ctx->pc = 0x124bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x124bc4: 0x117c02  srl         $t7, $s1, 16
    ctx->pc = 0x124bc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x124bc8: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x124bc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x124bcc: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x124bccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x124bd0: 0x16e702b  sltu        $t6, $t3, $t6
    ctx->pc = 0x124bd0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x124bd4: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x124BD4u;
    {
        const bool branch_taken_0x124bd4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124BD4u;
            // 0x124bd8: 0x71ac6018  mult1       $t4, $t5, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 12); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bd4) {
            ctx->pc = 0x124BE4u;
            goto label_124be4;
        }
    }
    ctx->pc = 0x124BDCu;
    // 0x124bdc: 0x3c0f0001  lui         $t7, 0x1
    ctx->pc = 0x124bdcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1 << 16));
    // 0x124be0: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x124be0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_124be4:
    // 0x124be4: 0xb7c02  srl         $t7, $t3, 16
    ctx->pc = 0x124be4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x124be8: 0xb6c00  sll         $t5, $t3, 16
    ctx->pc = 0x124be8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x124bec: 0x18f2021  addu        $a0, $t4, $t7
    ctx->pc = 0x124becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x124bf0: 0x322effff  andi        $t6, $s1, 0xFFFF
    ctx->pc = 0x124bf0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x124bf4: 0x144782b  sltu        $t7, $t2, $a0
    ctx->pc = 0x124bf4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x124bf8: 0x15e0001a  bnez        $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x124BF8u;
    {
        const bool branch_taken_0x124bf8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x124BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124BF8u;
            // 0x124bfc: 0x1ae5821  addu        $t3, $t5, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bf8) {
            ctx->pc = 0x124C64u;
            goto label_124c64;
        }
    }
    ctx->pc = 0x124C00u;
    // 0x124c00: 0x108a0016  beq         $a0, $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x124C00u;
    {
        const bool branch_taken_0x124c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        ctx->pc = 0x124C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C00u;
            // 0x124c04: 0x32b782b  sltu        $t7, $t9, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c00) {
            ctx->pc = 0x124C5Cu;
            goto label_124c5c;
        }
    }
    ctx->pc = 0x124C08u;
label_124c08:
    // 0x124c08: 0x1240febf  beqz        $s2, . + 4 + (-0x141 << 2)
    ctx->pc = 0x124C08u;
    {
        const bool branch_taken_0x124c08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C08u;
            // 0x124c0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c08) {
            ctx->pc = 0x124708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124708;
        }
    }
    ctx->pc = 0x124C10u;
    // 0x124c10: 0x32b6823  subu        $t5, $t9, $t3
    ctx->pc = 0x124c10u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 11)));
    // 0x124c14: 0x646023  subu        $t4, $v1, $a0
    ctx->pc = 0x124c14u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x124c18: 0x32d702b  sltu        $t6, $t9, $t5
    ctx->pc = 0x124c18u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x124c1c: 0xed6806  srlv        $t5, $t5, $a3
    ctx->pc = 0x124c1cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 7) & 0x1F));
    // 0x124c20: 0x18e5023  subu        $t2, $t4, $t6
    ctx->pc = 0x124c20u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x124c24: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x124c24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124c28: 0x20a7804  sllv        $t7, $t2, $s0
    ctx->pc = 0x124c28u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 16) & 0x1F));
    // 0x124c2c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x124c2cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x124c30: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x124c30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x124c34: 0x30ec024  and         $t8, $t8, $t6
    ctx->pc = 0x124c34u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 14));
    // 0x124c38: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x124c38u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x124c3c: 0xea7006  srlv        $t6, $t2, $a3
    ctx->pc = 0x124c3cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x124c40: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x124c40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x124c44: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x124c44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x124c48: 0x30fc025  or          $t8, $t8, $t7
    ctx->pc = 0x124c48u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 15));
    // 0x124c4c: 0x18c03c  dsll32      $t8, $t8, 0
    ctx->pc = 0x124c4cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 0));
    // 0x124c50: 0x18c03e  dsrl32      $t8, $t8, 0
    ctx->pc = 0x124c50u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) >> (32 + 0));
    // 0x124c54: 0x1000ff1f  b           . + 4 + (-0xE1 << 2)
    ctx->pc = 0x124C54u;
    {
        const bool branch_taken_0x124c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C54u;
            // 0x124c58: 0x30ec025  or          $t8, $t8, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c54) {
            ctx->pc = 0x1248D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1248d4;
        }
    }
    ctx->pc = 0x124C5Cu;
label_124c5c:
    // 0x124c5c: 0x11e0ffea  beqz        $t7, . + 4 + (-0x16 << 2)
    ctx->pc = 0x124C5Cu;
    {
        const bool branch_taken_0x124c5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c5c) {
            ctx->pc = 0x124C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124c08;
        }
    }
    ctx->pc = 0x124C64u;
label_124c64:
    // 0x124c64: 0x1656823  subu        $t5, $t3, $a1
    ctx->pc = 0x124c64u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x124c68: 0x897023  subu        $t6, $a0, $t1
    ctx->pc = 0x124c68u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x124c6c: 0x16d782b  sltu        $t7, $t3, $t5
    ctx->pc = 0x124c6cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x124c70: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x124c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x124c74: 0x1cf2023  subu        $a0, $t6, $t7
    ctx->pc = 0x124c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x124c78: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x124C78u;
    {
        const bool branch_taken_0x124c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C78u;
            // 0x124c7c: 0x1a0582d  daddu       $t3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c78) {
            ctx->pc = 0x124C08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124c08;
        }
    }
    ctx->pc = 0x124C80u;
label_124c80:
    // 0x124c80: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x124c80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x124c84: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x124c84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x124c88: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x124c88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x124c8c: 0x1e9782b  sltu        $t7, $t7, $t1
    ctx->pc = 0x124c8cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x124c90: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x124c90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c94: 0x1000ff63  b           . + 4 + (-0x9D << 2)
    ctx->pc = 0x124C94u;
    {
        const bool branch_taken_0x124c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C94u;
            // 0x124c98: 0x1af600b  movn        $t4, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c94) {
            ctx->pc = 0x124A24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124a24;
        }
    }
    ctx->pc = 0x124C9Cu;
    // 0x124c9c: 0x0  nop
    ctx->pc = 0x124c9cu;
    // NOP
}
