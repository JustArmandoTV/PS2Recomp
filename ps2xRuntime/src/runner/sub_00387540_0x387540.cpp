#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00387540
// Address: 0x387540 - 0x387820
void sub_00387540_0x387540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387540_0x387540");
#endif

    switch (ctx->pc) {
        case 0x3875a0u: goto label_3875a0;
        case 0x3875a8u: goto label_3875a8;
        case 0x387630u: goto label_387630;
        case 0x38768cu: goto label_38768c;
        case 0x3876c8u: goto label_3876c8;
        case 0x3876f4u: goto label_3876f4;
        case 0x3876fcu: goto label_3876fc;
        case 0x38771cu: goto label_38771c;
        case 0x387724u: goto label_387724;
        case 0x387768u: goto label_387768;
        case 0x387770u: goto label_387770;
        case 0x3877dcu: goto label_3877dc;
        case 0x3877e4u: goto label_3877e4;
        case 0x3877f4u: goto label_3877f4;
        case 0x387804u: goto label_387804;
        default: break;
    }

    ctx->pc = 0x387540u;

    // 0x387540: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x387540u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x387548u;
    // 0x387548: 0x0  nop
    ctx->pc = 0x387548u;
    // NOP
    // 0x38754c: 0x0  nop
    ctx->pc = 0x38754cu;
    // NOP
    // 0x387550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x387550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x387554: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x387554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x387558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x387558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38755c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x38755cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x387560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x387560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x387564: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x387564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x387568: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x387568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x38756c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x38756cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x387570: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x387570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x387574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x387574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387578: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x387578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x38757c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38757cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387580: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x387580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x387584: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x387584u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x387588: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x387588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x38758c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x38758cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x387590: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x387590u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x387594: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x387594u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x387598: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x387598u;
    SET_GPR_U32(ctx, 31, 0x3875A0u);
    ctx->pc = 0x38759Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387598u;
            // 0x38759c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3875A0u; }
        if (ctx->pc != 0x3875A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3875A0u; }
        if (ctx->pc != 0x3875A0u) { return; }
    }
    ctx->pc = 0x3875A0u;
label_3875a0:
    // 0x3875a0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3875A0u;
    SET_GPR_U32(ctx, 31, 0x3875A8u);
    ctx->pc = 0x3875A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3875A0u;
            // 0x3875a4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3875A8u; }
        if (ctx->pc != 0x3875A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3875A8u; }
        if (ctx->pc != 0x3875A8u) { return; }
    }
    ctx->pc = 0x3875A8u;
label_3875a8:
    // 0x3875a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3875a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3875ac: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x3875acu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x3875b0: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3875b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x3875b4: 0x3c0b006a  lui         $t3, 0x6A
    ctx->pc = 0x3875b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)106 << 16));
    // 0x3875b8: 0x3c0a006a  lui         $t2, 0x6A
    ctx->pc = 0x3875b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)106 << 16));
    // 0x3875bc: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x3875bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
    // 0x3875c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3875c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3875c4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x3875c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x3875c8: 0x8c8d0788  lw          $t5, 0x788($a0)
    ctx->pc = 0x3875c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
    // 0x3875cc: 0x258cc560  addiu       $t4, $t4, -0x3AA0
    ctx->pc = 0x3875ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294952288));
    // 0x3875d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3875d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3875d4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x3875d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x3875d8: 0x256b7b10  addiu       $t3, $t3, 0x7B10
    ctx->pc = 0x3875d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 31504));
    // 0x3875dc: 0x254acfe0  addiu       $t2, $t2, -0x3020
    ctx->pc = 0x3875dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294954976));
    // 0x3875e0: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x3875e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x3875e4: 0x252924a0  addiu       $t1, $t1, 0x24A0
    ctx->pc = 0x3875e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9376));
    // 0x3875e8: 0x918c0000  lbu         $t4, 0x0($t4)
    ctx->pc = 0x3875e8u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3875ec: 0x24632460  addiu       $v1, $v1, 0x2460
    ctx->pc = 0x3875ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9312));
    // 0x3875f0: 0x24427b50  addiu       $v0, $v0, 0x7B50
    ctx->pc = 0x3875f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31568));
    // 0x3875f4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3875f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3875f8: 0x24a576e0  addiu       $a1, $a1, 0x76E0
    ctx->pc = 0x3875f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30432));
    // 0x3875fc: 0x24c66340  addiu       $a2, $a2, 0x6340
    ctx->pc = 0x3875fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25408));
    // 0x387600: 0xa20c004d  sb          $t4, 0x4D($s0)
    ctx->pc = 0x387600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 12));
    // 0x387604: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x387604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x387608: 0xae0b0000  sw          $t3, 0x0($s0)
    ctx->pc = 0x387608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 11));
    // 0x38760c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x38760cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387610: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x387610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x387614: 0xae0a0054  sw          $t2, 0x54($s0)
    ctx->pc = 0x387614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 10));
    // 0x387618: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x387618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x38761c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x38761cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x387620: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x387620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x387624: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x387624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x387628: 0xc040804  jal         func_102010
    ctx->pc = 0x387628u;
    SET_GPR_U32(ctx, 31, 0x387630u);
    ctx->pc = 0x38762Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387628u;
            // 0x38762c: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102010u;
    if (runtime->hasFunction(0x102010u)) {
        auto targetFn = runtime->lookupFunction(0x102010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387630u; }
        if (ctx->pc != 0x387630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102010_0x102010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387630u; }
        if (ctx->pc != 0x387630u) { return; }
    }
    ctx->pc = 0x387630u;
label_387630:
    // 0x387630: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x387630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x387634: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x387634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387638: 0xa20002e4  sb          $zero, 0x2E4($s0)
    ctx->pc = 0x387638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 0));
    // 0x38763c: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x38763cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x387640: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x387640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x387644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387648: 0x3e00008  jr          $ra
    ctx->pc = 0x387648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38764Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387648u;
            // 0x38764c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387650u;
    // 0x387650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x387654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x387654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x387658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x387658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38765c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x387660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387664: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x387664u;
    {
        const bool branch_taken_0x387664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x387668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387664u;
            // 0x387668: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387664) {
            ctx->pc = 0x3876C8u;
            goto label_3876c8;
        }
    }
    ctx->pc = 0x38766Cu;
    // 0x38766c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38766cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x387670: 0x24427b50  addiu       $v0, $v0, 0x7B50
    ctx->pc = 0x387670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31568));
    // 0x387674: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x387674u;
    {
        const bool branch_taken_0x387674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x387678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387674u;
            // 0x387678: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387674) {
            ctx->pc = 0x3876B0u;
            goto label_3876b0;
        }
    }
    ctx->pc = 0x38767Cu;
    // 0x38767c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x38767cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x387680: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x387680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x387684: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x387684u;
    SET_GPR_U32(ctx, 31, 0x38768Cu);
    ctx->pc = 0x387688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387684u;
            // 0x387688: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38768Cu; }
        if (ctx->pc != 0x38768Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38768Cu; }
        if (ctx->pc != 0x38768Cu) { return; }
    }
    ctx->pc = 0x38768Cu;
label_38768c:
    // 0x38768c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x38768Cu;
    {
        const bool branch_taken_0x38768c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38768c) {
            ctx->pc = 0x387690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38768Cu;
            // 0x387690: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3876B4u;
            goto label_3876b4;
        }
    }
    ctx->pc = 0x387694u;
    // 0x387694: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x387694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x387698: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x387698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x38769c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38769Cu;
    {
        const bool branch_taken_0x38769c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3876A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38769Cu;
            // 0x3876a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38769c) {
            ctx->pc = 0x3876B0u;
            goto label_3876b0;
        }
    }
    ctx->pc = 0x3876A4u;
    // 0x3876a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3876a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3876a8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3876a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x3876ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3876acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3876b0:
    // 0x3876b0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3876b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3876b4:
    // 0x3876b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3876b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3876b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3876B8u;
    {
        const bool branch_taken_0x3876b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3876b8) {
            ctx->pc = 0x3876BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3876B8u;
            // 0x3876bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3876CCu;
            goto label_3876cc;
        }
    }
    ctx->pc = 0x3876C0u;
    // 0x3876c0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3876C0u;
    SET_GPR_U32(ctx, 31, 0x3876C8u);
    ctx->pc = 0x3876C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3876C0u;
            // 0x3876c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3876C8u; }
        if (ctx->pc != 0x3876C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3876C8u; }
        if (ctx->pc != 0x3876C8u) { return; }
    }
    ctx->pc = 0x3876C8u;
label_3876c8:
    // 0x3876c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3876c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3876cc:
    // 0x3876cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3876ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3876d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3876d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3876d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3876d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3876d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3876D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3876DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3876D8u;
            // 0x3876dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3876E0u;
    // 0x3876e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3876e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3876e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3876e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3876e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3876e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3876ec: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x3876ECu;
    SET_GPR_U32(ctx, 31, 0x3876F4u);
    ctx->pc = 0x3876F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3876ECu;
            // 0x3876f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3876F4u; }
        if (ctx->pc != 0x3876F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3876F4u; }
        if (ctx->pc != 0x3876F4u) { return; }
    }
    ctx->pc = 0x3876F4u;
label_3876f4:
    // 0x3876f4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x3876F4u;
    SET_GPR_U32(ctx, 31, 0x3876FCu);
    ctx->pc = 0x3876F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3876F4u;
            // 0x3876f8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3876FCu; }
        if (ctx->pc != 0x3876FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3876FCu; }
        if (ctx->pc != 0x3876FCu) { return; }
    }
    ctx->pc = 0x3876FCu;
label_3876fc:
    // 0x3876fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3876fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x387700: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x387700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x387704: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x387704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x387708: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x387708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x38770c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x38770cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x387710: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x387710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x387714: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x387714u;
    SET_GPR_U32(ctx, 31, 0x38771Cu);
    ctx->pc = 0x387718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387714u;
            // 0x387718: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38771Cu; }
        if (ctx->pc != 0x38771Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38771Cu; }
        if (ctx->pc != 0x38771Cu) { return; }
    }
    ctx->pc = 0x38771Cu;
label_38771c:
    // 0x38771c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x38771Cu;
    SET_GPR_U32(ctx, 31, 0x387724u);
    ctx->pc = 0x387720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38771Cu;
            // 0x387720: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387724u; }
        if (ctx->pc != 0x387724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387724u; }
        if (ctx->pc != 0x387724u) { return; }
    }
    ctx->pc = 0x387724u;
label_387724:
    // 0x387724: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x387724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x387728: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x387728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x38772c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x38772cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x387730: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x387730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x387734: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x387734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x387738: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x387738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38773c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x38773cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x387740: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x387740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x387744: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x387744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x387748: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x387748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x38774c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x38774cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x387750: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x387750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x387754: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x387754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x387758: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x387758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x38775c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x38775cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x387760: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x387760u;
    SET_GPR_U32(ctx, 31, 0x387768u);
    ctx->pc = 0x387764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387760u;
            // 0x387764: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387768u; }
        if (ctx->pc != 0x387768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387768u; }
        if (ctx->pc != 0x387768u) { return; }
    }
    ctx->pc = 0x387768u;
label_387768:
    // 0x387768: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x387768u;
    SET_GPR_U32(ctx, 31, 0x387770u);
    ctx->pc = 0x38776Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387768u;
            // 0x38776c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387770u; }
        if (ctx->pc != 0x387770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387770u; }
        if (ctx->pc != 0x387770u) { return; }
    }
    ctx->pc = 0x387770u;
label_387770:
    // 0x387770: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x387770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x387774: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x387774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x387778: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x387778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x38777c: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x38777cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x387780: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x387780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x387784: 0x24a57a10  addiu       $a1, $a1, 0x7A10
    ctx->pc = 0x387784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31248));
    // 0x387788: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x387788u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38778c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x38778cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x387790: 0x24637a50  addiu       $v1, $v1, 0x7A50
    ctx->pc = 0x387790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31312));
    // 0x387794: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x387794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x387798: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x387798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x38779c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x38779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3877a0: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x3877a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x3877a4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3877a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x3877a8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3877a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x3877ac: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3877acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x3877b0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x3877b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x3877b4: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x3877b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x3877b8: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x3877b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x3877bc: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x3877bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x3877c0: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x3877c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x3877c4: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x3877c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x3877c8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x3877c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x3877cc: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x3877ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x3877d0: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x3877d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x3877d4: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3877D4u;
    SET_GPR_U32(ctx, 31, 0x3877DCu);
    ctx->pc = 0x3877D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3877D4u;
            // 0x3877d8: 0xae000138  sw          $zero, 0x138($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3877DCu; }
        if (ctx->pc != 0x3877DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3877DCu; }
        if (ctx->pc != 0x3877DCu) { return; }
    }
    ctx->pc = 0x3877DCu;
label_3877dc:
    // 0x3877dc: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x3877DCu;
    SET_GPR_U32(ctx, 31, 0x3877E4u);
    ctx->pc = 0x3877E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3877DCu;
            // 0x3877e0: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3877E4u; }
        if (ctx->pc != 0x3877E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3877E4u; }
        if (ctx->pc != 0x3877E4u) { return; }
    }
    ctx->pc = 0x3877E4u;
label_3877e4:
    // 0x3877e4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3877e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3877e8: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x3877e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x3877ec: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3877ECu;
    SET_GPR_U32(ctx, 31, 0x3877F4u);
    ctx->pc = 0x3877F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3877ECu;
            // 0x3877f0: 0x24a55dd0  addiu       $a1, $a1, 0x5DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3877F4u; }
        if (ctx->pc != 0x3877F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3877F4u; }
        if (ctx->pc != 0x3877F4u) { return; }
    }
    ctx->pc = 0x3877F4u;
label_3877f4:
    // 0x3877f4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3877f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3877f8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x3877f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x3877fc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3877FCu;
    SET_GPR_U32(ctx, 31, 0x387804u);
    ctx->pc = 0x387800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3877FCu;
            // 0x387800: 0x24a55dd0  addiu       $a1, $a1, 0x5DD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387804u; }
        if (ctx->pc != 0x387804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387804u; }
        if (ctx->pc != 0x387804u) { return; }
    }
    ctx->pc = 0x387804u;
label_387804:
    // 0x387804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x387804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x387808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38780c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38780cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387810: 0x3e00008  jr          $ra
    ctx->pc = 0x387810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387810u;
            // 0x387814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387818u;
    // 0x387818: 0x0  nop
    ctx->pc = 0x387818u;
    // NOP
    // 0x38781c: 0x0  nop
    ctx->pc = 0x38781cu;
    // NOP
}
