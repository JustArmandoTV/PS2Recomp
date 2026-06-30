#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003502B0
// Address: 0x3502b0 - 0x350410
void sub_003502B0_0x3502b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003502B0_0x3502b0");
#endif

    switch (ctx->pc) {
        case 0x3502f8u: goto label_3502f8;
        case 0x350384u: goto label_350384;
        case 0x350390u: goto label_350390;
        case 0x3503a0u: goto label_3503a0;
        case 0x3503c4u: goto label_3503c4;
        case 0x3503d0u: goto label_3503d0;
        default: break;
    }

    ctx->pc = 0x3502b0u;

    // 0x3502b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3502b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3502b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3502b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3502b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3502b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3502bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3502bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3502c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3502c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3502c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3502c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3502c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3502cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3502ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3502d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3502d4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3502d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3502d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3502dc: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3502dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3502e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3502e4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3502e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502e8: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3502e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x3502ec: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3502ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3502f0: 0xc0bd22c  jal         func_2F48B0
    ctx->pc = 0x3502F0u;
    SET_GPR_U32(ctx, 31, 0x3502F8u);
    ctx->pc = 0x3502F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3502F0u;
            // 0x3502f4: 0x24440074  addiu       $a0, $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F48B0u;
    if (runtime->hasFunction(0x2F48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3502F8u; }
        if (ctx->pc != 0x3502F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F48B0_0x2f48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3502F8u; }
        if (ctx->pc != 0x3502F8u) { return; }
    }
    ctx->pc = 0x3502F8u;
label_3502f8:
    // 0x3502f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3502f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3502fc: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3502FCu;
    {
        const bool branch_taken_0x3502fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3502fc) {
            ctx->pc = 0x350324u;
            goto label_350324;
        }
    }
    ctx->pc = 0x350304u;
    // 0x350304: 0x52000037  beql        $s0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x350304u;
    {
        const bool branch_taken_0x350304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x350304) {
            ctx->pc = 0x350308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x350304u;
            // 0x350308: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3503E4u;
            goto label_3503e4;
        }
    }
    ctx->pc = 0x35030Cu;
    // 0x35030c: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x35030cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x350310: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x350310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x350314: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x350314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x350318: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x350318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35031c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x35031Cu;
    {
        const bool branch_taken_0x35031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35031c) {
            ctx->pc = 0x3503E4u;
            goto label_3503e4;
        }
    }
    ctx->pc = 0x350324u;
label_350324:
    // 0x350324: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x350324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x350328: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x350328u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x35032c: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x35032cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
    // 0x350330: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x350330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x350334: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x350334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350338: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x350338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x35033c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x35033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x350340: 0xc44216b0  lwc1        $f2, 0x16B0($v0)
    ctx->pc = 0x350340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x350344: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x350344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x350348: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x350348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x35034c: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x35034cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350350: 0xc44116b8  lwc1        $f1, 0x16B8($v0)
    ctx->pc = 0x350350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350354: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x350354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350358: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x350358u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x35035c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x35035cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x350360: 0xc44016bc  lwc1        $f0, 0x16BC($v0)
    ctx->pc = 0x350360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350364: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x350364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x350368: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x350368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x35036c: 0x8c4216b4  lw          $v0, 0x16B4($v0)
    ctx->pc = 0x35036cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5812)));
    // 0x350370: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x350370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x350374: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x350374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x350378: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x350378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35037c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x35037Cu;
    SET_GPR_U32(ctx, 31, 0x350384u);
    ctx->pc = 0x350380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35037Cu;
            // 0x350380: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350384u; }
        if (ctx->pc != 0x350384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350384u; }
        if (ctx->pc != 0x350384u) { return; }
    }
    ctx->pc = 0x350384u;
label_350384:
    // 0x350384: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x350384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x350388: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x350388u;
    SET_GPR_U32(ctx, 31, 0x350390u);
    ctx->pc = 0x35038Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350388u;
            // 0x35038c: 0x26650200  addiu       $a1, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350390u; }
        if (ctx->pc != 0x350390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350390u; }
        if (ctx->pc != 0x350390u) { return; }
    }
    ctx->pc = 0x350390u;
label_350390:
    // 0x350390: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350390u;
    {
        const bool branch_taken_0x350390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x350394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350390u;
            // 0x350394: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x350390) {
            ctx->pc = 0x3503A4u;
            goto label_3503a4;
        }
    }
    ctx->pc = 0x350398u;
    // 0x350398: 0xc04c710  jal         func_131C40
    ctx->pc = 0x350398u;
    SET_GPR_U32(ctx, 31, 0x3503A0u);
    ctx->pc = 0x35039Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350398u;
            // 0x35039c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503A0u; }
        if (ctx->pc != 0x3503A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503A0u; }
        if (ctx->pc != 0x3503A0u) { return; }
    }
    ctx->pc = 0x3503A0u;
label_3503a0:
    // 0x3503a0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3503a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_3503a4:
    // 0x3503a4: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x3503a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3503a8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3503A8u;
    {
        const bool branch_taken_0x3503a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3503a8) {
            ctx->pc = 0x3503ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3503A8u;
            // 0x3503ac: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3503B8u;
            goto label_3503b8;
        }
    }
    ctx->pc = 0x3503B0u;
    // 0x3503b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3503B0u;
    {
        const bool branch_taken_0x3503b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3503B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3503B0u;
            // 0x3503b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3503b0) {
            ctx->pc = 0x3503E4u;
            goto label_3503e4;
        }
    }
    ctx->pc = 0x3503B8u;
label_3503b8:
    // 0x3503b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3503b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3503bc: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3503BCu;
    SET_GPR_U32(ctx, 31, 0x3503C4u);
    ctx->pc = 0x3503C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3503BCu;
            // 0x3503c0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503C4u; }
        if (ctx->pc != 0x3503C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503C4u; }
        if (ctx->pc != 0x3503C4u) { return; }
    }
    ctx->pc = 0x3503C4u;
label_3503c4:
    // 0x3503c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3503c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3503c8: 0xc04c650  jal         func_131940
    ctx->pc = 0x3503C8u;
    SET_GPR_U32(ctx, 31, 0x3503D0u);
    ctx->pc = 0x3503CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3503C8u;
            // 0x3503cc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503D0u; }
        if (ctx->pc != 0x3503D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3503D0u; }
        if (ctx->pc != 0x3503D0u) { return; }
    }
    ctx->pc = 0x3503D0u;
label_3503d0:
    // 0x3503d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3503d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3503d4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x3503d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x3503d8: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x3503d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
    // 0x3503dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3503dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3503e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3503e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3503e4:
    // 0x3503e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3503e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3503e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3503e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3503ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3503ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3503f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3503f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3503f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3503f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3503f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3503f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3503fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3503fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350400: 0x3e00008  jr          $ra
    ctx->pc = 0x350400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350400u;
            // 0x350404: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350408u;
    // 0x350408: 0x0  nop
    ctx->pc = 0x350408u;
    // NOP
    // 0x35040c: 0x0  nop
    ctx->pc = 0x35040cu;
    // NOP
}
