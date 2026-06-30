#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052F740
// Address: 0x52f740 - 0x52f8d0
void sub_0052F740_0x52f740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052F740_0x52f740");
#endif

    switch (ctx->pc) {
        case 0x52f794u: goto label_52f794;
        case 0x52f85cu: goto label_52f85c;
        case 0x52f87cu: goto label_52f87c;
        case 0x52f89cu: goto label_52f89c;
        case 0x52f8a4u: goto label_52f8a4;
        default: break;
    }

    ctx->pc = 0x52f740u;

    // 0x52f740: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x52f740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x52f744: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52f744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x52f748: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x52f748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x52f74c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x52f74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x52f750: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x52f750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x52f754: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x52f754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f758: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x52f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x52f75c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x52f75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f760: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x52f760u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x52f764: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x52f764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f768: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x52f768u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x52f76c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x52f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x52f770: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x52f770u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x52f774: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x52f774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x52f778: 0x8c42ab08  lw          $v0, -0x54F8($v0)
    ctx->pc = 0x52f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945544)));
    // 0x52f77c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x52f77cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x52f780: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x52f780u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x52f784: 0x8c420098  lw          $v0, 0x98($v0)
    ctx->pc = 0x52f784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x52f788: 0xc4540008  lwc1        $f20, 0x8($v0)
    ctx->pc = 0x52f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x52f78c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x52F78Cu;
    SET_GPR_U32(ctx, 31, 0x52F794u);
    ctx->pc = 0x52F790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F78Cu;
            // 0x52f790: 0x46007546  mov.s       $f21, $f14 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F794u; }
        if (ctx->pc != 0x52F794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F794u; }
        if (ctx->pc != 0x52F794u) { return; }
    }
    ctx->pc = 0x52F794u;
label_52f794:
    // 0x52f794: 0x0  nop
    ctx->pc = 0x52f794u;
    // NOP
    // 0x52f798: 0x0  nop
    ctx->pc = 0x52f798u;
    // NOP
    // 0x52f79c: 0x4615a003  div.s       $f0, $f20, $f21
    ctx->pc = 0x52f79cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[21];
    // 0x52f7a0: 0x3c023daa  lui         $v0, 0x3DAA
    ctx->pc = 0x52f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
    // 0x52f7a4: 0x3448aaab  ori         $t0, $v0, 0xAAAB
    ctx->pc = 0x52f7a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x52f7a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x52f7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x52f7ac: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x52f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x52f7b0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x52f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x52f7b4: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x52f7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x52f7b8: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x52f7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x52f7bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x52f7c0: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x52f7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x52f7c4: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x52f7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x52f7c8: 0x4617b001  sub.s       $f0, $f22, $f23
    ctx->pc = 0x52f7c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[23]);
    // 0x52f7cc: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x52f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
    // 0x52f7d0: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x52f7d0u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
    // 0x52f7d4: 0x44882800  mtc1        $t0, $f5
    ctx->pc = 0x52f7d4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x52f7d8: 0x0  nop
    ctx->pc = 0x52f7d8u;
    // NOP
    // 0x52f7dc: 0x46172842  mul.s       $f1, $f5, $f23
    ctx->pc = 0x52f7dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[23]);
    // 0x52f7e0: 0xe6410060  swc1        $f1, 0x60($s2)
    ctx->pc = 0x52f7e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x52f7e4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x52f7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x52f7e8: 0xe6400064  swc1        $f0, 0x64($s2)
    ctx->pc = 0x52f7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x52f7ec: 0xae470058  sw          $a3, 0x58($s2)
    ctx->pc = 0x52f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 7));
    // 0x52f7f0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x52f7f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x52f7f4: 0xae50005c  sw          $s0, 0x5C($s2)
    ctx->pc = 0x52f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 16));
    // 0x52f7f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x52f7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x52f7fc: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x52f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
    // 0x52f800: 0xc6440060  lwc1        $f4, 0x60($s2)
    ctx->pc = 0x52f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x52f804: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x52f804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x52f808: 0xc6420014  lwc1        $f2, 0x14($s2)
    ctx->pc = 0x52f808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x52f80c: 0xc6430018  lwc1        $f3, 0x18($s2)
    ctx->pc = 0x52f80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x52f810: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x52f810u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[5];
    // 0x52f814: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x52f814u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x52f818: 0x46010102  mul.s       $f4, $f0, $f1
    ctx->pc = 0x52f818u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x52f81c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x52f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x52f820: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x52f820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x52f824: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x52f824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x52f828: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x52f828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x52f82c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x52f82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x52f830: 0x46041000  add.s       $f0, $f2, $f4
    ctx->pc = 0x52f830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x52f834: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x52f834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x52f838: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x52f838u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x52f83c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x52f83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x52f840: 0x46040800  add.s       $f0, $f1, $f4
    ctx->pc = 0x52f840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x52f844: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x52f844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x52f848: 0x46041841  sub.s       $f1, $f3, $f4
    ctx->pc = 0x52f848u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x52f84c: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x52f84cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x52f850: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x52f850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x52f854: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x52F854u;
    SET_GPR_U32(ctx, 31, 0x52F85Cu);
    ctx->pc = 0x52F858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F854u;
            // 0x52f858: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F85Cu; }
        if (ctx->pc != 0x52F85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F85Cu; }
        if (ctx->pc != 0x52F85Cu) { return; }
    }
    ctx->pc = 0x52F85Cu;
label_52f85c:
    // 0x52f85c: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x52f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x52f860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x52f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52f864: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x52F864u;
    {
        const bool branch_taken_0x52f864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x52F868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F864u;
            // 0x52f868: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52f864) {
            ctx->pc = 0x52F880u;
            goto label_52f880;
        }
    }
    ctx->pc = 0x52F86Cu;
    // 0x52f86c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x52f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x52f870: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x52f870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x52f874: 0xc08a7ec  jal         func_229FB0
    ctx->pc = 0x52F874u;
    SET_GPR_U32(ctx, 31, 0x52F87Cu);
    ctx->pc = 0x52F878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F874u;
            // 0x52f878: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x229FB0u;
    if (runtime->hasFunction(0x229FB0u)) {
        auto targetFn = runtime->lookupFunction(0x229FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F87Cu; }
        if (ctx->pc != 0x52F87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229FB0_0x229fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F87Cu; }
        if (ctx->pc != 0x52F87Cu) { return; }
    }
    ctx->pc = 0x52F87Cu;
label_52f87c:
    // 0x52f87c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x52f87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_52f880:
    // 0x52f880: 0xae440054  sw          $a0, 0x54($s2)
    ctx->pc = 0x52f880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 4));
    // 0x52f884: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52f884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x52f888: 0xac92000c  sw          $s2, 0xC($a0)
    ctx->pc = 0x52f888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 18));
    // 0x52f88c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x52f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x52f890: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x52f890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x52f894: 0xc08c798  jal         func_231E60
    ctx->pc = 0x52F894u;
    SET_GPR_U32(ctx, 31, 0x52F89Cu);
    ctx->pc = 0x52F898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F894u;
            // 0x52f898: 0x8e450054  lw          $a1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F89Cu; }
        if (ctx->pc != 0x52F89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F89Cu; }
        if (ctx->pc != 0x52F89Cu) { return; }
    }
    ctx->pc = 0x52F89Cu;
label_52f89c:
    // 0x52f89c: 0xc08d414  jal         func_235050
    ctx->pc = 0x52F89Cu;
    SET_GPR_U32(ctx, 31, 0x52F8A4u);
    ctx->pc = 0x52F8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52F89Cu;
            // 0x52f8a0: 0x8e440054  lw          $a0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F8A4u; }
        if (ctx->pc != 0x52F8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52F8A4u; }
        if (ctx->pc != 0x52F8A4u) { return; }
    }
    ctx->pc = 0x52F8A4u;
label_52f8a4:
    // 0x52f8a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x52f8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x52f8a8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x52f8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x52f8ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x52f8acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x52f8b0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x52f8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x52f8b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x52f8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52f8b8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x52f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x52f8bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x52f8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52f8c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x52f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x52f8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x52F8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52F8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52F8C4u;
            // 0x52f8c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52F8CCu;
    // 0x52f8cc: 0x0  nop
    ctx->pc = 0x52f8ccu;
    // NOP
}
