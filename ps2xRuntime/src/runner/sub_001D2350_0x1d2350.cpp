#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2350
// Address: 0x1d2350 - 0x1d25b0
void sub_001D2350_0x1d2350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2350_0x1d2350");
#endif

    ctx->pc = 0x1d2350u;

    // 0x1d2350: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1d2350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d2354: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x1d2354u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1d2358: 0x10200093  beqz        $at, . + 4 + (0x93 << 2)
    ctx->pc = 0x1D2358u;
    {
        const bool branch_taken_0x1d2358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2358) {
            ctx->pc = 0x1D25A8u;
            goto label_1d25a8;
        }
    }
    ctx->pc = 0x1D2360u;
    // 0x1d2360: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x1d2360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1d2364: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1d2364u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d2368: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x1d2368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1d236c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1d236cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d2370: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1d2370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d2374: 0x5083004a  beql        $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1D2374u;
    {
        const bool branch_taken_0x1d2374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d2374) {
            ctx->pc = 0x1D2378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2374u;
            // 0x1d2378: 0x8cc70004  lw          $a3, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D24A0u;
            goto label_1d24a0;
        }
    }
    ctx->pc = 0x1D237Cu;
    // 0x1d237c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1d237cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d2380: 0x5083001e  beql        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D2380u;
    {
        const bool branch_taken_0x1d2380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d2380) {
            ctx->pc = 0x1D2384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2380u;
            // 0x1d2384: 0x8cc70004  lw          $a3, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D23FCu;
            goto label_1d23fc;
        }
    }
    ctx->pc = 0x1D2388u;
    // 0x1d2388: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1d2388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1d238c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D238Cu;
    {
        const bool branch_taken_0x1d238c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d238c) {
            ctx->pc = 0x1D2390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D238Cu;
            // 0x1d2390: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D239Cu;
            goto label_1d239c;
        }
    }
    ctx->pc = 0x1D2394u;
    // 0x1d2394: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1D2394u;
    {
        const bool branch_taken_0x1d2394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2394) {
            ctx->pc = 0x1D25A8u;
            goto label_1d25a8;
        }
    }
    ctx->pc = 0x1D239Cu;
label_1d239c:
    // 0x1d239c: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D239Cu;
    {
        const bool branch_taken_0x1d239c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d239c) {
            ctx->pc = 0x1D23A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D239Cu;
            // 0x1d23a0: 0xe4cc001c  swc1        $f12, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D23D0u;
            goto label_1d23d0;
        }
    }
    ctx->pc = 0x1D23A4u;
    // 0x1d23a4: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x1d23a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d23a8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d23a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d23ac: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x1d23acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d23b0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d23b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d23b4: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x1d23b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x1d23b8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1d23b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1d23bc: 0x8cc30044  lw          $v1, 0x44($a2)
    ctx->pc = 0x1d23bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x1d23c0: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1d23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1d23c4: 0x8cc3003c  lw          $v1, 0x3C($a2)
    ctx->pc = 0x1d23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1d23c8: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1d23c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1d23cc: 0xe4cc001c  swc1        $f12, 0x1C($a2)
    ctx->pc = 0x1d23ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_1d23d0:
    // 0x1d23d0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1d23d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1d23d4: 0xacc30038  sw          $v1, 0x38($a2)
    ctx->pc = 0x1d23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 3));
    // 0x1d23d8: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x1d23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d23dc: 0xacc30048  sw          $v1, 0x48($a2)
    ctx->pc = 0x1d23dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 72), GPR_U32(ctx, 3));
    // 0x1d23e0: 0x8cc40044  lw          $a0, 0x44($a2)
    ctx->pc = 0x1d23e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x1d23e4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1d23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1d23e8: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x1d23e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x1d23ec: 0x34840050  ori         $a0, $a0, 0x50
    ctx->pc = 0x1d23ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)80);
    // 0x1d23f0: 0xacc40044  sw          $a0, 0x44($a2)
    ctx->pc = 0x1d23f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 4));
    // 0x1d23f4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1D23F4u;
    {
        const bool branch_taken_0x1d23f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23F4u;
            // 0x1d23f8: 0xacc3003c  sw          $v1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23f4) {
            ctx->pc = 0x1D25A8u;
            goto label_1d25a8;
        }
    }
    ctx->pc = 0x1D23FCu;
label_1d23fc:
    // 0x1d23fc: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D23FCu;
    {
        const bool branch_taken_0x1d23fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d23fc) {
            ctx->pc = 0x1D2400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D23FCu;
            // 0x1d2400: 0xe4ec001c  swc1        $f12, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2458u;
            goto label_1d2458;
        }
    }
    ctx->pc = 0x1D2404u;
    // 0x1d2404: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x1d2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2408: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d2408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d240c: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x1d240cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2410: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d2410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d2414: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x1d2414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x1d2418: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1d2418u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1d241c: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x1d241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x1d2420: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1d2420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1d2424: 0x8ce3003c  lw          $v1, 0x3C($a3)
    ctx->pc = 0x1d2424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1d2428: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1d2428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1d242c: 0xc4e0008c  lwc1        $f0, 0x8C($a3)
    ctx->pc = 0x1d242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2430: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x1d2430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x1d2434: 0xc4e000a8  lwc1        $f0, 0xA8($a3)
    ctx->pc = 0x1d2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2438: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1d2438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1d243c: 0x8ce300b8  lw          $v1, 0xB8($a3)
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x1d2440: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x1d2440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x1d2444: 0x8ce300b4  lw          $v1, 0xB4($a3)
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x1d2448: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x1d2448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x1d244c: 0x8ce300ac  lw          $v1, 0xAC($a3)
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 172)));
    // 0x1d2450: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1d2450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x1d2454: 0xe4ec001c  swc1        $f12, 0x1C($a3)
    ctx->pc = 0x1d2454u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_1d2458:
    // 0x1d2458: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x1d2458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x1d245c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1d245cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1d2460: 0xace60038  sw          $a2, 0x38($a3)
    ctx->pc = 0x1d2460u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 6));
    // 0x1d2464: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1d2464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d2468: 0x3464000d  ori         $a0, $v1, 0xD
    ctx->pc = 0x1d2468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x1d246c: 0xace50048  sw          $a1, 0x48($a3)
    ctx->pc = 0x1d246cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 5));
    // 0x1d2470: 0x8ce30044  lw          $v1, 0x44($a3)
    ctx->pc = 0x1d2470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x1d2474: 0x34630050  ori         $v1, $v1, 0x50
    ctx->pc = 0x1d2474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)80);
    // 0x1d2478: 0xace30044  sw          $v1, 0x44($a3)
    ctx->pc = 0x1d2478u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 3));
    // 0x1d247c: 0xace4003c  sw          $a0, 0x3C($a3)
    ctx->pc = 0x1d247cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 4));
    // 0x1d2480: 0xe4ec008c  swc1        $f12, 0x8C($a3)
    ctx->pc = 0x1d2480u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 140), bits); }
    // 0x1d2484: 0xace600a8  sw          $a2, 0xA8($a3)
    ctx->pc = 0x1d2484u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 6));
    // 0x1d2488: 0xace500b8  sw          $a1, 0xB8($a3)
    ctx->pc = 0x1d2488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 184), GPR_U32(ctx, 5));
    // 0x1d248c: 0x8ce300b4  lw          $v1, 0xB4($a3)
    ctx->pc = 0x1d248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x1d2490: 0x34630050  ori         $v1, $v1, 0x50
    ctx->pc = 0x1d2490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)80);
    // 0x1d2494: 0xace300b4  sw          $v1, 0xB4($a3)
    ctx->pc = 0x1d2494u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 180), GPR_U32(ctx, 3));
    // 0x1d2498: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1D2498u;
    {
        const bool branch_taken_0x1d2498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2498u;
            // 0x1d249c: 0xace400ac  sw          $a0, 0xAC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2498) {
            ctx->pc = 0x1D25A8u;
            goto label_1d25a8;
        }
    }
    ctx->pc = 0x1D24A0u;
label_1d24a0:
    // 0x1d24a0: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1d24a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1d24a4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x1d24a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d24a8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1d24a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1d24ac: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D24ACu;
    {
        const bool branch_taken_0x1d24ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24ACu;
            // 0x1d24b0: 0x8ce3000c  lw          $v1, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24ac) {
            ctx->pc = 0x1D254Cu;
            goto label_1d254c;
        }
    }
    ctx->pc = 0x1D24B4u;
    // 0x1d24b4: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D24B4u;
    {
        const bool branch_taken_0x1d24b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D24B4u;
            // 0x1d24b8: 0x8ce80008  lw          $t0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24b4) {
            ctx->pc = 0x1D2504u;
            goto label_1d2504;
        }
    }
    ctx->pc = 0x1D24BCu;
    // 0x1d24bc: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x1d24bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d24c0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d24c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d24c4: 0xc500003c  lwc1        $f0, 0x3C($t0)
    ctx->pc = 0x1d24c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d24c8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d24c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d24cc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d24ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d24d0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1d24d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1d24d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d24d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d24d8: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x1d24d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1d24dc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1d24dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d24e0: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x1d24e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x1d24e4: 0xc500004c  lwc1        $f0, 0x4C($t0)
    ctx->pc = 0x1d24e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d24e8: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1d24e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1d24ec: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x1d24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1d24f0: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x1d24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x1d24f4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1d24f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d24f8: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x1d24f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x1d24fc: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x1d24fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1d2500: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x1d2500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
label_1d2504:
    // 0x1d2504: 0xe50c001c  swc1        $f12, 0x1C($t0)
    ctx->pc = 0x1d2504u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x1d2508: 0x3c074300  lui         $a3, 0x4300
    ctx->pc = 0x1d2508u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17152 << 16));
    // 0x1d250c: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x1d250cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x1d2510: 0xad07003c  sw          $a3, 0x3C($t0)
    ctx->pc = 0x1d2510u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 7));
    // 0x1d2514: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1d2514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d2518: 0x3485000d  ori         $a1, $a0, 0xD
    ctx->pc = 0x1d2518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    // 0x1d251c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1d251cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1d2520: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d2520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2524: 0x34840050  ori         $a0, $a0, 0x50
    ctx->pc = 0x1d2524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)80);
    // 0x1d2528: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1d2528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1d252c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1d252cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1d2530: 0xad07004c  sw          $a3, 0x4C($t0)
    ctx->pc = 0x1d2530u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 7));
    // 0x1d2534: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x1d2534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x1d2538: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1d2538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d253c: 0x34840050  ori         $a0, $a0, 0x50
    ctx->pc = 0x1d253cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)80);
    // 0x1d2540: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1d2540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1d2544: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D2544u;
    {
        const bool branch_taken_0x1d2544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2544u;
            // 0x1d2548: 0xac650014  sw          $a1, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2544) {
            ctx->pc = 0x1D25A8u;
            goto label_1d25a8;
        }
    }
    ctx->pc = 0x1D254Cu;
label_1d254c:
    // 0x1d254c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D254Cu;
    {
        const bool branch_taken_0x1d254c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D254Cu;
            // 0x1d2550: 0x8ce60008  lw          $a2, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d254c) {
            ctx->pc = 0x1D257Cu;
            goto label_1d257c;
        }
    }
    ctx->pc = 0x1D2554u;
    // 0x1d2554: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x1d2554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2558: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1d2558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d255c: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x1d255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2560: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d2560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d2564: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d2564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d2568: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1d2568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1d256c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d256cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2570: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x1d2570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1d2574: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1d2574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d2578: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x1d2578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_1d257c:
    // 0x1d257c: 0xe4cc001c  swc1        $f12, 0x1C($a2)
    ctx->pc = 0x1d257cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x1d2580: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x1d2580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x1d2584: 0xacc4003c  sw          $a0, 0x3C($a2)
    ctx->pc = 0x1d2584u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 4));
    // 0x1d2588: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x1d2588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d258c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1d258cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1d2590: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2594: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x1d2594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x1d2598: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x1d2598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    // 0x1d259c: 0x34a50050  ori         $a1, $a1, 0x50
    ctx->pc = 0x1d259cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)80);
    // 0x1d25a0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d25a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1d25a4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1d25a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1d25a8:
    // 0x1d25a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D25A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D25B0u;
}
