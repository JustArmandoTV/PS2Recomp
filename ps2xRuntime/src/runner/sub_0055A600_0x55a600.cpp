#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055A600
// Address: 0x55a600 - 0x55a750
void sub_0055A600_0x55a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055A600_0x55a600");
#endif

    switch (ctx->pc) {
        case 0x55a600u: goto label_55a600;
        case 0x55a604u: goto label_55a604;
        case 0x55a608u: goto label_55a608;
        case 0x55a60cu: goto label_55a60c;
        case 0x55a610u: goto label_55a610;
        case 0x55a614u: goto label_55a614;
        case 0x55a618u: goto label_55a618;
        case 0x55a61cu: goto label_55a61c;
        case 0x55a620u: goto label_55a620;
        case 0x55a624u: goto label_55a624;
        case 0x55a628u: goto label_55a628;
        case 0x55a62cu: goto label_55a62c;
        case 0x55a630u: goto label_55a630;
        case 0x55a634u: goto label_55a634;
        case 0x55a638u: goto label_55a638;
        case 0x55a63cu: goto label_55a63c;
        case 0x55a640u: goto label_55a640;
        case 0x55a644u: goto label_55a644;
        case 0x55a648u: goto label_55a648;
        case 0x55a64cu: goto label_55a64c;
        case 0x55a650u: goto label_55a650;
        case 0x55a654u: goto label_55a654;
        case 0x55a658u: goto label_55a658;
        case 0x55a65cu: goto label_55a65c;
        case 0x55a660u: goto label_55a660;
        case 0x55a664u: goto label_55a664;
        case 0x55a668u: goto label_55a668;
        case 0x55a66cu: goto label_55a66c;
        case 0x55a670u: goto label_55a670;
        case 0x55a674u: goto label_55a674;
        case 0x55a678u: goto label_55a678;
        case 0x55a67cu: goto label_55a67c;
        case 0x55a680u: goto label_55a680;
        case 0x55a684u: goto label_55a684;
        case 0x55a688u: goto label_55a688;
        case 0x55a68cu: goto label_55a68c;
        case 0x55a690u: goto label_55a690;
        case 0x55a694u: goto label_55a694;
        case 0x55a698u: goto label_55a698;
        case 0x55a69cu: goto label_55a69c;
        case 0x55a6a0u: goto label_55a6a0;
        case 0x55a6a4u: goto label_55a6a4;
        case 0x55a6a8u: goto label_55a6a8;
        case 0x55a6acu: goto label_55a6ac;
        case 0x55a6b0u: goto label_55a6b0;
        case 0x55a6b4u: goto label_55a6b4;
        case 0x55a6b8u: goto label_55a6b8;
        case 0x55a6bcu: goto label_55a6bc;
        case 0x55a6c0u: goto label_55a6c0;
        case 0x55a6c4u: goto label_55a6c4;
        case 0x55a6c8u: goto label_55a6c8;
        case 0x55a6ccu: goto label_55a6cc;
        case 0x55a6d0u: goto label_55a6d0;
        case 0x55a6d4u: goto label_55a6d4;
        case 0x55a6d8u: goto label_55a6d8;
        case 0x55a6dcu: goto label_55a6dc;
        case 0x55a6e0u: goto label_55a6e0;
        case 0x55a6e4u: goto label_55a6e4;
        case 0x55a6e8u: goto label_55a6e8;
        case 0x55a6ecu: goto label_55a6ec;
        case 0x55a6f0u: goto label_55a6f0;
        case 0x55a6f4u: goto label_55a6f4;
        case 0x55a6f8u: goto label_55a6f8;
        case 0x55a6fcu: goto label_55a6fc;
        case 0x55a700u: goto label_55a700;
        case 0x55a704u: goto label_55a704;
        case 0x55a708u: goto label_55a708;
        case 0x55a70cu: goto label_55a70c;
        case 0x55a710u: goto label_55a710;
        case 0x55a714u: goto label_55a714;
        case 0x55a718u: goto label_55a718;
        case 0x55a71cu: goto label_55a71c;
        case 0x55a720u: goto label_55a720;
        case 0x55a724u: goto label_55a724;
        case 0x55a728u: goto label_55a728;
        case 0x55a72cu: goto label_55a72c;
        case 0x55a730u: goto label_55a730;
        case 0x55a734u: goto label_55a734;
        case 0x55a738u: goto label_55a738;
        case 0x55a73cu: goto label_55a73c;
        case 0x55a740u: goto label_55a740;
        case 0x55a744u: goto label_55a744;
        case 0x55a748u: goto label_55a748;
        case 0x55a74cu: goto label_55a74c;
        default: break;
    }

    ctx->pc = 0x55a600u;

label_55a600:
    // 0x55a600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x55a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_55a604:
    // 0x55a604: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55a604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_55a608:
    // 0x55a608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x55a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_55a60c:
    // 0x55a60c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x55a60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_55a610:
    // 0x55a610: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x55a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_55a614:
    // 0x55a614: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x55a614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_55a618:
    // 0x55a618: 0x10a60034  beq         $a1, $a2, . + 4 + (0x34 << 2)
label_55a61c:
    if (ctx->pc == 0x55A61Cu) {
        ctx->pc = 0x55A61Cu;
            // 0x55a61c: 0xc4640018  lwc1        $f4, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->pc = 0x55A620u;
        goto label_55a620;
    }
    ctx->pc = 0x55A618u;
    {
        const bool branch_taken_0x55a618 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x55A61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A618u;
            // 0x55a61c: 0xc4640018  lwc1        $f4, 0x18($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a618) {
            ctx->pc = 0x55A6ECu;
            goto label_55a6ec;
        }
    }
    ctx->pc = 0x55A620u;
label_55a620:
    // 0x55a620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55a620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55a624:
    // 0x55a624: 0x50a30022  beql        $a1, $v1, . + 4 + (0x22 << 2)
label_55a628:
    if (ctx->pc == 0x55A628u) {
        ctx->pc = 0x55A628u;
            // 0x55a628: 0xc4800084  lwc1        $f0, 0x84($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x55A62Cu;
        goto label_55a62c;
    }
    ctx->pc = 0x55A624u;
    {
        const bool branch_taken_0x55a624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x55a624) {
            ctx->pc = 0x55A628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A624u;
            // 0x55a628: 0xc4800084  lwc1        $f0, 0x84($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A6B0u;
            goto label_55a6b0;
        }
    }
    ctx->pc = 0x55A62Cu;
label_55a62c:
    // 0x55a62c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_55a630:
    if (ctx->pc == 0x55A630u) {
        ctx->pc = 0x55A630u;
            // 0x55a630: 0xc482006c  lwc1        $f2, 0x6C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x55A634u;
        goto label_55a634;
    }
    ctx->pc = 0x55A62Cu;
    {
        const bool branch_taken_0x55a62c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a62c) {
            ctx->pc = 0x55A630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A62Cu;
            // 0x55a630: 0xc482006c  lwc1        $f2, 0x6C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A63Cu;
            goto label_55a63c;
        }
    }
    ctx->pc = 0x55A634u;
label_55a634:
    // 0x55a634: 0x10000044  b           . + 4 + (0x44 << 2)
label_55a638:
    if (ctx->pc == 0x55A638u) {
        ctx->pc = 0x55A638u;
            // 0x55a638: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x55A63Cu;
        goto label_55a63c;
    }
    ctx->pc = 0x55A634u;
    {
        const bool branch_taken_0x55a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A634u;
            // 0x55a638: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a634) {
            ctx->pc = 0x55A748u;
            goto label_55a748;
        }
    }
    ctx->pc = 0x55A63Cu;
label_55a63c:
    // 0x55a63c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x55a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_55a640:
    // 0x55a640: 0xc4830070  lwc1        $f3, 0x70($a0)
    ctx->pc = 0x55a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_55a644:
    // 0x55a644: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x55a644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55a648:
    // 0x55a648: 0x0  nop
    ctx->pc = 0x55a648u;
    // NOP
label_55a64c:
    // 0x55a64c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x55a64cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_55a650:
    // 0x55a650: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x55a650u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_55a654:
    // 0x55a654: 0xe481006c  swc1        $f1, 0x6C($a0)
    ctx->pc = 0x55a654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_55a658:
    // 0x55a658: 0xc4820074  lwc1        $f2, 0x74($a0)
    ctx->pc = 0x55a658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55a65c:
    // 0x55a65c: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x55a65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a660:
    // 0x55a660: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55a660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a664:
    // 0x55a664: 0x0  nop
    ctx->pc = 0x55a664u;
    // NOP
label_55a668:
    // 0x55a668: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x55a668u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_55a66c:
    // 0x55a66c: 0xe4810080  swc1        $f1, 0x80($a0)
    ctx->pc = 0x55a66cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_55a670:
    // 0x55a670: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x55a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a674:
    // 0x55a674: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x55a674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55a678:
    // 0x55a678: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_55a67c:
    if (ctx->pc == 0x55A67Cu) {
        ctx->pc = 0x55A67Cu;
            // 0x55a67c: 0xc4810080  lwc1        $f1, 0x80($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x55A680u;
        goto label_55a680;
    }
    ctx->pc = 0x55A678u;
    {
        const bool branch_taken_0x55a678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x55a678) {
            ctx->pc = 0x55A67Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A678u;
            // 0x55a67c: 0xc4810080  lwc1        $f1, 0x80($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A688u;
            goto label_55a688;
        }
    }
    ctx->pc = 0x55A680u;
label_55a680:
    // 0x55a680: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x55a680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_55a684:
    // 0x55a684: 0xc4810080  lwc1        $f1, 0x80($a0)
    ctx->pc = 0x55a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a688:
    // 0x55a688: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x55a688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_55a68c:
    // 0x55a68c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55a68cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a690:
    // 0x55a690: 0x0  nop
    ctx->pc = 0x55a690u;
    // NOP
label_55a694:
    // 0x55a694: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x55a694u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55a698:
    // 0x55a698: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_55a69c:
    if (ctx->pc == 0x55A69Cu) {
        ctx->pc = 0x55A6A0u;
        goto label_55a6a0;
    }
    ctx->pc = 0x55A698u;
    {
        const bool branch_taken_0x55a698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x55a698) {
            ctx->pc = 0x55A744u;
            goto label_55a744;
        }
    }
    ctx->pc = 0x55A6A0u;
label_55a6a0:
    // 0x55a6a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55a6a4:
    // 0x55a6a4: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x55a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
label_55a6a8:
    // 0x55a6a8: 0x10000026  b           . + 4 + (0x26 << 2)
label_55a6ac:
    if (ctx->pc == 0x55A6ACu) {
        ctx->pc = 0x55A6ACu;
            // 0x55a6ac: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x55A6B0u;
        goto label_55a6b0;
    }
    ctx->pc = 0x55A6A8u;
    {
        const bool branch_taken_0x55a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A6A8u;
            // 0x55a6ac: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a6a8) {
            ctx->pc = 0x55A744u;
            goto label_55a744;
        }
    }
    ctx->pc = 0x55A6B0u;
label_55a6b0:
    // 0x55a6b0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x55a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_55a6b4:
    // 0x55a6b4: 0x8c63f3b8  lw          $v1, -0xC48($v1)
    ctx->pc = 0x55a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964152)));
label_55a6b8:
    // 0x55a6b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x55a6b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_55a6bc:
    // 0x55a6bc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x55a6bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_55a6c0:
    // 0x55a6c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55a6c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55a6c4:
    // 0x55a6c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x55a6c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_55a6c8:
    // 0x55a6c8: 0x0  nop
    ctx->pc = 0x55a6c8u;
    // NOP
label_55a6cc:
    // 0x55a6cc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x55a6ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_55a6d0:
    // 0x55a6d0: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_55a6d4:
    if (ctx->pc == 0x55A6D4u) {
        ctx->pc = 0x55A6D4u;
            // 0x55a6d4: 0xac850084  sw          $a1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 5));
        ctx->pc = 0x55A6D8u;
        goto label_55a6d8;
    }
    ctx->pc = 0x55A6D0u;
    {
        const bool branch_taken_0x55a6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x55A6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A6D0u;
            // 0x55a6d4: 0xac850084  sw          $a1, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a6d0) {
            ctx->pc = 0x55A744u;
            goto label_55a744;
        }
    }
    ctx->pc = 0x55A6D8u;
label_55a6d8:
    // 0x55a6d8: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x55a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_55a6dc:
    // 0x55a6dc: 0x3c034108  lui         $v1, 0x4108
    ctx->pc = 0x55a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16648 << 16));
label_55a6e0:
    // 0x55a6e0: 0xac860058  sw          $a2, 0x58($a0)
    ctx->pc = 0x55a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 6));
label_55a6e4:
    // 0x55a6e4: 0x10000017  b           . + 4 + (0x17 << 2)
label_55a6e8:
    if (ctx->pc == 0x55A6E8u) {
        ctx->pc = 0x55A6E8u;
            // 0x55a6e8: 0xac830070  sw          $v1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x55A6ECu;
        goto label_55a6ec;
    }
    ctx->pc = 0x55A6E4u;
    {
        const bool branch_taken_0x55a6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55A6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A6E4u;
            // 0x55a6e8: 0xac830070  sw          $v1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a6e4) {
            ctx->pc = 0x55A744u;
            goto label_55a744;
        }
    }
    ctx->pc = 0x55A6ECu;
label_55a6ec:
    // 0x55a6ec: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x55a6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a6f0:
    // 0x55a6f0: 0xc4820070  lwc1        $f2, 0x70($a0)
    ctx->pc = 0x55a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_55a6f4:
    // 0x55a6f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x55a6f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55a6f8:
    // 0x55a6f8: 0x0  nop
    ctx->pc = 0x55a6f8u;
    // NOP
label_55a6fc:
    // 0x55a6fc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x55a6fcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_55a700:
    // 0x55a700: 0x4604105d  msub.s      $f1, $f2, $f4
    ctx->pc = 0x55a700u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_55a704:
    // 0x55a704: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x55a704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55a708:
    // 0x55a708: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_55a70c:
    if (ctx->pc == 0x55A70Cu) {
        ctx->pc = 0x55A70Cu;
            // 0x55a70c: 0xe481006c  swc1        $f1, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->pc = 0x55A710u;
        goto label_55a710;
    }
    ctx->pc = 0x55A708u;
    {
        const bool branch_taken_0x55a708 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x55A70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A708u;
            // 0x55a70c: 0xe481006c  swc1        $f1, 0x6C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x55a708) {
            ctx->pc = 0x55A744u;
            goto label_55a744;
        }
    }
    ctx->pc = 0x55A710u;
label_55a710:
    // 0x55a710: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x55a710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_55a714:
    // 0x55a714: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x55a714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_55a718:
    // 0x55a718: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_55a71c:
    if (ctx->pc == 0x55A71Cu) {
        ctx->pc = 0x55A71Cu;
            // 0x55a71c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x55A720u;
        goto label_55a720;
    }
    ctx->pc = 0x55A718u;
    {
        const bool branch_taken_0x55a718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a718) {
            ctx->pc = 0x55A71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x55A718u;
            // 0x55a71c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x55A738u;
            goto label_55a738;
        }
    }
    ctx->pc = 0x55A720u;
label_55a720:
    // 0x55a720: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x55a720u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_55a724:
    // 0x55a724: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_55a728:
    if (ctx->pc == 0x55A728u) {
        ctx->pc = 0x55A72Cu;
        goto label_55a72c;
    }
    ctx->pc = 0x55A724u;
    {
        const bool branch_taken_0x55a724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55a724) {
            ctx->pc = 0x55A734u;
            goto label_55a734;
        }
    }
    ctx->pc = 0x55A72Cu;
label_55a72c:
    // 0x55a72c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x55a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55a730:
    // 0x55a730: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x55a730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_55a734:
    // 0x55a734: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55a734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55a738:
    // 0x55a738: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x55a738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_55a73c:
    // 0x55a73c: 0x320f809  jalr        $t9
label_55a740:
    if (ctx->pc == 0x55A740u) {
        ctx->pc = 0x55A740u;
            // 0x55a740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x55A744u;
        goto label_55a744;
    }
    ctx->pc = 0x55A73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55A744u);
        ctx->pc = 0x55A740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A73Cu;
            // 0x55a740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55A744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55A744u; }
            if (ctx->pc != 0x55A744u) { return; }
        }
        }
    }
    ctx->pc = 0x55A744u;
label_55a744:
    // 0x55a744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x55a744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_55a748:
    // 0x55a748: 0x3e00008  jr          $ra
label_55a74c:
    if (ctx->pc == 0x55A74Cu) {
        ctx->pc = 0x55A74Cu;
            // 0x55a74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x55A750u;
        goto label_fallthrough_0x55a748;
    }
    ctx->pc = 0x55A748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55A74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55A748u;
            // 0x55a74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x55a748:
    ctx->pc = 0x55A750u;
}
