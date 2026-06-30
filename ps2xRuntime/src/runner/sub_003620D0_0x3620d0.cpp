#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003620D0
// Address: 0x3620d0 - 0x362290
void sub_003620D0_0x3620d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003620D0_0x3620d0");
#endif

    switch (ctx->pc) {
        case 0x36213cu: goto label_36213c;
        case 0x362178u: goto label_362178;
        case 0x362188u: goto label_362188;
        case 0x3621c0u: goto label_3621c0;
        case 0x3621f4u: goto label_3621f4;
        case 0x362204u: goto label_362204;
        case 0x362210u: goto label_362210;
        case 0x36221cu: goto label_36221c;
        case 0x362248u: goto label_362248;
        default: break;
    }

    ctx->pc = 0x3620d0u;

    // 0x3620d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3620d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3620d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3620d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3620d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3620d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3620dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3620dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3620e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3620e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3620e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3620e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3620e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3620e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3620ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3620ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3620f0: 0x267100c0  addiu       $s1, $s3, 0xC0
    ctx->pc = 0x3620f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
    // 0x3620f4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3620f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3620f8: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x3620f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3620fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3620fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x362100: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x362100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x362104: 0x94920112  lhu         $s2, 0x112($a0)
    ctx->pc = 0x362104u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
    // 0x362108: 0x94840110  lhu         $a0, 0x110($a0)
    ctx->pc = 0x362108u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x36210c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36210Cu;
    {
        const bool branch_taken_0x36210c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x362110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36210Cu;
            // 0x362110: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36210c) {
            ctx->pc = 0x362120u;
            goto label_362120;
        }
    }
    ctx->pc = 0x362114u;
    // 0x362114: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x362114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362118: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x362118u;
    {
        const bool branch_taken_0x362118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36211Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362118u;
            // 0x36211c: 0xae630130  sw          $v1, 0x130($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362118) {
            ctx->pc = 0x362264u;
            goto label_362264;
        }
    }
    ctx->pc = 0x362120u;
label_362120:
    // 0x362120: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x362120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x362124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x362124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362128: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x362128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x36212c: 0xc6600120  lwc1        $f0, 0x120($s3)
    ctx->pc = 0x36212cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362130: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x362130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362134: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x362134u;
    SET_GPR_U32(ctx, 31, 0x36213Cu);
    ctx->pc = 0x362138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362134u;
            // 0x362138: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36213Cu; }
        if (ctx->pc != 0x36213Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36213Cu; }
        if (ctx->pc != 0x36213Cu) { return; }
    }
    ctx->pc = 0x36213Cu;
label_36213c:
    // 0x36213c: 0x96220052  lhu         $v0, 0x52($s1)
    ctx->pc = 0x36213cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x362140: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x362140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x362144: 0x5062003e  beql        $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x362144u;
    {
        const bool branch_taken_0x362144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x362144) {
            ctx->pc = 0x362148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362144u;
            // 0x362148: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362240u;
            goto label_362240;
        }
    }
    ctx->pc = 0x36214Cu;
    // 0x36214c: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x36214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362150: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x362150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x362154: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x362154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362158: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x362158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36215c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x36215cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x362160: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x362160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x362164: 0x46000344  c1          0x344
    ctx->pc = 0x362164u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
    // 0x362168: 0x0  nop
    ctx->pc = 0x362168u;
    // NOP
    // 0x36216c: 0x0  nop
    ctx->pc = 0x36216cu;
    // NOP
    // 0x362170: 0xc04780a  jal         func_11E028
    ctx->pc = 0x362170u;
    SET_GPR_U32(ctx, 31, 0x362178u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362178u; }
        if (ctx->pc != 0x362178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362178u; }
        if (ctx->pc != 0x362178u) { return; }
    }
    ctx->pc = 0x362178u;
label_362178:
    // 0x362178: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x362178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36217c: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x36217cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x362180: 0xc04780a  jal         func_11E028
    ctx->pc = 0x362180u;
    SET_GPR_U32(ctx, 31, 0x362188u);
    ctx->pc = 0x362184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362180u;
            // 0x362184: 0x46000587  neg.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362188u; }
        if (ctx->pc != 0x362188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362188u; }
        if (ctx->pc != 0x362188u) { return; }
    }
    ctx->pc = 0x362188u;
label_362188:
    // 0x362188: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x362188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x36218c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x36218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x362190: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x362190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x362194: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x362194u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x362198: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x362198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36219c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36219cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3621a0: 0x0  nop
    ctx->pc = 0x3621a0u;
    // NOP
    // 0x3621a4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3621a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x3621a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3621a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3621ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3621acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3621b0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3621b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3621b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3621b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3621b8: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x3621B8u;
    SET_GPR_U32(ctx, 31, 0x3621C0u);
    ctx->pc = 0x3621BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3621B8u;
            // 0x3621bc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3621C0u; }
        if (ctx->pc != 0x3621C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3621C0u; }
        if (ctx->pc != 0x3621C0u) { return; }
    }
    ctx->pc = 0x3621C0u;
label_3621c0:
    // 0x3621c0: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x3621c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
    // 0x3621c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3621c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3621c8: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x3621c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
    // 0x3621cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3621ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3621d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3621d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3621d4: 0x0  nop
    ctx->pc = 0x3621d4u;
    // NOP
    // 0x3621d8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3621d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3621dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3621dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3621e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3621e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3621e4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3621e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3621e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3621e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3621ec: 0xc04c970  jal         func_1325C0
    ctx->pc = 0x3621ECu;
    SET_GPR_U32(ctx, 31, 0x3621F4u);
    ctx->pc = 0x3621F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3621ECu;
            // 0x3621f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3621F4u; }
        if (ctx->pc != 0x3621F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3621F4u; }
        if (ctx->pc != 0x3621F4u) { return; }
    }
    ctx->pc = 0x3621F4u;
label_3621f4:
    // 0x3621f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3621f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3621f8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3621f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3621fc: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x3621FCu;
    SET_GPR_U32(ctx, 31, 0x362204u);
    ctx->pc = 0x362200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3621FCu;
            // 0x362200: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362204u; }
        if (ctx->pc != 0x362204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362204u; }
        if (ctx->pc != 0x362204u) { return; }
    }
    ctx->pc = 0x362204u;
label_362204:
    // 0x362204: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x362204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x362208: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x362208u;
    SET_GPR_U32(ctx, 31, 0x362210u);
    ctx->pc = 0x36220Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362208u;
            // 0x36220c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362210u; }
        if (ctx->pc != 0x362210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362210u; }
        if (ctx->pc != 0x362210u) { return; }
    }
    ctx->pc = 0x362210u;
label_362210:
    // 0x362210: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x362210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x362214: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x362214u;
    SET_GPR_U32(ctx, 31, 0x36221Cu);
    ctx->pc = 0x362218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362214u;
            // 0x362218: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36221Cu; }
        if (ctx->pc != 0x36221Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36221Cu; }
        if (ctx->pc != 0x36221Cu) { return; }
    }
    ctx->pc = 0x36221Cu;
label_36221c:
    // 0x36221c: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x36221cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x362220: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x362220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x362224: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x362224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x362228: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x362228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36222c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36222cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362230: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x362230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x362234: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x362234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x362238: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x362238u;
    {
        const bool branch_taken_0x362238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362238u;
            // 0x36223c: 0xa2630164  sb          $v1, 0x164($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 356), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362238) {
            ctx->pc = 0x362248u;
            goto label_362248;
        }
    }
    ctx->pc = 0x362240u;
label_362240:
    // 0x362240: 0xc0c6278  jal         func_3189E0
    ctx->pc = 0x362240u;
    SET_GPR_U32(ctx, 31, 0x362248u);
    ctx->pc = 0x3189E0u;
    if (runtime->hasFunction(0x3189E0u)) {
        auto targetFn = runtime->lookupFunction(0x3189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362248u; }
        if (ctx->pc != 0x362248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003189E0_0x3189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362248u; }
        if (ctx->pc != 0x362248u) { return; }
    }
    ctx->pc = 0x362248u;
label_362248:
    // 0x362248: 0xc661012c  lwc1        $f1, 0x12C($s3)
    ctx->pc = 0x362248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36224c: 0xc6600124  lwc1        $f0, 0x124($s3)
    ctx->pc = 0x36224cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x362250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x362254: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x362254u;
    {
        const bool branch_taken_0x362254 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x362254) {
            ctx->pc = 0x362258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362254u;
            // 0x362258: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362268u;
            goto label_362268;
        }
    }
    ctx->pc = 0x36225Cu;
    // 0x36225c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362260: 0xae630130  sw          $v1, 0x130($s3)
    ctx->pc = 0x362260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 3));
label_362264:
    // 0x362264: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x362264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_362268:
    // 0x362268: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x362268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36226c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x36226cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362270: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x362270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x362274: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x362274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362278: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x362278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36227c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36227cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x362280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362284: 0x3e00008  jr          $ra
    ctx->pc = 0x362284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362284u;
            // 0x362288: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36228Cu;
    // 0x36228c: 0x0  nop
    ctx->pc = 0x36228cu;
    // NOP
}
