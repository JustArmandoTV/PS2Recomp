#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0628
// Address: 0x1c0628 - 0x1c0788
void sub_001C0628_0x1c0628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0628_0x1c0628");
#endif

    switch (ctx->pc) {
        case 0x1c066cu: goto label_1c066c;
        case 0x1c06a0u: goto label_1c06a0;
        case 0x1c06c8u: goto label_1c06c8;
        default: break;
    }

    ctx->pc = 0x1c0628u;

    // 0x1c0628: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c0628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c062c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C062Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C062Cu;
            // 0x1c0630: 0xdc62a4b8  ld          $v0, -0x5B48($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294943928)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0634u;
    // 0x1c0634: 0x0  nop
    ctx->pc = 0x1c0634u;
    // NOP
    // 0x1c0638: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c0638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c063c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c063cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c0640: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x1c0640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x1c0644: 0xdc85a4b8  ld          $a1, -0x5B48($a0)
    ctx->pc = 0x1c0644u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 4294943928)));
    // 0x1c0648: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1c0648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1c064c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c064cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0650: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x1c0650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x1c0654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0658: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x1c0658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x1c065c: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x1c065cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x1c0660: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x1c0660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1c0664: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1C0664u;
    SET_GPR_U32(ctx, 31, 0x1C066Cu);
    ctx->pc = 0x1C0668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0664u;
            // 0x1c0668: 0x421b8  dsll        $a0, $a0, 6 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C066Cu; }
        if (ctx->pc != 0x1C066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C066Cu; }
        if (ctx->pc != 0x1C066Cu) { return; }
    }
    ctx->pc = 0x1C066Cu;
label_1c066c:
    // 0x1c066c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c066cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0670: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0670u;
            // 0x1c0674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0678u;
    // 0x1c0678: 0x41178  dsll        $v0, $a0, 5
    ctx->pc = 0x1c0678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 5);
    // 0x1c067c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c067cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c0680: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x1c0680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x1c0684: 0xdc65a4b8  ld          $a1, -0x5B48($v1)
    ctx->pc = 0x1c0684u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294943928)));
    // 0x1c0688: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x1c0688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x1c068c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c068cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0690: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1c0690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1c0694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0698: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1C0698u;
    SET_GPR_U32(ctx, 31, 0x1C06A0u);
    ctx->pc = 0x1C069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0698u;
            // 0x1c069c: 0x220f8  dsll        $a0, $v0, 3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 3);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C06A0u; }
        if (ctx->pc != 0x1C06A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C06A0u; }
        if (ctx->pc != 0x1C06A0u) { return; }
    }
    ctx->pc = 0x1C06A0u;
label_1c06a0:
    // 0x1c06a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c06a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c06a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C06A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C06A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C06A4u;
            // 0x1c06a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C06ACu;
    // 0x1c06ac: 0x0  nop
    ctx->pc = 0x1c06acu;
    // NOP
    // 0x1c06b0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c06b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c06b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c06b8: 0xdc45a4b8  ld          $a1, -0x5B48($v0)
    ctx->pc = 0x1c06b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294943928)));
    // 0x1c06bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c06bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c06c0: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1C06C0u;
    SET_GPR_U32(ctx, 31, 0x1C06C8u);
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C06C8u; }
        if (ctx->pc != 0x1C06C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C06C8u; }
        if (ctx->pc != 0x1C06C8u) { return; }
    }
    ctx->pc = 0x1C06C8u;
label_1c06c8:
    // 0x1c06c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c06c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c06cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C06CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C06D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C06CCu;
            // 0x1c06d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C06D4u;
    // 0x1c06d4: 0x0  nop
    ctx->pc = 0x1c06d4u;
    // NOP
    // 0x1c06d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c06d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c06dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1c06dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c06e0: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x1c06e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x1c06e4: 0x34212400  ori         $at, $at, 0x2400
    ctx->pc = 0x1c06e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9216);
    // 0x1c06e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c06e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c06ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c06ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c06f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c06f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c06f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c06f8: 0xc441a4b8  lwc1        $f1, -0x5B48($v0)
    ctx->pc = 0x1c06f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c06fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c06fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c0700: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c0700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c0704: 0x0  nop
    ctx->pc = 0x1c0704u;
    // NOP
    // 0x1c0708: 0x0  nop
    ctx->pc = 0x1c0708u;
    // NOP
    // 0x1c070c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c070cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1c0710: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0718u;
    // 0x1c0718: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c0718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c071c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1c071cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c0720: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1c0720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1c0724: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c0724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0728: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c0728u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c072c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c072cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0730: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c0730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c0734: 0xc441a4b8  lwc1        $f1, -0x5B48($v0)
    ctx->pc = 0x1c0734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0738: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c0738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c073c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c073cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c0740: 0x0  nop
    ctx->pc = 0x1c0740u;
    // NOP
    // 0x1c0744: 0x0  nop
    ctx->pc = 0x1c0744u;
    // NOP
    // 0x1c0748: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c0748u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1c074c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C074Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0754u;
    // 0x1c0754: 0x0  nop
    ctx->pc = 0x1c0754u;
    // NOP
    // 0x1c0758: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c0758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c075c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1c075cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1c0760: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c0760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c0764: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c0764u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0768: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c0768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c076c: 0xc440a4b8  lwc1        $f0, -0x5B48($v0)
    ctx->pc = 0x1c076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c0770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c0774: 0x0  nop
    ctx->pc = 0x1c0774u;
    // NOP
    // 0x1c0778: 0x0  nop
    ctx->pc = 0x1c0778u;
    // NOP
    // 0x1c077c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c077cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1c0780: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0788u;
}
