#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C35B0
// Address: 0x3c35b0 - 0x3c37e0
void sub_003C35B0_0x3c35b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C35B0_0x3c35b0");
#endif

    switch (ctx->pc) {
        case 0x3c3668u: goto label_3c3668;
        case 0x3c3674u: goto label_3c3674;
        case 0x3c3684u: goto label_3c3684;
        case 0x3c3694u: goto label_3c3694;
        case 0x3c36bcu: goto label_3c36bc;
        case 0x3c36ccu: goto label_3c36cc;
        case 0x3c36dcu: goto label_3c36dc;
        case 0x3c36ecu: goto label_3c36ec;
        case 0x3c36f8u: goto label_3c36f8;
        case 0x3c3708u: goto label_3c3708;
        case 0x3c3714u: goto label_3c3714;
        case 0x3c3720u: goto label_3c3720;
        case 0x3c373cu: goto label_3c373c;
        case 0x3c3758u: goto label_3c3758;
        case 0x3c3768u: goto label_3c3768;
        case 0x3c3788u: goto label_3c3788;
        case 0x3c37a8u: goto label_3c37a8;
        default: break;
    }

    ctx->pc = 0x3c35b0u;

    // 0x3c35b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3c35b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3c35b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3c35b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c35b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c35bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c35bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c35c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c35c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c35c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c35c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c35c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c35c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c35cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c35d0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3c35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3c35d4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3c35d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c35d8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3c35d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c35dc: 0xc6010dbc  lwc1        $f1, 0xDBC($s0)
    ctx->pc = 0x3c35dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c35e0: 0xc6040de4  lwc1        $f4, 0xDE4($s0)
    ctx->pc = 0x3c35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c35e4: 0xc6030de0  lwc1        $f3, 0xDE0($s0)
    ctx->pc = 0x3c35e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c35e8: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x3c35e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c35ec: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x3C35ECu;
    {
        const bool branch_taken_0x3c35ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C35F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C35ECu;
            // 0x3c35f0: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c35ec) {
            ctx->pc = 0x3C362Cu;
            goto label_3c362c;
        }
    }
    ctx->pc = 0x3C35F4u;
    // 0x3c35f4: 0x46041801  sub.s       $f0, $f3, $f4
    ctx->pc = 0x3c35f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x3c35f8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3c35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x3c35fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3c35fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3c3600: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3c3600u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c3604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c3604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c3608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c360c: 0x0  nop
    ctx->pc = 0x3c360cu;
    // NOP
    // 0x3c3610: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x3c3610u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3c3614: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x3c3614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x3c3618: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3c3618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c361c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x3C361Cu;
    {
        const bool branch_taken_0x3c361c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c361c) {
            ctx->pc = 0x3C3620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C361Cu;
            // 0x3c3620: 0xe6000de4  swc1        $f0, 0xDE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3648u;
            goto label_3c3648;
        }
    }
    ctx->pc = 0x3C3624u;
    // 0x3c3624: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C3624u;
    {
        const bool branch_taken_0x3c3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3624u;
            // 0x3c3628: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3624) {
            ctx->pc = 0x3C3644u;
            goto label_3c3644;
        }
    }
    ctx->pc = 0x3C362Cu;
label_3c362c:
    // 0x3c362c: 0xc6000de8  lwc1        $f0, 0xDE8($s0)
    ctx->pc = 0x3c362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c3630: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x3c3630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3c3634: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x3c3634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c3638: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3638u;
    {
        const bool branch_taken_0x3c3638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c3638) {
            ctx->pc = 0x3C3644u;
            goto label_3c3644;
        }
    }
    ctx->pc = 0x3C3640u;
    // 0x3c3640: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x3c3640u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_3c3644:
    // 0x3c3644: 0xe6000de4  swc1        $f0, 0xDE4($s0)
    ctx->pc = 0x3c3644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3556), bits); }
label_3c3648:
    // 0x3c3648: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3c3648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3c364c: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x3c364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x3c3650: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3c3650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3c3654: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3c3654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x3c3658: 0x84420028  lh          $v0, 0x28($v0)
    ctx->pc = 0x3c3658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x3c365c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3660: 0xc0b7d3c  jal         func_2DF4F0
    ctx->pc = 0x3C3660u;
    SET_GPR_U32(ctx, 31, 0x3C3668u);
    ctx->pc = 0x3C3664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3660u;
            // 0x3c3664: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF4F0u;
    if (runtime->hasFunction(0x2DF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3668u; }
        if (ctx->pc != 0x3C3668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF4F0_0x2df4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3668u; }
        if (ctx->pc != 0x3C3668u) { return; }
    }
    ctx->pc = 0x3C3668u;
label_3c3668:
    // 0x3c3668: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3c3668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3c366c: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x3C366Cu;
    SET_GPR_U32(ctx, 31, 0x3C3674u);
    ctx->pc = 0x3C3670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C366Cu;
            // 0x3c3670: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3674u; }
        if (ctx->pc != 0x3C3674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3674u; }
        if (ctx->pc != 0x3C3674u) { return; }
    }
    ctx->pc = 0x3C3674u;
label_3c3674:
    // 0x3c3674: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c3674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c3678: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3c3678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3c367c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3C367Cu;
    SET_GPR_U32(ctx, 31, 0x3C3684u);
    ctx->pc = 0x3C3680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C367Cu;
            // 0x3c3680: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3684u; }
        if (ctx->pc != 0x3C3684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3684u; }
        if (ctx->pc != 0x3C3684u) { return; }
    }
    ctx->pc = 0x3C3684u;
label_3c3684:
    // 0x3c3684: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c3684u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3c3688: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3c3688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3c368c: 0xc0b8214  jal         func_2E0850
    ctx->pc = 0x3C368Cu;
    SET_GPR_U32(ctx, 31, 0x3C3694u);
    ctx->pc = 0x3C3690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C368Cu;
            // 0x3c3690: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0850u;
    if (runtime->hasFunction(0x2E0850u)) {
        auto targetFn = runtime->lookupFunction(0x2E0850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3694u; }
        if (ctx->pc != 0x3C3694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0850_0x2e0850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3694u; }
        if (ctx->pc != 0x3C3694u) { return; }
    }
    ctx->pc = 0x3C3694u;
label_3c3694:
    // 0x3c3694: 0x962300c0  lhu         $v1, 0xC0($s1)
    ctx->pc = 0x3c3694u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x3c3698: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c3698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3c369c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x3c369cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c36a0: 0x50200043  beql        $at, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x3C36A0u;
    {
        const bool branch_taken_0x3c36a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c36a0) {
            ctx->pc = 0x3C36A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C36A0u;
            // 0x3c36a4: 0xae200198  sw          $zero, 0x198($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C37B0u;
            goto label_3c37b0;
        }
    }
    ctx->pc = 0x3C36A8u;
    // 0x3c36a8: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x3c36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x3c36ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c36acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c36b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c36b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c36b4: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x3C36B4u;
    SET_GPR_U32(ctx, 31, 0x3C36BCu);
    ctx->pc = 0x3C36B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C36B4u;
            // 0x3c36b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C36BCu; }
        if (ctx->pc != 0x3C36BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C36BCu; }
        if (ctx->pc != 0x3C36BCu) { return; }
    }
    ctx->pc = 0x3C36BCu;
label_3c36bc:
    // 0x3c36bc: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x3c36bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3c36c0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3c36c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3c36c4: 0xc0b7d3c  jal         func_2DF4F0
    ctx->pc = 0x3C36C4u;
    SET_GPR_U32(ctx, 31, 0x3C36CCu);
    ctx->pc = 0x3C36C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C36C4u;
            // 0x3c36c8: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF4F0u;
    if (runtime->hasFunction(0x2DF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C36CCu; }
        if (ctx->pc != 0x3C36CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF4F0_0x2df4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C36CCu; }
        if (ctx->pc != 0x3C36CCu) { return; }
    }
    ctx->pc = 0x3C36CCu;
label_3c36cc:
    // 0x3c36cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3c36ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c36d0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3c36d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3c36d4: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3C36D4u;
    SET_GPR_U32(ctx, 31, 0x3C36DCu);
    ctx->pc = 0x3C36D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C36D4u;
            // 0x3c36d8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C36DCu; }
        if (ctx->pc != 0x3C36DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C36DCu; }
        if (ctx->pc != 0x3C36DCu) { return; }
    }
    ctx->pc = 0x3C36DCu;
label_3c36dc:
    // 0x3c36dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c36e0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3c36e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3c36e4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3C36E4u;
    SET_GPR_U32(ctx, 31, 0x3C36ECu);
    ctx->pc = 0x3C36E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C36E4u;
            // 0x3c36e8: 0x260602c0  addiu       $a2, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C36ECu; }
        if (ctx->pc != 0x3C36ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C36ECu; }
        if (ctx->pc != 0x3C36ECu) { return; }
    }
    ctx->pc = 0x3C36ECu;
label_3c36ec:
    // 0x3c36ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3c36ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c36f0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3C36F0u;
    SET_GPR_U32(ctx, 31, 0x3C36F8u);
    ctx->pc = 0x3C36F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C36F0u;
            // 0x3c36f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C36F8u; }
        if (ctx->pc != 0x3C36F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C36F8u; }
        if (ctx->pc != 0x3C36F8u) { return; }
    }
    ctx->pc = 0x3C36F8u;
label_3c36f8:
    // 0x3c36f8: 0xc60c0de4  lwc1        $f12, 0xDE4($s0)
    ctx->pc = 0x3c36f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c36fc: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x3c36fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x3c3700: 0xc04cc70  jal         func_1331C0
    ctx->pc = 0x3C3700u;
    SET_GPR_U32(ctx, 31, 0x3C3708u);
    ctx->pc = 0x3C3704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3700u;
            // 0x3c3704: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3708u; }
        if (ctx->pc != 0x3C3708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3708u; }
        if (ctx->pc != 0x3C3708u) { return; }
    }
    ctx->pc = 0x3C3708u;
label_3c3708:
    // 0x3c3708: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x3c3708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x3c370c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x3C370Cu;
    SET_GPR_U32(ctx, 31, 0x3C3714u);
    ctx->pc = 0x3C3710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C370Cu;
            // 0x3c3710: 0x260402e0  addiu       $a0, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3714u; }
        if (ctx->pc != 0x3C3714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3714u; }
        if (ctx->pc != 0x3C3714u) { return; }
    }
    ctx->pc = 0x3C3714u;
label_3c3714:
    // 0x3c3714: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3c3714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3c3718: 0xc075318  jal         func_1D4C60
    ctx->pc = 0x3C3718u;
    SET_GPR_U32(ctx, 31, 0x3C3720u);
    ctx->pc = 0x3C371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3718u;
            // 0x3c371c: 0x260502e0  addiu       $a1, $s0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3720u; }
        if (ctx->pc != 0x3C3720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3720u; }
        if (ctx->pc != 0x3C3720u) { return; }
    }
    ctx->pc = 0x3C3720u;
label_3c3720:
    // 0x3c3720: 0x260307e0  addiu       $v1, $s0, 0x7E0
    ctx->pc = 0x3c3720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
    // 0x3c3724: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3c3724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3c3728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c3728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c372c: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3c372cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3c3730: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3c3730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x3c3734: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3C3734u;
    SET_GPR_U32(ctx, 31, 0x3C373Cu);
    ctx->pc = 0x3C3738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3734u;
            // 0x3c3738: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C373Cu; }
        if (ctx->pc != 0x3C373Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C373Cu; }
        if (ctx->pc != 0x3C373Cu) { return; }
    }
    ctx->pc = 0x3C373Cu;
label_3c373c:
    // 0x3c373c: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3c373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x3c3740: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3c3740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3c3744: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3c3744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c3748: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3c3748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x3c374c: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x3c374cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x3c3750: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3C3750u;
    SET_GPR_U32(ctx, 31, 0x3C3758u);
    ctx->pc = 0x3C3754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3750u;
            // 0x3c3754: 0x26060560  addiu       $a2, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3758u; }
        if (ctx->pc != 0x3C3758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3758u; }
        if (ctx->pc != 0x3C3758u) { return; }
    }
    ctx->pc = 0x3C3758u;
label_3c3758:
    // 0x3c3758: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3c3758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3c375c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3c375cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3c3760: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x3C3760u;
    SET_GPR_U32(ctx, 31, 0x3C3768u);
    ctx->pc = 0x3C3764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3760u;
            // 0x3c3764: 0x26060830  addiu       $a2, $s0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3768u; }
        if (ctx->pc != 0x3C3768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3768u; }
        if (ctx->pc != 0x3C3768u) { return; }
    }
    ctx->pc = 0x3C3768u;
label_3c3768:
    // 0x3c3768: 0xc60c0880  lwc1        $f12, 0x880($s0)
    ctx->pc = 0x3c3768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c376c: 0x260207e0  addiu       $v0, $s0, 0x7E0
    ctx->pc = 0x3c376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
    // 0x3c3770: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c3770u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3c3774: 0x2444009c  addiu       $a0, $v0, 0x9C
    ctx->pc = 0x3c3774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
    // 0x3c3778: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3c3778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3c377c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3c377cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3c3780: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3C3780u;
    SET_GPR_U32(ctx, 31, 0x3C3788u);
    ctx->pc = 0x3C3784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3780u;
            // 0x3c3784: 0x460ca340  add.s       $f13, $f20, $f12 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3788u; }
        if (ctx->pc != 0x3C3788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C3788u; }
        if (ctx->pc != 0x3C3788u) { return; }
    }
    ctx->pc = 0x3C3788u;
label_3c3788:
    // 0x3c3788: 0xc6000880  lwc1        $f0, 0x880($s0)
    ctx->pc = 0x3c3788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c378c: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3c378cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x3c3790: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3c3790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x3c3794: 0x2464009c  addiu       $a0, $v1, 0x9C
    ctx->pc = 0x3c3794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
    // 0x3c3798: 0xc60c0930  lwc1        $f12, 0x930($s0)
    ctx->pc = 0x3c3798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c379c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3c379cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3c37a0: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3C37A0u;
    SET_GPR_U32(ctx, 31, 0x3C37A8u);
    ctx->pc = 0x3C37A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C37A0u;
            // 0x3c37a4: 0x4600a340  add.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C37A8u; }
        if (ctx->pc != 0x3C37A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C37A8u; }
        if (ctx->pc != 0x3C37A8u) { return; }
    }
    ctx->pc = 0x3C37A8u;
label_3c37a8:
    // 0x3c37a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C37A8u;
    {
        const bool branch_taken_0x3c37a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C37ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C37A8u;
            // 0x3c37ac: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c37a8) {
            ctx->pc = 0x3C37C0u;
            goto label_3c37c0;
        }
    }
    ctx->pc = 0x3C37B0u;
label_3c37b0:
    // 0x3c37b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c37b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c37b4: 0xa62000c0  sh          $zero, 0xC0($s1)
    ctx->pc = 0x3c37b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 192), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c37b8: 0xa62300c4  sh          $v1, 0xC4($s1)
    ctx->pc = 0x3c37b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c37bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c37bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c37c0:
    // 0x3c37c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c37c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c37c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c37c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c37c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c37c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c37cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3C37CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C37D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C37CCu;
            // 0x3c37d0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C37D4u;
    // 0x3c37d4: 0x0  nop
    ctx->pc = 0x3c37d4u;
    // NOP
    // 0x3c37d8: 0x0  nop
    ctx->pc = 0x3c37d8u;
    // NOP
    // 0x3c37dc: 0x0  nop
    ctx->pc = 0x3c37dcu;
    // NOP
}
