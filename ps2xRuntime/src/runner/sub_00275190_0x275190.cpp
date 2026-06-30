#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00275190
// Address: 0x275190 - 0x275300
void sub_00275190_0x275190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275190_0x275190");
#endif

    switch (ctx->pc) {
        case 0x2751f0u: goto label_2751f0;
        default: break;
    }

    ctx->pc = 0x275190u;

    // 0x275190: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x275190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x275194: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275198: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x275198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27519c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x27519cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2751a0: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x2751a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2751a4: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2751a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2751a8: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x2751a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2751ac: 0xc503ffec  lwc1        $f3, -0x14($t0)
    ctx->pc = 0x2751acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2751b0: 0xc502fff0  lwc1        $f2, -0x10($t0)
    ctx->pc = 0x2751b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2751b4: 0xc501fff4  lwc1        $f1, -0xC($t0)
    ctx->pc = 0x2751b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2751b8: 0xc500fff8  lwc1        $f0, -0x8($t0)
    ctx->pc = 0x2751b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2751bc: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x2751bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2751c0: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x2751c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2751c4: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x2751c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x2751c8: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x2751c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2751cc: 0xc500fffc  lwc1        $f0, -0x4($t0)
    ctx->pc = 0x2751ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2751d0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2751D0u;
    {
        const bool branch_taken_0x2751d0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2751D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2751D0u;
            // 0x2751d4: 0xe4e00010  swc1        $f0, 0x10($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751d0) {
            ctx->pc = 0x2751E0u;
            goto label_2751e0;
        }
    }
    ctx->pc = 0x2751D8u;
    // 0x2751d8: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2751d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2751dc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2751dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_2751e0:
    // 0x2751e0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2751e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2751e4: 0x14200034  bnez        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x2751E4u;
    {
        const bool branch_taken_0x2751e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2751e4) {
            ctx->pc = 0x2752B8u;
            goto label_2752b8;
        }
    }
    ctx->pc = 0x2751ECu;
    // 0x2751ec: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2751ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2751f0:
    // 0x2751f0: 0x53840  sll         $a3, $a1, 1
    ctx->pc = 0x2751f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2751f4: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x2751f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2751f8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2751F8u;
    {
        const bool branch_taken_0x2751f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2751FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2751F8u;
            // 0x2751fc: 0x74880  sll         $t1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751f8) {
            ctx->pc = 0x275238u;
            goto label_275238;
        }
    }
    ctx->pc = 0x275200u;
    // 0x275200: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x275200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x275204: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x275204u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x275208: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x275208u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x27520c: 0xc521fff4  lwc1        $f1, -0xC($t1)
    ctx->pc = 0x27520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275210: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x275210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275214: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275218: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x275218u;
    {
        const bool branch_taken_0x275218 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27521Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275218u;
            // 0x27521c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275218) {
            ctx->pc = 0x275224u;
            goto label_275224;
        }
    }
    ctx->pc = 0x275220u;
    // 0x275220: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x275220u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275224:
    // 0x275224: 0x8463c  dsll32      $t0, $t0, 24
    ctx->pc = 0x275224u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 24));
    // 0x275228: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x275228u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x27522c: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27522Cu;
    {
        const bool branch_taken_0x27522c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x27522c) {
            ctx->pc = 0x275238u;
            goto label_275238;
        }
    }
    ctx->pc = 0x275234u;
    // 0x275234: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x275234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_275238:
    // 0x275238: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x275238u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27523c: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x27523cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x275240: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x275240u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x275244: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x275244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275248: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x275248u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x27524c: 0xc540fff4  lwc1        $f0, -0xC($t2)
    ctx->pc = 0x27524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275250: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x275250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275254: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x275254u;
    {
        const bool branch_taken_0x275254 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x275258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275254u;
            // 0x275258: 0x254bfff4  addiu       $t3, $t2, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275254) {
            ctx->pc = 0x275260u;
            goto label_275260;
        }
    }
    ctx->pc = 0x27525Cu;
    // 0x27525c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27525cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275260:
    // 0x275260: 0x8463c  dsll32      $t0, $t0, 24
    ctx->pc = 0x275260u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 24));
    // 0x275264: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x275264u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x275268: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x275268u;
    {
        const bool branch_taken_0x275268 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x275268) {
            ctx->pc = 0x2752B8u;
            goto label_2752b8;
        }
    }
    ctx->pc = 0x275270u;
    // 0x275270: 0x8d48ffec  lw          $t0, -0x14($t2)
    ctx->pc = 0x275270u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967276)));
    // 0x275274: 0x54880  sll         $t1, $a1, 2
    ctx->pc = 0x275274u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x275278: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x275278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x27527c: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x27527cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x275280: 0x54880  sll         $t1, $a1, 2
    ctx->pc = 0x275280u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x275284: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x275284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x275288: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x275288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27528c: 0xad28ffec  sw          $t0, -0x14($t1)
    ctx->pc = 0x27528cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967276), GPR_U32(ctx, 8));
    // 0x275290: 0x8d48fff0  lw          $t0, -0x10($t2)
    ctx->pc = 0x275290u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967280)));
    // 0x275294: 0xad28fff0  sw          $t0, -0x10($t1)
    ctx->pc = 0x275294u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967280), GPR_U32(ctx, 8));
    // 0x275298: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x275298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27529c: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x27529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2752a0: 0xe521fff4  swc1        $f1, -0xC($t1)
    ctx->pc = 0x2752a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294967284), bits); }
    // 0x2752a4: 0xe520fff8  swc1        $f0, -0x8($t1)
    ctx->pc = 0x2752a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294967288), bits); }
    // 0x2752a8: 0x8d48fffc  lw          $t0, -0x4($t2)
    ctx->pc = 0x2752a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967292)));
    // 0x2752ac: 0x1020ffd0  beqz        $at, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2752ACu;
    {
        const bool branch_taken_0x2752ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2752B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2752ACu;
            // 0x2752b0: 0xad28fffc  sw          $t0, -0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294967292), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2752ac) {
            ctx->pc = 0x2751F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2751f0;
        }
    }
    ctx->pc = 0x2752B4u;
    // 0x2752b4: 0x0  nop
    ctx->pc = 0x2752b4u;
    // NOP
label_2752b8:
    // 0x2752b8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2752b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2752bc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2752bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2752c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2752c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2752c4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2752c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2752c8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2752c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2752cc: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x2752ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2752d0: 0xaca6ffec  sw          $a2, -0x14($a1)
    ctx->pc = 0x2752d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967276), GPR_U32(ctx, 6));
    // 0x2752d4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2752d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2752d8: 0xaca4fff0  sw          $a0, -0x10($a1)
    ctx->pc = 0x2752d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 4));
    // 0x2752dc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2752dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2752e0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2752e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2752e4: 0xe4a1fff4  swc1        $f1, -0xC($a1)
    ctx->pc = 0x2752e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
    // 0x2752e8: 0xe4a0fff8  swc1        $f0, -0x8($a1)
    ctx->pc = 0x2752e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), bits); }
    // 0x2752ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2752ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2752f0: 0xaca3fffc  sw          $v1, -0x4($a1)
    ctx->pc = 0x2752f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 3));
    // 0x2752f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2752F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2752F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2752F4u;
            // 0x2752f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2752FCu;
    // 0x2752fc: 0x0  nop
    ctx->pc = 0x2752fcu;
    // NOP
}
