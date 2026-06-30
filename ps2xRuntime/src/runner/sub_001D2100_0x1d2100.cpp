#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2100
// Address: 0x1d2100 - 0x1d2350
void sub_001D2100_0x1d2100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2100_0x1d2100");
#endif

    switch (ctx->pc) {
        case 0x1d2130u: goto label_1d2130;
        default: break;
    }

    ctx->pc = 0x1d2100u;

    // 0x1d2100: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x1d2100u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d2104: 0x11a00090  beqz        $t5, . + 4 + (0x90 << 2)
    ctx->pc = 0x1D2104u;
    {
        const bool branch_taken_0x1d2104 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2104u;
            // 0x1d2108: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2104) {
            ctx->pc = 0x1D2348u;
            goto label_1d2348;
        }
    }
    ctx->pc = 0x1D210Cu;
    // 0x1d210c: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x1d210cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x1d2110: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1d2110u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2114: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x1d2114u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1d2118: 0x240b0800  addiu       $t3, $zero, 0x800
    ctx->pc = 0x1d2118u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d211c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1d211cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1d2120: 0x3c094300  lui         $t1, 0x4300
    ctx->pc = 0x1d2120u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17152 << 16));
    // 0x1d2124: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x1d2124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d2128: 0x34c7000d  ori         $a3, $a2, 0xD
    ctx->pc = 0x1d2128u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13);
    // 0x1d212c: 0x240c1000  addiu       $t4, $zero, 0x1000
    ctx->pc = 0x1d212cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1d2130:
    // 0x1d2130: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x1d2130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d2134: 0xcec021  addu        $t8, $a2, $t6
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x1d2138: 0x8f060000  lw          $a2, 0x0($t8)
    ctx->pc = 0x1d2138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1d213c: 0x10cc0042  beq         $a2, $t4, . + 4 + (0x42 << 2)
    ctx->pc = 0x1D213Cu;
    {
        const bool branch_taken_0x1d213c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 12));
        if (branch_taken_0x1d213c) {
            ctx->pc = 0x1D2248u;
            goto label_1d2248;
        }
    }
    ctx->pc = 0x1D2144u;
    // 0x1d2144: 0x10cb001a  beq         $a2, $t3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D2144u;
    {
        const bool branch_taken_0x1d2144 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x1d2144) {
            ctx->pc = 0x1D21B0u;
            goto label_1d21b0;
        }
    }
    ctx->pc = 0x1D214Cu;
    // 0x1d214c: 0x10ca0004  beq         $a2, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D214Cu;
    {
        const bool branch_taken_0x1d214c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x1d214c) {
            ctx->pc = 0x1D2160u;
            goto label_1d2160;
        }
    }
    ctx->pc = 0x1D2154u;
    // 0x1d2154: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1D2154u;
    {
        const bool branch_taken_0x1d2154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2154) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D215Cu;
    // 0x1d215c: 0x0  nop
    ctx->pc = 0x1d215cu;
    // NOP
label_1d2160:
    // 0x1d2160: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D2160u;
    {
        const bool branch_taken_0x1d2160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2160u;
            // 0x1d2164: 0x8f180004  lw          $t8, 0x4($t8) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2160) {
            ctx->pc = 0x1D2190u;
            goto label_1d2190;
        }
    }
    ctx->pc = 0x1D2168u;
    // 0x1d2168: 0xc700001c  lwc1        $f0, 0x1C($t8)
    ctx->pc = 0x1d2168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d216c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d216cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d2170: 0xc7000038  lwc1        $f0, 0x38($t8)
    ctx->pc = 0x1d2170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2174: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d2174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d2178: 0x8f060048  lw          $a2, 0x48($t8)
    ctx->pc = 0x1d2178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 72)));
    // 0x1d217c: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x1d217cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x1d2180: 0x8f060044  lw          $a2, 0x44($t8)
    ctx->pc = 0x1d2180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 68)));
    // 0x1d2184: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x1d2184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x1d2188: 0x8f06003c  lw          $a2, 0x3C($t8)
    ctx->pc = 0x1d2188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 60)));
    // 0x1d218c: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x1d218cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
label_1d2190:
    // 0x1d2190: 0xe70c001c  swc1        $f12, 0x1C($t8)
    ctx->pc = 0x1d2190u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 28), bits); }
    // 0x1d2194: 0xaf090038  sw          $t1, 0x38($t8)
    ctx->pc = 0x1d2194u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 9));
    // 0x1d2198: 0xaf080048  sw          $t0, 0x48($t8)
    ctx->pc = 0x1d2198u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 72), GPR_U32(ctx, 8));
    // 0x1d219c: 0x8f060044  lw          $a2, 0x44($t8)
    ctx->pc = 0x1d219cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 68)));
    // 0x1d21a0: 0x34c60050  ori         $a2, $a2, 0x50
    ctx->pc = 0x1d21a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)80);
    // 0x1d21a4: 0xaf060044  sw          $a2, 0x44($t8)
    ctx->pc = 0x1d21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 68), GPR_U32(ctx, 6));
    // 0x1d21a8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1D21A8u;
    {
        const bool branch_taken_0x1d21a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21A8u;
            // 0x1d21ac: 0xaf07003c  sw          $a3, 0x3C($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 60), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21a8) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D21B0u;
label_1d21b0:
    // 0x1d21b0: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D21B0u;
    {
        const bool branch_taken_0x1d21b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D21B0u;
            // 0x1d21b4: 0x8f180004  lw          $t8, 0x4($t8) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21b0) {
            ctx->pc = 0x1D2208u;
            goto label_1d2208;
        }
    }
    ctx->pc = 0x1D21B8u;
    // 0x1d21b8: 0xc700001c  lwc1        $f0, 0x1C($t8)
    ctx->pc = 0x1d21b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21bc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d21bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d21c0: 0xc7000038  lwc1        $f0, 0x38($t8)
    ctx->pc = 0x1d21c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21c4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d21c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d21c8: 0x8f060048  lw          $a2, 0x48($t8)
    ctx->pc = 0x1d21c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 72)));
    // 0x1d21cc: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x1d21ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x1d21d0: 0x8f060044  lw          $a2, 0x44($t8)
    ctx->pc = 0x1d21d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 68)));
    // 0x1d21d4: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x1d21d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x1d21d8: 0x8f06003c  lw          $a2, 0x3C($t8)
    ctx->pc = 0x1d21d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 60)));
    // 0x1d21dc: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x1d21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x1d21e0: 0xc700008c  lwc1        $f0, 0x8C($t8)
    ctx->pc = 0x1d21e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21e4: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x1d21e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x1d21e8: 0xc70000a8  lwc1        $f0, 0xA8($t8)
    ctx->pc = 0x1d21e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d21ec: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1d21ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1d21f0: 0x8f0600b8  lw          $a2, 0xB8($t8)
    ctx->pc = 0x1d21f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 184)));
    // 0x1d21f4: 0xaca6001c  sw          $a2, 0x1C($a1)
    ctx->pc = 0x1d21f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
    // 0x1d21f8: 0x8f0600b4  lw          $a2, 0xB4($t8)
    ctx->pc = 0x1d21f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 180)));
    // 0x1d21fc: 0xaca60020  sw          $a2, 0x20($a1)
    ctx->pc = 0x1d21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
    // 0x1d2200: 0x8f0600ac  lw          $a2, 0xAC($t8)
    ctx->pc = 0x1d2200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 172)));
    // 0x1d2204: 0xaca60024  sw          $a2, 0x24($a1)
    ctx->pc = 0x1d2204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 6));
label_1d2208:
    // 0x1d2208: 0xe70c001c  swc1        $f12, 0x1C($t8)
    ctx->pc = 0x1d2208u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 28), bits); }
    // 0x1d220c: 0xaf090038  sw          $t1, 0x38($t8)
    ctx->pc = 0x1d220cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 9));
    // 0x1d2210: 0xaf080048  sw          $t0, 0x48($t8)
    ctx->pc = 0x1d2210u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 72), GPR_U32(ctx, 8));
    // 0x1d2214: 0x8f060044  lw          $a2, 0x44($t8)
    ctx->pc = 0x1d2214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 68)));
    // 0x1d2218: 0x34c60050  ori         $a2, $a2, 0x50
    ctx->pc = 0x1d2218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)80);
    // 0x1d221c: 0xaf060044  sw          $a2, 0x44($t8)
    ctx->pc = 0x1d221cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 68), GPR_U32(ctx, 6));
    // 0x1d2220: 0xaf07003c  sw          $a3, 0x3C($t8)
    ctx->pc = 0x1d2220u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 60), GPR_U32(ctx, 7));
    // 0x1d2224: 0xe70c008c  swc1        $f12, 0x8C($t8)
    ctx->pc = 0x1d2224u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 140), bits); }
    // 0x1d2228: 0xaf0900a8  sw          $t1, 0xA8($t8)
    ctx->pc = 0x1d2228u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 168), GPR_U32(ctx, 9));
    // 0x1d222c: 0xaf0800b8  sw          $t0, 0xB8($t8)
    ctx->pc = 0x1d222cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 184), GPR_U32(ctx, 8));
    // 0x1d2230: 0x8f0600b4  lw          $a2, 0xB4($t8)
    ctx->pc = 0x1d2230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 180)));
    // 0x1d2234: 0x34c60050  ori         $a2, $a2, 0x50
    ctx->pc = 0x1d2234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)80);
    // 0x1d2238: 0xaf0600b4  sw          $a2, 0xB4($t8)
    ctx->pc = 0x1d2238u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 180), GPR_U32(ctx, 6));
    // 0x1d223c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1D223Cu;
    {
        const bool branch_taken_0x1d223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D223Cu;
            // 0x1d2240: 0xaf0700ac  sw          $a3, 0xAC($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 172), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d223c) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D2244u;
    // 0x1d2244: 0x0  nop
    ctx->pc = 0x1d2244u;
    // NOP
label_1d2248:
    // 0x1d2248: 0x8f190004  lw          $t9, 0x4($t8)
    ctx->pc = 0x1d2248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x1d224c: 0x8f380000  lw          $t8, 0x0($t9)
    ctx->pc = 0x1d224cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x1d2250: 0x303c024  and         $t8, $t8, $v1
    ctx->pc = 0x1d2250u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 3));
    // 0x1d2254: 0x13000024  beqz        $t8, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D2254u;
    {
        const bool branch_taken_0x1d2254 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2254u;
            // 0x1d2258: 0x8f26000c  lw          $a2, 0xC($t9) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2254) {
            ctx->pc = 0x1D22E8u;
            goto label_1d22e8;
        }
    }
    ctx->pc = 0x1D225Cu;
    // 0x1d225c: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D225Cu;
    {
        const bool branch_taken_0x1d225c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D225Cu;
            // 0x1d2260: 0x8f390008  lw          $t9, 0x8($t9) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d225c) {
            ctx->pc = 0x1D22B0u;
            goto label_1d22b0;
        }
    }
    ctx->pc = 0x1D2264u;
    // 0x1d2264: 0xc720001c  lwc1        $f0, 0x1C($t9)
    ctx->pc = 0x1d2264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2268: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d2268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d226c: 0xc720003c  lwc1        $f0, 0x3C($t9)
    ctx->pc = 0x1d226cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2270: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d2270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d2274: 0x8cd80008  lw          $t8, 0x8($a2)
    ctx->pc = 0x1d2274u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d2278: 0xacb80008  sw          $t8, 0x8($a1)
    ctx->pc = 0x1d2278u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 24));
    // 0x1d227c: 0x8cd80000  lw          $t8, 0x0($a2)
    ctx->pc = 0x1d227cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d2280: 0xacb8000c  sw          $t8, 0xC($a1)
    ctx->pc = 0x1d2280u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 24));
    // 0x1d2284: 0x8cd80004  lw          $t8, 0x4($a2)
    ctx->pc = 0x1d2284u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d2288: 0xacb80010  sw          $t8, 0x10($a1)
    ctx->pc = 0x1d2288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 24));
    // 0x1d228c: 0xc720004c  lwc1        $f0, 0x4C($t9)
    ctx->pc = 0x1d228cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2290: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1d2290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1d2294: 0x8cd80018  lw          $t8, 0x18($a2)
    ctx->pc = 0x1d2294u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1d2298: 0xacb8001c  sw          $t8, 0x1C($a1)
    ctx->pc = 0x1d2298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 24));
    // 0x1d229c: 0x8cd80010  lw          $t8, 0x10($a2)
    ctx->pc = 0x1d229cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1d22a0: 0xacb80020  sw          $t8, 0x20($a1)
    ctx->pc = 0x1d22a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 24));
    // 0x1d22a4: 0x8cd80014  lw          $t8, 0x14($a2)
    ctx->pc = 0x1d22a4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1d22a8: 0xacb80024  sw          $t8, 0x24($a1)
    ctx->pc = 0x1d22a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 24));
    // 0x1d22ac: 0x0  nop
    ctx->pc = 0x1d22acu;
    // NOP
label_1d22b0:
    // 0x1d22b0: 0xe72c001c  swc1        $f12, 0x1C($t9)
    ctx->pc = 0x1d22b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 28), bits); }
    // 0x1d22b4: 0xaf29003c  sw          $t1, 0x3C($t9)
    ctx->pc = 0x1d22b4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 60), GPR_U32(ctx, 9));
    // 0x1d22b8: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1d22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1d22bc: 0x8cd80000  lw          $t8, 0x0($a2)
    ctx->pc = 0x1d22bcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d22c0: 0x37180050  ori         $t8, $t8, 0x50
    ctx->pc = 0x1d22c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)80);
    // 0x1d22c4: 0xacd80000  sw          $t8, 0x0($a2)
    ctx->pc = 0x1d22c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 24));
    // 0x1d22c8: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x1d22c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x1d22cc: 0xaf29004c  sw          $t1, 0x4C($t9)
    ctx->pc = 0x1d22ccu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 76), GPR_U32(ctx, 9));
    // 0x1d22d0: 0xacc80018  sw          $t0, 0x18($a2)
    ctx->pc = 0x1d22d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 8));
    // 0x1d22d4: 0x8cd80010  lw          $t8, 0x10($a2)
    ctx->pc = 0x1d22d4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1d22d8: 0x37180050  ori         $t8, $t8, 0x50
    ctx->pc = 0x1d22d8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)80);
    // 0x1d22dc: 0xacd80010  sw          $t8, 0x10($a2)
    ctx->pc = 0x1d22dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 24));
    // 0x1d22e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D22E0u;
    {
        const bool branch_taken_0x1d22e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22E0u;
            // 0x1d22e4: 0xacc70014  sw          $a3, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22e0) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D22E8u;
label_1d22e8:
    // 0x1d22e8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D22E8u;
    {
        const bool branch_taken_0x1d22e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D22E8u;
            // 0x1d22ec: 0x8f390008  lw          $t9, 0x8($t9) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22e8) {
            ctx->pc = 0x1D2318u;
            goto label_1d2318;
        }
    }
    ctx->pc = 0x1D22F0u;
    // 0x1d22f0: 0xc720001c  lwc1        $f0, 0x1C($t9)
    ctx->pc = 0x1d22f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d22f4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d22f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d22f8: 0xc720003c  lwc1        $f0, 0x3C($t9)
    ctx->pc = 0x1d22f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d22fc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d22fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d2300: 0x8cd80008  lw          $t8, 0x8($a2)
    ctx->pc = 0x1d2300u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d2304: 0xacb80008  sw          $t8, 0x8($a1)
    ctx->pc = 0x1d2304u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 24));
    // 0x1d2308: 0x8cd80000  lw          $t8, 0x0($a2)
    ctx->pc = 0x1d2308u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d230c: 0xacb8000c  sw          $t8, 0xC($a1)
    ctx->pc = 0x1d230cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 24));
    // 0x1d2310: 0x8cd80004  lw          $t8, 0x4($a2)
    ctx->pc = 0x1d2310u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d2314: 0xacb80010  sw          $t8, 0x10($a1)
    ctx->pc = 0x1d2314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 24));
label_1d2318:
    // 0x1d2318: 0xe72c001c  swc1        $f12, 0x1C($t9)
    ctx->pc = 0x1d2318u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 28), bits); }
    // 0x1d231c: 0xaf29003c  sw          $t1, 0x3C($t9)
    ctx->pc = 0x1d231cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 60), GPR_U32(ctx, 9));
    // 0x1d2320: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1d2320u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1d2324: 0x8cd80000  lw          $t8, 0x0($a2)
    ctx->pc = 0x1d2324u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d2328: 0x37180050  ori         $t8, $t8, 0x50
    ctx->pc = 0x1d2328u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)80);
    // 0x1d232c: 0xacd80000  sw          $t8, 0x0($a2)
    ctx->pc = 0x1d232cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 24));
    // 0x1d2330: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x1d2330u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
    // 0x1d2334: 0x0  nop
    ctx->pc = 0x1d2334u;
    // NOP
label_1d2338:
    // 0x1d2338: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1d2338u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1d233c: 0x1ed302b  sltu        $a2, $t7, $t5
    ctx->pc = 0x1d233cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1d2340: 0x14c0ff7b  bnez        $a2, . + 4 + (-0x85 << 2)
    ctx->pc = 0x1D2340u;
    {
        const bool branch_taken_0x1d2340 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2340u;
            // 0x1d2344: 0x25ce0008  addiu       $t6, $t6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2340) {
            ctx->pc = 0x1D2130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d2130;
        }
    }
    ctx->pc = 0x1D2348u;
label_1d2348:
    // 0x1d2348: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D2350u;
}
