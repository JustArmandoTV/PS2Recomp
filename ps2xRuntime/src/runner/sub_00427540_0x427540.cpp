#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00427540
// Address: 0x427540 - 0x427670
void sub_00427540_0x427540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00427540_0x427540");
#endif

    switch (ctx->pc) {
        case 0x427574u: goto label_427574;
        case 0x4275c4u: goto label_4275c4;
        case 0x4275e8u: goto label_4275e8;
        default: break;
    }

    ctx->pc = 0x427540u;

    // 0x427540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x427540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x427544: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x427548: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x427548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x42754c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42754cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x427550: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x427550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x427554: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x427554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x427558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x42755c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42755cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x427560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x427560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x427564: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x427564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x427568: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x427568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x42756c: 0x8c510780  lw          $s1, 0x780($v0)
    ctx->pc = 0x42756cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
    // 0x427570: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x427570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_427574:
    // 0x427574: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x427574u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x427578: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x427578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42757c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x427580: 0x8c423e58  lw          $v0, 0x3E58($v0)
    ctx->pc = 0x427580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15960)));
    // 0x427584: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x427584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x427588: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x427588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x42758c: 0x8e040170  lw          $a0, 0x170($s0)
    ctx->pc = 0x42758cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x427590: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x427590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x427594: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x427594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x427598: 0x904200c0  lbu         $v0, 0xC0($v0)
    ctx->pc = 0x427598u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x42759c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x42759cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4275a0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4275A0u;
    {
        const bool branch_taken_0x4275a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4275a0) {
            ctx->pc = 0x4275B0u;
            goto label_4275b0;
        }
    }
    ctx->pc = 0x4275A8u;
    // 0x4275a8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x4275a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4275ac: 0x0  nop
    ctx->pc = 0x4275acu;
    // NOP
label_4275b0:
    // 0x4275b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4275b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4275b4: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x4275b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x4275b8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x4275b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x4275bc: 0xc040180  jal         func_100600
    ctx->pc = 0x4275BCu;
    SET_GPR_U32(ctx, 31, 0x4275C4u);
    ctx->pc = 0x4275C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4275BCu;
            // 0x4275c0: 0xae00016c  sw          $zero, 0x16C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4275C4u; }
        if (ctx->pc != 0x4275C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4275C4u; }
        if (ctx->pc != 0x4275C4u) { return; }
    }
    ctx->pc = 0x4275C4u;
label_4275c4:
    // 0x4275c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4275C4u;
    {
        const bool branch_taken_0x4275c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4275C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4275C4u;
            // 0x4275c8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4275c4) {
            ctx->pc = 0x427640u;
            goto label_427640;
        }
    }
    ctx->pc = 0x4275CCu;
    // 0x4275cc: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4275ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x4275d0: 0x8e100170  lw          $s0, 0x170($s0)
    ctx->pc = 0x4275d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x4275d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4275d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4275d8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4275d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4275dc: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x4275dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
    // 0x4275e0: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x4275E0u;
    SET_GPR_U32(ctx, 31, 0x4275E8u);
    ctx->pc = 0x4275E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4275E0u;
            // 0x4275e4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4275E8u; }
        if (ctx->pc != 0x4275E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4275E8u; }
        if (ctx->pc != 0x4275E8u) { return; }
    }
    ctx->pc = 0x4275E8u;
label_4275e8:
    // 0x4275e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4275e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4275ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4275ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4275f0: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4275f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x4275f4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x4275f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4275f8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4275f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4275fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4275fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x427600: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x427600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
    // 0x427604: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x427604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x427608: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x427608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x42760c: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x42760cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x427610: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x427610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x427614: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x427614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x427618: 0xae45005c  sw          $a1, 0x5C($s2)
    ctx->pc = 0x427618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 5));
    // 0x42761c: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x42761cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x427620: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x427620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x427624: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x427624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x427628: 0xae450064  sw          $a1, 0x64($s2)
    ctx->pc = 0x427628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 5));
    // 0x42762c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x42762cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x427630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x427630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x427634: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x427634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x427638: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x427638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x42763c: 0xa240006c  sb          $zero, 0x6C($s2)
    ctx->pc = 0x42763cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 108), (uint8_t)GPR_U32(ctx, 0));
label_427640:
    // 0x427640: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x427640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x427644: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x427644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x427648: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x427648u;
    {
        const bool branch_taken_0x427648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x427648) {
            ctx->pc = 0x42764Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x427648u;
            // 0x42764c: 0x8e840074  lw          $a0, 0x74($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x427574u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_427574;
        }
    }
    ctx->pc = 0x427650u;
    // 0x427650: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x427650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x427654: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x427654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x427658: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x427658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42765c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42765cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x427660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x427660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x427664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x427664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x427668: 0x3e00008  jr          $ra
    ctx->pc = 0x427668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x427668u;
            // 0x42766c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x427670u;
}
