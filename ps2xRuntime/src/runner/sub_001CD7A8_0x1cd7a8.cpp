#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD7A8
// Address: 0x1cd7a8 - 0x1cd888
void sub_001CD7A8_0x1cd7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD7A8_0x1cd7a8");
#endif

    switch (ctx->pc) {
        case 0x1cd860u: goto label_1cd860;
        default: break;
    }

    ctx->pc = 0x1cd7a8u;

    // 0x1cd7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd7ac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1cd7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd7b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd7b4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cd7b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd7bc: 0x2609a70c  addiu       $t1, $s0, -0x58F4
    ctx->pc = 0x1cd7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944524));
    // 0x1cd7c0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1cd7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1cd7c4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1cd7c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1cd7c8: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x1cd7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1cd7cc: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x1cd7ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1cd7d0: 0x81030ab7  lb          $v1, 0xAB7($t0)
    ctx->pc = 0x1cd7d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 2743)));
    // 0x1cd7d4: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CD7D4u;
    {
        const bool branch_taken_0x1cd7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7D4u;
            // 0x1cd7d8: 0x2402ffe2  addiu       $v0, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7d4) {
            ctx->pc = 0x1CD874u;
            goto label_1cd874;
        }
    }
    ctx->pc = 0x1CD7DCu;
    // 0x1cd7dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd7e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd7e4: 0xa1030ab7  sb          $v1, 0xAB7($t0)
    ctx->pc = 0x1cd7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2743), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cd7e8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1cd7ec: 0x90430ab8  lbu         $v1, 0xAB8($v0)
    ctx->pc = 0x1cd7ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2744)));
    // 0x1cd7f0: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CD7F0u;
    {
        const bool branch_taken_0x1cd7f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CD7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7F0u;
            // 0x1cd7f4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7f0) {
            ctx->pc = 0x1CD830u;
            goto label_1cd830;
        }
    }
    ctx->pc = 0x1CD7F8u;
    // 0x1cd7f8: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x1cd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1cd7fc: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1cd7fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cd800: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x1cd800u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1cd804: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD804u;
    {
        const bool branch_taken_0x1cd804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd804) {
            ctx->pc = 0x1CD808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD804u;
            // 0x1cd808: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD80Cu;
            goto label_1cd80c;
        }
    }
    ctx->pc = 0x1CD80Cu;
label_1cd80c:
    // 0x1cd80c: 0x1810  mfhi        $v1
    ctx->pc = 0x1cd80cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cd810: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1cd810u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1cd814: 0x2468002d  addiu       $t0, $v1, 0x2D
    ctx->pc = 0x1cd814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1cd818: 0x290200b4  slti        $v0, $t0, 0xB4
    ctx->pc = 0x1cd818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x1cd81c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD81Cu;
    {
        const bool branch_taken_0x1cd81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd81c) {
            ctx->pc = 0x1CD820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD81Cu;
            // 0x1cd820: 0x2468ff79  addiu       $t0, $v1, -0x87 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967161));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD830u;
            goto label_1cd830;
        }
    }
    ctx->pc = 0x1CD824u;
    // 0x1cd824: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD824u;
    {
        const bool branch_taken_0x1cd824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD824u;
            // 0x1cd828: 0x2cc20100  sltiu       $v0, $a2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd824) {
            ctx->pc = 0x1CD834u;
            goto label_1cd834;
        }
    }
    ctx->pc = 0x1CD82Cu;
    // 0x1cd82c: 0x0  nop
    ctx->pc = 0x1cd82cu;
    // NOP
label_1cd830:
    // 0x1cd830: 0x2cc20100  sltiu       $v0, $a2, 0x100
    ctx->pc = 0x1cd830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_1cd834:
    // 0x1cd834: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x1cd834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cd838: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x1CD838u;
    {
        const bool branch_taken_0x1cd838 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD838u;
            // 0x1cd83c: 0xc2480b  movn        $t1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd838) {
            ctx->pc = 0x1CD868u;
            goto label_1cd868;
        }
    }
    ctx->pc = 0x1CD840u;
    // 0x1cd840: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x1cd840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cd844: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD844u;
    {
        const bool branch_taken_0x1cd844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd844) {
            ctx->pc = 0x1CD848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD844u;
            // 0x1cd848: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD86Cu;
            goto label_1cd86c;
        }
    }
    ctx->pc = 0x1CD84Cu;
    // 0x1cd84c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cd84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1cd850: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd854: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cd854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd858: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD858u;
    SET_GPR_U32(ctx, 31, 0x1CD860u);
    ctx->pc = 0x1CD85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD858u;
            // 0x1cd85c: 0x24061200  addiu       $a2, $zero, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD860u; }
        if (ctx->pc != 0x1CD860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD860u; }
        if (ctx->pc != 0x1CD860u) { return; }
    }
    ctx->pc = 0x1CD860u;
label_1cd860:
    // 0x1cd860: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD860u;
    {
        const bool branch_taken_0x1cd860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD860u;
            // 0x1cd864: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd860) {
            ctx->pc = 0x1CD870u;
            goto label_1cd870;
        }
    }
    ctx->pc = 0x1CD868u;
label_1cd868:
    // 0x1cd868: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cd86c:
    // 0x1cd86c: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cd86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cd870:
    // 0x1cd870: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cd870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cd874:
    // 0x1cd874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd878: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd87c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD87Cu;
            // 0x1cd880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD884u;
    // 0x1cd884: 0x0  nop
    ctx->pc = 0x1cd884u;
    // NOP
}
