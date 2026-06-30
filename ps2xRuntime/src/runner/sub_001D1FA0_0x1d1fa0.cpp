#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1FA0
// Address: 0x1d1fa0 - 0x1d2100
void sub_001D1FA0_0x1d1fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1FA0_0x1d1fa0");
#endif

    ctx->pc = 0x1d1fa0u;

    // 0x1d1fa0: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x1d1fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d1fa4: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x1d1fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1d1fa8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1d1fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d1fac: 0x50830029  beql        $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D1FACu;
    {
        const bool branch_taken_0x1d1fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1fac) {
            ctx->pc = 0x1D1FB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FACu;
            // 0x1d1fb0: 0x8cc70004  lw          $a3, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2054u;
            goto label_1d2054;
        }
    }
    ctx->pc = 0x1D1FB4u;
    // 0x1d1fb4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1d1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d1fb8: 0x50830011  beql        $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D1FB8u;
    {
        const bool branch_taken_0x1d1fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1fb8) {
            ctx->pc = 0x1D1FBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FB8u;
            // 0x1d1fbc: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2000u;
            goto label_1d2000;
        }
    }
    ctx->pc = 0x1D1FC0u;
    // 0x1d1fc0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1d1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1d1fc4: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1FC4u;
    {
        const bool branch_taken_0x1d1fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1fc4) {
            ctx->pc = 0x1D1FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FC4u;
            // 0x1d1fc8: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1FD4u;
            goto label_1d1fd4;
        }
    }
    ctx->pc = 0x1D1FCCu;
    // 0x1d1fcc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1D1FCCu;
    {
        const bool branch_taken_0x1d1fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1fcc) {
            ctx->pc = 0x1D20ECu;
            goto label_1d20ec;
        }
    }
    ctx->pc = 0x1D1FD4u;
label_1d1fd4:
    // 0x1d1fd4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d1fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1fd8: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1d1fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1d1fdc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d1fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1fe0: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x1d1fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x1d1fe4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d1fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d1fe8: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x1d1fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x1d1fec: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1d1fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d1ff0: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x1d1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x1d1ff4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1d1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d1ff8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1D1FF8u;
    {
        const bool branch_taken_0x1d1ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1FF8u;
            // 0x1d1ffc: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ff8) {
            ctx->pc = 0x1D20ECu;
            goto label_1d20ec;
        }
    }
    ctx->pc = 0x1D2000u;
label_1d2000:
    // 0x1d2000: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d2000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2004: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1d2004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1d2008: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d2008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d200c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x1d200cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x1d2010: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d2010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d2014: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x1d2014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x1d2018: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1d2018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d201c: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x1d201cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x1d2020: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1d2020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d2024: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1d2024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x1d2028: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1d2028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d202c: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x1d202cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x1d2030: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1d2030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2034: 0xe48000a8  swc1        $f0, 0xA8($a0)
    ctx->pc = 0x1d2034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x1d2038: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1d2038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1d203c: 0xac8300b8  sw          $v1, 0xB8($a0)
    ctx->pc = 0x1d203cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
    // 0x1d2040: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1d2040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1d2044: 0xac8300b4  sw          $v1, 0xB4($a0)
    ctx->pc = 0x1d2044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 3));
    // 0x1d2048: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1d2048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1d204c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1D204Cu;
    {
        const bool branch_taken_0x1d204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D204Cu;
            // 0x1d2050: 0xac8300ac  sw          $v1, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d204c) {
            ctx->pc = 0x1D20ECu;
            goto label_1d20ec;
        }
    }
    ctx->pc = 0x1D2054u;
label_1d2054:
    // 0x1d2054: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1d2054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1d2058: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d2058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d205c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d205cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d2060: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D2060u;
    {
        const bool branch_taken_0x1d2060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2060u;
            // 0x1d2064: 0x8ce6000c  lw          $a2, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2060) {
            ctx->pc = 0x1D20BCu;
            goto label_1d20bc;
        }
    }
    ctx->pc = 0x1D2068u;
    // 0x1d2068: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1d2068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d206c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2070: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d2070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2074: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1d2074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1d2078: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d2078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d207c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1d207cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1d2080: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d2080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d2084: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1d2084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1d2088: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1d2088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d208c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1d208cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1d2090: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1d2090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d2094: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1d2094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1d2098: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1d2098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d209c: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x1d209cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x1d20a0: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1d20a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1d20a4: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x1d20a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x1d20a8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1d20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1d20ac: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1d20acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x1d20b0: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1d20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1d20b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D20B4u;
    {
        const bool branch_taken_0x1d20b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D20B4u;
            // 0x1d20b8: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20b4) {
            ctx->pc = 0x1D20ECu;
            goto label_1d20ec;
        }
    }
    ctx->pc = 0x1D20BCu;
label_1d20bc:
    // 0x1d20bc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1d20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d20c0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d20c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d20c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d20c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d20c8: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1d20c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1d20cc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d20ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d20d0: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1d20d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1d20d4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d20d8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1d20d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1d20dc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1d20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d20e0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1d20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1d20e4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1d20e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d20e8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1d20e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1d20ec:
    // 0x1d20ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D20ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D20F4u;
    // 0x1d20f4: 0x0  nop
    ctx->pc = 0x1d20f4u;
    // NOP
    // 0x1d20f8: 0x0  nop
    ctx->pc = 0x1d20f8u;
    // NOP
    // 0x1d20fc: 0x0  nop
    ctx->pc = 0x1d20fcu;
    // NOP
}
