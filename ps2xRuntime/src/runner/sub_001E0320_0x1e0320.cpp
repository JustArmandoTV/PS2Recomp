#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0320
// Address: 0x1e0320 - 0x1e0460
void sub_001E0320_0x1e0320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0320_0x1e0320");
#endif

    switch (ctx->pc) {
        case 0x1e0320u: goto label_1e0320;
        case 0x1e0324u: goto label_1e0324;
        case 0x1e0328u: goto label_1e0328;
        case 0x1e032cu: goto label_1e032c;
        case 0x1e0330u: goto label_1e0330;
        case 0x1e0334u: goto label_1e0334;
        case 0x1e0338u: goto label_1e0338;
        case 0x1e033cu: goto label_1e033c;
        case 0x1e0340u: goto label_1e0340;
        case 0x1e0344u: goto label_1e0344;
        case 0x1e0348u: goto label_1e0348;
        case 0x1e034cu: goto label_1e034c;
        case 0x1e0350u: goto label_1e0350;
        case 0x1e0354u: goto label_1e0354;
        case 0x1e0358u: goto label_1e0358;
        case 0x1e035cu: goto label_1e035c;
        case 0x1e0360u: goto label_1e0360;
        case 0x1e0364u: goto label_1e0364;
        case 0x1e0368u: goto label_1e0368;
        case 0x1e036cu: goto label_1e036c;
        case 0x1e0370u: goto label_1e0370;
        case 0x1e0374u: goto label_1e0374;
        case 0x1e0378u: goto label_1e0378;
        case 0x1e037cu: goto label_1e037c;
        case 0x1e0380u: goto label_1e0380;
        case 0x1e0384u: goto label_1e0384;
        case 0x1e0388u: goto label_1e0388;
        case 0x1e038cu: goto label_1e038c;
        case 0x1e0390u: goto label_1e0390;
        case 0x1e0394u: goto label_1e0394;
        case 0x1e0398u: goto label_1e0398;
        case 0x1e039cu: goto label_1e039c;
        case 0x1e03a0u: goto label_1e03a0;
        case 0x1e03a4u: goto label_1e03a4;
        case 0x1e03a8u: goto label_1e03a8;
        case 0x1e03acu: goto label_1e03ac;
        case 0x1e03b0u: goto label_1e03b0;
        case 0x1e03b4u: goto label_1e03b4;
        case 0x1e03b8u: goto label_1e03b8;
        case 0x1e03bcu: goto label_1e03bc;
        case 0x1e03c0u: goto label_1e03c0;
        case 0x1e03c4u: goto label_1e03c4;
        case 0x1e03c8u: goto label_1e03c8;
        case 0x1e03ccu: goto label_1e03cc;
        case 0x1e03d0u: goto label_1e03d0;
        case 0x1e03d4u: goto label_1e03d4;
        case 0x1e03d8u: goto label_1e03d8;
        case 0x1e03dcu: goto label_1e03dc;
        case 0x1e03e0u: goto label_1e03e0;
        case 0x1e03e4u: goto label_1e03e4;
        case 0x1e03e8u: goto label_1e03e8;
        case 0x1e03ecu: goto label_1e03ec;
        case 0x1e03f0u: goto label_1e03f0;
        case 0x1e03f4u: goto label_1e03f4;
        case 0x1e03f8u: goto label_1e03f8;
        case 0x1e03fcu: goto label_1e03fc;
        case 0x1e0400u: goto label_1e0400;
        case 0x1e0404u: goto label_1e0404;
        case 0x1e0408u: goto label_1e0408;
        case 0x1e040cu: goto label_1e040c;
        case 0x1e0410u: goto label_1e0410;
        case 0x1e0414u: goto label_1e0414;
        case 0x1e0418u: goto label_1e0418;
        case 0x1e041cu: goto label_1e041c;
        case 0x1e0420u: goto label_1e0420;
        case 0x1e0424u: goto label_1e0424;
        case 0x1e0428u: goto label_1e0428;
        case 0x1e042cu: goto label_1e042c;
        case 0x1e0430u: goto label_1e0430;
        case 0x1e0434u: goto label_1e0434;
        case 0x1e0438u: goto label_1e0438;
        case 0x1e043cu: goto label_1e043c;
        case 0x1e0440u: goto label_1e0440;
        case 0x1e0444u: goto label_1e0444;
        case 0x1e0448u: goto label_1e0448;
        case 0x1e044cu: goto label_1e044c;
        case 0x1e0450u: goto label_1e0450;
        case 0x1e0454u: goto label_1e0454;
        case 0x1e0458u: goto label_1e0458;
        case 0x1e045cu: goto label_1e045c;
        default: break;
    }

    ctx->pc = 0x1e0320u;

label_1e0320:
    // 0x1e0320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e0324:
    // 0x1e0324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e0328:
    // 0x1e0328: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e032c:
    // 0x1e032c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e032cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e0330:
    // 0x1e0330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0334:
    // 0x1e0334: 0xc077fd4  jal         func_1DFF50
label_1e0338:
    if (ctx->pc == 0x1E0338u) {
        ctx->pc = 0x1E0338u;
            // 0x1e0338: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E033Cu;
        goto label_1e033c;
    }
    ctx->pc = 0x1E0334u;
    SET_GPR_U32(ctx, 31, 0x1E033Cu);
    ctx->pc = 0x1E0338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0334u;
            // 0x1e0338: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF50u;
    if (runtime->hasFunction(0x1DFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E033Cu; }
        if (ctx->pc != 0x1E033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF50_0x1dff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E033Cu; }
        if (ctx->pc != 0x1E033Cu) { return; }
    }
    ctx->pc = 0x1E033Cu;
label_1e033c:
    // 0x1e033c: 0xe6140e60  swc1        $f20, 0xE60($s0)
    ctx->pc = 0x1e033cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3680), bits); }
label_1e0340:
    // 0x1e0340: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1e0340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_1e0344:
    // 0x1e0344: 0x8e030d60  lw          $v1, 0xD60($s0)
    ctx->pc = 0x1e0344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_1e0348:
    // 0x1e0348: 0x34448000  ori         $a0, $v0, 0x8000
    ctx->pc = 0x1e0348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_1e034c:
    // 0x1e034c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1e034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e0350:
    // 0x1e0350: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x1e0350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_1e0354:
    // 0x1e0354: 0x8e030db0  lw          $v1, 0xDB0($s0)
    ctx->pc = 0x1e0354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_1e0358:
    // 0x1e0358: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_1e035c:
    if (ctx->pc == 0x1E035Cu) {
        ctx->pc = 0x1E035Cu;
            // 0x1e035c: 0x8e020a68  lw          $v0, 0xA68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
        ctx->pc = 0x1E0360u;
        goto label_1e0360;
    }
    ctx->pc = 0x1E0358u;
    {
        const bool branch_taken_0x1e0358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0358) {
            ctx->pc = 0x1E035Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0358u;
            // 0x1e035c: 0x8e020a68  lw          $v0, 0xA68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0388u;
            goto label_1e0388;
        }
    }
    ctx->pc = 0x1E0360u;
label_1e0360:
    // 0x1e0360: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1e0360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_1e0364:
    // 0x1e0364: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1e0368:
    if (ctx->pc == 0x1E0368u) {
        ctx->pc = 0x1E036Cu;
        goto label_1e036c;
    }
    ctx->pc = 0x1E0364u;
    {
        const bool branch_taken_0x1e0364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0364) {
            ctx->pc = 0x1E0384u;
            goto label_1e0384;
        }
    }
    ctx->pc = 0x1E036Cu;
label_1e036c:
    // 0x1e036c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1e036cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e0370:
    // 0x1e0370: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e0374:
    if (ctx->pc == 0x1E0374u) {
        ctx->pc = 0x1E0378u;
        goto label_1e0378;
    }
    ctx->pc = 0x1E0370u;
    {
        const bool branch_taken_0x1e0370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0370) {
            ctx->pc = 0x1E0384u;
            goto label_1e0384;
        }
    }
    ctx->pc = 0x1E0378u;
label_1e0378:
    // 0x1e0378: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1e0378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1e037c:
    // 0x1e037c: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
label_1e0380:
    if (ctx->pc == 0x1E0380u) {
        ctx->pc = 0x1E0380u;
            // 0x1e0380: 0x8e031140  lw          $v1, 0x1140($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4416)));
        ctx->pc = 0x1E0384u;
        goto label_1e0384;
    }
    ctx->pc = 0x1E037Cu;
    {
        const bool branch_taken_0x1e037c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e037c) {
            ctx->pc = 0x1E0380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E037Cu;
            // 0x1e0380: 0x8e031140  lw          $v1, 0x1140($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4416)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E03C0u;
            goto label_1e03c0;
        }
    }
    ctx->pc = 0x1E0384u;
label_1e0384:
    // 0x1e0384: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x1e0384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
label_1e0388:
    // 0x1e0388: 0x26030a50  addiu       $v1, $s0, 0xA50
    ctx->pc = 0x1e0388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
label_1e038c:
    // 0x1e038c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e038cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e0390:
    // 0x1e0390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e0394:
    // 0x1e0394: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1e0394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1e0398:
    // 0x1e0398: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x1e0398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1e039c:
    // 0x1e039c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1e039cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1e03a0:
    // 0x1e03a0: 0x320f809  jalr        $t9
label_1e03a4:
    if (ctx->pc == 0x1E03A4u) {
        ctx->pc = 0x1E03A8u;
        goto label_1e03a8;
    }
    ctx->pc = 0x1E03A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E03A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E03A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E03A8u; }
            if (ctx->pc != 0x1E03A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E03A8u;
label_1e03a8:
    // 0x1e03a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e03a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e03ac:
    // 0x1e03ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e03acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e03b0:
    // 0x1e03b0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x1e03b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_1e03b4:
    // 0x1e03b4: 0x320f809  jalr        $t9
label_1e03b8:
    if (ctx->pc == 0x1E03B8u) {
        ctx->pc = 0x1E03B8u;
            // 0x1e03b8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x1E03BCu;
        goto label_1e03bc;
    }
    ctx->pc = 0x1E03B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E03BCu);
        ctx->pc = 0x1E03B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E03B4u;
            // 0x1e03b8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E03BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E03BCu; }
            if (ctx->pc != 0x1E03BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E03BCu;
label_1e03bc:
    // 0x1e03bc: 0x8e031140  lw          $v1, 0x1140($s0)
    ctx->pc = 0x1e03bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4416)));
label_1e03c0:
    // 0x1e03c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e03c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e03c4:
    // 0x1e03c4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e03c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e03c8:
    // 0x1e03c8: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x1e03c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1e03cc:
    // 0x1e03cc: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x1e03ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_1e03d0:
    // 0x1e03d0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1e03d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1e03d4:
    // 0x1e03d4: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x1e03d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_1e03d8:
    // 0x1e03d8: 0x820611aa  lb          $a2, 0x11AA($s0)
    ctx->pc = 0x1e03d8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_1e03dc:
    // 0x1e03dc: 0xc0762b4  jal         func_1D8AD0
label_1e03e0:
    if (ctx->pc == 0x1E03E0u) {
        ctx->pc = 0x1E03E0u;
            // 0x1e03e0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E03E4u;
        goto label_1e03e4;
    }
    ctx->pc = 0x1E03DCu;
    SET_GPR_U32(ctx, 31, 0x1E03E4u);
    ctx->pc = 0x1E03E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E03DCu;
            // 0x1e03e0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03E4u; }
        if (ctx->pc != 0x1E03E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E03E4u; }
        if (ctx->pc != 0x1E03E4u) { return; }
    }
    ctx->pc = 0x1E03E4u;
label_1e03e4:
    // 0x1e03e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1e03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1e03e8:
    // 0x1e03e8: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x1e03e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_1e03ec:
    // 0x1e03ec: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x1e03ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_1e03f0:
    // 0x1e03f0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1e03f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1e03f4:
    // 0x1e03f4: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x1e03f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_1e03f8:
    // 0x1e03f8: 0x260702c0  addiu       $a3, $s0, 0x2C0
    ctx->pc = 0x1e03f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_1e03fc:
    // 0x1e03fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e03fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0400:
    // 0x1e0400: 0xc0bb404  jal         func_2ED010
label_1e0404:
    if (ctx->pc == 0x1E0404u) {
        ctx->pc = 0x1E0404u;
            // 0x1e0404: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E0408u;
        goto label_1e0408;
    }
    ctx->pc = 0x1E0400u;
    SET_GPR_U32(ctx, 31, 0x1E0408u);
    ctx->pc = 0x1E0404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0400u;
            // 0x1e0404: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0408u; }
        if (ctx->pc != 0x1E0408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0408u; }
        if (ctx->pc != 0x1E0408u) { return; }
    }
    ctx->pc = 0x1E0408u;
label_1e0408:
    // 0x1e0408: 0x8e040da0  lw          $a0, 0xDA0($s0)
    ctx->pc = 0x1e0408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_1e040c:
    // 0x1e040c: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e040cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
label_1e0410:
    // 0x1e0410: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1e0410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1e0414:
    // 0x1e0414: 0x344501a9  ori         $a1, $v0, 0x1A9
    ctx->pc = 0x1e0414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
label_1e0418:
    // 0x1e0418: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x1e0418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1e041c:
    // 0x1e041c: 0xae020da0  sw          $v0, 0xDA0($s0)
    ctx->pc = 0x1e041cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 2));
label_1e0420:
    // 0x1e0420: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x1e0420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_1e0424:
    // 0x1e0424: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1e0424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e0428:
    // 0x1e0428: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e0428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e042c:
    // 0x1e042c: 0x320f809  jalr        $t9
label_1e0430:
    if (ctx->pc == 0x1E0430u) {
        ctx->pc = 0x1E0434u;
        goto label_1e0434;
    }
    ctx->pc = 0x1E042Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0434u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0434u; }
            if (ctx->pc != 0x1E0434u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0434u;
label_1e0434:
    // 0x1e0434: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x1e0434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_1e0438:
    // 0x1e0438: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1e0438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e043c:
    // 0x1e043c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e043cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e0440:
    // 0x1e0440: 0x320f809  jalr        $t9
label_1e0444:
    if (ctx->pc == 0x1E0444u) {
        ctx->pc = 0x1E0444u;
            // 0x1e0444: 0x8e0500a8  lw          $a1, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->pc = 0x1E0448u;
        goto label_1e0448;
    }
    ctx->pc = 0x1E0440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0448u);
        ctx->pc = 0x1E0444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0440u;
            // 0x1e0444: 0x8e0500a8  lw          $a1, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0448u; }
            if (ctx->pc != 0x1E0448u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0448u;
label_1e0448:
    // 0x1e0448: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e044c:
    // 0x1e044c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e0450:
    // 0x1e0450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0454:
    // 0x1e0454: 0x3e00008  jr          $ra
label_1e0458:
    if (ctx->pc == 0x1E0458u) {
        ctx->pc = 0x1E0458u;
            // 0x1e0458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E045Cu;
        goto label_1e045c;
    }
    ctx->pc = 0x1E0454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0454u;
            // 0x1e0458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E045Cu;
label_1e045c:
    // 0x1e045c: 0x0  nop
    ctx->pc = 0x1e045cu;
    // NOP
}
