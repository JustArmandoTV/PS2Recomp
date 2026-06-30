#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A6580
// Address: 0x4a6580 - 0x4a6710
void sub_004A6580_0x4a6580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6580_0x4a6580");
#endif

    switch (ctx->pc) {
        case 0x4a6580u: goto label_4a6580;
        case 0x4a6584u: goto label_4a6584;
        case 0x4a6588u: goto label_4a6588;
        case 0x4a658cu: goto label_4a658c;
        case 0x4a6590u: goto label_4a6590;
        case 0x4a6594u: goto label_4a6594;
        case 0x4a6598u: goto label_4a6598;
        case 0x4a659cu: goto label_4a659c;
        case 0x4a65a0u: goto label_4a65a0;
        case 0x4a65a4u: goto label_4a65a4;
        case 0x4a65a8u: goto label_4a65a8;
        case 0x4a65acu: goto label_4a65ac;
        case 0x4a65b0u: goto label_4a65b0;
        case 0x4a65b4u: goto label_4a65b4;
        case 0x4a65b8u: goto label_4a65b8;
        case 0x4a65bcu: goto label_4a65bc;
        case 0x4a65c0u: goto label_4a65c0;
        case 0x4a65c4u: goto label_4a65c4;
        case 0x4a65c8u: goto label_4a65c8;
        case 0x4a65ccu: goto label_4a65cc;
        case 0x4a65d0u: goto label_4a65d0;
        case 0x4a65d4u: goto label_4a65d4;
        case 0x4a65d8u: goto label_4a65d8;
        case 0x4a65dcu: goto label_4a65dc;
        case 0x4a65e0u: goto label_4a65e0;
        case 0x4a65e4u: goto label_4a65e4;
        case 0x4a65e8u: goto label_4a65e8;
        case 0x4a65ecu: goto label_4a65ec;
        case 0x4a65f0u: goto label_4a65f0;
        case 0x4a65f4u: goto label_4a65f4;
        case 0x4a65f8u: goto label_4a65f8;
        case 0x4a65fcu: goto label_4a65fc;
        case 0x4a6600u: goto label_4a6600;
        case 0x4a6604u: goto label_4a6604;
        case 0x4a6608u: goto label_4a6608;
        case 0x4a660cu: goto label_4a660c;
        case 0x4a6610u: goto label_4a6610;
        case 0x4a6614u: goto label_4a6614;
        case 0x4a6618u: goto label_4a6618;
        case 0x4a661cu: goto label_4a661c;
        case 0x4a6620u: goto label_4a6620;
        case 0x4a6624u: goto label_4a6624;
        case 0x4a6628u: goto label_4a6628;
        case 0x4a662cu: goto label_4a662c;
        case 0x4a6630u: goto label_4a6630;
        case 0x4a6634u: goto label_4a6634;
        case 0x4a6638u: goto label_4a6638;
        case 0x4a663cu: goto label_4a663c;
        case 0x4a6640u: goto label_4a6640;
        case 0x4a6644u: goto label_4a6644;
        case 0x4a6648u: goto label_4a6648;
        case 0x4a664cu: goto label_4a664c;
        case 0x4a6650u: goto label_4a6650;
        case 0x4a6654u: goto label_4a6654;
        case 0x4a6658u: goto label_4a6658;
        case 0x4a665cu: goto label_4a665c;
        case 0x4a6660u: goto label_4a6660;
        case 0x4a6664u: goto label_4a6664;
        case 0x4a6668u: goto label_4a6668;
        case 0x4a666cu: goto label_4a666c;
        case 0x4a6670u: goto label_4a6670;
        case 0x4a6674u: goto label_4a6674;
        case 0x4a6678u: goto label_4a6678;
        case 0x4a667cu: goto label_4a667c;
        case 0x4a6680u: goto label_4a6680;
        case 0x4a6684u: goto label_4a6684;
        case 0x4a6688u: goto label_4a6688;
        case 0x4a668cu: goto label_4a668c;
        case 0x4a6690u: goto label_4a6690;
        case 0x4a6694u: goto label_4a6694;
        case 0x4a6698u: goto label_4a6698;
        case 0x4a669cu: goto label_4a669c;
        case 0x4a66a0u: goto label_4a66a0;
        case 0x4a66a4u: goto label_4a66a4;
        case 0x4a66a8u: goto label_4a66a8;
        case 0x4a66acu: goto label_4a66ac;
        case 0x4a66b0u: goto label_4a66b0;
        case 0x4a66b4u: goto label_4a66b4;
        case 0x4a66b8u: goto label_4a66b8;
        case 0x4a66bcu: goto label_4a66bc;
        case 0x4a66c0u: goto label_4a66c0;
        case 0x4a66c4u: goto label_4a66c4;
        case 0x4a66c8u: goto label_4a66c8;
        case 0x4a66ccu: goto label_4a66cc;
        case 0x4a66d0u: goto label_4a66d0;
        case 0x4a66d4u: goto label_4a66d4;
        case 0x4a66d8u: goto label_4a66d8;
        case 0x4a66dcu: goto label_4a66dc;
        case 0x4a66e0u: goto label_4a66e0;
        case 0x4a66e4u: goto label_4a66e4;
        case 0x4a66e8u: goto label_4a66e8;
        case 0x4a66ecu: goto label_4a66ec;
        case 0x4a66f0u: goto label_4a66f0;
        case 0x4a66f4u: goto label_4a66f4;
        case 0x4a66f8u: goto label_4a66f8;
        case 0x4a66fcu: goto label_4a66fc;
        case 0x4a6700u: goto label_4a6700;
        case 0x4a6704u: goto label_4a6704;
        case 0x4a6708u: goto label_4a6708;
        case 0x4a670cu: goto label_4a670c;
        default: break;
    }

    ctx->pc = 0x4a6580u;

label_4a6580:
    // 0x4a6580: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a6580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4a6584:
    // 0x4a6584: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a6584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6588:
    // 0x4a6588: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4a6588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4a658c:
    // 0x4a658c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x4a658cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_4a6590:
    // 0x4a6590: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4a6590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4a6594:
    // 0x4a6594: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4a6594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4a6598:
    // 0x4a6598: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a6598u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a659c:
    // 0x4a659c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4a65a0:
    // 0x4a65a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a65a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a65a4:
    // 0x4a65a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a65a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a65a8:
    // 0x4a65a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a65a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a65ac:
    // 0x4a65ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a65acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a65b0:
    // 0x4a65b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a65b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a65b4:
    // 0x4a65b4: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x4a65b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_4a65b8:
    // 0x4a65b8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4a65b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4a65bc:
    // 0x4a65bc: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x4a65bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_4a65c0:
    // 0x4a65c0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4a65c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4a65c4:
    // 0x4a65c4: 0x26314e80  addiu       $s1, $s1, 0x4E80
    ctx->pc = 0x4a65c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20096));
label_4a65c8:
    // 0x4a65c8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4a65c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4a65cc:
    // 0x4a65cc: 0x26104e78  addiu       $s0, $s0, 0x4E78
    ctx->pc = 0x4a65ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20088));
label_4a65d0:
    // 0x4a65d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a65d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a65d4:
    // 0x4a65d4: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x4a65d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4a65d8:
    // 0x4a65d8: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x4a65d8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_4a65dc:
    // 0x4a65dc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x4a65dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_4a65e0:
    // 0x4a65e0: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x4a65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_4a65e4:
    // 0x4a65e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a65e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a65e8:
    // 0x4a65e8: 0x0  nop
    ctx->pc = 0x4a65e8u;
    // NOP
label_4a65ec:
    // 0x4a65ec: 0x46170540  add.s       $f21, $f0, $f23
    ctx->pc = 0x4a65ecu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a65f0:
    // 0x4a65f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a65f4:
    // 0x4a65f4: 0x8c5389e0  lw          $s3, -0x7620($v0)
    ctx->pc = 0x4a65f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4a65f8:
    // 0x4a65f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a65f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a65fc:
    // 0x4a65fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a6600:
    // 0x4a6600: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x4a6600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_4a6604:
    // 0x4a6604: 0xc0506ac  jal         func_141AB0
label_4a6608:
    if (ctx->pc == 0x4A6608u) {
        ctx->pc = 0x4A6608u;
            // 0x4a6608: 0x46160500  add.s       $f20, $f0, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x4A660Cu;
        goto label_4a660c;
    }
    ctx->pc = 0x4A6604u;
    SET_GPR_U32(ctx, 31, 0x4A660Cu);
    ctx->pc = 0x4A6608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6604u;
            // 0x4a6608: 0x46160500  add.s       $f20, $f0, $f22 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A660Cu; }
        if (ctx->pc != 0x4A660Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A660Cu; }
        if (ctx->pc != 0x4A660Cu) { return; }
    }
    ctx->pc = 0x4A660Cu;
label_4a660c:
    // 0x4a660c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4a660cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a6610:
    // 0x4a6610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a6610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a6614:
    // 0x4a6614: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4a6614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4a6618:
    // 0x4a6618: 0x320f809  jalr        $t9
label_4a661c:
    if (ctx->pc == 0x4A661Cu) {
        ctx->pc = 0x4A661Cu;
            // 0x4a661c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A6620u;
        goto label_4a6620;
    }
    ctx->pc = 0x4A6618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6620u);
        ctx->pc = 0x4A661Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6618u;
            // 0x4a661c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6620u; }
            if (ctx->pc != 0x4A6620u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6620u;
label_4a6620:
    // 0x4a6620: 0x92430ce4  lbu         $v1, 0xCE4($s2)
    ctx->pc = 0x4a6620u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
label_4a6624:
    // 0x4a6624: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4a6624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4a6628:
    // 0x4a6628: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
label_4a662c:
    if (ctx->pc == 0x4A662Cu) {
        ctx->pc = 0x4A662Cu;
            // 0x4a662c: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x4A6630u;
        goto label_4a6630;
    }
    ctx->pc = 0x4A6628u;
    {
        const bool branch_taken_0x4a6628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a6628) {
            ctx->pc = 0x4A662Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A6628u;
            // 0x4a662c: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A6634u;
            goto label_4a6634;
        }
    }
    ctx->pc = 0x4A6630u;
label_4a6630:
    // 0x4a6630: 0x262500d0  addiu       $a1, $s1, 0xD0
    ctx->pc = 0x4a6630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_4a6634:
    // 0x4a6634: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x4a6634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a6638:
    // 0x4a6638: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4a6638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a663c:
    // 0x4a663c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x4a663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a6640:
    // 0x4a6640: 0x86080002  lh          $t0, 0x2($s0)
    ctx->pc = 0x4a6640u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_4a6644:
    // 0x4a6644: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x4a6644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_4a6648:
    // 0x4a6648: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a6648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4a664c:
    // 0x4a664c: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x4a664cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a6650:
    // 0x4a6650: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4a6650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a6654:
    // 0x4a6654: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a6654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a6658:
    // 0x4a6658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a665c:
    // 0x4a665c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4a665cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a6660:
    // 0x4a6660: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a6660u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a6664:
    // 0x4a6664: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a6664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a6668:
    // 0x4a6668: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x4a6668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4a666c:
    // 0x4a666c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4a666cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4a6670:
    // 0x4a6670: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x4a6670u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_4a6674:
    // 0x4a6674: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x4a6674u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_4a6678:
    // 0x4a6678: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4a6678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4a667c:
    // 0x4a667c: 0xc0bc284  jal         func_2F0A10
label_4a6680:
    if (ctx->pc == 0x4A6680u) {
        ctx->pc = 0x4A6680u;
            // 0x4a6680: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4A6684u;
        goto label_4a6684;
    }
    ctx->pc = 0x4A667Cu;
    SET_GPR_U32(ctx, 31, 0x4A6684u);
    ctx->pc = 0x4A6680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A667Cu;
            // 0x4a6680: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6684u; }
        if (ctx->pc != 0x4A6684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A6684u; }
        if (ctx->pc != 0x4A6684u) { return; }
    }
    ctx->pc = 0x4A6684u;
label_4a6684:
    // 0x4a6684: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4a6684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a6688:
    // 0x4a6688: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4a6688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4a668c:
    // 0x4a668c: 0x320f809  jalr        $t9
label_4a6690:
    if (ctx->pc == 0x4A6690u) {
        ctx->pc = 0x4A6690u;
            // 0x4a6690: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A6694u;
        goto label_4a6694;
    }
    ctx->pc = 0x4A668Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A6694u);
        ctx->pc = 0x4A6690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A668Cu;
            // 0x4a6690: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A6694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A6694u; }
            if (ctx->pc != 0x4A6694u) { return; }
        }
        }
    }
    ctx->pc = 0x4A6694u;
label_4a6694:
    // 0x4a6694: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x4a6694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_4a6698:
    // 0x4a6698: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a6698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4a669c:
    // 0x4a669c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a669cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a66a0:
    // 0x4a66a0: 0x3c08420c  lui         $t0, 0x420C
    ctx->pc = 0x4a66a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16908 << 16));
label_4a66a4:
    // 0x4a66a4: 0x46170300  add.s       $f12, $f0, $f23
    ctx->pc = 0x4a66a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_4a66a8:
    // 0x4a66a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4a66a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4a66ac:
    // 0x4a66ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a66acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a66b0:
    // 0x4a66b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4a66b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a66b4:
    // 0x4a66b4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4a66b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4a66b8:
    // 0x4a66b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a66b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a66bc:
    // 0x4a66bc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4a66bcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a66c0:
    // 0x4a66c0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4a66c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4a66c4:
    // 0x4a66c4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4a66c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4a66c8:
    // 0x4a66c8: 0xc15706c  jal         func_55C1B0
label_4a66cc:
    if (ctx->pc == 0x4A66CCu) {
        ctx->pc = 0x4A66CCu;
            // 0x4a66cc: 0x46160340  add.s       $f13, $f0, $f22 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->pc = 0x4A66D0u;
        goto label_4a66d0;
    }
    ctx->pc = 0x4A66C8u;
    SET_GPR_U32(ctx, 31, 0x4A66D0u);
    ctx->pc = 0x4A66CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A66C8u;
            // 0x4a66cc: 0x46160340  add.s       $f13, $f0, $f22 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A66D0u; }
        if (ctx->pc != 0x4A66D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A66D0u; }
        if (ctx->pc != 0x4A66D0u) { return; }
    }
    ctx->pc = 0x4A66D0u;
label_4a66d0:
    // 0x4a66d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4a66d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4a66d4:
    // 0x4a66d4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4a66d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4a66d8:
    // 0x4a66d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4a66d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a66dc:
    // 0x4a66dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4a66dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4a66e0:
    // 0x4a66e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4a66e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a66e4:
    // 0x4a66e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4a66e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4a66e8:
    // 0x4a66e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a66e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a66ec:
    // 0x4a66ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a66ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a66f0:
    // 0x4a66f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a66f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a66f4:
    // 0x4a66f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a66f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a66f8:
    // 0x4a66f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a66f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a66fc:
    // 0x4a66fc: 0x3e00008  jr          $ra
label_4a6700:
    if (ctx->pc == 0x4A6700u) {
        ctx->pc = 0x4A6700u;
            // 0x4a6700: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4A6704u;
        goto label_4a6704;
    }
    ctx->pc = 0x4A66FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A66FCu;
            // 0x4a6700: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A6704u;
label_4a6704:
    // 0x4a6704: 0x0  nop
    ctx->pc = 0x4a6704u;
    // NOP
label_4a6708:
    // 0x4a6708: 0x0  nop
    ctx->pc = 0x4a6708u;
    // NOP
label_4a670c:
    // 0x4a670c: 0x0  nop
    ctx->pc = 0x4a670cu;
    // NOP
}
