#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00475390
// Address: 0x475390 - 0x475640
void sub_00475390_0x475390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475390_0x475390");
#endif

    switch (ctx->pc) {
        case 0x475390u: goto label_475390;
        case 0x475394u: goto label_475394;
        case 0x475398u: goto label_475398;
        case 0x47539cu: goto label_47539c;
        case 0x4753a0u: goto label_4753a0;
        case 0x4753a4u: goto label_4753a4;
        case 0x4753a8u: goto label_4753a8;
        case 0x4753acu: goto label_4753ac;
        case 0x4753b0u: goto label_4753b0;
        case 0x4753b4u: goto label_4753b4;
        case 0x4753b8u: goto label_4753b8;
        case 0x4753bcu: goto label_4753bc;
        case 0x4753c0u: goto label_4753c0;
        case 0x4753c4u: goto label_4753c4;
        case 0x4753c8u: goto label_4753c8;
        case 0x4753ccu: goto label_4753cc;
        case 0x4753d0u: goto label_4753d0;
        case 0x4753d4u: goto label_4753d4;
        case 0x4753d8u: goto label_4753d8;
        case 0x4753dcu: goto label_4753dc;
        case 0x4753e0u: goto label_4753e0;
        case 0x4753e4u: goto label_4753e4;
        case 0x4753e8u: goto label_4753e8;
        case 0x4753ecu: goto label_4753ec;
        case 0x4753f0u: goto label_4753f0;
        case 0x4753f4u: goto label_4753f4;
        case 0x4753f8u: goto label_4753f8;
        case 0x4753fcu: goto label_4753fc;
        case 0x475400u: goto label_475400;
        case 0x475404u: goto label_475404;
        case 0x475408u: goto label_475408;
        case 0x47540cu: goto label_47540c;
        case 0x475410u: goto label_475410;
        case 0x475414u: goto label_475414;
        case 0x475418u: goto label_475418;
        case 0x47541cu: goto label_47541c;
        case 0x475420u: goto label_475420;
        case 0x475424u: goto label_475424;
        case 0x475428u: goto label_475428;
        case 0x47542cu: goto label_47542c;
        case 0x475430u: goto label_475430;
        case 0x475434u: goto label_475434;
        case 0x475438u: goto label_475438;
        case 0x47543cu: goto label_47543c;
        case 0x475440u: goto label_475440;
        case 0x475444u: goto label_475444;
        case 0x475448u: goto label_475448;
        case 0x47544cu: goto label_47544c;
        case 0x475450u: goto label_475450;
        case 0x475454u: goto label_475454;
        case 0x475458u: goto label_475458;
        case 0x47545cu: goto label_47545c;
        case 0x475460u: goto label_475460;
        case 0x475464u: goto label_475464;
        case 0x475468u: goto label_475468;
        case 0x47546cu: goto label_47546c;
        case 0x475470u: goto label_475470;
        case 0x475474u: goto label_475474;
        case 0x475478u: goto label_475478;
        case 0x47547cu: goto label_47547c;
        case 0x475480u: goto label_475480;
        case 0x475484u: goto label_475484;
        case 0x475488u: goto label_475488;
        case 0x47548cu: goto label_47548c;
        case 0x475490u: goto label_475490;
        case 0x475494u: goto label_475494;
        case 0x475498u: goto label_475498;
        case 0x47549cu: goto label_47549c;
        case 0x4754a0u: goto label_4754a0;
        case 0x4754a4u: goto label_4754a4;
        case 0x4754a8u: goto label_4754a8;
        case 0x4754acu: goto label_4754ac;
        case 0x4754b0u: goto label_4754b0;
        case 0x4754b4u: goto label_4754b4;
        case 0x4754b8u: goto label_4754b8;
        case 0x4754bcu: goto label_4754bc;
        case 0x4754c0u: goto label_4754c0;
        case 0x4754c4u: goto label_4754c4;
        case 0x4754c8u: goto label_4754c8;
        case 0x4754ccu: goto label_4754cc;
        case 0x4754d0u: goto label_4754d0;
        case 0x4754d4u: goto label_4754d4;
        case 0x4754d8u: goto label_4754d8;
        case 0x4754dcu: goto label_4754dc;
        case 0x4754e0u: goto label_4754e0;
        case 0x4754e4u: goto label_4754e4;
        case 0x4754e8u: goto label_4754e8;
        case 0x4754ecu: goto label_4754ec;
        case 0x4754f0u: goto label_4754f0;
        case 0x4754f4u: goto label_4754f4;
        case 0x4754f8u: goto label_4754f8;
        case 0x4754fcu: goto label_4754fc;
        case 0x475500u: goto label_475500;
        case 0x475504u: goto label_475504;
        case 0x475508u: goto label_475508;
        case 0x47550cu: goto label_47550c;
        case 0x475510u: goto label_475510;
        case 0x475514u: goto label_475514;
        case 0x475518u: goto label_475518;
        case 0x47551cu: goto label_47551c;
        case 0x475520u: goto label_475520;
        case 0x475524u: goto label_475524;
        case 0x475528u: goto label_475528;
        case 0x47552cu: goto label_47552c;
        case 0x475530u: goto label_475530;
        case 0x475534u: goto label_475534;
        case 0x475538u: goto label_475538;
        case 0x47553cu: goto label_47553c;
        case 0x475540u: goto label_475540;
        case 0x475544u: goto label_475544;
        case 0x475548u: goto label_475548;
        case 0x47554cu: goto label_47554c;
        case 0x475550u: goto label_475550;
        case 0x475554u: goto label_475554;
        case 0x475558u: goto label_475558;
        case 0x47555cu: goto label_47555c;
        case 0x475560u: goto label_475560;
        case 0x475564u: goto label_475564;
        case 0x475568u: goto label_475568;
        case 0x47556cu: goto label_47556c;
        case 0x475570u: goto label_475570;
        case 0x475574u: goto label_475574;
        case 0x475578u: goto label_475578;
        case 0x47557cu: goto label_47557c;
        case 0x475580u: goto label_475580;
        case 0x475584u: goto label_475584;
        case 0x475588u: goto label_475588;
        case 0x47558cu: goto label_47558c;
        case 0x475590u: goto label_475590;
        case 0x475594u: goto label_475594;
        case 0x475598u: goto label_475598;
        case 0x47559cu: goto label_47559c;
        case 0x4755a0u: goto label_4755a0;
        case 0x4755a4u: goto label_4755a4;
        case 0x4755a8u: goto label_4755a8;
        case 0x4755acu: goto label_4755ac;
        case 0x4755b0u: goto label_4755b0;
        case 0x4755b4u: goto label_4755b4;
        case 0x4755b8u: goto label_4755b8;
        case 0x4755bcu: goto label_4755bc;
        case 0x4755c0u: goto label_4755c0;
        case 0x4755c4u: goto label_4755c4;
        case 0x4755c8u: goto label_4755c8;
        case 0x4755ccu: goto label_4755cc;
        case 0x4755d0u: goto label_4755d0;
        case 0x4755d4u: goto label_4755d4;
        case 0x4755d8u: goto label_4755d8;
        case 0x4755dcu: goto label_4755dc;
        case 0x4755e0u: goto label_4755e0;
        case 0x4755e4u: goto label_4755e4;
        case 0x4755e8u: goto label_4755e8;
        case 0x4755ecu: goto label_4755ec;
        case 0x4755f0u: goto label_4755f0;
        case 0x4755f4u: goto label_4755f4;
        case 0x4755f8u: goto label_4755f8;
        case 0x4755fcu: goto label_4755fc;
        case 0x475600u: goto label_475600;
        case 0x475604u: goto label_475604;
        case 0x475608u: goto label_475608;
        case 0x47560cu: goto label_47560c;
        case 0x475610u: goto label_475610;
        case 0x475614u: goto label_475614;
        case 0x475618u: goto label_475618;
        case 0x47561cu: goto label_47561c;
        case 0x475620u: goto label_475620;
        case 0x475624u: goto label_475624;
        case 0x475628u: goto label_475628;
        case 0x47562cu: goto label_47562c;
        case 0x475630u: goto label_475630;
        case 0x475634u: goto label_475634;
        case 0x475638u: goto label_475638;
        case 0x47563cu: goto label_47563c;
        default: break;
    }

    ctx->pc = 0x475390u;

label_475390:
    // 0x475390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x475390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_475394:
    // 0x475394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x475394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_475398:
    // 0x475398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x475398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47539c:
    // 0x47539c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4753a0:
    // 0x4753a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4753a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4753a4:
    // 0x4753a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4753a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4753a8:
    // 0x4753a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4753a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_4753ac:
    // 0x4753ac: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x4753acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4753b0:
    // 0x4753b0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x4753b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4753b4:
    // 0x4753b4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4753b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_4753b8:
    // 0x4753b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4753b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4753bc:
    // 0x4753bc: 0xc11d990  jal         func_476640
label_4753c0:
    if (ctx->pc == 0x4753C0u) {
        ctx->pc = 0x4753C0u;
            // 0x4753c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4753C4u;
        goto label_4753c4;
    }
    ctx->pc = 0x4753BCu;
    SET_GPR_U32(ctx, 31, 0x4753C4u);
    ctx->pc = 0x4753C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4753BCu;
            // 0x4753c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x476640u;
    if (runtime->hasFunction(0x476640u)) {
        auto targetFn = runtime->lookupFunction(0x476640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4753C4u; }
        if (ctx->pc != 0x4753C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00476640_0x476640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4753C4u; }
        if (ctx->pc != 0x4753C4u) { return; }
    }
    ctx->pc = 0x4753C4u;
label_4753c4:
    // 0x4753c4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4753c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_4753c8:
    // 0x4753c8: 0x261001f0  addiu       $s0, $s0, 0x1F0
    ctx->pc = 0x4753c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_4753cc:
    // 0x4753cc: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_4753d0:
    if (ctx->pc == 0x4753D0u) {
        ctx->pc = 0x4753D4u;
        goto label_4753d4;
    }
    ctx->pc = 0x4753CCu;
    {
        const bool branch_taken_0x4753cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4753cc) {
            ctx->pc = 0x4753B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4753b8;
        }
    }
    ctx->pc = 0x4753D4u;
label_4753d4:
    // 0x4753d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4753d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4753d8:
    // 0x4753d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4753d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4753dc:
    // 0x4753dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4753dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4753e0:
    // 0x4753e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4753e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4753e4:
    // 0x4753e4: 0x3e00008  jr          $ra
label_4753e8:
    if (ctx->pc == 0x4753E8u) {
        ctx->pc = 0x4753E8u;
            // 0x4753e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4753ECu;
        goto label_4753ec;
    }
    ctx->pc = 0x4753E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4753E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4753E4u;
            // 0x4753e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4753ECu;
label_4753ec:
    // 0x4753ec: 0x0  nop
    ctx->pc = 0x4753ecu;
    // NOP
label_4753f0:
    // 0x4753f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4753f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4753f4:
    // 0x4753f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4753f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4753f8:
    // 0x4753f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4753f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4753fc:
    // 0x4753fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4753fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_475400:
    // 0x475400: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x475400u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_475404:
    // 0x475404: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x475404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_475408:
    // 0x475408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x475408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47540c:
    // 0x47540c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_475410:
    // 0x475410: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x475410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_475414:
    // 0x475414: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_475418:
    if (ctx->pc == 0x475418u) {
        ctx->pc = 0x475418u;
            // 0x475418: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47541Cu;
        goto label_47541c;
    }
    ctx->pc = 0x475414u;
    {
        const bool branch_taken_0x475414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x475418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475414u;
            // 0x475418: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475414) {
            ctx->pc = 0x475458u;
            goto label_475458;
        }
    }
    ctx->pc = 0x47541Cu;
label_47541c:
    // 0x47541c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47541cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475420:
    // 0x475420: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x475420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475424:
    // 0x475424: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x475424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475428:
    // 0x475428: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x475428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_47542c:
    // 0x47542c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x47542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_475430:
    // 0x475430: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x475430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_475434:
    // 0x475434: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x475434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_475438:
    // 0x475438: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x475438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_47543c:
    // 0x47543c: 0x320f809  jalr        $t9
label_475440:
    if (ctx->pc == 0x475440u) {
        ctx->pc = 0x475444u;
        goto label_475444;
    }
    ctx->pc = 0x47543Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x475444u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x475444u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x475444u; }
            if (ctx->pc != 0x475444u) { return; }
        }
        }
    }
    ctx->pc = 0x475444u;
label_475444:
    // 0x475444: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x475444u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_475448:
    // 0x475448: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x475448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_47544c:
    // 0x47544c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x47544cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_475450:
    // 0x475450: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_475454:
    if (ctx->pc == 0x475454u) {
        ctx->pc = 0x475454u;
            // 0x475454: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x475458u;
        goto label_475458;
    }
    ctx->pc = 0x475450u;
    {
        const bool branch_taken_0x475450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x475454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475450u;
            // 0x475454: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475450) {
            ctx->pc = 0x475428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_475428;
        }
    }
    ctx->pc = 0x475458u;
label_475458:
    // 0x475458: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x475458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47545c:
    // 0x47545c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x47545cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_475460:
    // 0x475460: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x475460u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_475464:
    // 0x475464: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x475464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_475468:
    // 0x475468: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x475468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47546c:
    // 0x47546c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47546cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_475470:
    // 0x475470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x475470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_475474:
    // 0x475474: 0x3e00008  jr          $ra
label_475478:
    if (ctx->pc == 0x475478u) {
        ctx->pc = 0x475478u;
            // 0x475478: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x47547Cu;
        goto label_47547c;
    }
    ctx->pc = 0x475474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x475478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475474u;
            // 0x475478: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47547Cu;
label_47547c:
    // 0x47547c: 0x0  nop
    ctx->pc = 0x47547cu;
    // NOP
label_475480:
    // 0x475480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x475480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_475484:
    // 0x475484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x475484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_475488:
    // 0x475488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x475488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47548c:
    // 0x47548c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x47548cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_475490:
    // 0x475490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x475490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_475494:
    // 0x475494: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x475494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_475498:
    // 0x475498: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x475498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47549c:
    // 0x47549c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x47549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4754a0:
    // 0x4754a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4754a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4754a4:
    // 0x4754a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4754a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4754a8:
    // 0x4754a8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4754a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4754ac:
    // 0x4754ac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4754acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4754b0:
    // 0x4754b0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4754b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4754b4:
    // 0x4754b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4754b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4754b8:
    // 0x4754b8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4754b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4754bc:
    // 0x4754bc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4754bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4754c0:
    // 0x4754c0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4754c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4754c4:
    // 0x4754c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4754c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4754c8:
    // 0x4754c8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4754c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4754cc:
    // 0x4754cc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4754ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4754d0:
    // 0x4754d0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4754d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4754d4:
    // 0x4754d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4754d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4754d8:
    // 0x4754d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4754d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4754dc:
    // 0x4754dc: 0xc0a997c  jal         func_2A65F0
label_4754e0:
    if (ctx->pc == 0x4754E0u) {
        ctx->pc = 0x4754E0u;
            // 0x4754e0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4754E4u;
        goto label_4754e4;
    }
    ctx->pc = 0x4754DCu;
    SET_GPR_U32(ctx, 31, 0x4754E4u);
    ctx->pc = 0x4754E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4754DCu;
            // 0x4754e0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4754E4u; }
        if (ctx->pc != 0x4754E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4754E4u; }
        if (ctx->pc != 0x4754E4u) { return; }
    }
    ctx->pc = 0x4754E4u;
label_4754e4:
    // 0x4754e4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4754e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4754e8:
    // 0x4754e8: 0xc0d879c  jal         func_361E70
label_4754ec:
    if (ctx->pc == 0x4754ECu) {
        ctx->pc = 0x4754ECu;
            // 0x4754ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4754F0u;
        goto label_4754f0;
    }
    ctx->pc = 0x4754E8u;
    SET_GPR_U32(ctx, 31, 0x4754F0u);
    ctx->pc = 0x4754ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4754E8u;
            // 0x4754ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4754F0u; }
        if (ctx->pc != 0x4754F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4754F0u; }
        if (ctx->pc != 0x4754F0u) { return; }
    }
    ctx->pc = 0x4754F0u;
label_4754f0:
    // 0x4754f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4754f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4754f4:
    // 0x4754f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4754f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4754f8:
    // 0x4754f8: 0x3e00008  jr          $ra
label_4754fc:
    if (ctx->pc == 0x4754FCu) {
        ctx->pc = 0x4754FCu;
            // 0x4754fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x475500u;
        goto label_475500;
    }
    ctx->pc = 0x4754F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4754FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4754F8u;
            // 0x4754fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x475500u;
label_475500:
    // 0x475500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x475500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_475504:
    // 0x475504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x475504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_475508:
    // 0x475508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x475508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47550c:
    // 0x47550c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x47550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_475510:
    // 0x475510: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_475514:
    if (ctx->pc == 0x475514u) {
        ctx->pc = 0x475514u;
            // 0x475514: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x475518u;
        goto label_475518;
    }
    ctx->pc = 0x475510u;
    {
        const bool branch_taken_0x475510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x475514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475510u;
            // 0x475514: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475510) {
            ctx->pc = 0x475630u;
            goto label_475630;
        }
    }
    ctx->pc = 0x475518u;
label_475518:
    // 0x475518: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x475518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_47551c:
    // 0x47551c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x47551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_475520:
    // 0x475520: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x475520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_475524:
    // 0x475524: 0xc075128  jal         func_1D44A0
label_475528:
    if (ctx->pc == 0x475528u) {
        ctx->pc = 0x475528u;
            // 0x475528: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x47552Cu;
        goto label_47552c;
    }
    ctx->pc = 0x475524u;
    SET_GPR_U32(ctx, 31, 0x47552Cu);
    ctx->pc = 0x475528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475524u;
            // 0x475528: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47552Cu; }
        if (ctx->pc != 0x47552Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47552Cu; }
        if (ctx->pc != 0x47552Cu) { return; }
    }
    ctx->pc = 0x47552Cu;
label_47552c:
    // 0x47552c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x47552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_475530:
    // 0x475530: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x475530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_475534:
    // 0x475534: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x475534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_475538:
    // 0x475538: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x475538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_47553c:
    // 0x47553c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x47553cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_475540:
    // 0x475540: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_475544:
    if (ctx->pc == 0x475544u) {
        ctx->pc = 0x475544u;
            // 0x475544: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x475548u;
        goto label_475548;
    }
    ctx->pc = 0x475540u;
    {
        const bool branch_taken_0x475540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x475544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475540u;
            // 0x475544: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475540) {
            ctx->pc = 0x475550u;
            goto label_475550;
        }
    }
    ctx->pc = 0x475548u;
label_475548:
    // 0x475548: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x475548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47554c:
    // 0x47554c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x47554cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_475550:
    // 0x475550: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x475550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_475554:
    // 0x475554: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x475554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_475558:
    // 0x475558: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x475558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_47555c:
    // 0x47555c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x47555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_475560:
    // 0x475560: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x475560u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_475564:
    // 0x475564: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_475568:
    if (ctx->pc == 0x475568u) {
        ctx->pc = 0x475568u;
            // 0x475568: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x47556Cu;
        goto label_47556c;
    }
    ctx->pc = 0x475564u;
    {
        const bool branch_taken_0x475564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x475564) {
            ctx->pc = 0x475568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475564u;
            // 0x475568: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475578u;
            goto label_475578;
        }
    }
    ctx->pc = 0x47556Cu;
label_47556c:
    // 0x47556c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47556cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_475570:
    // 0x475570: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x475570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_475574:
    // 0x475574: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x475574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_475578:
    // 0x475578: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x475578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47557c:
    // 0x47557c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x47557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_475580:
    // 0x475580: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x475580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_475584:
    // 0x475584: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x475584u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_475588:
    // 0x475588: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_47558c:
    if (ctx->pc == 0x47558Cu) {
        ctx->pc = 0x47558Cu;
            // 0x47558c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x475590u;
        goto label_475590;
    }
    ctx->pc = 0x475588u;
    {
        const bool branch_taken_0x475588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x475588) {
            ctx->pc = 0x47558Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475588u;
            // 0x47558c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47559Cu;
            goto label_47559c;
        }
    }
    ctx->pc = 0x475590u;
label_475590:
    // 0x475590: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x475590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_475594:
    // 0x475594: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x475594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_475598:
    // 0x475598: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x475598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47559c:
    // 0x47559c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x47559cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4755a0:
    // 0x4755a0: 0x320f809  jalr        $t9
label_4755a4:
    if (ctx->pc == 0x4755A4u) {
        ctx->pc = 0x4755A4u;
            // 0x4755a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4755A8u;
        goto label_4755a8;
    }
    ctx->pc = 0x4755A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4755A8u);
        ctx->pc = 0x4755A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4755A0u;
            // 0x4755a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4755A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4755A8u; }
            if (ctx->pc != 0x4755A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4755A8u;
label_4755a8:
    // 0x4755a8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4755a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4755ac:
    // 0x4755ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4755acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4755b0:
    // 0x4755b0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4755b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4755b4:
    // 0x4755b4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4755b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4755b8:
    // 0x4755b8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4755b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4755bc:
    // 0x4755bc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4755bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4755c0:
    // 0x4755c0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4755c4:
    if (ctx->pc == 0x4755C4u) {
        ctx->pc = 0x4755C4u;
            // 0x4755c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4755C8u;
        goto label_4755c8;
    }
    ctx->pc = 0x4755C0u;
    {
        const bool branch_taken_0x4755c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4755c0) {
            ctx->pc = 0x4755C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4755C0u;
            // 0x4755c4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4755D4u;
            goto label_4755d4;
        }
    }
    ctx->pc = 0x4755C8u;
label_4755c8:
    // 0x4755c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4755c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4755cc:
    // 0x4755cc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4755ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4755d0:
    // 0x4755d0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4755d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4755d4:
    // 0x4755d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4755d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4755d8:
    // 0x4755d8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4755d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4755dc:
    // 0x4755dc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4755dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4755e0:
    // 0x4755e0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4755e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4755e4:
    // 0x4755e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4755e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4755e8:
    // 0x4755e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4755ec:
    if (ctx->pc == 0x4755ECu) {
        ctx->pc = 0x4755F0u;
        goto label_4755f0;
    }
    ctx->pc = 0x4755E8u;
    {
        const bool branch_taken_0x4755e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4755e8) {
            ctx->pc = 0x4755F8u;
            goto label_4755f8;
        }
    }
    ctx->pc = 0x4755F0u;
label_4755f0:
    // 0x4755f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4755f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4755f4:
    // 0x4755f4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4755f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4755f8:
    // 0x4755f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4755f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4755fc:
    // 0x4755fc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4755fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_475600:
    // 0x475600: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x475600u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_475604:
    // 0x475604: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_475608:
    if (ctx->pc == 0x475608u) {
        ctx->pc = 0x47560Cu;
        goto label_47560c;
    }
    ctx->pc = 0x475604u;
    {
        const bool branch_taken_0x475604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x475604) {
            ctx->pc = 0x475614u;
            goto label_475614;
        }
    }
    ctx->pc = 0x47560Cu;
label_47560c:
    // 0x47560c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47560cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_475610:
    // 0x475610: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x475610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_475614:
    // 0x475614: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x475614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_475618:
    // 0x475618: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x475618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_47561c:
    // 0x47561c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x47561cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_475620:
    // 0x475620: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_475624:
    if (ctx->pc == 0x475624u) {
        ctx->pc = 0x475624u;
            // 0x475624: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x475628u;
        goto label_475628;
    }
    ctx->pc = 0x475620u;
    {
        const bool branch_taken_0x475620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x475620) {
            ctx->pc = 0x475624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x475620u;
            // 0x475624: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475634u;
            goto label_475634;
        }
    }
    ctx->pc = 0x475628u;
label_475628:
    // 0x475628: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x475628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47562c:
    // 0x47562c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x47562cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_475630:
    // 0x475630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x475630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_475634:
    // 0x475634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x475634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_475638:
    // 0x475638: 0x3e00008  jr          $ra
label_47563c:
    if (ctx->pc == 0x47563Cu) {
        ctx->pc = 0x47563Cu;
            // 0x47563c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x475640u;
        goto label_fallthrough_0x475638;
    }
    ctx->pc = 0x475638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47563Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475638u;
            // 0x47563c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x475638:
    ctx->pc = 0x475640u;
}
