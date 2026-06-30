#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011B550
// Address: 0x11b550 - 0x11bf88
void sub_0011B550_0x11b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B550_0x11b550");
#endif

    switch (ctx->pc) {
        case 0x11b600u: goto label_11b600;
        case 0x11b610u: goto label_11b610;
        case 0x11b654u: goto label_11b654;
        case 0x11b674u: goto label_11b674;
        case 0x11b688u: goto label_11b688;
        case 0x11b698u: goto label_11b698;
        case 0x11b6c4u: goto label_11b6c4;
        case 0x11b6e0u: goto label_11b6e0;
        case 0x11b6f4u: goto label_11b6f4;
        case 0x11b6fcu: goto label_11b6fc;
        case 0x11b704u: goto label_11b704;
        case 0x11b718u: goto label_11b718;
        case 0x11b724u: goto label_11b724;
        case 0x11b72cu: goto label_11b72c;
        case 0x11b740u: goto label_11b740;
        case 0x11b758u: goto label_11b758;
        case 0x11b76cu: goto label_11b76c;
        case 0x11b774u: goto label_11b774;
        case 0x11b784u: goto label_11b784;
        case 0x11b790u: goto label_11b790;
        case 0x11b79cu: goto label_11b79c;
        case 0x11b7a8u: goto label_11b7a8;
        case 0x11b7b4u: goto label_11b7b4;
        case 0x11b800u: goto label_11b800;
        case 0x11b834u: goto label_11b834;
        case 0x11b878u: goto label_11b878;
        case 0x11b89cu: goto label_11b89c;
        case 0x11b8b0u: goto label_11b8b0;
        case 0x11b8bcu: goto label_11b8bc;
        case 0x11b8ccu: goto label_11b8cc;
        case 0x11b8f4u: goto label_11b8f4;
        case 0x11b948u: goto label_11b948;
        case 0x11b9c4u: goto label_11b9c4;
        case 0x11b9d0u: goto label_11b9d0;
        case 0x11b9f4u: goto label_11b9f4;
        case 0x11ba08u: goto label_11ba08;
        case 0x11ba18u: goto label_11ba18;
        case 0x11ba58u: goto label_11ba58;
        case 0x11ba88u: goto label_11ba88;
        case 0x11baa4u: goto label_11baa4;
        case 0x11bab8u: goto label_11bab8;
        case 0x11bad4u: goto label_11bad4;
        case 0x11bae0u: goto label_11bae0;
        case 0x11baf0u: goto label_11baf0;
        case 0x11bb04u: goto label_11bb04;
        case 0x11bb20u: goto label_11bb20;
        case 0x11bb4cu: goto label_11bb4c;
        case 0x11bb5cu: goto label_11bb5c;
        case 0x11bb6cu: goto label_11bb6c;
        case 0x11bb88u: goto label_11bb88;
        case 0x11bbc0u: goto label_11bbc0;
        case 0x11bbc4u: goto label_11bbc4;
        case 0x11bc0cu: goto label_11bc0c;
        case 0x11bc1cu: goto label_11bc1c;
        case 0x11bc40u: goto label_11bc40;
        case 0x11bc60u: goto label_11bc60;
        case 0x11bc70u: goto label_11bc70;
        case 0x11bc94u: goto label_11bc94;
        case 0x11bca8u: goto label_11bca8;
        case 0x11bcbcu: goto label_11bcbc;
        case 0x11bcccu: goto label_11bccc;
        case 0x11bcf4u: goto label_11bcf4;
        case 0x11bd1cu: goto label_11bd1c;
        case 0x11bd34u: goto label_11bd34;
        case 0x11bd44u: goto label_11bd44;
        case 0x11bd50u: goto label_11bd50;
        case 0x11bd74u: goto label_11bd74;
        case 0x11bd8cu: goto label_11bd8c;
        case 0x11bd9cu: goto label_11bd9c;
        case 0x11bda8u: goto label_11bda8;
        case 0x11bdd8u: goto label_11bdd8;
        case 0x11bde8u: goto label_11bde8;
        case 0x11be2cu: goto label_11be2c;
        case 0x11be40u: goto label_11be40;
        case 0x11be54u: goto label_11be54;
        case 0x11be7cu: goto label_11be7c;
        case 0x11be8cu: goto label_11be8c;
        case 0x11bebcu: goto label_11bebc;
        case 0x11bec4u: goto label_11bec4;
        case 0x11beccu: goto label_11becc;
        case 0x11bee0u: goto label_11bee0;
        case 0x11bef0u: goto label_11bef0;
        case 0x11bef8u: goto label_11bef8;
        case 0x11bf00u: goto label_11bf00;
        case 0x11bf08u: goto label_11bf08;
        case 0x11bf20u: goto label_11bf20;
        case 0x11bf78u: goto label_11bf78;
        default: break;
    }

    ctx->pc = 0x11b550u;

    // 0x11b550: 0x240d0018  addiu       $t5, $zero, 0x18
    ctx->pc = 0x11b550u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11b554: 0x24ccfffd  addiu       $t4, $a2, -0x3
    ctx->pc = 0x11b554u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x11b558: 0x18d001a  div         $zero, $t4, $t5
    ctx->pc = 0x11b558u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11b55c: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x11b55cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x11b560: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11b560u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11b564: 0xffb00270  sd          $s0, 0x270($sp)
    ctx->pc = 0x11b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 16));
    // 0x11b568: 0xffb10278  sd          $s1, 0x278($sp)
    ctx->pc = 0x11b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 17));
    // 0x11b56c: 0x25effcd0  addiu       $t7, $t7, -0x330
    ctx->pc = 0x11b56cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966480));
    // 0x11b570: 0xffb20280  sd          $s2, 0x280($sp)
    ctx->pc = 0x11b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 18));
    // 0x11b574: 0x87080  sll         $t6, $t0, 2
    ctx->pc = 0x11b574u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x11b578: 0xffb30288  sd          $s3, 0x288($sp)
    ctx->pc = 0x11b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 19));
    // 0x11b57c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x11b57cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11b580: 0xffb40290  sd          $s4, 0x290($sp)
    ctx->pc = 0x11b580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 20));
    // 0x11b584: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x11b584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x11b588: 0xffb50298  sd          $s5, 0x298($sp)
    ctx->pc = 0x11b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 21));
    // 0x11b58c: 0xffb602a0  sd          $s6, 0x2A0($sp)
    ctx->pc = 0x11b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 22));
    // 0x11b590: 0xffb702a8  sd          $s7, 0x2A8($sp)
    ctx->pc = 0x11b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 23));
    // 0x11b594: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x11b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
    // 0x11b598: 0xffbf02b8  sd          $ra, 0x2B8($sp)
    ctx->pc = 0x11b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 31));
    // 0x11b59c: 0xafa80238  sw          $t0, 0x238($sp)
    ctx->pc = 0x11b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 8));
    // 0x11b5a0: 0x8dce0000  lw          $t6, 0x0($t6)
    ctx->pc = 0x11b5a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11b5a4: 0xafa70240  sw          $a3, 0x240($sp)
    ctx->pc = 0x11b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 7));
    // 0x11b5a8: 0xafae0248  sw          $t6, 0x248($sp)
    ctx->pc = 0x11b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 14));
    // 0x11b5ac: 0xee5821  addu        $t3, $a3, $t6
    ctx->pc = 0x11b5acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x11b5b0: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x11b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x11b5b4: 0xafa50234  sw          $a1, 0x234($sp)
    ctx->pc = 0x11b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 5));
    // 0x11b5b8: 0xafa9023c  sw          $t1, 0x23C($sp)
    ctx->pc = 0x11b5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 9));
    // 0x11b5bc: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11B5BCu;
    {
        const bool branch_taken_0x11b5bc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b5bc) {
            ctx->pc = 0x11B5C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5BCu;
            // 0x11b5c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11B5C4u;
            goto label_11b5c4;
        }
    }
    ctx->pc = 0x11B5C4u;
label_11b5c4:
    // 0x11b5c4: 0x6012  mflo        $t4
    ctx->pc = 0x11b5c4u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x11b5c8: 0x298f0000  slti        $t7, $t4, 0x0
    ctx->pc = 0x11b5c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11b5cc: 0xf600b  movn        $t4, $zero, $t7
    ctx->pc = 0x11b5ccu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
    // 0x11b5d0: 0x18d6818  mult        $t5, $t4, $t5
    ctx->pc = 0x11b5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x11b5d4: 0xafac0244  sw          $t4, 0x244($sp)
    ctx->pc = 0x11b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 12));
    // 0x11b5d8: 0x1877023  subu        $t6, $t4, $a3
    ctx->pc = 0x11b5d8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x11b5dc: 0xcd3023  subu        $a2, $a2, $t5
    ctx->pc = 0x11b5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x11b5e0: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x11b5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x11b5e4: 0x5600010  bltz        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x11B5E4u;
    {
        const bool branch_taken_0x11b5e4 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x11B5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B5E4u;
            // 0x11b5e8: 0xafa60250  sw          $a2, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5e4) {
            ctx->pc = 0x11B628u;
            goto label_11b628;
        }
    }
    ctx->pc = 0x11B5ECu;
    // 0x11b5ec: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x11b5ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x11b5f0: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x11b5f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b5f4: 0x25720001  addiu       $s2, $t3, 0x1
    ctx->pc = 0x11b5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x11b5f8: 0x1e98021  addu        $s0, $t7, $t1
    ctx->pc = 0x11b5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x11b5fc: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x11b5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11b600:
    // 0x11b600: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B600u;
    {
        const bool branch_taken_0x11b600 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x11B604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B600u;
            // 0x11b604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b600) {
            ctx->pc = 0x11B610u;
            goto label_11b610;
        }
    }
    ctx->pc = 0x11B608u;
    // 0x11b608: 0xc049776  jal         func_125DD8
    ctx->pc = 0x11B608u;
    SET_GPR_U32(ctx, 31, 0x11B610u);
    ctx->pc = 0x11B60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B608u;
            // 0x11b60c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B610u; }
        if (ctx->pc != 0x11B610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B610u; }
        if (ctx->pc != 0x11B610u) { return; }
    }
    ctx->pc = 0x11B610u;
label_11b610:
    // 0x11b610: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x11b610u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x11b614: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11b614u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11b618: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x11b618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x11b61c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11b61cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x11b620: 0x1640fff7  bnez        $s2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B620u;
    {
        const bool branch_taken_0x11b620 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B620u;
            // 0x11b624: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b620) {
            ctx->pc = 0x11B600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b600;
        }
    }
    ctx->pc = 0x11B628u;
label_11b628:
    // 0x11b628: 0x8fad0248  lw          $t5, 0x248($sp)
    ctx->pc = 0x11b628u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11b62c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11b62cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b630: 0x29ad0000  slti        $t5, $t5, 0x0
    ctx->pc = 0x11b630u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11b634: 0x15a00022  bnez        $t5, . + 4 + (0x22 << 2)
    ctx->pc = 0x11B634u;
    {
        const bool branch_taken_0x11b634 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B634u;
            // 0x11b638: 0xafad0258  sw          $t5, 0x258($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b634) {
            ctx->pc = 0x11B6C0u;
            goto label_11b6c0;
        }
    }
    ctx->pc = 0x11B63Cu;
    // 0x11b63c: 0x8fae0240  lw          $t6, 0x240($sp)
    ctx->pc = 0x11b63cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11b640: 0x27b60190  addiu       $s6, $sp, 0x190
    ctx->pc = 0x11b640u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x11b644: 0x29cb0000  slti        $t3, $t6, 0x0
    ctx->pc = 0x11b644u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11b648: 0xe78c0  sll         $t7, $t6, 3
    ctx->pc = 0x11b648u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x11b64c: 0xafab0260  sw          $t3, 0x260($sp)
    ctx->pc = 0x11b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 11));
    // 0x11b650: 0x1fda821  addu        $s5, $t7, $sp
    ctx->pc = 0x11b650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11b654:
    // 0x11b654: 0x8fac0260  lw          $t4, 0x260($sp)
    ctx->pc = 0x11b654u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x11b658: 0x15800012  bnez        $t4, . + 4 + (0x12 << 2)
    ctx->pc = 0x11B658u;
    {
        const bool branch_taken_0x11b658 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B658u;
            // 0x11b65c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b658) {
            ctx->pc = 0x11B6A4u;
            goto label_11b6a4;
        }
    }
    ctx->pc = 0x11B660u;
    // 0x11b660: 0x8fad0240  lw          $t5, 0x240($sp)
    ctx->pc = 0x11b660u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11b664: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x11b664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b668: 0x8fb00230  lw          $s0, 0x230($sp)
    ctx->pc = 0x11b668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x11b66c: 0x26b10050  addiu       $s1, $s5, 0x50
    ctx->pc = 0x11b66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x11b670: 0x25b20001  addiu       $s2, $t5, 0x1
    ctx->pc = 0x11b670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_11b674:
    // 0x11b674: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x11b674u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b678: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11b678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11b67c: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x11b67cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b680: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B680u;
    SET_GPR_U32(ctx, 31, 0x11B688u);
    ctx->pc = 0x11B684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B680u;
            // 0x11b684: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B688u; }
        if (ctx->pc != 0x11B688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B688u; }
        if (ctx->pc != 0x11B688u) { return; }
    }
    ctx->pc = 0x11B688u;
label_11b688:
    // 0x11b688: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x11b688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x11b68c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b690: 0xc04960a  jal         func_125828
    ctx->pc = 0x11B690u;
    SET_GPR_U32(ctx, 31, 0x11B698u);
    ctx->pc = 0x11B694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B690u;
            // 0x11b694: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B698u; }
        if (ctx->pc != 0x11B698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B698u; }
        if (ctx->pc != 0x11B698u) { return; }
    }
    ctx->pc = 0x11B698u;
label_11b698:
    // 0x11b698: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x11B698u;
    {
        const bool branch_taken_0x11b698 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B698u;
            // 0x11b69c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b698) {
            ctx->pc = 0x11B674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b674;
        }
    }
    ctx->pc = 0x11B6A0u;
    // 0x11b6a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11b6a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b6a4:
    // 0x11b6a4: 0xfed20000  sd          $s2, 0x0($s6)
    ctx->pc = 0x11b6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 18));
    // 0x11b6a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11b6a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11b6ac: 0x8fae0248  lw          $t6, 0x248($sp)
    ctx->pc = 0x11b6acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11b6b0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x11b6b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x11b6b4: 0x1d4782a  slt         $t7, $t6, $s4
    ctx->pc = 0x11b6b4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11b6b8: 0x11e0ffe6  beqz        $t7, . + 4 + (-0x1A << 2)
    ctx->pc = 0x11B6B8u;
    {
        const bool branch_taken_0x11b6b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6B8u;
            // 0x11b6bc: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6b8) {
            ctx->pc = 0x11B654u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b654;
        }
    }
    ctx->pc = 0x11B6C0u;
label_11b6c0:
    // 0x11b6c0: 0x8fb60248  lw          $s6, 0x248($sp)
    ctx->pc = 0x11b6c0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_11b6c4:
    // 0x11b6c4: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11b6c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11b6c8: 0x1fd2021  addu        $a0, $t7, $sp
    ctx->pc = 0x11b6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11b6cc: 0x1ac0001f  blez        $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x11B6CCu;
    {
        const bool branch_taken_0x11b6cc = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x11B6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6CCu;
            // 0x11b6d0: 0xdc930190  ld          $s3, 0x190($a0) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 4), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6cc) {
            ctx->pc = 0x11B74Cu;
            goto label_11b74c;
        }
    }
    ctx->pc = 0x11B6D4u;
    // 0x11b6d4: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x11b6d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6d8: 0x24910188  addiu       $s1, $a0, 0x188
    ctx->pc = 0x11b6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    // 0x11b6dc: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x11b6dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11b6e0:
    // 0x11b6e0: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x11b6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x11b6e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b6e8: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x11b6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x11b6ec: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B6ECu;
    SET_GPR_U32(ctx, 31, 0x11B6F4u);
    ctx->pc = 0x11B6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6ECu;
            // 0x11b6f0: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B6F4u; }
        if (ctx->pc != 0x11B6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B6F4u; }
        if (ctx->pc != 0x11B6F4u) { return; }
    }
    ctx->pc = 0x11B6F4u;
label_11b6f4:
    // 0x11b6f4: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x11B6F4u;
    SET_GPR_U32(ctx, 31, 0x11B6FCu);
    ctx->pc = 0x11B6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6F4u;
            // 0x11b6f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B6FCu; }
        if (ctx->pc != 0x11B6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B6FCu; }
        if (ctx->pc != 0x11B6FCu) { return; }
    }
    ctx->pc = 0x11B6FCu;
label_11b6fc:
    // 0x11b6fc: 0xc049776  jal         func_125DD8
    ctx->pc = 0x11B6FCu;
    SET_GPR_U32(ctx, 31, 0x11B704u);
    ctx->pc = 0x11B700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B6FCu;
            // 0x11b700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B704u; }
        if (ctx->pc != 0x11B704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B704u; }
        if (ctx->pc != 0x11B704u) { return; }
    }
    ctx->pc = 0x11B704u;
label_11b704:
    // 0x11b704: 0x24050417  addiu       $a1, $zero, 0x417
    ctx->pc = 0x11b704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x11b708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b70c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b710: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B710u;
    SET_GPR_U32(ctx, 31, 0x11B718u);
    ctx->pc = 0x11B714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B710u;
            // 0x11b714: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B718u; }
        if (ctx->pc != 0x11B718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B718u; }
        if (ctx->pc != 0x11B718u) { return; }
    }
    ctx->pc = 0x11B718u;
label_11b718:
    // 0x11b718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b71c: 0xc049622  jal         func_125888
    ctx->pc = 0x11B71Cu;
    SET_GPR_U32(ctx, 31, 0x11B724u);
    ctx->pc = 0x11B720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B71Cu;
            // 0x11b720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B724u; }
        if (ctx->pc != 0x11B724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B724u; }
        if (ctx->pc != 0x11B724u) { return; }
    }
    ctx->pc = 0x11B724u;
label_11b724:
    // 0x11b724: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x11B724u;
    SET_GPR_U32(ctx, 31, 0x11B72Cu);
    ctx->pc = 0x11B728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B724u;
            // 0x11b728: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B72Cu; }
        if (ctx->pc != 0x11B72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B72Cu; }
        if (ctx->pc != 0x11B72Cu) { return; }
    }
    ctx->pc = 0x11B72Cu;
label_11b72c:
    // 0x11b72c: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x11b72cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b734: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x11b734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x11b738: 0xc04960a  jal         func_125828
    ctx->pc = 0x11B738u;
    SET_GPR_U32(ctx, 31, 0x11B740u);
    ctx->pc = 0x11B73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B738u;
            // 0x11b73c: 0x2631fff8  addiu       $s1, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B740u; }
        if (ctx->pc != 0x11B740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B740u; }
        if (ctx->pc != 0x11B740u) { return; }
    }
    ctx->pc = 0x11B740u;
label_11b740:
    // 0x11b740: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x11b740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x11b744: 0x1e80ffe6  bgtz        $s4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x11B744u;
    {
        const bool branch_taken_0x11b744 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x11B748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B744u;
            // 0x11b748: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b744) {
            ctx->pc = 0x11B6E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b6e0;
        }
    }
    ctx->pc = 0x11B74Cu;
label_11b74c:
    // 0x11b74c: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x11b74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11b750: 0xc0475be  jal         func_11D6F8
    ctx->pc = 0x11B750u;
    SET_GPR_U32(ctx, 31, 0x11B758u);
    ctx->pc = 0x11B754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B750u;
            // 0x11b754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D6F8u;
    if (runtime->hasFunction(0x11D6F8u)) {
        auto targetFn = runtime->lookupFunction(0x11D6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B758u; }
        if (ctx->pc != 0x11B758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6F8_0x11d6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B758u; }
        if (ctx->pc != 0x11B758u) { return; }
    }
    ctx->pc = 0x11B758u;
label_11b758:
    // 0x11b758: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x11b758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11b75c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11b75cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b760: 0x52dbc  dsll32      $a1, $a1, 22
    ctx->pc = 0x11b760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 22));
    // 0x11b764: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B764u;
    SET_GPR_U32(ctx, 31, 0x11B76Cu);
    ctx->pc = 0x11B768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B764u;
            // 0x11b768: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B76Cu; }
        if (ctx->pc != 0x11B76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B76Cu; }
        if (ctx->pc != 0x11B76Cu) { return; }
    }
    ctx->pc = 0x11B76Cu;
label_11b76c:
    // 0x11b76c: 0xc0474c2  jal         func_11D308
    ctx->pc = 0x11B76Cu;
    SET_GPR_U32(ctx, 31, 0x11B774u);
    ctx->pc = 0x11B770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B76Cu;
            // 0x11b770: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D308u;
    if (runtime->hasFunction(0x11D308u)) {
        auto targetFn = runtime->lookupFunction(0x11D308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B774u; }
        if (ctx->pc != 0x11B774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D308_0x11d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B774u; }
        if (ctx->pc != 0x11B774u) { return; }
    }
    ctx->pc = 0x11B774u;
label_11b774:
    // 0x11b774: 0x24050201  addiu       $a1, $zero, 0x201
    ctx->pc = 0x11b774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x11b778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b77c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B77Cu;
    SET_GPR_U32(ctx, 31, 0x11B784u);
    ctx->pc = 0x11B780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B77Cu;
            // 0x11b780: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B784u; }
        if (ctx->pc != 0x11B784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B784u; }
        if (ctx->pc != 0x11B784u) { return; }
    }
    ctx->pc = 0x11B784u;
label_11b784:
    // 0x11b784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b788: 0xc049622  jal         func_125888
    ctx->pc = 0x11B788u;
    SET_GPR_U32(ctx, 31, 0x11B790u);
    ctx->pc = 0x11B78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B788u;
            // 0x11b78c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B790u; }
        if (ctx->pc != 0x11B790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B790u; }
        if (ctx->pc != 0x11B790u) { return; }
    }
    ctx->pc = 0x11B790u;
label_11b790:
    // 0x11b790: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11b790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b794: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x11B794u;
    SET_GPR_U32(ctx, 31, 0x11B79Cu);
    ctx->pc = 0x11B798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B794u;
            // 0x11b798: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B79Cu; }
        if (ctx->pc != 0x11B79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B79Cu; }
        if (ctx->pc != 0x11B79Cu) { return; }
    }
    ctx->pc = 0x11B79Cu;
label_11b79c:
    // 0x11b79c: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x11b79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x11b7a0: 0xc049776  jal         func_125DD8
    ctx->pc = 0x11B7A0u;
    SET_GPR_U32(ctx, 31, 0x11B7A8u);
    ctx->pc = 0x11B7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B7A0u;
            // 0x11b7a4: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B7A8u; }
        if (ctx->pc != 0x11B7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B7A8u; }
        if (ctx->pc != 0x11B7A8u) { return; }
    }
    ctx->pc = 0x11B7A8u;
label_11b7a8:
    // 0x11b7a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b7ac: 0xc049622  jal         func_125888
    ctx->pc = 0x11B7ACu;
    SET_GPR_U32(ctx, 31, 0x11B7B4u);
    ctx->pc = 0x11B7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B7ACu;
            // 0x11b7b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B7B4u; }
        if (ctx->pc != 0x11B7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B7B4u; }
        if (ctx->pc != 0x11B7B4u) { return; }
    }
    ctx->pc = 0x11B7B4u;
label_11b7b4:
    // 0x11b7b4: 0x8faf0250  lw          $t7, 0x250($sp)
    ctx->pc = 0x11b7b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11b7b8: 0x19e001e2  blez        $t7, . + 4 + (0x1E2 << 2)
    ctx->pc = 0x11B7B8u;
    {
        const bool branch_taken_0x11b7b8 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x11B7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B7B8u;
            // 0x11b7bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b7b8) {
            ctx->pc = 0x11BF44u;
            goto label_11bf44;
        }
    }
    ctx->pc = 0x11B7C0u;
    // 0x11b7c0: 0x166080  sll         $t4, $s6, 2
    ctx->pc = 0x11b7c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11b7c4: 0x8fab0250  lw          $t3, 0x250($sp)
    ctx->pc = 0x11b7c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11b7c8: 0x19d6021  addu        $t4, $t4, $sp
    ctx->pc = 0x11b7c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x11b7cc: 0x240f0018  addiu       $t7, $zero, 0x18
    ctx->pc = 0x11b7ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11b7d0: 0x8d8efffc  lw          $t6, -0x4($t4)
    ctx->pc = 0x11b7d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967292)));
    // 0x11b7d4: 0x1eb7823  subu        $t7, $t7, $t3
    ctx->pc = 0x11b7d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x11b7d8: 0x240d0017  addiu       $t5, $zero, 0x17
    ctx->pc = 0x11b7d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x11b7dc: 0x1eea007  srav        $s4, $t6, $t7
    ctx->pc = 0x11b7dcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
    // 0x11b7e0: 0x1ab6823  subu        $t5, $t5, $t3
    ctx->pc = 0x11b7e0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x11b7e4: 0x8fab024c  lw          $t3, 0x24C($sp)
    ctx->pc = 0x11b7e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x11b7e8: 0x1f47804  sllv        $t7, $s4, $t7
    ctx->pc = 0x11b7e8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 15) & 0x1F));
    // 0x11b7ec: 0x1cf7023  subu        $t6, $t6, $t7
    ctx->pc = 0x11b7ecu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11b7f0: 0x1745821  addu        $t3, $t3, $s4
    ctx->pc = 0x11b7f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x11b7f4: 0xad8efffc  sw          $t6, -0x4($t4)
    ctx->pc = 0x11b7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294967292), GPR_U32(ctx, 14));
    // 0x11b7f8: 0xafab024c  sw          $t3, 0x24C($sp)
    ctx->pc = 0x11b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 11));
    // 0x11b7fc: 0x1ae7007  srav        $t6, $t6, $t5
    ctx->pc = 0x11b7fcu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
label_11b800:
    // 0x11b800: 0xafae0254  sw          $t6, 0x254($sp)
    ctx->pc = 0x11b800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 14));
    // 0x11b804: 0x8faf0254  lw          $t7, 0x254($sp)
    ctx->pc = 0x11b804u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11b808: 0x19e0002d  blez        $t7, . + 4 + (0x2D << 2)
    ctx->pc = 0x11B808u;
    {
        const bool branch_taken_0x11b808 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x11B80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B808u;
            // 0x11b80c: 0x8fab024c  lw          $t3, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b808) {
            ctx->pc = 0x11B8C0u;
            goto label_11b8c0;
        }
    }
    ctx->pc = 0x11B810u;
    // 0x11b810: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11b810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b814: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x11b814u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x11b818: 0x1ac00010  blez        $s6, . + 4 + (0x10 << 2)
    ctx->pc = 0x11B818u;
    {
        const bool branch_taken_0x11b818 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x11B81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B818u;
            // 0x11b81c: 0xafab024c  sw          $t3, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b818) {
            ctx->pc = 0x11B85Cu;
            goto label_11b85c;
        }
    }
    ctx->pc = 0x11B820u;
    // 0x11b820: 0x3c0b00ff  lui         $t3, 0xFF
    ctx->pc = 0x11b820u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)255 << 16));
    // 0x11b824: 0x3c0a0100  lui         $t2, 0x100
    ctx->pc = 0x11b824u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)256 << 16));
    // 0x11b828: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x11b828u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x11b82c: 0x3a0682d  daddu       $t5, $sp, $zero
    ctx->pc = 0x11b82cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b830: 0x2c0602d  daddu       $t4, $s6, $zero
    ctx->pc = 0x11b830u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11b834:
    // 0x11b834: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x11b834u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x11b838: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B838u;
    {
        const bool branch_taken_0x11b838 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B838u;
            // 0x11b83c: 0x16e7823  subu        $t7, $t3, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b838) {
            ctx->pc = 0x11B84Cu;
            goto label_11b84c;
        }
    }
    ctx->pc = 0x11B840u;
    // 0x11b840: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B840u;
    {
        const bool branch_taken_0x11b840 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B840u;
            // 0x11b844: 0x14e7823  subu        $t7, $t2, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b840) {
            ctx->pc = 0x11B850u;
            goto label_11b850;
        }
    }
    ctx->pc = 0x11B848u;
    // 0x11b848: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11b848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b84c:
    // 0x11b84c: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x11b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
label_11b850:
    // 0x11b850: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x11b850u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x11b854: 0x1580fff7  bnez        $t4, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B854u;
    {
        const bool branch_taken_0x11b854 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B854u;
            // 0x11b858: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b854) {
            ctx->pc = 0x11B834u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b834;
        }
    }
    ctx->pc = 0x11B85Cu;
label_11b85c:
    // 0x11b85c: 0x8fac0250  lw          $t4, 0x250($sp)
    ctx->pc = 0x11b85cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11b860: 0x19800005  blez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B860u;
    {
        const bool branch_taken_0x11b860 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x11B864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B860u;
            // 0x11b864: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b860) {
            ctx->pc = 0x11B878u;
            goto label_11b878;
        }
    }
    ctx->pc = 0x11B868u;
    // 0x11b868: 0x118f01b3  beq         $t4, $t7, . + 4 + (0x1B3 << 2)
    ctx->pc = 0x11B868u;
    {
        const bool branch_taken_0x11b868 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x11B86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B868u;
            // 0x11b86c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b868) {
            ctx->pc = 0x11BF38u;
            goto label_11bf38;
        }
    }
    ctx->pc = 0x11B870u;
    // 0x11b870: 0x118f01aa  beq         $t4, $t7, . + 4 + (0x1AA << 2)
    ctx->pc = 0x11B870u;
    {
        const bool branch_taken_0x11b870 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x11B874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B870u;
            // 0x11b874: 0x166880  sll         $t5, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b870) {
            ctx->pc = 0x11BF1Cu;
            goto label_11bf1c;
        }
    }
    ctx->pc = 0x11B878u;
label_11b878:
    // 0x11b878: 0x8fad0254  lw          $t5, 0x254($sp)
    ctx->pc = 0x11b878u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11b87c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11b87cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b880: 0x15af0010  bne         $t5, $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x11B880u;
    {
        const bool branch_taken_0x11b880 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x11B884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B880u;
            // 0x11b884: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b880) {
            ctx->pc = 0x11B8C4u;
            goto label_11b8c4;
        }
    }
    ctx->pc = 0x11B888u;
    // 0x11b888: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x11b888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11b88c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11b88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b890: 0x118d3c  dsll32      $s1, $s1, 20
    ctx->pc = 0x11b890u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 20));
    // 0x11b894: 0xc049622  jal         func_125888
    ctx->pc = 0x11B894u;
    SET_GPR_U32(ctx, 31, 0x11B89Cu);
    ctx->pc = 0x11B898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B894u;
            // 0x11b898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B89Cu; }
        if (ctx->pc != 0x11B89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B89Cu; }
        if (ctx->pc != 0x11B89Cu) { return; }
    }
    ctx->pc = 0x11B89Cu;
label_11b89c:
    // 0x11b89c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B89Cu;
    {
        const bool branch_taken_0x11b89c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B89Cu;
            // 0x11b8a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b89c) {
            ctx->pc = 0x11B8C0u;
            goto label_11b8c0;
        }
    }
    ctx->pc = 0x11B8A4u;
    // 0x11b8a4: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x11b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11b8a8: 0xc0475be  jal         func_11D6F8
    ctx->pc = 0x11B8A8u;
    SET_GPR_U32(ctx, 31, 0x11B8B0u);
    ctx->pc = 0x11B8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8A8u;
            // 0x11b8ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D6F8u;
    if (runtime->hasFunction(0x11D6F8u)) {
        auto targetFn = runtime->lookupFunction(0x11D6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8B0u; }
        if (ctx->pc != 0x11B8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6F8_0x11d6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8B0u; }
        if (ctx->pc != 0x11B8B0u) { return; }
    }
    ctx->pc = 0x11B8B0u;
label_11b8b0:
    // 0x11b8b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8b4: 0xc049622  jal         func_125888
    ctx->pc = 0x11B8B4u;
    SET_GPR_U32(ctx, 31, 0x11B8BCu);
    ctx->pc = 0x11B8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8B4u;
            // 0x11b8b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8BCu; }
        if (ctx->pc != 0x11B8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8BCu; }
        if (ctx->pc != 0x11B8BCu) { return; }
    }
    ctx->pc = 0x11B8BCu;
label_11b8bc:
    // 0x11b8bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11b8bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b8c0:
    // 0x11b8c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11b8c4:
    // 0x11b8c4: 0xc049760  jal         func_125D80
    ctx->pc = 0x11B8C4u;
    SET_GPR_U32(ctx, 31, 0x11B8CCu);
    ctx->pc = 0x11B8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8C4u;
            // 0x11b8c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8CCu; }
        if (ctx->pc != 0x11B8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B8CCu; }
        if (ctx->pc != 0x11B8CCu) { return; }
    }
    ctx->pc = 0x11B8CCu;
label_11b8cc:
    // 0x11b8cc: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x11B8CCu;
    {
        const bool branch_taken_0x11b8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8CCu;
            // 0x11b8d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8cc) {
            ctx->pc = 0x11BA50u;
            goto label_11ba50;
        }
    }
    ctx->pc = 0x11B8D4u;
    // 0x11b8d4: 0x8fab0248  lw          $t3, 0x248($sp)
    ctx->pc = 0x11b8d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11b8d8: 0x26d4ffff  addiu       $s4, $s6, -0x1
    ctx->pc = 0x11b8d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x11b8dc: 0x28b782a  slt         $t7, $s4, $t3
    ctx->pc = 0x11b8dcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x11b8e0: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x11B8E0u;
    {
        const bool branch_taken_0x11b8e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B8E0u;
            // 0x11b8e4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8e0) {
            ctx->pc = 0x11B918u;
            goto label_11b918;
        }
    }
    ctx->pc = 0x11B8E8u;
    // 0x11b8e8: 0x147880  sll         $t7, $s4, 2
    ctx->pc = 0x11b8e8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x11b8ec: 0x1c0602d  daddu       $t4, $t6, $zero
    ctx->pc = 0x11b8ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b8f0: 0x1fd6821  addu        $t5, $t7, $sp
    ctx->pc = 0x11b8f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11b8f4:
    // 0x11b8f4: 0x8daf0000  lw          $t7, 0x0($t5)
    ctx->pc = 0x11b8f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x11b8f8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11b8f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11b8fc: 0x28b702a  slt         $t6, $s4, $t3
    ctx->pc = 0x11b8fcu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x11b900: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x11b900u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x11b904: 0x0  nop
    ctx->pc = 0x11b904u;
    // NOP
    // 0x11b908: 0x11c0fffa  beqz        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B908u;
    {
        const bool branch_taken_0x11b908 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B908u;
            // 0x11b90c: 0x25adfffc  addiu       $t5, $t5, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b908) {
            ctx->pc = 0x11B8F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b8f4;
        }
    }
    ctx->pc = 0x11B910u;
    // 0x11b910: 0xafab0248  sw          $t3, 0x248($sp)
    ctx->pc = 0x11b910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 11));
    // 0x11b914: 0x180702d  daddu       $t6, $t4, $zero
    ctx->pc = 0x11b914u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_11b918:
    // 0x11b918: 0x15c0004d  bnez        $t6, . + 4 + (0x4D << 2)
    ctx->pc = 0x11B918u;
    {
        const bool branch_taken_0x11b918 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B918u;
            // 0x11b91c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b918) {
            ctx->pc = 0x11BA50u;
            goto label_11ba50;
        }
    }
    ctx->pc = 0x11B920u;
    // 0x11b920: 0x8fac0248  lw          $t4, 0x248($sp)
    ctx->pc = 0x11b920u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11b924: 0x258fffff  addiu       $t7, $t4, -0x1
    ctx->pc = 0x11b924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x11b928: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x11b928u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x11b92c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11b92cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11b930: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x11b930u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x11b934: 0x15c0000b  bnez        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x11B934u;
    {
        const bool branch_taken_0x11b934 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B934u;
            // 0x11b938: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b934) {
            ctx->pc = 0x11B964u;
            goto label_11b964;
        }
    }
    ctx->pc = 0x11B93Cu;
    // 0x11b93c: 0xc7880  sll         $t7, $t4, 2
    ctx->pc = 0x11b93cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x11b940: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11b940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11b944: 0x25eefffc  addiu       $t6, $t7, -0x4
    ctx->pc = 0x11b944u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
label_11b948:
    // 0x11b948: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11b948u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11b94c: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x11b94cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11b950: 0x0  nop
    ctx->pc = 0x11b950u;
    // NOP
    // 0x11b954: 0x0  nop
    ctx->pc = 0x11b954u;
    // NOP
    // 0x11b958: 0x0  nop
    ctx->pc = 0x11b958u;
    // NOP
    // 0x11b95c: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11B95Cu;
    {
        const bool branch_taken_0x11b95c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B95Cu;
            // 0x11b960: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b95c) {
            ctx->pc = 0x11B948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b948;
        }
    }
    ctx->pc = 0x11B964u;
label_11b964:
    // 0x11b964: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x11b964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x11b968: 0x26d40001  addiu       $s4, $s6, 0x1
    ctx->pc = 0x11b968u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x11b96c: 0x214782a  slt         $t7, $s0, $s4
    ctx->pc = 0x11b96cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11b970: 0x15e00035  bnez        $t7, . + 4 + (0x35 << 2)
    ctx->pc = 0x11B970u;
    {
        const bool branch_taken_0x11b970 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B970u;
            // 0x11b974: 0xafb0025c  sw          $s0, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b970) {
            ctx->pc = 0x11BA48u;
            goto label_11ba48;
        }
    }
    ctx->pc = 0x11B978u;
    // 0x11b978: 0x8fad0240  lw          $t5, 0x240($sp)
    ctx->pc = 0x11b978u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11b97c: 0x1470c0  sll         $t6, $s4, 3
    ctx->pc = 0x11b97cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11b980: 0x8fab0244  lw          $t3, 0x244($sp)
    ctx->pc = 0x11b980u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x11b984: 0xd78c0  sll         $t7, $t5, 3
    ctx->pc = 0x11b984u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x11b988: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x11b988u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x11b98c: 0x1746821  addu        $t5, $t3, $s4
    ctx->pc = 0x11b98cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x11b990: 0x8fab0240  lw          $t3, 0x240($sp)
    ctx->pc = 0x11b990u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11b994: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11b994u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11b998: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x11b998u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x11b99c: 0x25f70050  addiu       $s7, $t7, 0x50
    ctx->pc = 0x11b99cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 80));
    // 0x11b9a0: 0x25d60190  addiu       $s6, $t6, 0x190
    ctx->pc = 0x11b9a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 14), 400));
    // 0x11b9a4: 0x1746021  addu        $t4, $t3, $s4
    ctx->pc = 0x11b9a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x11b9a8: 0x8fae023c  lw          $t6, 0x23C($sp)
    ctx->pc = 0x11b9a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x11b9ac: 0x296f0000  slti        $t7, $t3, 0x0
    ctx->pc = 0x11b9acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x11b9b0: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x11b9b0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x11b9b4: 0xafaf0260  sw          $t7, 0x260($sp)
    ctx->pc = 0x11b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 15));
    // 0x11b9b8: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x11b9b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x11b9bc: 0x1aea821  addu        $s5, $t5, $t6
    ctx->pc = 0x11b9bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x11b9c0: 0x19df021  addu        $fp, $t4, $sp
    ctx->pc = 0x11b9c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
label_11b9c4:
    // 0x11b9c4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x11b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x11b9c8: 0xc049776  jal         func_125DD8
    ctx->pc = 0x11B9C8u;
    SET_GPR_U32(ctx, 31, 0x11B9D0u);
    ctx->pc = 0x11B9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9C8u;
            // 0x11b9cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9D0u; }
        if (ctx->pc != 0x11B9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B9D0u; }
        if (ctx->pc != 0x11B9D0u) { return; }
    }
    ctx->pc = 0x11B9D0u;
label_11b9d0:
    // 0x11b9d0: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x11b9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x11b9d4: 0x8fab0260  lw          $t3, 0x260($sp)
    ctx->pc = 0x11b9d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x11b9d8: 0x55600013  bnel        $t3, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x11B9D8u;
    {
        const bool branch_taken_0x11b9d8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b9d8) {
            ctx->pc = 0x11B9DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11B9D8u;
            // 0x11b9dc: 0xfed20000  sd          $s2, 0x0($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BA28u;
            goto label_11ba28;
        }
    }
    ctx->pc = 0x11B9E0u;
    // 0x11b9e0: 0x8fac0240  lw          $t4, 0x240($sp)
    ctx->pc = 0x11b9e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11b9e4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x11b9e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b9e8: 0x8fb00230  lw          $s0, 0x230($sp)
    ctx->pc = 0x11b9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x11b9ec: 0x27d10050  addiu       $s1, $fp, 0x50
    ctx->pc = 0x11b9ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x11b9f0: 0x25920001  addiu       $s2, $t4, 0x1
    ctx->pc = 0x11b9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_11b9f4:
    // 0x11b9f4: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x11b9f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b9f8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11b9f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x11b9fc: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x11b9fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11ba00: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11BA00u;
    SET_GPR_U32(ctx, 31, 0x11BA08u);
    ctx->pc = 0x11BA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA00u;
            // 0x11ba04: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA08u; }
        if (ctx->pc != 0x11BA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA08u; }
        if (ctx->pc != 0x11BA08u) { return; }
    }
    ctx->pc = 0x11BA08u;
label_11ba08:
    // 0x11ba08: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x11ba08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x11ba0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ba0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba10: 0xc04960a  jal         func_125828
    ctx->pc = 0x11BA10u;
    SET_GPR_U32(ctx, 31, 0x11BA18u);
    ctx->pc = 0x11BA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA10u;
            // 0x11ba14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA18u; }
        if (ctx->pc != 0x11BA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA18u; }
        if (ctx->pc != 0x11BA18u) { return; }
    }
    ctx->pc = 0x11BA18u;
label_11ba18:
    // 0x11ba18: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x11BA18u;
    {
        const bool branch_taken_0x11ba18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA18u;
            // 0x11ba1c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba18) {
            ctx->pc = 0x11B9F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b9f4;
        }
    }
    ctx->pc = 0x11BA20u;
    // 0x11ba20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11ba20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba24: 0xfed20000  sd          $s2, 0x0($s6)
    ctx->pc = 0x11ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 18));
label_11ba28:
    // 0x11ba28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11ba28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11ba2c: 0x8fad025c  lw          $t5, 0x25C($sp)
    ctx->pc = 0x11ba2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x11ba30: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x11ba30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x11ba34: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x11ba34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x11ba38: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x11ba38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x11ba3c: 0x1b4782a  slt         $t7, $t5, $s4
    ctx->pc = 0x11ba3cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11ba40: 0x11e0ffe0  beqz        $t7, . + 4 + (-0x20 << 2)
    ctx->pc = 0x11BA40u;
    {
        const bool branch_taken_0x11ba40 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA40u;
            // 0x11ba44: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba40) {
            ctx->pc = 0x11B9C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b9c4;
        }
    }
    ctx->pc = 0x11BA48u;
label_11ba48:
    // 0x11ba48: 0x1000ff1e  b           . + 4 + (-0xE2 << 2)
    ctx->pc = 0x11BA48u;
    {
        const bool branch_taken_0x11ba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA48u;
            // 0x11ba4c: 0x8fb6025c  lw          $s6, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba48) {
            ctx->pc = 0x11B6C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b6c4;
        }
    }
    ctx->pc = 0x11BA50u;
label_11ba50:
    // 0x11ba50: 0xc049760  jal         func_125D80
    ctx->pc = 0x11BA50u;
    SET_GPR_U32(ctx, 31, 0x11BA58u);
    ctx->pc = 0x11BA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA50u;
            // 0x11ba54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA58u; }
        if (ctx->pc != 0x11BA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BA58u; }
        if (ctx->pc != 0x11BA58u) { return; }
    }
    ctx->pc = 0x11BA58u;
label_11ba58:
    // 0x11ba58: 0x14400103  bnez        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x11BA58u;
    {
        const bool branch_taken_0x11ba58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA58u;
            // 0x11ba5c: 0x8fac0250  lw          $t4, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba58) {
            ctx->pc = 0x11BE68u;
            goto label_11be68;
        }
    }
    ctx->pc = 0x11BA60u;
    // 0x11ba60: 0x8fae0250  lw          $t6, 0x250($sp)
    ctx->pc = 0x11ba60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11ba64: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x11ba64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x11ba68: 0x167880  sll         $t7, $s6, 2
    ctx->pc = 0x11ba68u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11ba6c: 0x25ceffe8  addiu       $t6, $t6, -0x18
    ctx->pc = 0x11ba6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967272));
    // 0x11ba70: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11ba70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11ba74: 0xafae0250  sw          $t6, 0x250($sp)
    ctx->pc = 0x11ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 14));
    // 0x11ba78: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x11ba78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x11ba7c: 0x55c0000a  bnel        $t6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11BA7Cu;
    {
        const bool branch_taken_0x11ba7c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ba7c) {
            ctx->pc = 0x11BA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA7Cu;
            // 0x11ba80: 0x8fa50250  lw          $a1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BAA8u;
            goto label_11baa8;
        }
    }
    ctx->pc = 0x11BA84u;
    // 0x11ba84: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x11ba84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_11ba88:
    // 0x11ba88: 0x8fab0250  lw          $t3, 0x250($sp)
    ctx->pc = 0x11ba88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11ba8c: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x11ba8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x11ba90: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x11ba90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x11ba94: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x11ba94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x11ba98: 0x256bffe8  addiu       $t3, $t3, -0x18
    ctx->pc = 0x11ba98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967272));
    // 0x11ba9c: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BA9Cu;
    {
        const bool branch_taken_0x11ba9c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA9Cu;
            // 0x11baa0: 0xafab0250  sw          $t3, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba9c) {
            ctx->pc = 0x11BA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ba88;
        }
    }
    ctx->pc = 0x11BAA4u;
label_11baa4:
    // 0x11baa4: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x11baa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_11baa8:
    // 0x11baa8: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x11baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11baac: 0x4253c  dsll32      $a0, $a0, 20
    ctx->pc = 0x11baacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
    // 0x11bab0: 0xc0475be  jal         func_11D6F8
    ctx->pc = 0x11BAB0u;
    SET_GPR_U32(ctx, 31, 0x11BAB8u);
    ctx->pc = 0x11BAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAB0u;
            // 0x11bab4: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D6F8u;
    if (runtime->hasFunction(0x11D6F8u)) {
        auto targetFn = runtime->lookupFunction(0x11D6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAB8u; }
        if (ctx->pc != 0x11BAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6F8_0x11d6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAB8u; }
        if (ctx->pc != 0x11BAB8u) { return; }
    }
    ctx->pc = 0x11BAB8u;
label_11bab8:
    // 0x11bab8: 0x6c00039  bltz        $s6, . + 4 + (0x39 << 2)
    ctx->pc = 0x11BAB8u;
    {
        const bool branch_taken_0x11bab8 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x11BABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAB8u;
            // 0x11babc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bab8) {
            ctx->pc = 0x11BBA0u;
            goto label_11bba0;
        }
    }
    ctx->pc = 0x11BAC0u;
    // 0x11bac0: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11bac0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11bac4: 0x167080  sll         $t6, $s6, 2
    ctx->pc = 0x11bac4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11bac8: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11bac8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11bacc: 0x1dd8821  addu        $s1, $t6, $sp
    ctx->pc = 0x11baccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x11bad0: 0x25f00190  addiu       $s0, $t7, 0x190
    ctx->pc = 0x11bad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 400));
label_11bad4:
    // 0x11bad4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x11bad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11bad8: 0xc049776  jal         func_125DD8
    ctx->pc = 0x11BAD8u;
    SET_GPR_U32(ctx, 31, 0x11BAE0u);
    ctx->pc = 0x11BADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAD8u;
            // 0x11badc: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAE0u; }
        if (ctx->pc != 0x11BAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAE0u; }
        if (ctx->pc != 0x11BAE0u) { return; }
    }
    ctx->pc = 0x11BAE0u;
label_11bae0:
    // 0x11bae0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x11bae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x11bae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bae8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11BAE8u;
    SET_GPR_U32(ctx, 31, 0x11BAF0u);
    ctx->pc = 0x11BAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAE8u;
            // 0x11baec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAF0u; }
        if (ctx->pc != 0x11BAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAF0u; }
        if (ctx->pc != 0x11BAF0u) { return; }
    }
    ctx->pc = 0x11BAF0u;
label_11baf0:
    // 0x11baf0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x11baf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x11baf4: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x11baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x11baf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11baf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bafc: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11BAFCu;
    SET_GPR_U32(ctx, 31, 0x11BB04u);
    ctx->pc = 0x11BB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAFCu;
            // 0x11bb00: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB04u; }
        if (ctx->pc != 0x11BB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB04u; }
        if (ctx->pc != 0x11BB04u) { return; }
    }
    ctx->pc = 0x11BB04u;
label_11bb04:
    // 0x11bb04: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x11bb04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11bb08: 0x681fff2  bgez        $s4, . + 4 + (-0xE << 2)
    ctx->pc = 0x11BB08u;
    {
        const bool branch_taken_0x11bb08 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11BB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB08u;
            // 0x11bb0c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb08) {
            ctx->pc = 0x11BAD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bad4;
        }
    }
    ctx->pc = 0x11BB10u;
    // 0x11bb10: 0x6c00023  bltz        $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x11BB10u;
    {
        const bool branch_taken_0x11bb10 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x11BB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB10u;
            // 0x11bb14: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb10) {
            ctx->pc = 0x11BBA0u;
            goto label_11bba0;
        }
    }
    ctx->pc = 0x11BB18u;
    // 0x11bb18: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11bb18u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11bb1c: 0x1fdf021  addu        $fp, $t7, $sp
    ctx->pc = 0x11bb1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11bb20:
    // 0x11bb20: 0x8fae0258  lw          $t6, 0x258($sp)
    ctx->pc = 0x11bb20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x11bb24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11bb24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb28: 0x15c000cd  bnez        $t6, . + 4 + (0xCD << 2)
    ctx->pc = 0x11BB28u;
    {
        const bool branch_taken_0x11bb28 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB28u;
            // 0x11bb2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb28) {
            ctx->pc = 0x11BE60u;
            goto label_11be60;
        }
    }
    ctx->pc = 0x11BB30u;
    // 0x11bb30: 0x2d4a823  subu        $s5, $s6, $s4
    ctx->pc = 0x11bb30u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x11bb34: 0x6a00014  bltz        $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x11BB34u;
    {
        const bool branch_taken_0x11bb34 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x11BB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB34u;
            // 0x11bb38: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb34) {
            ctx->pc = 0x11BB88u;
            goto label_11bb88;
        }
    }
    ctx->pc = 0x11BB3Cu;
    // 0x11bb3c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11bb3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11bb40: 0x27d30190  addiu       $s3, $fp, 0x190
    ctx->pc = 0x11bb40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 400));
    // 0x11bb44: 0x25f1fce0  addiu       $s1, $t7, -0x320
    ctx->pc = 0x11bb44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966496));
    // 0x11bb48: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x11bb48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_11bb4c:
    // 0x11bb4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11bb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11bb50: 0xde650000  ld          $a1, 0x0($s3)
    ctx->pc = 0x11bb50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11bb54: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11BB54u;
    SET_GPR_U32(ctx, 31, 0x11BB5Cu);
    ctx->pc = 0x11BB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB54u;
            // 0x11bb58: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB5Cu; }
        if (ctx->pc != 0x11BB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB5Cu; }
        if (ctx->pc != 0x11BB5Cu) { return; }
    }
    ctx->pc = 0x11BB5Cu;
label_11bb5c:
    // 0x11bb5c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x11bb5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x11bb60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb64: 0xc04960a  jal         func_125828
    ctx->pc = 0x11BB64u;
    SET_GPR_U32(ctx, 31, 0x11BB6Cu);
    ctx->pc = 0x11BB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB64u;
            // 0x11bb68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB6Cu; }
        if (ctx->pc != 0x11BB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB6Cu; }
        if (ctx->pc != 0x11BB6Cu) { return; }
    }
    ctx->pc = 0x11BB6Cu;
label_11bb6c:
    // 0x11bb6c: 0x8fab0248  lw          $t3, 0x248($sp)
    ctx->pc = 0x11bb6cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x11bb70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11bb70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb74: 0x170782a  slt         $t7, $t3, $s0
    ctx->pc = 0x11bb74u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11bb78: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BB78u;
    {
        const bool branch_taken_0x11bb78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB78u;
            // 0x11bb7c: 0x2f0702a  slt         $t6, $s7, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb78) {
            ctx->pc = 0x11BB88u;
            goto label_11bb88;
        }
    }
    ctx->pc = 0x11BB80u;
    // 0x11bb80: 0x51c0fff2  beql        $t6, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x11BB80u;
    {
        const bool branch_taken_0x11bb80 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bb80) {
            ctx->pc = 0x11BB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB80u;
            // 0x11bb84: 0xde240000  ld          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BB4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bb4c;
        }
    }
    ctx->pc = 0x11BB88u;
label_11bb88:
    // 0x11bb88: 0x1578c0  sll         $t7, $s5, 3
    ctx->pc = 0x11bb88u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x11bb8c: 0x27defff8  addiu       $fp, $fp, -0x8
    ctx->pc = 0x11bb8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967288));
    // 0x11bb90: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11bb90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11bb94: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11bb94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11bb98: 0x681ffe1  bgez        $s4, . + 4 + (-0x1F << 2)
    ctx->pc = 0x11BB98u;
    {
        const bool branch_taken_0x11bb98 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11BB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB98u;
            // 0x11bb9c: 0xfdf200f0  sd          $s2, 0xF0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 240), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb98) {
            ctx->pc = 0x11BB20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bb20;
        }
    }
    ctx->pc = 0x11BBA0u;
label_11bba0:
    // 0x11bba0: 0x8fac0238  lw          $t4, 0x238($sp)
    ctx->pc = 0x11bba0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x11bba4: 0x298f0003  slti        $t7, $t4, 0x3
    ctx->pc = 0x11bba4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11bba8: 0x11e00055  beqz        $t7, . + 4 + (0x55 << 2)
    ctx->pc = 0x11BBA8u;
    {
        const bool branch_taken_0x11bba8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBA8u;
            // 0x11bbac: 0x8fad0238  lw          $t5, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bba8) {
            ctx->pc = 0x11BD00u;
            goto label_11bd00;
        }
    }
    ctx->pc = 0x11BBB0u;
    // 0x11bbb0: 0x5d800026  bgtzl       $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x11BBB0u;
    {
        const bool branch_taken_0x11bbb0 = (GPR_S32(ctx, 12) > 0);
        if (branch_taken_0x11bbb0) {
            ctx->pc = 0x11BBB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBB0u;
            // 0x11bbb4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BC4Cu;
            goto label_11bc4c;
        }
    }
    ctx->pc = 0x11BBB8u;
    // 0x11bbb8: 0x1180000f  beqz        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x11BBB8u;
    {
        const bool branch_taken_0x11bbb8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBB8u;
            // 0x11bbbc: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbb8) {
            ctx->pc = 0x11BBF8u;
            goto label_11bbf8;
        }
    }
    ctx->pc = 0x11BBC0u;
label_11bbc0:
    // 0x11bbc0: 0x8faf024c  lw          $t7, 0x24C($sp)
    ctx->pc = 0x11bbc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_11bbc4:
    // 0x11bbc4: 0xdfb00270  ld          $s0, 0x270($sp)
    ctx->pc = 0x11bbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x11bbc8: 0xdfb10278  ld          $s1, 0x278($sp)
    ctx->pc = 0x11bbc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x11bbcc: 0x31e20007  andi        $v0, $t7, 0x7
    ctx->pc = 0x11bbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)7);
    // 0x11bbd0: 0xdfb20280  ld          $s2, 0x280($sp)
    ctx->pc = 0x11bbd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x11bbd4: 0xdfb30288  ld          $s3, 0x288($sp)
    ctx->pc = 0x11bbd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x11bbd8: 0xdfb40290  ld          $s4, 0x290($sp)
    ctx->pc = 0x11bbd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x11bbdc: 0xdfb50298  ld          $s5, 0x298($sp)
    ctx->pc = 0x11bbdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x11bbe0: 0xdfb602a0  ld          $s6, 0x2A0($sp)
    ctx->pc = 0x11bbe0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x11bbe4: 0xdfb702a8  ld          $s7, 0x2A8($sp)
    ctx->pc = 0x11bbe4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x11bbe8: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x11bbe8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x11bbec: 0xdfbf02b8  ld          $ra, 0x2B8($sp)
    ctx->pc = 0x11bbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x11bbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x11BBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBF0u;
            // 0x11bbf4: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BBF8u;
label_11bbf8:
    // 0x11bbf8: 0x6c0000b  bltz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x11BBF8u;
    {
        const bool branch_taken_0x11bbf8 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x11BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBF8u;
            // 0x11bbfc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbf8) {
            ctx->pc = 0x11BC28u;
            goto label_11bc28;
        }
    }
    ctx->pc = 0x11BC00u;
    // 0x11bc00: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11bc00u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11bc04: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11bc04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11bc08: 0x25f000f0  addiu       $s0, $t7, 0xF0
    ctx->pc = 0x11bc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 240));
label_11bc0c:
    // 0x11bc0c: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x11bc0cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11bc10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc14: 0xc04960a  jal         func_125828
    ctx->pc = 0x11BC14u;
    SET_GPR_U32(ctx, 31, 0x11BC1Cu);
    ctx->pc = 0x11BC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC14u;
            // 0x11bc18: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC1Cu; }
        if (ctx->pc != 0x11BC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC1Cu; }
        if (ctx->pc != 0x11BC1Cu) { return; }
    }
    ctx->pc = 0x11BC1Cu;
label_11bc1c:
    // 0x11bc1c: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x11bc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11bc20: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BC20u;
    {
        const bool branch_taken_0x11bc20 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11BC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC20u;
            // 0x11bc24: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc20) {
            ctx->pc = 0x11BC0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bc0c;
        }
    }
    ctx->pc = 0x11BC28u;
label_11bc28:
    // 0x11bc28: 0x8fae0254  lw          $t6, 0x254($sp)
    ctx->pc = 0x11bc28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11bc2c: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC2Cu;
    {
        const bool branch_taken_0x11bc2c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC2Cu;
            // 0x11bc30: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc2c) {
            ctx->pc = 0x11BC40u;
            goto label_11bc40;
        }
    }
    ctx->pc = 0x11BC34u;
    // 0x11bc34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11bc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc38: 0xc049622  jal         func_125888
    ctx->pc = 0x11BC38u;
    SET_GPR_U32(ctx, 31, 0x11BC40u);
    ctx->pc = 0x11BC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC38u;
            // 0x11bc3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC40u; }
        if (ctx->pc != 0x11BC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC40u; }
        if (ctx->pc != 0x11BC40u) { return; }
    }
    ctx->pc = 0x11BC40u;
label_11bc40:
    // 0x11bc40: 0x8faf0234  lw          $t7, 0x234($sp)
    ctx->pc = 0x11bc40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11bc44: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x11BC44u;
    {
        const bool branch_taken_0x11bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC44u;
            // 0x11bc48: 0xfde20000  sd          $v0, 0x0($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc44) {
            ctx->pc = 0x11BBC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bbc0;
        }
    }
    ctx->pc = 0x11BC4Cu;
label_11bc4c:
    // 0x11bc4c: 0x6c0000b  bltz        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x11BC4Cu;
    {
        const bool branch_taken_0x11bc4c = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x11BC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC4Cu;
            // 0x11bc50: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc4c) {
            ctx->pc = 0x11BC7Cu;
            goto label_11bc7c;
        }
    }
    ctx->pc = 0x11BC54u;
    // 0x11bc54: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11bc54u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11bc58: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11bc58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11bc5c: 0x25f000f0  addiu       $s0, $t7, 0xF0
    ctx->pc = 0x11bc5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 240));
label_11bc60:
    // 0x11bc60: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x11bc60u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11bc64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc68: 0xc04960a  jal         func_125828
    ctx->pc = 0x11BC68u;
    SET_GPR_U32(ctx, 31, 0x11BC70u);
    ctx->pc = 0x11BC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC68u;
            // 0x11bc6c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC70u; }
        if (ctx->pc != 0x11BC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC70u; }
        if (ctx->pc != 0x11BC70u) { return; }
    }
    ctx->pc = 0x11BC70u;
label_11bc70:
    // 0x11bc70: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x11bc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11bc74: 0x681fffa  bgez        $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BC74u;
    {
        const bool branch_taken_0x11bc74 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11BC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC74u;
            // 0x11bc78: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc74) {
            ctx->pc = 0x11BC60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bc60;
        }
    }
    ctx->pc = 0x11BC7Cu;
label_11bc7c:
    // 0x11bc7c: 0x8fab0254  lw          $t3, 0x254($sp)
    ctx->pc = 0x11bc7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11bc80: 0x11600004  beqz        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC80u;
    {
        const bool branch_taken_0x11bc80 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC80u;
            // 0x11bc84: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc80) {
            ctx->pc = 0x11BC94u;
            goto label_11bc94;
        }
    }
    ctx->pc = 0x11BC88u;
    // 0x11bc88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11bc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc8c: 0xc049622  jal         func_125888
    ctx->pc = 0x11BC8Cu;
    SET_GPR_U32(ctx, 31, 0x11BC94u);
    ctx->pc = 0x11BC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC8Cu;
            // 0x11bc90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC94u; }
        if (ctx->pc != 0x11BC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC94u; }
        if (ctx->pc != 0x11BC94u) { return; }
    }
    ctx->pc = 0x11BC94u;
label_11bc94:
    // 0x11bc94: 0xdfa400f0  ld          $a0, 0xF0($sp)
    ctx->pc = 0x11bc94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11bc98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11bc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc9c: 0x8fac0234  lw          $t4, 0x234($sp)
    ctx->pc = 0x11bc9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11bca0: 0xc049622  jal         func_125888
    ctx->pc = 0x11BCA0u;
    SET_GPR_U32(ctx, 31, 0x11BCA8u);
    ctx->pc = 0x11BCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCA0u;
            // 0x11bca4: 0xfd820000  sd          $v0, 0x0($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCA8u; }
        if (ctx->pc != 0x11BCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCA8u; }
        if (ctx->pc != 0x11BCA8u) { return; }
    }
    ctx->pc = 0x11BCA8u;
label_11bca8:
    // 0x11bca8: 0x1ac0000c  blez        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x11BCA8u;
    {
        const bool branch_taken_0x11bca8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x11BCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCA8u;
            // 0x11bcac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bca8) {
            ctx->pc = 0x11BCDCu;
            goto label_11bcdc;
        }
    }
    ctx->pc = 0x11BCB0u;
    // 0x11bcb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11bcb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcb4: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x11bcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcb8: 0x27b200f8  addiu       $s2, $sp, 0xF8
    ctx->pc = 0x11bcb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_11bcbc:
    // 0x11bcbc: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x11bcbcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11bcc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11bcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcc4: 0xc04960a  jal         func_125828
    ctx->pc = 0x11BCC4u;
    SET_GPR_U32(ctx, 31, 0x11BCCCu);
    ctx->pc = 0x11BCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCC4u;
            // 0x11bcc8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCCCu; }
        if (ctx->pc != 0x11BCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCCCu; }
        if (ctx->pc != 0x11BCCCu) { return; }
    }
    ctx->pc = 0x11BCCCu;
label_11bccc:
    // 0x11bccc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x11bcccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x11bcd0: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BCD0u;
    {
        const bool branch_taken_0x11bcd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCD0u;
            // 0x11bcd4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcd0) {
            ctx->pc = 0x11BCBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bcbc;
        }
    }
    ctx->pc = 0x11BCD8u;
    // 0x11bcd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11bcd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11bcdc:
    // 0x11bcdc: 0x8fad0254  lw          $t5, 0x254($sp)
    ctx->pc = 0x11bcdcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11bce0: 0x11a00004  beqz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BCE0u;
    {
        const bool branch_taken_0x11bce0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCE0u;
            // 0x11bce4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bce0) {
            ctx->pc = 0x11BCF4u;
            goto label_11bcf4;
        }
    }
    ctx->pc = 0x11BCE8u;
    // 0x11bce8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11bce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcec: 0xc049622  jal         func_125888
    ctx->pc = 0x11BCECu;
    SET_GPR_U32(ctx, 31, 0x11BCF4u);
    ctx->pc = 0x11BCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCECu;
            // 0x11bcf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCF4u; }
        if (ctx->pc != 0x11BCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCF4u; }
        if (ctx->pc != 0x11BCF4u) { return; }
    }
    ctx->pc = 0x11BCF4u;
label_11bcf4:
    // 0x11bcf4: 0x8fae0234  lw          $t6, 0x234($sp)
    ctx->pc = 0x11bcf4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11bcf8: 0x1000ffb1  b           . + 4 + (-0x4F << 2)
    ctx->pc = 0x11BCF8u;
    {
        const bool branch_taken_0x11bcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCF8u;
            // 0x11bcfc: 0xfdc20008  sd          $v0, 0x8($t6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcf8) {
            ctx->pc = 0x11BBC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bbc0;
        }
    }
    ctx->pc = 0x11BD00u;
label_11bd00:
    // 0x11bd00: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x11bd00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11bd04: 0x15afffaf  bne         $t5, $t7, . + 4 + (-0x51 << 2)
    ctx->pc = 0x11BD04u;
    {
        const bool branch_taken_0x11bd04 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x11BD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD04u;
            // 0x11bd08: 0x8faf024c  lw          $t7, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd04) {
            ctx->pc = 0x11BBC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bbc4;
        }
    }
    ctx->pc = 0x11BD0Cu;
    // 0x11bd0c: 0x1ac00014  blez        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x11BD0Cu;
    {
        const bool branch_taken_0x11bd0c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x11BD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD0Cu;
            // 0x11bd10: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd0c) {
            ctx->pc = 0x11BD60u;
            goto label_11bd60;
        }
    }
    ctx->pc = 0x11BD14u;
    // 0x11bd14: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11bd14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11bd18: 0x1fd9821  addu        $s3, $t7, $sp
    ctx->pc = 0x11bd18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11bd1c:
    // 0x11bd1c: 0xde7000e8  ld          $s0, 0xE8($s3)
    ctx->pc = 0x11bd1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x11bd20: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11bd20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11bd24: 0xde7100f0  ld          $s1, 0xF0($s3)
    ctx->pc = 0x11bd24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11bd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd2c: 0xc04960a  jal         func_125828
    ctx->pc = 0x11BD2Cu;
    SET_GPR_U32(ctx, 31, 0x11BD34u);
    ctx->pc = 0x11BD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD2Cu;
            // 0x11bd30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD34u; }
        if (ctx->pc != 0x11BD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD34u; }
        if (ctx->pc != 0x11BD34u) { return; }
    }
    ctx->pc = 0x11BD34u;
label_11bd34:
    // 0x11bd34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11bd34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd3c: 0xc049622  jal         func_125888
    ctx->pc = 0x11BD3Cu;
    SET_GPR_U32(ctx, 31, 0x11BD44u);
    ctx->pc = 0x11BD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD3Cu;
            // 0x11bd40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD44u; }
        if (ctx->pc != 0x11BD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD44u; }
        if (ctx->pc != 0x11BD44u) { return; }
    }
    ctx->pc = 0x11BD44u;
label_11bd44:
    // 0x11bd44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11bd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd48: 0xc04960a  jal         func_125828
    ctx->pc = 0x11BD48u;
    SET_GPR_U32(ctx, 31, 0x11BD50u);
    ctx->pc = 0x11BD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD48u;
            // 0x11bd4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD50u; }
        if (ctx->pc != 0x11BD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD50u; }
        if (ctx->pc != 0x11BD50u) { return; }
    }
    ctx->pc = 0x11BD50u;
label_11bd50:
    // 0x11bd50: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x11bd50u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x11bd54: 0xfe7200e8  sd          $s2, 0xE8($s3)
    ctx->pc = 0x11bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 232), GPR_U64(ctx, 18));
    // 0x11bd58: 0x1e80fff0  bgtz        $s4, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11BD58u;
    {
        const bool branch_taken_0x11bd58 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x11BD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD58u;
            // 0x11bd5c: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd58) {
            ctx->pc = 0x11BD1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bd1c;
        }
    }
    ctx->pc = 0x11BD60u;
label_11bd60:
    // 0x11bd60: 0x2acf0002  slti        $t7, $s6, 0x2
    ctx->pc = 0x11bd60u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11bd64: 0x15e00015  bnez        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x11BD64u;
    {
        const bool branch_taken_0x11bd64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD64u;
            // 0x11bd68: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd64) {
            ctx->pc = 0x11BDBCu;
            goto label_11bdbc;
        }
    }
    ctx->pc = 0x11BD6Cu;
    // 0x11bd6c: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11bd6cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11bd70: 0x1fd9821  addu        $s3, $t7, $sp
    ctx->pc = 0x11bd70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
label_11bd74:
    // 0x11bd74: 0xde7000e8  ld          $s0, 0xE8($s3)
    ctx->pc = 0x11bd74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x11bd78: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x11bd78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x11bd7c: 0xde7100f0  ld          $s1, 0xF0($s3)
    ctx->pc = 0x11bd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11bd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd84: 0xc04960a  jal         func_125828
    ctx->pc = 0x11BD84u;
    SET_GPR_U32(ctx, 31, 0x11BD8Cu);
    ctx->pc = 0x11BD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD84u;
            // 0x11bd88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD8Cu; }
        if (ctx->pc != 0x11BD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD8Cu; }
        if (ctx->pc != 0x11BD8Cu) { return; }
    }
    ctx->pc = 0x11BD8Cu;
label_11bd8c:
    // 0x11bd8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11bd8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd94: 0xc049622  jal         func_125888
    ctx->pc = 0x11BD94u;
    SET_GPR_U32(ctx, 31, 0x11BD9Cu);
    ctx->pc = 0x11BD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BD94u;
            // 0x11bd98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD9Cu; }
        if (ctx->pc != 0x11BD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BD9Cu; }
        if (ctx->pc != 0x11BD9Cu) { return; }
    }
    ctx->pc = 0x11BD9Cu;
label_11bd9c:
    // 0x11bd9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11bd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bda0: 0xc04960a  jal         func_125828
    ctx->pc = 0x11BDA0u;
    SET_GPR_U32(ctx, 31, 0x11BDA8u);
    ctx->pc = 0x11BDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDA0u;
            // 0x11bda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDA8u; }
        if (ctx->pc != 0x11BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDA8u; }
        if (ctx->pc != 0x11BDA8u) { return; }
    }
    ctx->pc = 0x11BDA8u;
label_11bda8:
    // 0x11bda8: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x11bda8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x11bdac: 0x2a8f0002  slti        $t7, $s4, 0x2
    ctx->pc = 0x11bdacu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11bdb0: 0xfe7200e8  sd          $s2, 0xE8($s3)
    ctx->pc = 0x11bdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 232), GPR_U64(ctx, 18));
    // 0x11bdb4: 0x11e0ffef  beqz        $t7, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11BDB4u;
    {
        const bool branch_taken_0x11bdb4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDB4u;
            // 0x11bdb8: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdb4) {
            ctx->pc = 0x11BD74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bd74;
        }
    }
    ctx->pc = 0x11BDBCu;
label_11bdbc:
    // 0x11bdbc: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x11bdbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdc0: 0x2acf0002  slti        $t7, $s6, 0x2
    ctx->pc = 0x11bdc0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11bdc4: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11BDC4u;
    {
        const bool branch_taken_0x11bdc4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDC4u;
            // 0x11bdc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdc4) {
            ctx->pc = 0x11BDF8u;
            goto label_11bdf8;
        }
    }
    ctx->pc = 0x11BDCCu;
    // 0x11bdcc: 0x1678c0  sll         $t7, $s6, 3
    ctx->pc = 0x11bdccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x11bdd0: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11bdd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11bdd4: 0x25f000f0  addiu       $s0, $t7, 0xF0
    ctx->pc = 0x11bdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 240));
label_11bdd8:
    // 0x11bdd8: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x11bdd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11bddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bde0: 0xc04960a  jal         func_125828
    ctx->pc = 0x11BDE0u;
    SET_GPR_U32(ctx, 31, 0x11BDE8u);
    ctx->pc = 0x11BDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDE0u;
            // 0x11bde4: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDE8u; }
        if (ctx->pc != 0x11BDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BDE8u; }
        if (ctx->pc != 0x11BDE8u) { return; }
    }
    ctx->pc = 0x11BDE8u;
label_11bde8:
    // 0x11bde8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x11bde8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x11bdec: 0x2a8f0002  slti        $t7, $s4, 0x2
    ctx->pc = 0x11bdecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11bdf0: 0x11e0fff9  beqz        $t7, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11BDF0u;
    {
        const bool branch_taken_0x11bdf0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDF0u;
            // 0x11bdf4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdf0) {
            ctx->pc = 0x11BDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bdd8;
        }
    }
    ctx->pc = 0x11BDF8u;
label_11bdf8:
    // 0x11bdf8: 0x8faf0254  lw          $t7, 0x254($sp)
    ctx->pc = 0x11bdf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11bdfc: 0x55e00008  bnel        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BDFCu;
    {
        const bool branch_taken_0x11bdfc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bdfc) {
            ctx->pc = 0x11BE00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BDFCu;
            // 0x11be00: 0xdfa500f0  ld          $a1, 0xF0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BE20u;
            goto label_11be20;
        }
    }
    ctx->pc = 0x11BE04u;
    // 0x11be04: 0xdfaf00f0  ld          $t7, 0xF0($sp)
    ctx->pc = 0x11be04u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11be08: 0xdfae00f8  ld          $t6, 0xF8($sp)
    ctx->pc = 0x11be08u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11be0c: 0x8fab0234  lw          $t3, 0x234($sp)
    ctx->pc = 0x11be0cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11be10: 0xfd720010  sd          $s2, 0x10($t3)
    ctx->pc = 0x11be10u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 18));
    // 0x11be14: 0xfd6f0000  sd          $t7, 0x0($t3)
    ctx->pc = 0x11be14u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 15));
    // 0x11be18: 0x1000ff69  b           . + 4 + (-0x97 << 2)
    ctx->pc = 0x11BE18u;
    {
        const bool branch_taken_0x11be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE18u;
            // 0x11be1c: 0xfd6e0008  sd          $t6, 0x8($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be18) {
            ctx->pc = 0x11BBC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bbc0;
        }
    }
    ctx->pc = 0x11BE20u;
label_11be20:
    // 0x11be20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11be20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be24: 0xc049622  jal         func_125888
    ctx->pc = 0x11BE24u;
    SET_GPR_U32(ctx, 31, 0x11BE2Cu);
    ctx->pc = 0x11BE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE24u;
            // 0x11be28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE2Cu; }
        if (ctx->pc != 0x11BE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE2Cu; }
        if (ctx->pc != 0x11BE2Cu) { return; }
    }
    ctx->pc = 0x11BE2Cu;
label_11be2c:
    // 0x11be2c: 0xdfa500f8  ld          $a1, 0xF8($sp)
    ctx->pc = 0x11be2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11be30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be34: 0x8fac0234  lw          $t4, 0x234($sp)
    ctx->pc = 0x11be34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11be38: 0xc049622  jal         func_125888
    ctx->pc = 0x11BE38u;
    SET_GPR_U32(ctx, 31, 0x11BE40u);
    ctx->pc = 0x11BE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE38u;
            // 0x11be3c: 0xfd820000  sd          $v0, 0x0($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE40u; }
        if (ctx->pc != 0x11BE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE40u; }
        if (ctx->pc != 0x11BE40u) { return; }
    }
    ctx->pc = 0x11BE40u;
label_11be40:
    // 0x11be40: 0x8fad0234  lw          $t5, 0x234($sp)
    ctx->pc = 0x11be40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11be44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11be48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be4c: 0xc049622  jal         func_125888
    ctx->pc = 0x11BE4Cu;
    SET_GPR_U32(ctx, 31, 0x11BE54u);
    ctx->pc = 0x11BE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE4Cu;
            // 0x11be50: 0xfda20008  sd          $v0, 0x8($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE54u; }
        if (ctx->pc != 0x11BE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE54u; }
        if (ctx->pc != 0x11BE54u) { return; }
    }
    ctx->pc = 0x11BE54u;
label_11be54:
    // 0x11be54: 0x8fae0234  lw          $t6, 0x234($sp)
    ctx->pc = 0x11be54u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x11be58: 0x1000ff59  b           . + 4 + (-0xA7 << 2)
    ctx->pc = 0x11BE58u;
    {
        const bool branch_taken_0x11be58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE58u;
            // 0x11be5c: 0xfdc20010  sd          $v0, 0x10($t6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be58) {
            ctx->pc = 0x11BBC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bbc0;
        }
    }
    ctx->pc = 0x11BE60u;
label_11be60:
    // 0x11be60: 0x1000ff49  b           . + 4 + (-0xB7 << 2)
    ctx->pc = 0x11BE60u;
    {
        const bool branch_taken_0x11be60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE60u;
            // 0x11be64: 0x2d4a823  subu        $s5, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be60) {
            ctx->pc = 0x11BB88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bb88;
        }
    }
    ctx->pc = 0x11BE68u;
label_11be68:
    // 0x11be68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11be68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be6c: 0x24100417  addiu       $s0, $zero, 0x417
    ctx->pc = 0x11be6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1047));
    // 0x11be70: 0xc2823  negu        $a1, $t4
    ctx->pc = 0x11be70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
    // 0x11be74: 0xc0475be  jal         func_11D6F8
    ctx->pc = 0x11BE74u;
    SET_GPR_U32(ctx, 31, 0x11BE7Cu);
    ctx->pc = 0x11BE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE74u;
            // 0x11be78: 0x10853c  dsll32      $s0, $s0, 20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D6F8u;
    if (runtime->hasFunction(0x11D6F8u)) {
        auto targetFn = runtime->lookupFunction(0x11D6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE7Cu; }
        if (ctx->pc != 0x11BE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D6F8_0x11d6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE7Cu; }
        if (ctx->pc != 0x11BE7Cu) { return; }
    }
    ctx->pc = 0x11BE7Cu;
label_11be7c:
    // 0x11be7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11be7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be84: 0xc049760  jal         func_125D80
    ctx->pc = 0x11BE84u;
    SET_GPR_U32(ctx, 31, 0x11BE8Cu);
    ctx->pc = 0x11BE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE84u;
            // 0x11be88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE8Cu; }
        if (ctx->pc != 0x11BE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BE8Cu; }
        if (ctx->pc != 0x11BE8Cu) { return; }
    }
    ctx->pc = 0x11BE8Cu;
label_11be8c:
    // 0x11be8c: 0x5c400020  bgtzl       $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11BE8Cu;
    {
        const bool branch_taken_0x11be8c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x11be8c) {
            ctx->pc = 0x11BE90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BE8Cu;
            // 0x11be90: 0x168080  sll         $s0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BF10u;
            goto label_11bf10;
        }
    }
    ctx->pc = 0x11BE94u;
    // 0x11be94: 0x8fad0250  lw          $t5, 0x250($sp)
    ctx->pc = 0x11be94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11be98: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x11be98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x11be9c: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x11be9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x11bea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11bea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bea4: 0x25ad0018  addiu       $t5, $t5, 0x18
    ctx->pc = 0x11bea4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 24));
    // 0x11bea8: 0x168880  sll         $s1, $s6, 2
    ctx->pc = 0x11bea8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11beac: 0xafad0250  sw          $t5, 0x250($sp)
    ctx->pc = 0x11beacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 13));
    // 0x11beb0: 0x23d8821  addu        $s1, $s1, $sp
    ctx->pc = 0x11beb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x11beb4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11BEB4u;
    SET_GPR_U32(ctx, 31, 0x11BEBCu);
    ctx->pc = 0x11BEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEB4u;
            // 0x11beb8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEBCu; }
        if (ctx->pc != 0x11BEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEBCu; }
        if (ctx->pc != 0x11BEBCu) { return; }
    }
    ctx->pc = 0x11BEBCu;
label_11bebc:
    // 0x11bebc: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x11BEBCu;
    SET_GPR_U32(ctx, 31, 0x11BEC4u);
    ctx->pc = 0x11BEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEBCu;
            // 0x11bec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEC4u; }
        if (ctx->pc != 0x11BEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEC4u; }
        if (ctx->pc != 0x11BEC4u) { return; }
    }
    ctx->pc = 0x11BEC4u;
label_11bec4:
    // 0x11bec4: 0xc049776  jal         func_125DD8
    ctx->pc = 0x11BEC4u;
    SET_GPR_U32(ctx, 31, 0x11BECCu);
    ctx->pc = 0x11BEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEC4u;
            // 0x11bec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BECCu; }
        if (ctx->pc != 0x11BECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BECCu; }
        if (ctx->pc != 0x11BECCu) { return; }
    }
    ctx->pc = 0x11BECCu;
label_11becc:
    // 0x11becc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11beccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bed0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11bed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11bed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bed8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11BED8u;
    SET_GPR_U32(ctx, 31, 0x11BEE0u);
    ctx->pc = 0x11BEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BED8u;
            // 0x11bedc: 0x168080  sll         $s0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEE0u; }
        if (ctx->pc != 0x11BEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEE0u; }
        if (ctx->pc != 0x11BEE0u) { return; }
    }
    ctx->pc = 0x11BEE0u;
label_11bee0:
    // 0x11bee0: 0x21d8021  addu        $s0, $s0, $sp
    ctx->pc = 0x11bee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x11bee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11bee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bee8: 0xc049622  jal         func_125888
    ctx->pc = 0x11BEE8u;
    SET_GPR_U32(ctx, 31, 0x11BEF0u);
    ctx->pc = 0x11BEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEE8u;
            // 0x11beec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEF0u; }
        if (ctx->pc != 0x11BEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEF0u; }
        if (ctx->pc != 0x11BEF0u) { return; }
    }
    ctx->pc = 0x11BEF0u;
label_11bef0:
    // 0x11bef0: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x11BEF0u;
    SET_GPR_U32(ctx, 31, 0x11BEF8u);
    ctx->pc = 0x11BEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BEF0u;
            // 0x11bef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEF8u; }
        if (ctx->pc != 0x11BEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BEF8u; }
        if (ctx->pc != 0x11BEF8u) { return; }
    }
    ctx->pc = 0x11BEF8u;
label_11bef8:
    // 0x11bef8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x11bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x11befc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11befcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11bf00:
    // 0x11bf00: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x11BF00u;
    SET_GPR_U32(ctx, 31, 0x11BF08u);
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF08u; }
        if (ctx->pc != 0x11BF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF08u; }
        if (ctx->pc != 0x11BF08u) { return; }
    }
    ctx->pc = 0x11BF08u;
label_11bf08:
    // 0x11bf08: 0x1000fee6  b           . + 4 + (-0x11A << 2)
    ctx->pc = 0x11BF08u;
    {
        const bool branch_taken_0x11bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF08u;
            // 0x11bf0c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf08) {
            ctx->pc = 0x11BAA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11baa4;
        }
    }
    ctx->pc = 0x11BF10u;
label_11bf10:
    // 0x11bf10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11bf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf14: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BF14u;
    {
        const bool branch_taken_0x11bf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF14u;
            // 0x11bf18: 0x21d8021  addu        $s0, $s0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf14) {
            ctx->pc = 0x11BF00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bf00;
        }
    }
    ctx->pc = 0x11BF1Cu;
label_11bf1c:
    // 0x11bf1c: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x11bf1cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
label_11bf20:
    // 0x11bf20: 0x1bd6821  addu        $t5, $t5, $sp
    ctx->pc = 0x11bf20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 29)));
    // 0x11bf24: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11bf24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11bf28: 0x8daffffc  lw          $t7, -0x4($t5)
    ctx->pc = 0x11bf28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294967292)));
    // 0x11bf2c: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x11bf2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x11bf30: 0x1000fe51  b           . + 4 + (-0x1AF << 2)
    ctx->pc = 0x11BF30u;
    {
        const bool branch_taken_0x11bf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF30u;
            // 0x11bf34: 0xadaffffc  sw          $t7, -0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4294967292), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf30) {
            ctx->pc = 0x11B878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b878;
        }
    }
    ctx->pc = 0x11BF38u;
label_11bf38:
    // 0x11bf38: 0x166880  sll         $t5, $s6, 2
    ctx->pc = 0x11bf38u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11bf3c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x11BF3Cu;
    {
        const bool branch_taken_0x11bf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF3Cu;
            // 0x11bf40: 0x3c0e007f  lui         $t6, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf3c) {
            ctx->pc = 0x11BF20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bf20;
        }
    }
    ctx->pc = 0x11BF44u;
label_11bf44:
    // 0x11bf44: 0x8fac0250  lw          $t4, 0x250($sp)
    ctx->pc = 0x11bf44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x11bf48: 0x15800006  bnez        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BF48u;
    {
        const bool branch_taken_0x11bf48 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF48u;
            // 0x11bf4c: 0x240d0002  addiu       $t5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf48) {
            ctx->pc = 0x11BF64u;
            goto label_11bf64;
        }
    }
    ctx->pc = 0x11BF50u;
    // 0x11bf50: 0x167880  sll         $t7, $s6, 2
    ctx->pc = 0x11bf50u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x11bf54: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x11bf54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x11bf58: 0x8deefffc  lw          $t6, -0x4($t7)
    ctx->pc = 0x11bf58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294967292)));
    // 0x11bf5c: 0x1000fe28  b           . + 4 + (-0x1D8 << 2)
    ctx->pc = 0x11BF5Cu;
    {
        const bool branch_taken_0x11bf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF5Cu;
            // 0x11bf60: 0xe75c3  sra         $t6, $t6, 23 (Delay Slot)
        SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf5c) {
            ctx->pc = 0x11B800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b800;
        }
    }
    ctx->pc = 0x11BF64u;
label_11bf64:
    // 0x11bf64: 0x240401ff  addiu       $a0, $zero, 0x1FF
    ctx->pc = 0x11bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x11bf68: 0xafad0254  sw          $t5, 0x254($sp)
    ctx->pc = 0x11bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 13));
    // 0x11bf6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11bf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf70: 0xc049760  jal         func_125D80
    ctx->pc = 0x11BF70u;
    SET_GPR_U32(ctx, 31, 0x11BF78u);
    ctx->pc = 0x11BF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF70u;
            // 0x11bf74: 0x4257c  dsll32      $a0, $a0, 21 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF78u; }
        if (ctx->pc != 0x11BF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BF78u; }
        if (ctx->pc != 0x11BF78u) { return; }
    }
    ctx->pc = 0x11BF78u;
label_11bf78:
    // 0x11bf78: 0x8fae0254  lw          $t6, 0x254($sp)
    ctx->pc = 0x11bf78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x11bf7c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x11bf7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11bf80: 0x1000fe1f  b           . + 4 + (-0x1E1 << 2)
    ctx->pc = 0x11BF80u;
    {
        const bool branch_taken_0x11bf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BF80u;
            // 0x11bf84: 0x2700b  movn        $t6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf80) {
            ctx->pc = 0x11B800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b800;
        }
    }
    ctx->pc = 0x11BF88u;
}
