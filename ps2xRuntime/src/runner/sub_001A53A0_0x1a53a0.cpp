#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A53A0
// Address: 0x1a53a0 - 0x1a54c8
void sub_001A53A0_0x1a53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A53A0_0x1a53a0");
#endif

    switch (ctx->pc) {
        case 0x1a53f0u: goto label_1a53f0;
        default: break;
    }

    ctx->pc = 0x1a53a0u;

    // 0x1a53a0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1a53a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a53a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a53a8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1a53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a53ac: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1a53acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a53b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a53b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a53b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a53b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a53b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a53bc: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x1a53bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a53c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a53c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a53c4: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x1a53c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a53c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a53c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a53cc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1a53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a53d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a53d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a53d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a53d8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1a53d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a53dc: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1a53dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a53e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a53e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a53e4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1a53e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a53e8: 0xc069546  jal         func_1A5518
    ctx->pc = 0x1A53E8u;
    SET_GPR_U32(ctx, 31, 0x1A53F0u);
    ctx->pc = 0x1A53ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A53E8u;
            // 0x1a53ec: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5518u;
    if (runtime->hasFunction(0x1A5518u)) {
        auto targetFn = runtime->lookupFunction(0x1A5518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53F0u; }
        if (ctx->pc != 0x1A53F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5518_0x1a5518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53F0u; }
        if (ctx->pc != 0x1A53F0u) { return; }
    }
    ctx->pc = 0x1A53F0u;
label_1a53f0:
    // 0x1a53f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a53f4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a53f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a53f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a53fc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1a53fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1a5400: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1a5400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1a5404: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a5404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a5408: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a5408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a540c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a540cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a5410: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a5410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a5414: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1a5414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1a5418: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1a5418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a541c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1a541cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1a5420: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a5420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a5424: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a5424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1a5428: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a542c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a542cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5430: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a5430u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5434: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a5434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5438: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A543Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5438u;
            // 0x1a543c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5440u;
    // 0x1a5440: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a5440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a5444: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x1a5444u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5448: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a5448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a544c: 0x25630007  addiu       $v1, $t3, 0x7
    ctx->pc = 0x1a544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x1a5450: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5454: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1a5454u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5458: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a545c: 0x28660000  slti        $a2, $v1, 0x0
    ctx->pc = 0x1a545cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1a5460: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5464: 0x2567000e  addiu       $a3, $t3, 0xE
    ctx->pc = 0x1a5464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 14));
    // 0x1a5468: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a5468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a546c: 0xe6180b  movn        $v1, $a3, $a2
    ctx->pc = 0x1a546cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1a5470: 0x24841390  addiu       $a0, $a0, 0x1390
    ctx->pc = 0x1a5470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
    // 0x1a5474: 0x29490002  slti        $t1, $t2, 0x2
    ctx->pc = 0x1a5474u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a5478: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x1a5478u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1a547c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a5480: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5480u;
    {
        const bool branch_taken_0x1a5480 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5480u;
            // 0x1a5484: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5480) {
            ctx->pc = 0x1A5498u;
            goto label_1a5498;
        }
    }
    ctx->pc = 0x1A5488u;
    // 0x1a5488: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x1a5488u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a548c: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A548Cu;
    {
        const bool branch_taken_0x1a548c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a548c) {
            ctx->pc = 0x1A5490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A548Cu;
            // 0x1a5490: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5494u;
            goto label_1a5494;
        }
    }
    ctx->pc = 0x1A5494u;
label_1a5494:
    // 0x1a5494: 0x1012  mflo        $v0
    ctx->pc = 0x1a5494u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1a5498:
    // 0x1a5498: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x1a5498u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a549c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a54a0: 0xac8b000c  sw          $t3, 0xC($a0)
    ctx->pc = 0x1a54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 11));
    // 0x1a54a4: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x1a54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x1a54a8: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1a54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1a54ac: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1a54acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1a54b0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1a54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1a54b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A54B4u;
    {
        const bool branch_taken_0x1a54b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a54b4) {
            ctx->pc = 0x1A54B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54B4u;
            // 0x1a54b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A54BCu;
            goto label_1a54bc;
        }
    }
    ctx->pc = 0x1A54BCu;
label_1a54bc:
    // 0x1a54bc: 0x1812  mflo        $v1
    ctx->pc = 0x1a54bcu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1a54c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A54C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54C0u;
            // 0x1a54c4: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A54C8u;
}
