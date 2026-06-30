#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036D220
// Address: 0x36d220 - 0x36d820
void sub_0036D220_0x36d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D220_0x36d220");
#endif

    switch (ctx->pc) {
        case 0x36d2acu: goto label_36d2ac;
        case 0x36d310u: goto label_36d310;
        case 0x36d324u: goto label_36d324;
        case 0x36d34cu: goto label_36d34c;
        case 0x36d354u: goto label_36d354;
        case 0x36d364u: goto label_36d364;
        case 0x36d3d8u: goto label_36d3d8;
        case 0x36d3e8u: goto label_36d3e8;
        case 0x36d45cu: goto label_36d45c;
        case 0x36d46cu: goto label_36d46c;
        case 0x36d4e8u: goto label_36d4e8;
        case 0x36d540u: goto label_36d540;
        case 0x36d550u: goto label_36d550;
        case 0x36d5c4u: goto label_36d5c4;
        case 0x36d5d4u: goto label_36d5d4;
        case 0x36d648u: goto label_36d648;
        case 0x36d658u: goto label_36d658;
        case 0x36d6d4u: goto label_36d6d4;
        case 0x36d710u: goto label_36d710;
        case 0x36d720u: goto label_36d720;
        case 0x36d740u: goto label_36d740;
        case 0x36d750u: goto label_36d750;
        case 0x36d778u: goto label_36d778;
        case 0x36d788u: goto label_36d788;
        default: break;
    }

    ctx->pc = 0x36d220u;

    // 0x36d220: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x36d220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x36d224: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x36d224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x36d228: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x36d228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x36d22c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x36d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x36d230: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x36d230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x36d234: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x36d234u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d238: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x36d238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x36d23c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x36d23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36d240: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x36d240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x36d244: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x36d244u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d248: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x36d248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x36d24c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x36d24cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d250: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x36d250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x36d254: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x36d254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d258: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x36d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x36d25c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x36d25cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d260: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36d260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36d264: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x36d264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d268: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36d268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36d26c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x36d26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d270: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x36d270u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36d274: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36d274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d278: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x36d278u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x36d27c: 0x8fb70190  lw          $s7, 0x190($sp)
    ctx->pc = 0x36d27cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x36d280: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x36d280u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36d284: 0x34457a74  ori         $a1, $v0, 0x7A74
    ctx->pc = 0x36d284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31348);
    // 0x36d288: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x36d288u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36d28c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x36d28cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36d290: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x36d290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36d294: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x36d294u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x36d298: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x36d298u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x36d29c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x36d29cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x36d2a0: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x36d2a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x36d2a4: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x36D2A4u;
    SET_GPR_U32(ctx, 31, 0x36D2ACu);
    ctx->pc = 0x36D2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D2A4u;
            // 0x36d2a8: 0x46008506  mov.s       $f20, $f16 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[16]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D2ACu; }
        if (ctx->pc != 0x36D2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D2ACu; }
        if (ctx->pc != 0x36D2ACu) { return; }
    }
    ctx->pc = 0x36D2ACu;
label_36d2ac:
    // 0x36d2ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36d2b0: 0x8fa70198  lw          $a3, 0x198($sp)
    ctx->pc = 0x36d2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x36d2b4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x36d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x36d2b8: 0x1e2040  sll         $a0, $fp, 1
    ctx->pc = 0x36d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x36d2bc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x36d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x36d2c0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x36d2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36d2c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x36d2c8: 0x24426b30  addiu       $v0, $v0, 0x6B30
    ctx->pc = 0x36d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27440));
    // 0x36d2cc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x36d2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x36d2d0: 0xe6b80058  swc1        $f24, 0x58($s5)
    ctx->pc = 0x36d2d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 88), bits); }
    // 0x36d2d4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36d2d8: 0xaea7005c  sw          $a3, 0x5C($s5)
    ctx->pc = 0x36d2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 7));
    // 0x36d2dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36d2e0: 0xe6b40060  swc1        $f20, 0x60($s5)
    ctx->pc = 0x36d2e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 96), bits); }
    // 0x36d2e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x36d2e8: 0xe6b70064  swc1        $f23, 0x64($s5)
    ctx->pc = 0x36d2e8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
    // 0x36d2ec: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x36d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36d2f0: 0xe6b50068  swc1        $f21, 0x68($s5)
    ctx->pc = 0x36d2f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 104), bits); }
    // 0x36d2f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36d2f8: 0xe6b6006c  swc1        $f22, 0x6C($s5)
    ctx->pc = 0x36d2f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
    // 0x36d2fc: 0xa6b00070  sh          $s0, 0x70($s5)
    ctx->pc = 0x36d2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 112), (uint16_t)GPR_U32(ctx, 16));
    // 0x36d300: 0xa2a40072  sb          $a0, 0x72($s5)
    ctx->pc = 0x36d300u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x36d304: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x36d304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x36d308: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x36D308u;
    SET_GPR_U32(ctx, 31, 0x36D310u);
    ctx->pc = 0x36D30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D308u;
            // 0x36d30c: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D310u; }
        if (ctx->pc != 0x36D310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D310u; }
        if (ctx->pc != 0x36D310u) { return; }
    }
    ctx->pc = 0x36D310u;
label_36d310:
    // 0x36d310: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x36d310u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
    // 0x36d314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36d314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d318: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36d318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36d31c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x36d31cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d320: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x36d320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_36d324:
    // 0x36d324: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x36d324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d328: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x36d328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x36d32c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36d32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d330: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x36d330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x36d334: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x36d334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x36d338: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x36d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d33c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x36d33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x36d340: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x36d340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d344: 0xc04cca0  jal         func_133280
    ctx->pc = 0x36D344u;
    SET_GPR_U32(ctx, 31, 0x36D34Cu);
    ctx->pc = 0x36D348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D344u;
            // 0x36d348: 0xe7a00188  swc1        $f0, 0x188($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D34Cu; }
        if (ctx->pc != 0x36D34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D34Cu; }
        if (ctx->pc != 0x36D34Cu) { return; }
    }
    ctx->pc = 0x36D34Cu;
label_36d34c:
    // 0x36d34c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D34Cu;
    SET_GPR_U32(ctx, 31, 0x36D354u);
    ctx->pc = 0x36D350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D34Cu;
            // 0x36d350: 0xc6340000  lwc1        $f20, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D354u; }
        if (ctx->pc != 0x36D354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D354u; }
        if (ctx->pc != 0x36D354u) { return; }
    }
    ctx->pc = 0x36D354u;
label_36d354:
    // 0x36d354: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x36d358: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x36d358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x36d35c: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D35Cu;
    SET_GPR_U32(ctx, 31, 0x36D364u);
    ctx->pc = 0x36D360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D35Cu;
            // 0x36d360: 0x7fa20150  sq          $v0, 0x150($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D364u; }
        if (ctx->pc != 0x36D364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D364u; }
        if (ctx->pc != 0x36D364u) { return; }
    }
    ctx->pc = 0x36D364u;
label_36d364:
    // 0x36d364: 0x7ba30150  lq          $v1, 0x150($sp)
    ctx->pc = 0x36d364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x36d368: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x36d368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d36c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36d370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d374: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x36d374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x36d378: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d37c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D37Cu;
    {
        const bool branch_taken_0x36d37c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x36D380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D37Cu;
            // 0x36d380: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d37c) {
            ctx->pc = 0x36D390u;
            goto label_36d390;
        }
    }
    ctx->pc = 0x36D384u;
    // 0x36d384: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36d384u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d388: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36D388u;
    {
        const bool branch_taken_0x36d388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D388u;
            // 0x36d38c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d388) {
            ctx->pc = 0x36D3ACu;
            goto label_36d3ac;
        }
    }
    ctx->pc = 0x36D390u;
label_36d390:
    // 0x36d390: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x36d390u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x36d394: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36d394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x36d398: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36d398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36d39c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d39cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d3a0: 0x0  nop
    ctx->pc = 0x36d3a0u;
    // NOP
    // 0x36d3a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d3a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36d3a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36d3ac:
    // 0x36d3ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36d3acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36d3b0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x36d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x36d3b4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x36d3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x36d3b8: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x36d3b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36d3bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d3c0: 0x0  nop
    ctx->pc = 0x36d3c0u;
    // NOP
    // 0x36d3c4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x36d3c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x36d3c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36d3c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36d3cc: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x36d3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x36d3d0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D3D0u;
    SET_GPR_U32(ctx, 31, 0x36D3D8u);
    ctx->pc = 0x36D3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D3D0u;
            // 0x36d3d4: 0xc6340004  lwc1        $f20, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D3D8u; }
        if (ctx->pc != 0x36D3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D3D8u; }
        if (ctx->pc != 0x36D3D8u) { return; }
    }
    ctx->pc = 0x36D3D8u;
label_36d3d8:
    // 0x36d3d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x36d3dc: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x36d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x36d3e0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D3E0u;
    SET_GPR_U32(ctx, 31, 0x36D3E8u);
    ctx->pc = 0x36D3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D3E0u;
            // 0x36d3e4: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D3E8u; }
        if (ctx->pc != 0x36D3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D3E8u; }
        if (ctx->pc != 0x36D3E8u) { return; }
    }
    ctx->pc = 0x36D3E8u;
label_36d3e8:
    // 0x36d3e8: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x36d3e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x36d3ec: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x36d3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d3f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36d3f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d3f8: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x36d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x36d3fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d3fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d400: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D400u;
    {
        const bool branch_taken_0x36d400 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x36D404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D400u;
            // 0x36d404: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d400) {
            ctx->pc = 0x36D414u;
            goto label_36d414;
        }
    }
    ctx->pc = 0x36D408u;
    // 0x36d408: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36d408u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d40c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36D40Cu;
    {
        const bool branch_taken_0x36d40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D40Cu;
            // 0x36d410: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d40c) {
            ctx->pc = 0x36D430u;
            goto label_36d430;
        }
    }
    ctx->pc = 0x36D414u;
label_36d414:
    // 0x36d414: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x36d414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x36d418: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36d418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x36d41c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36d41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36d420: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d420u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d424: 0x0  nop
    ctx->pc = 0x36d424u;
    // NOP
    // 0x36d428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d42c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36d42cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36d430:
    // 0x36d430: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36d430u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36d434: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x36d434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x36d438: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x36d438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x36d43c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x36d43cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36d440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d444: 0x0  nop
    ctx->pc = 0x36d444u;
    // NOP
    // 0x36d448: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x36d448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x36d44c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36d44cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36d450: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x36d450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x36d454: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D454u;
    SET_GPR_U32(ctx, 31, 0x36D45Cu);
    ctx->pc = 0x36D458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D454u;
            // 0x36d458: 0xc6340008  lwc1        $f20, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D45Cu; }
        if (ctx->pc != 0x36D45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D45Cu; }
        if (ctx->pc != 0x36D45Cu) { return; }
    }
    ctx->pc = 0x36D45Cu;
label_36d45c:
    // 0x36d45c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x36d460: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x36d460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x36d464: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D464u;
    SET_GPR_U32(ctx, 31, 0x36D46Cu);
    ctx->pc = 0x36D468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D464u;
            // 0x36d468: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D46Cu; }
        if (ctx->pc != 0x36D46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D46Cu; }
        if (ctx->pc != 0x36D46Cu) { return; }
    }
    ctx->pc = 0x36D46Cu;
label_36d46c:
    // 0x36d46c: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x36d46cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x36d470: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x36d470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d474: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36d474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36d478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d47c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x36d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x36d480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d484: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D484u;
    {
        const bool branch_taken_0x36d484 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x36D488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D484u;
            // 0x36d488: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d484) {
            ctx->pc = 0x36D498u;
            goto label_36d498;
        }
    }
    ctx->pc = 0x36D48Cu;
    // 0x36d48c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36d48cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d490: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36D490u;
    {
        const bool branch_taken_0x36d490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D490u;
            // 0x36d494: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d490) {
            ctx->pc = 0x36D4B4u;
            goto label_36d4b4;
        }
    }
    ctx->pc = 0x36D498u;
label_36d498:
    // 0x36d498: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x36d498u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x36d49c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36d49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x36d4a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36d4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36d4a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d4a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d4a8: 0x0  nop
    ctx->pc = 0x36d4a8u;
    // NOP
    // 0x36d4ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d4acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d4b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36d4b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36d4b4:
    // 0x36d4b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36d4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36d4b8: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x36d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x36d4bc: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x36d4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x36d4c0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x36d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x36d4c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36d4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d4c8: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x36d4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x36d4cc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x36d4ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36d4d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d4d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d4d4: 0x0  nop
    ctx->pc = 0x36d4d4u;
    // NOP
    // 0x36d4d8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x36d4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x36d4dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36d4dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36d4e0: 0xc04cca0  jal         func_133280
    ctx->pc = 0x36D4E0u;
    SET_GPR_U32(ctx, 31, 0x36D4E8u);
    ctx->pc = 0x36D4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D4E0u;
            // 0x36d4e4: 0xe7a00188  swc1        $f0, 0x188($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D4E8u; }
        if (ctx->pc != 0x36D4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D4E8u; }
        if (ctx->pc != 0x36D4E8u) { return; }
    }
    ctx->pc = 0x36D4E8u;
label_36d4e8:
    // 0x36d4e8: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x36d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36d4ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36d4f0: 0xc7a10170  lwc1        $f1, 0x170($sp)
    ctx->pc = 0x36d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d4f4: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x36d4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d4f8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x36d4f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x36d4fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d500: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x36d500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x36d504: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x36d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36d508: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x36d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d50c: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x36d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d510: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x36d510u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x36d514: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d518: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x36d518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x36d51c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x36d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36d520: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x36d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d524: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x36d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d528: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x36d528u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x36d52c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d530: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x36d530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x36d534: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x36d534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x36d538: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D538u;
    SET_GPR_U32(ctx, 31, 0x36D540u);
    ctx->pc = 0x36D53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D538u;
            // 0x36d53c: 0xc6f40000  lwc1        $f20, 0x0($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D540u; }
        if (ctx->pc != 0x36D540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D540u; }
        if (ctx->pc != 0x36D540u) { return; }
    }
    ctx->pc = 0x36D540u;
label_36d540:
    // 0x36d540: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x36d544: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x36d544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x36d548: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D548u;
    SET_GPR_U32(ctx, 31, 0x36D550u);
    ctx->pc = 0x36D54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D548u;
            // 0x36d54c: 0x7fa20120  sq          $v0, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D550u; }
        if (ctx->pc != 0x36D550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D550u; }
        if (ctx->pc != 0x36D550u) { return; }
    }
    ctx->pc = 0x36D550u;
label_36d550:
    // 0x36d550: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x36d550u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x36d554: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x36d554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d558: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36d558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36d55c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d560: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x36d560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x36d564: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d568: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D568u;
    {
        const bool branch_taken_0x36d568 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x36D56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D568u;
            // 0x36d56c: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d568) {
            ctx->pc = 0x36D57Cu;
            goto label_36d57c;
        }
    }
    ctx->pc = 0x36D570u;
    // 0x36d570: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36d570u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36D574u;
    {
        const bool branch_taken_0x36d574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D574u;
            // 0x36d578: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d574) {
            ctx->pc = 0x36D598u;
            goto label_36d598;
        }
    }
    ctx->pc = 0x36D57Cu;
label_36d57c:
    // 0x36d57c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x36d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x36d580: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36d580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x36d584: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36d584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36d588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d58c: 0x0  nop
    ctx->pc = 0x36d58cu;
    // NOP
    // 0x36d590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d594: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36d594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36d598:
    // 0x36d598: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36d598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36d59c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x36d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x36d5a0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x36d5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x36d5a4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x36d5a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36d5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d5ac: 0x0  nop
    ctx->pc = 0x36d5acu;
    // NOP
    // 0x36d5b0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x36d5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x36d5b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36d5b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36d5b8: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x36d5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x36d5bc: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D5BCu;
    SET_GPR_U32(ctx, 31, 0x36D5C4u);
    ctx->pc = 0x36D5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D5BCu;
            // 0x36d5c0: 0xc6f40004  lwc1        $f20, 0x4($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D5C4u; }
        if (ctx->pc != 0x36D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D5C4u; }
        if (ctx->pc != 0x36D5C4u) { return; }
    }
    ctx->pc = 0x36D5C4u;
label_36d5c4:
    // 0x36d5c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x36d5c8: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x36d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x36d5cc: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D5CCu;
    SET_GPR_U32(ctx, 31, 0x36D5D4u);
    ctx->pc = 0x36D5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D5CCu;
            // 0x36d5d0: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D5D4u; }
        if (ctx->pc != 0x36D5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D5D4u; }
        if (ctx->pc != 0x36D5D4u) { return; }
    }
    ctx->pc = 0x36D5D4u;
label_36d5d4:
    // 0x36d5d4: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x36d5d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x36d5d8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x36d5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d5dc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36d5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d5e4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x36d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x36d5e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d5ec: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D5ECu;
    {
        const bool branch_taken_0x36d5ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x36D5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D5ECu;
            // 0x36d5f0: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5ec) {
            ctx->pc = 0x36D600u;
            goto label_36d600;
        }
    }
    ctx->pc = 0x36D5F4u;
    // 0x36d5f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36d5f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d5f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36D5F8u;
    {
        const bool branch_taken_0x36d5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D5F8u;
            // 0x36d5fc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5f8) {
            ctx->pc = 0x36D61Cu;
            goto label_36d61c;
        }
    }
    ctx->pc = 0x36D600u;
label_36d600:
    // 0x36d600: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x36d600u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x36d604: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36d604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x36d608: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36d608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36d60c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d60cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d610: 0x0  nop
    ctx->pc = 0x36d610u;
    // NOP
    // 0x36d614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d618: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36d618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36d61c:
    // 0x36d61c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36d61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36d620: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x36d620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x36d624: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x36d624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x36d628: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x36d628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36d62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d630: 0x0  nop
    ctx->pc = 0x36d630u;
    // NOP
    // 0x36d634: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x36d634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x36d638: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36d638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36d63c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x36d63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x36d640: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D640u;
    SET_GPR_U32(ctx, 31, 0x36D648u);
    ctx->pc = 0x36D644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D640u;
            // 0x36d644: 0xc6f40008  lwc1        $f20, 0x8($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D648u; }
        if (ctx->pc != 0x36D648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D648u; }
        if (ctx->pc != 0x36D648u) { return; }
    }
    ctx->pc = 0x36D648u;
label_36d648:
    // 0x36d648: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x36d64c: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x36d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x36d650: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D650u;
    SET_GPR_U32(ctx, 31, 0x36D658u);
    ctx->pc = 0x36D654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D650u;
            // 0x36d654: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D658u; }
        if (ctx->pc != 0x36D658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D658u; }
        if (ctx->pc != 0x36D658u) { return; }
    }
    ctx->pc = 0x36D658u;
label_36d658:
    // 0x36d658: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x36d658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x36d65c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x36d65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d660: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36d660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x36d664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d668: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x36d668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x36d66c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d670: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36D670u;
    {
        const bool branch_taken_0x36d670 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x36D674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D670u;
            // 0x36d674: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d670) {
            ctx->pc = 0x36D684u;
            goto label_36d684;
        }
    }
    ctx->pc = 0x36D678u;
    // 0x36d678: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36d678u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d67c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36D67Cu;
    {
        const bool branch_taken_0x36d67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D67Cu;
            // 0x36d680: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d67c) {
            ctx->pc = 0x36D6A0u;
            goto label_36d6a0;
        }
    }
    ctx->pc = 0x36D684u;
label_36d684:
    // 0x36d684: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x36d684u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x36d688: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x36d688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x36d68c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36d68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36d690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36d690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d694: 0x0  nop
    ctx->pc = 0x36d694u;
    // NOP
    // 0x36d698: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36d698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36d69c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x36d69cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36d6a0:
    // 0x36d6a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x36d6a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36d6a4: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x36d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x36d6a8: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x36d6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x36d6ac: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x36d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x36d6b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36d6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d6b4: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x36d6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x36d6b8: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x36d6b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x36d6bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d6c0: 0x0  nop
    ctx->pc = 0x36d6c0u;
    // NOP
    // 0x36d6c4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x36d6c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x36d6c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36d6c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36d6cc: 0xc04cca0  jal         func_133280
    ctx->pc = 0x36D6CCu;
    SET_GPR_U32(ctx, 31, 0x36D6D4u);
    ctx->pc = 0x36D6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D6CCu;
            // 0x36d6d0: 0xe7a00188  swc1        $f0, 0x188($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D6D4u; }
        if (ctx->pc != 0x36D6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D6D4u; }
        if (ctx->pc != 0x36D6D4u) { return; }
    }
    ctx->pc = 0x36D6D4u;
label_36d6d4:
    // 0x36d6d4: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x36d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d6d8: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x36d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d6dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36d6dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d6e0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x36d6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x36d6e4: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x36d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d6e8: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x36d6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d6ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36d6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d6f0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36d6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36d6f4: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x36d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d6f8: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x36d6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d6fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36d6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d700: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x36d700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x36d704: 0x92a20072  lbu         $v0, 0x72($s5)
    ctx->pc = 0x36d704u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 114)));
    // 0x36d708: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D708u;
    SET_GPR_U32(ctx, 31, 0x36D710u);
    ctx->pc = 0x36D70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D708u;
            // 0x36d70c: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D710u; }
        if (ctx->pc != 0x36D710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D710u; }
        if (ctx->pc != 0x36D710u) { return; }
    }
    ctx->pc = 0x36D710u;
label_36d710:
    // 0x36d710: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x36d714: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x36d714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x36d718: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D718u;
    SET_GPR_U32(ctx, 31, 0x36D720u);
    ctx->pc = 0x36D71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D718u;
            // 0x36d71c: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D720u; }
        if (ctx->pc != 0x36D720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D720u; }
        if (ctx->pc != 0x36D720u) { return; }
    }
    ctx->pc = 0x36D720u;
label_36d720:
    // 0x36d720: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x36d720u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x36d724: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x36d724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d728: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x36d728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x36d72c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x36d72cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x36d730: 0x1010  mfhi        $v0
    ctx->pc = 0x36d730u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x36d734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36d738: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D738u;
    SET_GPR_U32(ctx, 31, 0x36D740u);
    ctx->pc = 0x36D73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D738u;
            // 0x36d73c: 0xa20200ae  sb          $v0, 0xAE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 174), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D740u; }
        if (ctx->pc != 0x36D740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D740u; }
        if (ctx->pc != 0x36D740u) { return; }
    }
    ctx->pc = 0x36D740u;
label_36d740:
    // 0x36d740: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x36d744: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x36d744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x36d748: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D748u;
    SET_GPR_U32(ctx, 31, 0x36D750u);
    ctx->pc = 0x36D74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D748u;
            // 0x36d74c: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D750u; }
        if (ctx->pc != 0x36D750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D750u; }
        if (ctx->pc != 0x36D750u) { return; }
    }
    ctx->pc = 0x36D750u;
label_36d750:
    // 0x36d750: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x36d750u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x36d754: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x36d754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d758: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x36d758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36d75c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x36d75cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x36d760: 0x1810  mfhi        $v1
    ctx->pc = 0x36d760u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x36d764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d768: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x36d768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x36d76c: 0xa20300af  sb          $v1, 0xAF($s0)
    ctx->pc = 0x36d76cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 175), (uint8_t)GPR_U32(ctx, 3));
    // 0x36d770: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D770u;
    SET_GPR_U32(ctx, 31, 0x36D778u);
    ctx->pc = 0x36D774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D770u;
            // 0x36d774: 0xa20200ac  sb          $v0, 0xAC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D778u; }
        if (ctx->pc != 0x36D778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D778u; }
        if (ctx->pc != 0x36D778u) { return; }
    }
    ctx->pc = 0x36D778u;
label_36d778:
    // 0x36d778: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x36d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x36d77c: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x36d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
    // 0x36d780: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x36D780u;
    SET_GPR_U32(ctx, 31, 0x36D788u);
    ctx->pc = 0x36D784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D780u;
            // 0x36d784: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D788u; }
        if (ctx->pc != 0x36D788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36D788u; }
        if (ctx->pc != 0x36D788u) { return; }
    }
    ctx->pc = 0x36D788u;
label_36d788:
    // 0x36d788: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x36d788u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36d78c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x36d78cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x36d790: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x36d790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x36d794: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x36d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36d798: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x36d798u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x36d79c: 0x1010  mfhi        $v0
    ctx->pc = 0x36d79cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x36d7a0: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x36d7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x36d7a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x36d7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x36d7a8: 0xa20200ad  sb          $v0, 0xAD($s0)
    ctx->pc = 0x36d7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 173), (uint8_t)GPR_U32(ctx, 2));
    // 0x36d7ac: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x36d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x36d7b0: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x36d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x36d7b4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x36d7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x36d7b8: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x36d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x36d7bc: 0x96a20070  lhu         $v0, 0x70($s5)
    ctx->pc = 0x36d7bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x36d7c0: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x36d7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36d7c4: 0x1440fed7  bnez        $v0, . + 4 + (-0x129 << 2)
    ctx->pc = 0x36D7C4u;
    {
        const bool branch_taken_0x36d7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D7C4u;
            // 0x36d7c8: 0x261000b0  addiu       $s0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d7c4) {
            ctx->pc = 0x36D324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36d324;
        }
    }
    ctx->pc = 0x36D7CCu;
    // 0x36d7cc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x36d7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d7d0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x36d7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36d7d4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x36d7d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36d7d8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x36d7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x36d7dc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x36d7dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36d7e0: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x36d7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36d7e4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x36d7e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36d7e8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x36d7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36d7ec: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x36d7ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36d7f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x36d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36d7f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x36d7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36d7f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x36d7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36d7fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x36d7fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36d800: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36d800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36d804: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x36d804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d808: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36d808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d80c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D80Cu;
            // 0x36d810: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36D814u;
    // 0x36d814: 0x0  nop
    ctx->pc = 0x36d814u;
    // NOP
    // 0x36d818: 0x0  nop
    ctx->pc = 0x36d818u;
    // NOP
    // 0x36d81c: 0x0  nop
    ctx->pc = 0x36d81cu;
    // NOP
}
