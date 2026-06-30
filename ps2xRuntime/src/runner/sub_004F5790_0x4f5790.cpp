#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F5790
// Address: 0x4f5790 - 0x4f5860
void sub_004F5790_0x4f5790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5790_0x4f5790");
#endif

    switch (ctx->pc) {
        case 0x4f5790u: goto label_4f5790;
        case 0x4f5794u: goto label_4f5794;
        case 0x4f5798u: goto label_4f5798;
        case 0x4f579cu: goto label_4f579c;
        case 0x4f57a0u: goto label_4f57a0;
        case 0x4f57a4u: goto label_4f57a4;
        case 0x4f57a8u: goto label_4f57a8;
        case 0x4f57acu: goto label_4f57ac;
        case 0x4f57b0u: goto label_4f57b0;
        case 0x4f57b4u: goto label_4f57b4;
        case 0x4f57b8u: goto label_4f57b8;
        case 0x4f57bcu: goto label_4f57bc;
        case 0x4f57c0u: goto label_4f57c0;
        case 0x4f57c4u: goto label_4f57c4;
        case 0x4f57c8u: goto label_4f57c8;
        case 0x4f57ccu: goto label_4f57cc;
        case 0x4f57d0u: goto label_4f57d0;
        case 0x4f57d4u: goto label_4f57d4;
        case 0x4f57d8u: goto label_4f57d8;
        case 0x4f57dcu: goto label_4f57dc;
        case 0x4f57e0u: goto label_4f57e0;
        case 0x4f57e4u: goto label_4f57e4;
        case 0x4f57e8u: goto label_4f57e8;
        case 0x4f57ecu: goto label_4f57ec;
        case 0x4f57f0u: goto label_4f57f0;
        case 0x4f57f4u: goto label_4f57f4;
        case 0x4f57f8u: goto label_4f57f8;
        case 0x4f57fcu: goto label_4f57fc;
        case 0x4f5800u: goto label_4f5800;
        case 0x4f5804u: goto label_4f5804;
        case 0x4f5808u: goto label_4f5808;
        case 0x4f580cu: goto label_4f580c;
        case 0x4f5810u: goto label_4f5810;
        case 0x4f5814u: goto label_4f5814;
        case 0x4f5818u: goto label_4f5818;
        case 0x4f581cu: goto label_4f581c;
        case 0x4f5820u: goto label_4f5820;
        case 0x4f5824u: goto label_4f5824;
        case 0x4f5828u: goto label_4f5828;
        case 0x4f582cu: goto label_4f582c;
        case 0x4f5830u: goto label_4f5830;
        case 0x4f5834u: goto label_4f5834;
        case 0x4f5838u: goto label_4f5838;
        case 0x4f583cu: goto label_4f583c;
        case 0x4f5840u: goto label_4f5840;
        case 0x4f5844u: goto label_4f5844;
        case 0x4f5848u: goto label_4f5848;
        case 0x4f584cu: goto label_4f584c;
        case 0x4f5850u: goto label_4f5850;
        case 0x4f5854u: goto label_4f5854;
        case 0x4f5858u: goto label_4f5858;
        case 0x4f585cu: goto label_4f585c;
        default: break;
    }

    ctx->pc = 0x4f5790u;

label_4f5790:
    // 0x4f5790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f5790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f5794:
    // 0x4f5794: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f5794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f5798:
    // 0x4f5798: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f5798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4f579c:
    // 0x4f579c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f579cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f57a0:
    // 0x4f57a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f57a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f57a4:
    // 0x4f57a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f57a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f57a8:
    // 0x4f57a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f57a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4f57ac:
    // 0x4f57ac: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x4f57acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f57b0:
    // 0x4f57b0: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x4f57b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4f57b4:
    // 0x4f57b4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x4f57b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f57b8:
    // 0x4f57b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4f57b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f57bc:
    // 0x4f57bc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4f57bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4f57c0:
    // 0x4f57c0: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4f57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4f57c4:
    // 0x4f57c4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4f57c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4f57c8:
    // 0x4f57c8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4f57c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4f57cc:
    // 0x4f57cc: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x4f57ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f57d0:
    // 0x4f57d0: 0xc089638  jal         func_2258E0
label_4f57d4:
    if (ctx->pc == 0x4F57D4u) {
        ctx->pc = 0x4F57D4u;
            // 0x4f57d4: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x4F57D8u;
        goto label_4f57d8;
    }
    ctx->pc = 0x4F57D0u;
    SET_GPR_U32(ctx, 31, 0x4F57D8u);
    ctx->pc = 0x4F57D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F57D0u;
            // 0x4f57d4: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F57D8u; }
        if (ctx->pc != 0x4F57D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F57D8u; }
        if (ctx->pc != 0x4F57D8u) { return; }
    }
    ctx->pc = 0x4F57D8u;
label_4f57d8:
    // 0x4f57d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4f57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4f57dc:
    // 0x4f57dc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4f57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4f57e0:
    // 0x4f57e0: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x4f57e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4f57e4:
    // 0x4f57e4: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x4f57e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4f57e8:
    // 0x4f57e8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x4f57e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f57ec:
    // 0x4f57ec: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x4f57ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f57f0:
    // 0x4f57f0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x4f57f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_4f57f4:
    // 0x4f57f4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x4f57f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f57f8:
    // 0x4f57f8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x4f57f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f57fc:
    // 0x4f57fc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x4f57fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_4f5800:
    // 0x4f5800: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x4f5800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_4f5804:
    // 0x4f5804: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4f5804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4f5808:
    // 0x4f5808: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4f5808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_4f580c:
    // 0x4f580c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x4f580cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4f5810:
    // 0x4f5810: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x4f5810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4f5814:
    // 0x4f5814: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x4f5814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4f5818:
    // 0x4f5818: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x4f5818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_4f581c:
    // 0x4f581c: 0xc6140018  lwc1        $f20, 0x18($s0)
    ctx->pc = 0x4f581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f5820:
    // 0x4f5820: 0xc088b74  jal         func_222DD0
label_4f5824:
    if (ctx->pc == 0x4F5824u) {
        ctx->pc = 0x4F5824u;
            // 0x4f5824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F5828u;
        goto label_4f5828;
    }
    ctx->pc = 0x4F5820u;
    SET_GPR_U32(ctx, 31, 0x4F5828u);
    ctx->pc = 0x4F5824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5820u;
            // 0x4f5824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5828u; }
        if (ctx->pc != 0x4F5828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5828u; }
        if (ctx->pc != 0x4F5828u) { return; }
    }
    ctx->pc = 0x4F5828u;
label_4f5828:
    // 0x4f5828: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4f5828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4f582c:
    // 0x4f582c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4f582cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4f5830:
    // 0x4f5830: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4f5830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4f5834:
    // 0x4f5834: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x4f5834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_4f5838:
    // 0x4f5838: 0x320f809  jalr        $t9
label_4f583c:
    if (ctx->pc == 0x4F583Cu) {
        ctx->pc = 0x4F583Cu;
            // 0x4f583c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4F5840u;
        goto label_4f5840;
    }
    ctx->pc = 0x4F5838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F5840u);
        ctx->pc = 0x4F583Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5838u;
            // 0x4f583c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F5840u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F5840u; }
            if (ctx->pc != 0x4F5840u) { return; }
        }
        }
    }
    ctx->pc = 0x4F5840u;
label_4f5840:
    // 0x4f5840: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f5840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4f5844:
    // 0x4f5844: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f5844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f5848:
    // 0x4f5848: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f5848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f584c:
    // 0x4f584c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f584cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5850:
    // 0x4f5850: 0x3e00008  jr          $ra
label_4f5854:
    if (ctx->pc == 0x4F5854u) {
        ctx->pc = 0x4F5854u;
            // 0x4f5854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4F5858u;
        goto label_4f5858;
    }
    ctx->pc = 0x4F5850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5850u;
            // 0x4f5854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5858u;
label_4f5858:
    // 0x4f5858: 0x0  nop
    ctx->pc = 0x4f5858u;
    // NOP
label_4f585c:
    // 0x4f585c: 0x0  nop
    ctx->pc = 0x4f585cu;
    // NOP
}
