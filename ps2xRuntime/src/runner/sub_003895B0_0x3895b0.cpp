#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003895B0
// Address: 0x3895b0 - 0x389b80
void sub_003895B0_0x3895b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003895B0_0x3895b0");
#endif

    switch (ctx->pc) {
        case 0x389610u: goto label_389610;
        case 0x389638u: goto label_389638;
        case 0x389650u: goto label_389650;
        case 0x389660u: goto label_389660;
        case 0x389674u: goto label_389674;
        case 0x3896acu: goto label_3896ac;
        case 0x3896b8u: goto label_3896b8;
        case 0x3896c4u: goto label_3896c4;
        case 0x3896d4u: goto label_3896d4;
        case 0x3896e8u: goto label_3896e8;
        case 0x3896f4u: goto label_3896f4;
        case 0x389720u: goto label_389720;
        case 0x389738u: goto label_389738;
        case 0x389748u: goto label_389748;
        case 0x389764u: goto label_389764;
        case 0x389778u: goto label_389778;
        case 0x389780u: goto label_389780;
        case 0x38982cu: goto label_38982c;
        default: break;
    }

    ctx->pc = 0x3895b0u;

    // 0x3895b0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3895b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x3895b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3895b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3895b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3895b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3895bc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3895bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3895c0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3895c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3895c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3895c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3895c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3895c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3895cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3895ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3895d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3895d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3895d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3895d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3895d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3895d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3895dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3895dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3895e0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3895e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3895e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3895e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3895e8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3895e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3895ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3895ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3895f0: 0x26500c6c  addiu       $s0, $s2, 0xC6C
    ctx->pc = 0x3895f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3180));
    // 0x3895f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3895f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3895f8: 0xc4e10c84  lwc1        $f1, 0xC84($a3)
    ctx->pc = 0x3895f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 3204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3895fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3895fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389600: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x389600u;
    {
        const bool branch_taken_0x389600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389600u;
            // 0x389604: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389600) {
            ctx->pc = 0x389618u;
            goto label_389618;
        }
    }
    ctx->pc = 0x389608u;
    // 0x389608: 0xc0e26e0  jal         func_389B80
    ctx->pc = 0x389608u;
    SET_GPR_U32(ctx, 31, 0x389610u);
    ctx->pc = 0x389B80u;
    if (runtime->hasFunction(0x389B80u)) {
        auto targetFn = runtime->lookupFunction(0x389B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389610u; }
        if (ctx->pc != 0x389610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00389B80_0x389b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389610u; }
        if (ctx->pc != 0x389610u) { return; }
    }
    ctx->pc = 0x389610u;
label_389610:
    // 0x389610: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x389610u;
    {
        const bool branch_taken_0x389610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389610u;
            // 0x389614: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389610) {
            ctx->pc = 0x389B50u;
            goto label_389b50;
        }
    }
    ctx->pc = 0x389618u;
label_389618:
    // 0x389618: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x389618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x38961c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x38961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x389620: 0xc68c0010  lwc1        $f12, 0x10($s4)
    ctx->pc = 0x389620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x389624: 0xc68d0014  lwc1        $f13, 0x14($s4)
    ctx->pc = 0x389624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x389628: 0xc68e0018  lwc1        $f14, 0x18($s4)
    ctx->pc = 0x389628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x38962c: 0x8c56012c  lw          $s6, 0x12C($v0)
    ctx->pc = 0x38962cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x389630: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x389630u;
    SET_GPR_U32(ctx, 31, 0x389638u);
    ctx->pc = 0x389634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389630u;
            // 0x389634: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389638u; }
        if (ctx->pc != 0x389638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389638u; }
        if (ctx->pc != 0x389638u) { return; }
    }
    ctx->pc = 0x389638u;
label_389638:
    // 0x389638: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x389638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38963c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x38963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x389640: 0xc7ad00c4  lwc1        $f13, 0xC4($sp)
    ctx->pc = 0x389640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x389644: 0xc7ae00c8  lwc1        $f14, 0xC8($sp)
    ctx->pc = 0x389644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x389648: 0xc04f3bc  jal         func_13CEF0
    ctx->pc = 0x389648u;
    SET_GPR_U32(ctx, 31, 0x389650u);
    ctx->pc = 0x38964Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389648u;
            // 0x38964c: 0x24057fff  addiu       $a1, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CEF0u;
    if (runtime->hasFunction(0x13CEF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389650u; }
        if (ctx->pc != 0x389650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CEF0_0x13cef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389650u; }
        if (ctx->pc != 0x389650u) { return; }
    }
    ctx->pc = 0x389650u;
label_389650:
    // 0x389650: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x389650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x389654: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x389654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x389658: 0xc04cca0  jal         func_133280
    ctx->pc = 0x389658u;
    SET_GPR_U32(ctx, 31, 0x389660u);
    ctx->pc = 0x38965Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389658u;
            // 0x38965c: 0x26460820  addiu       $a2, $s2, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389660u; }
        if (ctx->pc != 0x389660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389660u; }
        if (ctx->pc != 0x389660u) { return; }
    }
    ctx->pc = 0x389660u;
label_389660:
    // 0x389660: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x389660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x389664: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x389664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x389668: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x389668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38966c: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x38966Cu;
    SET_GPR_U32(ctx, 31, 0x389674u);
    ctx->pc = 0x389670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38966Cu;
            // 0x389670: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389674u; }
        if (ctx->pc != 0x389674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389674u; }
        if (ctx->pc != 0x389674u) { return; }
    }
    ctx->pc = 0x389674u;
label_389674:
    // 0x389674: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x389674u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x389678: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x389678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x38967c: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x38967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x389680: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x389680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x389684: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x389684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x389688: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x389688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x38968c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x38968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x389690: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x389690u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x389694: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x389694u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x389698: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x389698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x38969c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x38969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3896a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3896a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3896a4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3896A4u;
    SET_GPR_U32(ctx, 31, 0x3896ACu);
    ctx->pc = 0x3896A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3896A4u;
            // 0x3896a8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896ACu; }
        if (ctx->pc != 0x3896ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896ACu; }
        if (ctx->pc != 0x3896ACu) { return; }
    }
    ctx->pc = 0x3896ACu;
label_3896ac:
    // 0x3896ac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3896acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3896b0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3896B0u;
    SET_GPR_U32(ctx, 31, 0x3896B8u);
    ctx->pc = 0x3896B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3896B0u;
            // 0x3896b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896B8u; }
        if (ctx->pc != 0x3896B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896B8u; }
        if (ctx->pc != 0x3896B8u) { return; }
    }
    ctx->pc = 0x3896B8u;
label_3896b8:
    // 0x3896b8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3896b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3896bc: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x3896BCu;
    SET_GPR_U32(ctx, 31, 0x3896C4u);
    ctx->pc = 0x3896C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3896BCu;
            // 0x3896c0: 0x264507e0  addiu       $a1, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896C4u; }
        if (ctx->pc != 0x3896C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896C4u; }
        if (ctx->pc != 0x3896C4u) { return; }
    }
    ctx->pc = 0x3896C4u;
label_3896c4:
    // 0x3896c4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3896c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3896c8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x3896c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3896cc: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3896CCu;
    SET_GPR_U32(ctx, 31, 0x3896D4u);
    ctx->pc = 0x3896D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3896CCu;
            // 0x3896d0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896D4u; }
        if (ctx->pc != 0x3896D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896D4u; }
        if (ctx->pc != 0x3896D4u) { return; }
    }
    ctx->pc = 0x3896D4u;
label_3896d4:
    // 0x3896d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3896d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3896d8: 0x264507e0  addiu       $a1, $s2, 0x7E0
    ctx->pc = 0x3896d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
    // 0x3896dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3896dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3896e0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3896E0u;
    SET_GPR_U32(ctx, 31, 0x3896E8u);
    ctx->pc = 0x3896E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3896E0u;
            // 0x3896e4: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896E8u; }
        if (ctx->pc != 0x3896E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896E8u; }
        if (ctx->pc != 0x3896E8u) { return; }
    }
    ctx->pc = 0x3896E8u;
label_3896e8:
    // 0x3896e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3896e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3896ec: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3896ECu;
    SET_GPR_U32(ctx, 31, 0x3896F4u);
    ctx->pc = 0x3896F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3896ECu;
            // 0x3896f0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896F4u; }
        if (ctx->pc != 0x3896F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3896F4u; }
        if (ctx->pc != 0x3896F4u) { return; }
    }
    ctx->pc = 0x3896F4u;
label_3896f4:
    // 0x3896f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3896f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3896f8: 0x0  nop
    ctx->pc = 0x3896f8u;
    // NOP
    // 0x3896fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3896fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389700: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x389700u;
    {
        const bool branch_taken_0x389700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389700) {
            ctx->pc = 0x389704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389700u;
            // 0x389704: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389728u;
            goto label_389728;
        }
    }
    ctx->pc = 0x389708u;
    // 0x389708: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x389708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38970c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38970cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389710: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x389710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389714: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x389714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389718: 0xc0e26e0  jal         func_389B80
    ctx->pc = 0x389718u;
    SET_GPR_U32(ctx, 31, 0x389720u);
    ctx->pc = 0x38971Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389718u;
            // 0x38971c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x389B80u;
    if (runtime->hasFunction(0x389B80u)) {
        auto targetFn = runtime->lookupFunction(0x389B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389720u; }
        if (ctx->pc != 0x389720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00389B80_0x389b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389720u; }
        if (ctx->pc != 0x389720u) { return; }
    }
    ctx->pc = 0x389720u;
label_389720:
    // 0x389720: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x389720u;
    {
        const bool branch_taken_0x389720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389720) {
            ctx->pc = 0x389B4Cu;
            goto label_389b4c;
        }
    }
    ctx->pc = 0x389728u;
label_389728:
    // 0x389728: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x389728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x38972c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x38972cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x389730: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x389730u;
    SET_GPR_U32(ctx, 31, 0x389738u);
    ctx->pc = 0x389734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389730u;
            // 0x389734: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389738u; }
        if (ctx->pc != 0x389738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389738u; }
        if (ctx->pc != 0x389738u) { return; }
    }
    ctx->pc = 0x389738u;
label_389738:
    // 0x389738: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x389738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
    // 0x38973c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x38973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x389740: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x389740u;
    SET_GPR_U32(ctx, 31, 0x389748u);
    ctx->pc = 0x389744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389740u;
            // 0x389744: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389748u; }
        if (ctx->pc != 0x389748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389748u; }
        if (ctx->pc != 0x389748u) { return; }
    }
    ctx->pc = 0x389748u;
label_389748:
    // 0x389748: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x389748u;
    {
        const bool branch_taken_0x389748 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38974Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389748u;
            // 0x38974c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389748) {
            ctx->pc = 0x389778u;
            goto label_389778;
        }
    }
    ctx->pc = 0x389750u;
    // 0x389750: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x389750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x389754: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x389754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
    // 0x389758: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x389758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x38975c: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x38975Cu;
    SET_GPR_U32(ctx, 31, 0x389764u);
    ctx->pc = 0x389760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38975Cu;
            // 0x389760: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389764u; }
        if (ctx->pc != 0x389764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389764u; }
        if (ctx->pc != 0x389764u) { return; }
    }
    ctx->pc = 0x389764u;
label_389764:
    // 0x389764: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x389764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x389768: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x389768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
    // 0x38976c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38976cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x389770: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x389770u;
    SET_GPR_U32(ctx, 31, 0x389778u);
    ctx->pc = 0x389774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389770u;
            // 0x389774: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389778u; }
        if (ctx->pc != 0x389778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389778u; }
        if (ctx->pc != 0x389778u) { return; }
    }
    ctx->pc = 0x389778u;
label_389778:
    // 0x389778: 0xc089a7c  jal         func_2269F0
    ctx->pc = 0x389778u;
    SET_GPR_U32(ctx, 31, 0x389780u);
    ctx->pc = 0x38977Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389778u;
            // 0x38977c: 0x266400a0  addiu       $a0, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2269F0u;
    if (runtime->hasFunction(0x2269F0u)) {
        auto targetFn = runtime->lookupFunction(0x2269F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389780u; }
        if (ctx->pc != 0x389780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002269F0_0x2269f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x389780u; }
        if (ctx->pc != 0x389780u) { return; }
    }
    ctx->pc = 0x389780u;
label_389780:
    // 0x389780: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x389780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x389784: 0x0  nop
    ctx->pc = 0x389784u;
    // NOP
    // 0x389788: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x389788u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38978c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x38978Cu;
    {
        const bool branch_taken_0x38978c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38978c) {
            ctx->pc = 0x389790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38978Cu;
            // 0x389790: 0x3c024316  lui         $v0, 0x4316 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3897A0u;
            goto label_3897a0;
        }
    }
    ctx->pc = 0x389794u;
    // 0x389794: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x389794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x389798: 0xc440c918  lwc1        $f0, -0x36E8($v0)
    ctx->pc = 0x389798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38979c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x38979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_3897a0:
    // 0x3897a0: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x3897a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x3897a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3897a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3897a8: 0x0  nop
    ctx->pc = 0x3897a8u;
    // NOP
    // 0x3897ac: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x3897acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3897b0: 0x3c023b17  lui         $v0, 0x3B17
    ctx->pc = 0x3897b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15127 << 16));
    // 0x3897b4: 0x3443b426  ori         $v1, $v0, 0xB426
    ctx->pc = 0x3897b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
    // 0x3897b8: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x3897b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
    // 0x3897bc: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3897bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
    // 0x3897c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3897c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3897c4: 0x0  nop
    ctx->pc = 0x3897c4u;
    // NOP
    // 0x3897c8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3897c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x3897cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3897ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3897d0: 0x0  nop
    ctx->pc = 0x3897d0u;
    // NOP
    // 0x3897d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3897d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3897d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3897d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3897dc: 0x0  nop
    ctx->pc = 0x3897dcu;
    // NOP
    // 0x3897e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3897e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3897e4: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3897E4u;
    {
        const bool branch_taken_0x3897e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3897e4) {
            ctx->pc = 0x3897E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3897E4u;
            // 0x3897e8: 0x8e420da0  lw          $v0, 0xDA0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3897F4u;
            goto label_3897f4;
        }
    }
    ctx->pc = 0x3897ECu;
    // 0x3897ec: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3897ecu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x3897f0: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x3897f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_3897f4:
    // 0x3897f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3897f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3897f8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3897F8u;
    {
        const bool branch_taken_0x3897f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3897f8) {
            ctx->pc = 0x3897FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3897F8u;
            // 0x3897fc: 0x4601ab00  add.s       $f12, $f21, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x389818u;
            goto label_389818;
        }
    }
    ctx->pc = 0x389800u;
    // 0x389800: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x389800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x389804: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x389804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x389808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38980c: 0x0  nop
    ctx->pc = 0x38980cu;
    // NOP
    // 0x389810: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x389810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x389814: 0x4601ab00  add.s       $f12, $f21, $f1
    ctx->pc = 0x389814u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_389818:
    // 0x389818: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x389818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x38981c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38981cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389820: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x389820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x389824: 0xc0767f0  jal         func_1D9FC0
    ctx->pc = 0x389824u;
    SET_GPR_U32(ctx, 31, 0x38982Cu);
    ctx->pc = 0x389828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x389824u;
            // 0x389828: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38982Cu; }
        if (ctx->pc != 0x38982Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38982Cu; }
        if (ctx->pc != 0x38982Cu) { return; }
    }
    ctx->pc = 0x38982Cu;
label_38982c:
    // 0x38982c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x38982cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x389830: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x389830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x389834: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x389834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x389838: 0x0  nop
    ctx->pc = 0x389838u;
    // NOP
    // 0x38983c: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x38983cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389840: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
    ctx->pc = 0x389840u;
    {
        const bool branch_taken_0x389840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389840) {
            ctx->pc = 0x389844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389840u;
            // 0x389844: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3898F4u;
            goto label_3898f4;
        }
    }
    ctx->pc = 0x389848u;
    // 0x389848: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x389848u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x38984c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x38984cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x389850: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x389850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x389854: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x389854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x389858: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x389858u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38985c: 0x0  nop
    ctx->pc = 0x38985cu;
    // NOP
    // 0x389860: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x389860u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x389864: 0x0  nop
    ctx->pc = 0x389864u;
    // NOP
    // 0x389868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38986c: 0x0  nop
    ctx->pc = 0x38986cu;
    // NOP
    // 0x389870: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x389870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389874: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x389874u;
    {
        const bool branch_taken_0x389874 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389874) {
            ctx->pc = 0x389878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389874u;
            // 0x389878: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x38988Cu;
            goto label_38988c;
        }
    }
    ctx->pc = 0x38987Cu;
    // 0x38987c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x38987cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x389880: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x389880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x389884: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x389884u;
    {
        const bool branch_taken_0x389884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x389884) {
            ctx->pc = 0x3898A0u;
            goto label_3898a0;
        }
    }
    ctx->pc = 0x38988Cu;
label_38988c:
    // 0x38988c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38988cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x389890: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x389890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x389894: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x389894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x389898: 0x0  nop
    ctx->pc = 0x389898u;
    // NOP
    // 0x38989c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x38989cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3898a0:
    // 0x3898a0: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3898A0u;
    {
        const bool branch_taken_0x3898a0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3898a0) {
            ctx->pc = 0x3898A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3898A0u;
            // 0x3898a4: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3898B4u;
            goto label_3898b4;
        }
    }
    ctx->pc = 0x3898A8u;
    // 0x3898a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3898a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3898ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3898ACu;
    {
        const bool branch_taken_0x3898ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3898B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3898ACu;
            // 0x3898b0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3898ac) {
            ctx->pc = 0x3898CCu;
            goto label_3898cc;
        }
    }
    ctx->pc = 0x3898B4u;
label_3898b4:
    // 0x3898b4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3898b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3898b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3898b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3898bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3898bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3898c0: 0x0  nop
    ctx->pc = 0x3898c0u;
    // NOP
    // 0x3898c4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3898c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3898c8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3898c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3898cc:
    // 0x3898cc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x3898ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x3898d0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3898d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3898d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3898d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3898d8: 0x0  nop
    ctx->pc = 0x3898d8u;
    // NOP
    // 0x3898dc: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x3898dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x3898e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3898e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3898e4: 0x0  nop
    ctx->pc = 0x3898e4u;
    // NOP
    // 0x3898e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3898e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3898ec: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3898ECu;
    {
        const bool branch_taken_0x3898ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3898F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3898ECu;
            // 0x3898f0: 0x4603151d  msub.s      $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3898ec) {
            ctx->pc = 0x389A20u;
            goto label_389a20;
        }
    }
    ctx->pc = 0x3898F4u;
label_3898f4:
    // 0x3898f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3898f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3898f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3898f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3898fc: 0x0  nop
    ctx->pc = 0x3898fcu;
    // NOP
    // 0x389900: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x389900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389904: 0x45020047  bc1fl       . + 4 + (0x47 << 2)
    ctx->pc = 0x389904u;
    {
        const bool branch_taken_0x389904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x389904) {
            ctx->pc = 0x389908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389904u;
            // 0x389908: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389A24u;
            goto label_389a24;
        }
    }
    ctx->pc = 0x38990Cu;
    // 0x38990c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x38990cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x389910: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x389910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x389914: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x389914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x389918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x389918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38991c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x38991cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389920: 0x0  nop
    ctx->pc = 0x389920u;
    // NOP
    // 0x389924: 0x46000943  div.s       $f5, $f1, $f0
    ctx->pc = 0x389924u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[5] = ctx->f[1] / ctx->f[0];
    // 0x389928: 0x0  nop
    ctx->pc = 0x389928u;
    // NOP
    // 0x38992c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38992cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389930: 0x0  nop
    ctx->pc = 0x389930u;
    // NOP
    // 0x389934: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x389934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389938: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x389938u;
    {
        const bool branch_taken_0x389938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389938) {
            ctx->pc = 0x389944u;
            goto label_389944;
        }
    }
    ctx->pc = 0x389940u;
    // 0x389940: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x389940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389944:
    // 0x389944: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x389944u;
    {
        const bool branch_taken_0x389944 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x389944) {
            ctx->pc = 0x389948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389944u;
            // 0x389948: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389958u;
            goto label_389958;
        }
    }
    ctx->pc = 0x38994Cu;
    // 0x38994c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x38994cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389950: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x389950u;
    {
        const bool branch_taken_0x389950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389950u;
            // 0x389954: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x389950) {
            ctx->pc = 0x389970u;
            goto label_389970;
        }
    }
    ctx->pc = 0x389958u;
label_389958:
    // 0x389958: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x389958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x38995c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38995cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389960: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x389960u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389964: 0x0  nop
    ctx->pc = 0x389964u;
    // NOP
    // 0x389968: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x389968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x38996c: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x38996cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_389970:
    // 0x389970: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x389970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x389974: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x389974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x389978: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x389978u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38997c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x38997cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x389980: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x389980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x389984: 0x0  nop
    ctx->pc = 0x389984u;
    // NOP
    // 0x389988: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x389988u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x38998c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x38998cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x389990: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x389990u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x389994: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x389994u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x389998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38999c: 0x0  nop
    ctx->pc = 0x38999cu;
    // NOP
    // 0x3899a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3899a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3899a4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x3899A4u;
    {
        const bool branch_taken_0x3899a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3899a4) {
            ctx->pc = 0x3899A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3899A4u;
            // 0x3899a8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3899BCu;
            goto label_3899bc;
        }
    }
    ctx->pc = 0x3899ACu;
    // 0x3899ac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3899acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3899b0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3899b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3899b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3899B4u;
    {
        const bool branch_taken_0x3899b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3899b4) {
            ctx->pc = 0x3899D0u;
            goto label_3899d0;
        }
    }
    ctx->pc = 0x3899BCu;
label_3899bc:
    // 0x3899bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3899bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3899c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3899c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3899c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3899c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3899c8: 0x0  nop
    ctx->pc = 0x3899c8u;
    // NOP
    // 0x3899cc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3899ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3899d0:
    // 0x3899d0: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3899D0u;
    {
        const bool branch_taken_0x3899d0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3899d0) {
            ctx->pc = 0x3899D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3899D0u;
            // 0x3899d4: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3899E4u;
            goto label_3899e4;
        }
    }
    ctx->pc = 0x3899D8u;
    // 0x3899d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3899d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3899dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3899DCu;
    {
        const bool branch_taken_0x3899dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3899E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3899DCu;
            // 0x3899e0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899dc) {
            ctx->pc = 0x3899FCu;
            goto label_3899fc;
        }
    }
    ctx->pc = 0x3899E4u;
label_3899e4:
    // 0x3899e4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3899e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3899e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3899e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3899ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3899ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3899f0: 0x0  nop
    ctx->pc = 0x3899f0u;
    // NOP
    // 0x3899f4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3899f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3899f8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3899f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3899fc:
    // 0x3899fc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x3899fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x389a00: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x389a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x389a04: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x389a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x389a08: 0x0  nop
    ctx->pc = 0x389a08u;
    // NOP
    // 0x389a0c: 0x46141040  add.s       $f1, $f2, $f20
    ctx->pc = 0x389a0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x389a10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x389a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389a14: 0x0  nop
    ctx->pc = 0x389a14u;
    // NOP
    // 0x389a18: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x389a18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x389a1c: 0x4603151c  madd.s      $f20, $f2, $f3
    ctx->pc = 0x389a1cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_389a20:
    // 0x389a20: 0x3c033fb2  lui         $v1, 0x3FB2
    ctx->pc = 0x389a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
label_389a24:
    // 0x389a24: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x389a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x389a28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389a28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389a2c: 0xc6460de4  lwc1        $f6, 0xDE4($s2)
    ctx->pc = 0x389a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x389a30: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x389a30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389a34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x389A34u;
    {
        const bool branch_taken_0x389a34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389A34u;
            // 0x389a38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a34) {
            ctx->pc = 0x389A40u;
            goto label_389a40;
        }
    }
    ctx->pc = 0x389A3Cu;
    // 0x389a3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x389a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389a40:
    // 0x389a40: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x389A40u;
    {
        const bool branch_taken_0x389a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x389a40) {
            ctx->pc = 0x389A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389A40u;
            // 0x389a44: 0x3c033e3d  lui         $v1, 0x3E3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15933 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389A6Cu;
            goto label_389a6c;
        }
    }
    ctx->pc = 0x389A48u;
    // 0x389a48: 0x3c03bfb2  lui         $v1, 0xBFB2
    ctx->pc = 0x389a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49074 << 16));
    // 0x389a4c: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x389a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x389a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389a54: 0x0  nop
    ctx->pc = 0x389a54u;
    // NOP
    // 0x389a58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x389a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389a5c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x389A5Cu;
    {
        const bool branch_taken_0x389a5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x389A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389A5Cu;
            // 0x389a60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a5c) {
            ctx->pc = 0x389A68u;
            goto label_389a68;
        }
    }
    ctx->pc = 0x389A64u;
    // 0x389a64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x389a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389a68:
    // 0x389a68: 0x3c033e3d  lui         $v1, 0x3E3D
    ctx->pc = 0x389a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15933 << 16));
label_389a6c:
    // 0x389a6c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x389a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x389a70: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x389a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
    // 0x389a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389a78: 0x0  nop
    ctx->pc = 0x389a78u;
    // NOP
    // 0x389a7c: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x389a7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389a80: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x389A80u;
    {
        const bool branch_taken_0x389a80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x389A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389A80u;
            // 0x389a84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a80) {
            ctx->pc = 0x389A8Cu;
            goto label_389a8c;
        }
    }
    ctx->pc = 0x389A88u;
    // 0x389a88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x389a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389a8c:
    // 0x389a8c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x389a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x389a90: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x389a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x389a94: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x389A94u;
    {
        const bool branch_taken_0x389a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x389a94) {
            ctx->pc = 0x389A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389A94u;
            // 0x389a98: 0x3c043fc9  lui         $a0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389AACu;
            goto label_389aac;
        }
    }
    ctx->pc = 0x389A9Cu;
    // 0x389a9c: 0x3c033e3d  lui         $v1, 0x3E3D
    ctx->pc = 0x389a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15933 << 16));
    // 0x389aa0: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x389aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
    // 0x389aa4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x389AA4u;
    {
        const bool branch_taken_0x389aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389AA4u;
            // 0x389aa8: 0xae430de4  sw          $v1, 0xDE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389aa4) {
            ctx->pc = 0x389B4Cu;
            goto label_389b4c;
        }
    }
    ctx->pc = 0x389AACu;
label_389aac:
    // 0x389aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x389aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389ab0: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x389ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x389ab4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x389ab4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389ab8: 0x0  nop
    ctx->pc = 0x389ab8u;
    // NOP
    // 0x389abc: 0x4600a143  div.s       $f5, $f20, $f0
    ctx->pc = 0x389abcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[5] = ctx->f[20] / ctx->f[0];
    // 0x389ac0: 0x0  nop
    ctx->pc = 0x389ac0u;
    // NOP
    // 0x389ac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x389ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389ac8: 0x0  nop
    ctx->pc = 0x389ac8u;
    // NOP
    // 0x389acc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x389accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389ad0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x389AD0u;
    {
        const bool branch_taken_0x389ad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389ad0) {
            ctx->pc = 0x389ADCu;
            goto label_389adc;
        }
    }
    ctx->pc = 0x389AD8u;
    // 0x389ad8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x389ad8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389adc:
    // 0x389adc: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x389ADCu;
    {
        const bool branch_taken_0x389adc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x389adc) {
            ctx->pc = 0x389AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x389ADCu;
            // 0x389ae0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x389AF0u;
            goto label_389af0;
        }
    }
    ctx->pc = 0x389AE4u;
    // 0x389ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389ae8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x389AE8u;
    {
        const bool branch_taken_0x389ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389AE8u;
            // 0x389aec: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ae8) {
            ctx->pc = 0x389B08u;
            goto label_389b08;
        }
    }
    ctx->pc = 0x389AF0u;
label_389af0:
    // 0x389af0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x389af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x389af4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389af8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x389af8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389afc: 0x0  nop
    ctx->pc = 0x389afcu;
    // NOP
    // 0x389b00: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x389b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x389b04: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x389b04u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_389b08:
    // 0x389b08: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x389b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x389b0c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x389b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x389b10: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x389b10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x389b14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x389b14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x389b18: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x389b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x389b1c: 0x0  nop
    ctx->pc = 0x389b1cu;
    // NOP
    // 0x389b20: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x389b20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x389b24: 0x3c033e0e  lui         $v1, 0x3E0E
    ctx->pc = 0x389b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15886 << 16));
    // 0x389b28: 0x4604189d  msub.s      $f2, $f3, $f4
    ctx->pc = 0x389b28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x389b2c: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x389b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
    // 0x389b30: 0x46060818  adda.s      $f1, $f6
    ctx->pc = 0x389b30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x389b34: 0xc6410dec  lwc1        $f1, 0xDEC($s2)
    ctx->pc = 0x389b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x389b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x389b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389b3c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x389b3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x389b40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x389b40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x389b44: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x389b44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
    // 0x389b48: 0xe6400de4  swc1        $f0, 0xDE4($s2)
    ctx->pc = 0x389b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
label_389b4c:
    // 0x389b4c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x389b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_389b50:
    // 0x389b50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x389b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x389b54: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x389b54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x389b58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x389b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x389b5c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x389b5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x389b60: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x389b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x389b64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x389b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x389b68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x389b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x389b6c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x389b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389b70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x389b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389b74: 0x3e00008  jr          $ra
    ctx->pc = 0x389B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x389B74u;
            // 0x389b78: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x389B7Cu;
    // 0x389b7c: 0x0  nop
    ctx->pc = 0x389b7cu;
    // NOP
}
