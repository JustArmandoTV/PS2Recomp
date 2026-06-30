#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002095E0
// Address: 0x2095e0 - 0x209940
void sub_002095E0_0x2095e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002095E0_0x2095e0");
#endif

    switch (ctx->pc) {
        case 0x209658u: goto label_209658;
        case 0x2096ecu: goto label_2096ec;
        case 0x209794u: goto label_209794;
        case 0x209844u: goto label_209844;
        case 0x2098ecu: goto label_2098ec;
        default: break;
    }

    ctx->pc = 0x2095e0u;

    // 0x2095e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2095e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2095e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2095e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2095e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2095e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2095ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2095ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2095f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2095f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2095f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2095f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2095f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2095fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x209600: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x209600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x209608: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x209608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20960c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x209610: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x209610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x209614: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x209614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209618: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x209618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x20961c: 0x2458021  addu        $s0, $s2, $a1
    ctx->pc = 0x20961cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x209620: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x209620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x209624: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x209624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x209628: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x209628u;
    {
        const bool branch_taken_0x209628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209628u;
            // 0x20962c: 0xb58823  subu        $s1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209628) {
            ctx->pc = 0x209658u;
            goto label_209658;
        }
    }
    ctx->pc = 0x209630u;
    // 0x209630: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x209630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x209634: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x209634u;
    {
        const bool branch_taken_0x209634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x209634) {
            ctx->pc = 0x209638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209634u;
            // 0x209638: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20965Cu;
            goto label_20965c;
        }
    }
    ctx->pc = 0x20963Cu;
    // 0x20963c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x20963cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x209640: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x209640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x209644: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x209644u;
    {
        const bool branch_taken_0x209644 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x209644) {
            ctx->pc = 0x209648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209644u;
            // 0x209648: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20964Cu;
            goto label_20964c;
        }
    }
    ctx->pc = 0x20964Cu;
label_20964c:
    // 0x20964c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20964cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209650: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x209650u;
    SET_GPR_U32(ctx, 31, 0x209658u);
    ctx->pc = 0x209654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209650u;
            // 0x209654: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209658u; }
        if (ctx->pc != 0x209658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209658u; }
        if (ctx->pc != 0x209658u) { return; }
    }
    ctx->pc = 0x209658u;
label_209658:
    // 0x209658: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x209658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_20965c:
    // 0x20965c: 0x1528c0  sll         $a1, $s5, 3
    ctx->pc = 0x20965cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x209660: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x209660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x209664: 0x2628ffff  addiu       $t0, $s1, -0x1
    ctx->pc = 0x209664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x209668: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x209668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20966c: 0x5000052  bltz        $t0, . + 4 + (0x52 << 2)
    ctx->pc = 0x20966Cu;
    {
        const bool branch_taken_0x20966c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x209670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20966Cu;
            // 0x209670: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20966c) {
            ctx->pc = 0x2097B8u;
            goto label_2097b8;
        }
    }
    ctx->pc = 0x209674u;
    // 0x209674: 0x2a210009  slti        $at, $s1, 0x9
    ctx->pc = 0x209674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x209678: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x209678u;
    {
        const bool branch_taken_0x209678 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x209678) {
            ctx->pc = 0x209780u;
            goto label_209780;
        }
    }
    ctx->pc = 0x209680u;
    // 0x209680: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209680u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209684: 0x5000007  bltz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x209684u;
    {
        const bool branch_taken_0x209684 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x209688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209684u;
            // 0x209688: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209684) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x20968Cu;
    // 0x20968c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x20968cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x209690: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x209690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x209694: 0x106302a  slt         $a2, $t0, $a2
    ctx->pc = 0x209694u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x209698: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x209698u;
    {
        const bool branch_taken_0x209698 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x209698) {
            ctx->pc = 0x2096A4u;
            goto label_2096a4;
        }
    }
    ctx->pc = 0x2096A0u;
    // 0x2096a0: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x2096a0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2096a4:
    // 0x2096a4: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2096A4u;
    {
        const bool branch_taken_0x2096a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2096a4) {
            ctx->pc = 0x2096D8u;
            goto label_2096d8;
        }
    }
    ctx->pc = 0x2096ACu;
    // 0x2096ac: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2096acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x2096b0: 0x1073024  and         $a2, $t0, $a3
    ctx->pc = 0x2096b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x2096b4: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2096B4u;
    {
        const bool branch_taken_0x2096b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2096B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2096B4u;
            // 0x2096b8: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096b4) {
            ctx->pc = 0x2096CCu;
            goto label_2096cc;
        }
    }
    ctx->pc = 0x2096BCu;
    // 0x2096bc: 0x2273024  and         $a2, $s1, $a3
    ctx->pc = 0x2096bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & GPR_U64(ctx, 7));
    // 0x2096c0: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2096C0u;
    {
        const bool branch_taken_0x2096c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2096c0) {
            ctx->pc = 0x2096CCu;
            goto label_2096cc;
        }
    }
    ctx->pc = 0x2096C8u;
    // 0x2096c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2096c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2096cc:
    // 0x2096cc: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2096CCu;
    {
        const bool branch_taken_0x2096cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2096cc) {
            ctx->pc = 0x2096D8u;
            goto label_2096d8;
        }
    }
    ctx->pc = 0x2096D4u;
    // 0x2096d4: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x2096d4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2096d8:
    // 0x2096d8: 0x11400029  beqz        $t2, . + 4 + (0x29 << 2)
    ctx->pc = 0x2096D8u;
    {
        const bool branch_taken_0x2096d8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2096d8) {
            ctx->pc = 0x209780u;
            goto label_209780;
        }
    }
    ctx->pc = 0x2096E0u;
    // 0x2096e0: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x2096e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2096e4: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2096e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2096e8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2096e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2096ec:
    // 0x2096ec: 0x8ce90000  lw          $t1, 0x0($a3)
    ctx->pc = 0x2096ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2096f0: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x2096f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
    // 0x2096f4: 0x29010008  slti        $at, $t0, 0x8
    ctx->pc = 0x2096f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2096f8: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x2096f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x2096fc: 0x8ce90004  lw          $t1, 0x4($a3)
    ctx->pc = 0x2096fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x209700: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x209700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x209704: 0x8ce9fff8  lw          $t1, -0x8($a3)
    ctx->pc = 0x209704u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
    // 0x209708: 0xacc9fff8  sw          $t1, -0x8($a2)
    ctx->pc = 0x209708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), GPR_U32(ctx, 9));
    // 0x20970c: 0x8ce9fffc  lw          $t1, -0x4($a3)
    ctx->pc = 0x20970cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
    // 0x209710: 0xacc9fffc  sw          $t1, -0x4($a2)
    ctx->pc = 0x209710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), GPR_U32(ctx, 9));
    // 0x209714: 0x8ce9fff0  lw          $t1, -0x10($a3)
    ctx->pc = 0x209714u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967280)));
    // 0x209718: 0xacc9fff0  sw          $t1, -0x10($a2)
    ctx->pc = 0x209718u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 9));
    // 0x20971c: 0x8ce9fff4  lw          $t1, -0xC($a3)
    ctx->pc = 0x20971cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967284)));
    // 0x209720: 0xacc9fff4  sw          $t1, -0xC($a2)
    ctx->pc = 0x209720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967284), GPR_U32(ctx, 9));
    // 0x209724: 0x8ce9ffe8  lw          $t1, -0x18($a3)
    ctx->pc = 0x209724u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967272)));
    // 0x209728: 0xacc9ffe8  sw          $t1, -0x18($a2)
    ctx->pc = 0x209728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967272), GPR_U32(ctx, 9));
    // 0x20972c: 0x8ce9ffec  lw          $t1, -0x14($a3)
    ctx->pc = 0x20972cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967276)));
    // 0x209730: 0xacc9ffec  sw          $t1, -0x14($a2)
    ctx->pc = 0x209730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967276), GPR_U32(ctx, 9));
    // 0x209734: 0x8ce9ffe0  lw          $t1, -0x20($a3)
    ctx->pc = 0x209734u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967264)));
    // 0x209738: 0xacc9ffe0  sw          $t1, -0x20($a2)
    ctx->pc = 0x209738u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967264), GPR_U32(ctx, 9));
    // 0x20973c: 0x8ce9ffe4  lw          $t1, -0x1C($a3)
    ctx->pc = 0x20973cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967268)));
    // 0x209740: 0xacc9ffe4  sw          $t1, -0x1C($a2)
    ctx->pc = 0x209740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967268), GPR_U32(ctx, 9));
    // 0x209744: 0x8ce9ffd8  lw          $t1, -0x28($a3)
    ctx->pc = 0x209744u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967256)));
    // 0x209748: 0xacc9ffd8  sw          $t1, -0x28($a2)
    ctx->pc = 0x209748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967256), GPR_U32(ctx, 9));
    // 0x20974c: 0x8ce9ffdc  lw          $t1, -0x24($a3)
    ctx->pc = 0x20974cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967260)));
    // 0x209750: 0xacc9ffdc  sw          $t1, -0x24($a2)
    ctx->pc = 0x209750u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967260), GPR_U32(ctx, 9));
    // 0x209754: 0x8ce9ffd0  lw          $t1, -0x30($a3)
    ctx->pc = 0x209754u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967248)));
    // 0x209758: 0xacc9ffd0  sw          $t1, -0x30($a2)
    ctx->pc = 0x209758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967248), GPR_U32(ctx, 9));
    // 0x20975c: 0x8ce9ffd4  lw          $t1, -0x2C($a3)
    ctx->pc = 0x20975cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967252)));
    // 0x209760: 0xacc9ffd4  sw          $t1, -0x2C($a2)
    ctx->pc = 0x209760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967252), GPR_U32(ctx, 9));
    // 0x209764: 0x8ce9ffc8  lw          $t1, -0x38($a3)
    ctx->pc = 0x209764u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967240)));
    // 0x209768: 0xacc9ffc8  sw          $t1, -0x38($a2)
    ctx->pc = 0x209768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967240), GPR_U32(ctx, 9));
    // 0x20976c: 0x8ce9ffcc  lw          $t1, -0x34($a3)
    ctx->pc = 0x20976cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967244)));
    // 0x209770: 0xacc9ffcc  sw          $t1, -0x34($a2)
    ctx->pc = 0x209770u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967244), GPR_U32(ctx, 9));
    // 0x209774: 0x24e7ffc0  addiu       $a3, $a3, -0x40
    ctx->pc = 0x209774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
    // 0x209778: 0x1020ffdc  beqz        $at, . + 4 + (-0x24 << 2)
    ctx->pc = 0x209778u;
    {
        const bool branch_taken_0x209778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209778u;
            // 0x20977c: 0x24c6ffc0  addiu       $a2, $a2, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209778) {
            ctx->pc = 0x2096ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2096ec;
        }
    }
    ctx->pc = 0x209780u;
label_209780:
    // 0x209780: 0x500000d  bltz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x209780u;
    {
        const bool branch_taken_0x209780 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x209780) {
            ctx->pc = 0x2097B8u;
            goto label_2097b8;
        }
    }
    ctx->pc = 0x209788u;
    // 0x209788: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x209788u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x20978c: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x20978cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x209790: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x209790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_209794:
    // 0x209794: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x209794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x209798: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x209798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x20979c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x20979cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2097a0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2097a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2097a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2097a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2097a8: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x2097a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x2097ac: 0x501fff9  bgez        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2097ACu;
    {
        const bool branch_taken_0x2097ac = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2097B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2097ACu;
            // 0x2097b0: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097ac) {
            ctx->pc = 0x209794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_209794;
        }
    }
    ctx->pc = 0x2097B4u;
    // 0x2097b4: 0x0  nop
    ctx->pc = 0x2097b4u;
    // NOP
label_2097b8:
    // 0x2097b8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2097b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2097bc: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x2097bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2097c0: 0x4c00053  bltz        $a2, . + 4 + (0x53 << 2)
    ctx->pc = 0x2097C0u;
    {
        const bool branch_taken_0x2097c0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2097C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2097C0u;
            // 0x2097c4: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097c0) {
            ctx->pc = 0x209910u;
            goto label_209910;
        }
    }
    ctx->pc = 0x2097C8u;
    // 0x2097c8: 0x2a410009  slti        $at, $s2, 0x9
    ctx->pc = 0x2097c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2097cc: 0x14200042  bnez        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x2097CCu;
    {
        const bool branch_taken_0x2097cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2097cc) {
            ctx->pc = 0x2098D8u;
            goto label_2098d8;
        }
    }
    ctx->pc = 0x2097D4u;
    // 0x2097d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2097d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2097d8: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2097D8u;
    {
        const bool branch_taken_0x2097d8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2097DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2097D8u;
            // 0x2097dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097d8) {
            ctx->pc = 0x2097F8u;
            goto label_2097f8;
        }
    }
    ctx->pc = 0x2097E0u;
    // 0x2097e0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2097e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2097e4: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x2097e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2097e8: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x2097e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2097ec: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2097ECu;
    {
        const bool branch_taken_0x2097ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2097ec) {
            ctx->pc = 0x2097F8u;
            goto label_2097f8;
        }
    }
    ctx->pc = 0x2097F4u;
    // 0x2097f4: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2097f4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2097f8:
    // 0x2097f8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2097F8u;
    {
        const bool branch_taken_0x2097f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2097f8) {
            ctx->pc = 0x209830u;
            goto label_209830;
        }
    }
    ctx->pc = 0x209800u;
    // 0x209800: 0x2644ffff  addiu       $a0, $s2, -0x1
    ctx->pc = 0x209800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x209804: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x209804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x209808: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x209808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x20980c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20980Cu;
    {
        const bool branch_taken_0x20980c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x209810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20980Cu;
            // 0x209810: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20980c) {
            ctx->pc = 0x209824u;
            goto label_209824;
        }
    }
    ctx->pc = 0x209814u;
    // 0x209814: 0x2452024  and         $a0, $s2, $a1
    ctx->pc = 0x209814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 5));
    // 0x209818: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x209818u;
    {
        const bool branch_taken_0x209818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209818) {
            ctx->pc = 0x209824u;
            goto label_209824;
        }
    }
    ctx->pc = 0x209820u;
    // 0x209820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x209820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209824:
    // 0x209824: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x209824u;
    {
        const bool branch_taken_0x209824 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x209824) {
            ctx->pc = 0x209830u;
            goto label_209830;
        }
    }
    ctx->pc = 0x20982Cu;
    // 0x20982c: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x20982cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_209830:
    // 0x209830: 0x11000029  beqz        $t0, . + 4 + (0x29 << 2)
    ctx->pc = 0x209830u;
    {
        const bool branch_taken_0x209830 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x209830) {
            ctx->pc = 0x2098D8u;
            goto label_2098d8;
        }
    }
    ctx->pc = 0x209838u;
    // 0x209838: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x209838u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20983c: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x20983cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x209840: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x209840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_209844:
    // 0x209844: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x209844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x209848: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x209848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x20984c: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x20984cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x209850: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x209850u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x209854: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x209854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x209858: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x209858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x20985c: 0x8c85fff8  lw          $a1, -0x8($a0)
    ctx->pc = 0x20985cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
    // 0x209860: 0xace5fff8  sw          $a1, -0x8($a3)
    ctx->pc = 0x209860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967288), GPR_U32(ctx, 5));
    // 0x209864: 0x8c85fffc  lw          $a1, -0x4($a0)
    ctx->pc = 0x209864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x209868: 0xace5fffc  sw          $a1, -0x4($a3)
    ctx->pc = 0x209868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967292), GPR_U32(ctx, 5));
    // 0x20986c: 0x8c85fff0  lw          $a1, -0x10($a0)
    ctx->pc = 0x20986cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x209870: 0xace5fff0  sw          $a1, -0x10($a3)
    ctx->pc = 0x209870u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967280), GPR_U32(ctx, 5));
    // 0x209874: 0x8c85fff4  lw          $a1, -0xC($a0)
    ctx->pc = 0x209874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967284)));
    // 0x209878: 0xace5fff4  sw          $a1, -0xC($a3)
    ctx->pc = 0x209878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967284), GPR_U32(ctx, 5));
    // 0x20987c: 0x8c85ffe8  lw          $a1, -0x18($a0)
    ctx->pc = 0x20987cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967272)));
    // 0x209880: 0xace5ffe8  sw          $a1, -0x18($a3)
    ctx->pc = 0x209880u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967272), GPR_U32(ctx, 5));
    // 0x209884: 0x8c85ffec  lw          $a1, -0x14($a0)
    ctx->pc = 0x209884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967276)));
    // 0x209888: 0xace5ffec  sw          $a1, -0x14($a3)
    ctx->pc = 0x209888u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967276), GPR_U32(ctx, 5));
    // 0x20988c: 0x8c85ffe0  lw          $a1, -0x20($a0)
    ctx->pc = 0x20988cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x209890: 0xace5ffe0  sw          $a1, -0x20($a3)
    ctx->pc = 0x209890u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967264), GPR_U32(ctx, 5));
    // 0x209894: 0x8c85ffe4  lw          $a1, -0x1C($a0)
    ctx->pc = 0x209894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967268)));
    // 0x209898: 0xace5ffe4  sw          $a1, -0x1C($a3)
    ctx->pc = 0x209898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967268), GPR_U32(ctx, 5));
    // 0x20989c: 0x8c85ffd8  lw          $a1, -0x28($a0)
    ctx->pc = 0x20989cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967256)));
    // 0x2098a0: 0xace5ffd8  sw          $a1, -0x28($a3)
    ctx->pc = 0x2098a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967256), GPR_U32(ctx, 5));
    // 0x2098a4: 0x8c85ffdc  lw          $a1, -0x24($a0)
    ctx->pc = 0x2098a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967260)));
    // 0x2098a8: 0xace5ffdc  sw          $a1, -0x24($a3)
    ctx->pc = 0x2098a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967260), GPR_U32(ctx, 5));
    // 0x2098ac: 0x8c85ffd0  lw          $a1, -0x30($a0)
    ctx->pc = 0x2098acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967248)));
    // 0x2098b0: 0xace5ffd0  sw          $a1, -0x30($a3)
    ctx->pc = 0x2098b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967248), GPR_U32(ctx, 5));
    // 0x2098b4: 0x8c85ffd4  lw          $a1, -0x2C($a0)
    ctx->pc = 0x2098b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967252)));
    // 0x2098b8: 0xace5ffd4  sw          $a1, -0x2C($a3)
    ctx->pc = 0x2098b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967252), GPR_U32(ctx, 5));
    // 0x2098bc: 0x8c85ffc8  lw          $a1, -0x38($a0)
    ctx->pc = 0x2098bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967240)));
    // 0x2098c0: 0xace5ffc8  sw          $a1, -0x38($a3)
    ctx->pc = 0x2098c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967240), GPR_U32(ctx, 5));
    // 0x2098c4: 0x8c85ffcc  lw          $a1, -0x34($a0)
    ctx->pc = 0x2098c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967244)));
    // 0x2098c8: 0xace5ffcc  sw          $a1, -0x34($a3)
    ctx->pc = 0x2098c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967244), GPR_U32(ctx, 5));
    // 0x2098cc: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x2098ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x2098d0: 0x1020ffdc  beqz        $at, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2098D0u;
    {
        const bool branch_taken_0x2098d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2098D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2098D0u;
            // 0x2098d4: 0x24e7ffc0  addiu       $a3, $a3, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098d0) {
            ctx->pc = 0x209844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_209844;
        }
    }
    ctx->pc = 0x2098D8u;
label_2098d8:
    // 0x2098d8: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2098D8u;
    {
        const bool branch_taken_0x2098d8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2098d8) {
            ctx->pc = 0x209910u;
            goto label_209910;
        }
    }
    ctx->pc = 0x2098E0u;
    // 0x2098e0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2098e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2098e4: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x2098e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x2098e8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2098e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2098ec:
    // 0x2098ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2098ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2098f0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2098f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2098f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2098f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2098f8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2098f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2098fc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2098fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x209900: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x209900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x209904: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x209904u;
    {
        const bool branch_taken_0x209904 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x209908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209904u;
            // 0x209908: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209904) {
            ctx->pc = 0x2098ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2098ec;
        }
    }
    ctx->pc = 0x20990Cu;
    // 0x20990c: 0x0  nop
    ctx->pc = 0x20990cu;
    // NOP
label_209910:
    // 0x209910: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x209910u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x209914: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x209914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x209918: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x209918u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20991c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20991cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x209920: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x209920u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209924: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x209924u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209928: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x209928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20992c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20992cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209930: 0x3e00008  jr          $ra
    ctx->pc = 0x209930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209930u;
            // 0x209934: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209938u;
    // 0x209938: 0x0  nop
    ctx->pc = 0x209938u;
    // NOP
    // 0x20993c: 0x0  nop
    ctx->pc = 0x20993cu;
    // NOP
}
