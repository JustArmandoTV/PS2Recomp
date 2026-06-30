#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443610
// Address: 0x443610 - 0x4437b0
void sub_00443610_0x443610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443610_0x443610");
#endif

    switch (ctx->pc) {
        case 0x443634u: goto label_443634;
        case 0x443640u: goto label_443640;
        case 0x44364cu: goto label_44364c;
        case 0x443660u: goto label_443660;
        case 0x443684u: goto label_443684;
        case 0x443730u: goto label_443730;
        default: break;
    }

    ctx->pc = 0x443610u;

    // 0x443610: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x443610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x443614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x443614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x443618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x443618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44361c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x443620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x443620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443624: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x443624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x443628: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x443628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x44362c: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x44362Cu;
    SET_GPR_U32(ctx, 31, 0x443634u);
    ctx->pc = 0x443630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44362Cu;
            // 0x443630: 0x261102a4  addiu       $s1, $s0, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443634u; }
        if (ctx->pc != 0x443634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443634u; }
        if (ctx->pc != 0x443634u) { return; }
    }
    ctx->pc = 0x443634u;
label_443634:
    // 0x443634: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x443634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x443638: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x443638u;
    SET_GPR_U32(ctx, 31, 0x443640u);
    ctx->pc = 0x44363Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443638u;
            // 0x44363c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443640u; }
        if (ctx->pc != 0x443640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443640u; }
        if (ctx->pc != 0x443640u) { return; }
    }
    ctx->pc = 0x443640u;
label_443640:
    // 0x443640: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x443640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x443644: 0xc04ccf4  jal         func_1333D0
    ctx->pc = 0x443644u;
    SET_GPR_U32(ctx, 31, 0x44364Cu);
    ctx->pc = 0x443648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443644u;
            // 0x443648: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44364Cu; }
        if (ctx->pc != 0x44364Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44364Cu; }
        if (ctx->pc != 0x44364Cu) { return; }
    }
    ctx->pc = 0x44364Cu;
label_44364c:
    // 0x44364c: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x44364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x443650: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x443650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x443654: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x443654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x443658: 0xc04cca0  jal         func_133280
    ctx->pc = 0x443658u;
    SET_GPR_U32(ctx, 31, 0x443660u);
    ctx->pc = 0x44365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443658u;
            // 0x44365c: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443660u; }
        if (ctx->pc != 0x443660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443660u; }
        if (ctx->pc != 0x443660u) { return; }
    }
    ctx->pc = 0x443660u;
label_443660:
    // 0x443660: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x443660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x443664: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x443664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x443668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x443668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x44366c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x44366cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x443670: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x443670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443674: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x443674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x443678: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x443678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x44367c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x44367Cu;
    SET_GPR_U32(ctx, 31, 0x443684u);
    ctx->pc = 0x443680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44367Cu;
            // 0x443680: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443684u; }
        if (ctx->pc != 0x443684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443684u; }
        if (ctx->pc != 0x443684u) { return; }
    }
    ctx->pc = 0x443684u;
label_443684:
    // 0x443684: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x443684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x443688: 0x261002a8  addiu       $s0, $s0, 0x2A8
    ctx->pc = 0x443688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    // 0x44368c: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x44368cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x443690: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x443690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x443694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x443694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x443698: 0xc4660018  lwc1        $f6, 0x18($v1)
    ctx->pc = 0x443698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x44369c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x44369cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4436a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4436A0u;
    {
        const bool branch_taken_0x4436a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4436A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4436A0u;
            // 0x4436a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4436a0) {
            ctx->pc = 0x4436ACu;
            goto label_4436ac;
        }
    }
    ctx->pc = 0x4436A8u;
    // 0x4436a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4436a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4436ac:
    // 0x4436ac: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4436ACu;
    {
        const bool branch_taken_0x4436ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4436ac) {
            ctx->pc = 0x4436B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4436ACu;
            // 0x4436b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4436C0u;
            goto label_4436c0;
        }
    }
    ctx->pc = 0x4436B4u;
    // 0x4436b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4436b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4436b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4436B8u;
    {
        const bool branch_taken_0x4436b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4436BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4436B8u;
            // 0x4436bc: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4436b8) {
            ctx->pc = 0x4436D8u;
            goto label_4436d8;
        }
    }
    ctx->pc = 0x4436C0u;
label_4436c0:
    // 0x4436c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4436c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4436c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4436c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4436c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4436c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4436cc: 0x0  nop
    ctx->pc = 0x4436ccu;
    // NOP
    // 0x4436d0: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x4436d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x4436d4: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x4436d4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_4436d8:
    // 0x4436d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4436d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4436dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4436dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4436e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4436e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4436e4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x4436e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4436e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4436e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4436ec: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x4436ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x4436f0: 0x3c023fd9  lui         $v0, 0x3FD9
    ctx->pc = 0x4436f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16345 << 16));
    // 0x4436f4: 0x4605185d  msub.s      $f1, $f3, $f5
    ctx->pc = 0x4436f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x4436f8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4436f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x4436fc: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x4436fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x443700: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x443700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x443704: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x443704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x443708: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x443708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x44370c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x44370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x443710: 0x46012018  adda.s      $f4, $f1
    ctx->pc = 0x443710u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x443714: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x443714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x443718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x443718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x44371c: 0x0  nop
    ctx->pc = 0x44371cu;
    // NOP
    // 0x443720: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x443720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x443724: 0x46060302  mul.s       $f12, $f0, $f6
    ctx->pc = 0x443724u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x443728: 0xc0477a8  jal         func_11DEA0
    ctx->pc = 0x443728u;
    SET_GPR_U32(ctx, 31, 0x443730u);
    ctx->pc = 0x44372Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x443728u;
            // 0x44372c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443730u; }
        if (ctx->pc != 0x443730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x443730u; }
        if (ctx->pc != 0x443730u) { return; }
    }
    ctx->pc = 0x443730u;
label_443730:
    // 0x443730: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x443730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x443734: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x443734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x443738: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x443738u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x44373c: 0x0  nop
    ctx->pc = 0x44373cu;
    // NOP
    // 0x443740: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x443740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x443744: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x443744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x443748: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x443748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x44374c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x44374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x443750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x443750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x443754: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x443754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x443758: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x443758u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x44375c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x44375cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x443760: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x443760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x443764: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x443764u;
    {
        const bool branch_taken_0x443764 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x443768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443764u;
            // 0x443768: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x443764) {
            ctx->pc = 0x443774u;
            goto label_443774;
        }
    }
    ctx->pc = 0x44376Cu;
    // 0x44376c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x44376Cu;
    {
        const bool branch_taken_0x44376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44376Cu;
            // 0x443770: 0xe6030000  swc1        $f3, 0x0($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x44376c) {
            ctx->pc = 0x443790u;
            goto label_443790;
        }
    }
    ctx->pc = 0x443774u;
label_443774:
    // 0x443774: 0x3c03c1f0  lui         $v1, 0xC1F0
    ctx->pc = 0x443774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49648 << 16));
    // 0x443778: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x443778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x44377c: 0x0  nop
    ctx->pc = 0x44377cu;
    // NOP
    // 0x443780: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x443780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x443784: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x443784u;
    {
        const bool branch_taken_0x443784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x443784) {
            ctx->pc = 0x443788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x443784u;
            // 0x443788: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x443794u;
            goto label_443794;
        }
    }
    ctx->pc = 0x44378Cu;
    // 0x44378c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x44378cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_443790:
    // 0x443790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x443790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_443794:
    // 0x443794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x443794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x443798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44379c: 0x3e00008  jr          $ra
    ctx->pc = 0x44379Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4437A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44379Cu;
            // 0x4437a0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4437A4u;
    // 0x4437a4: 0x0  nop
    ctx->pc = 0x4437a4u;
    // NOP
    // 0x4437a8: 0x0  nop
    ctx->pc = 0x4437a8u;
    // NOP
    // 0x4437ac: 0x0  nop
    ctx->pc = 0x4437acu;
    // NOP
}
