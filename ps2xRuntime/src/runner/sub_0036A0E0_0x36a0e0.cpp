#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036A0E0
// Address: 0x36a0e0 - 0x36a390
void sub_0036A0E0_0x36a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A0E0_0x36a0e0");
#endif

    switch (ctx->pc) {
        case 0x36a13cu: goto label_36a13c;
        case 0x36a1b0u: goto label_36a1b0;
        case 0x36a27cu: goto label_36a27c;
        case 0x36a290u: goto label_36a290;
        case 0x36a2b0u: goto label_36a2b0;
        case 0x36a2d0u: goto label_36a2d0;
        default: break;
    }

    ctx->pc = 0x36a0e0u;

    // 0x36a0e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36a0e4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x36a0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x36a0e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36a0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36a0ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36a0f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a0f4: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x36a0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x36a0f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a0fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x36a100: 0xc44118d8  lwc1        $f1, 0x18D8($v0)
    ctx->pc = 0x36a100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a104: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x36a104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x36a108: 0xc46018dc  lwc1        $f0, 0x18DC($v1)
    ctx->pc = 0x36a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a10c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36a10cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a110: 0x27a80038  addiu       $t0, $sp, 0x38
    ctx->pc = 0x36a110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x36a114: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a118: 0x8c454030  lw          $a1, 0x4030($v0)
    ctx->pc = 0x36a118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x36a11c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x36a11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36a120: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x36a120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36a124: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x36a124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x36a128: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a12c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x36a130: 0x24424080  addiu       $v0, $v0, 0x4080
    ctx->pc = 0x36a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16512));
    // 0x36a134: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36a134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36a138: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x36a138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36a13c:
    // 0x36a13c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x36a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36a140: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x36a140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x36a144: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x36a144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x36a148: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x36a148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x36a14c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36a150: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x36a150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x36a154: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x36a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36a158: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x36a158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x36a15c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x36a15cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x36a160: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x36A160u;
    {
        const bool branch_taken_0x36a160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A160u;
            // 0x36a164: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a160) {
            ctx->pc = 0x36A13Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36a13c;
        }
    }
    ctx->pc = 0x36A168u;
    // 0x36a168: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a16c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a170: 0x8c474030  lw          $a3, 0x4030($v0)
    ctx->pc = 0x36a170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16432)));
    // 0x36a174: 0x24844080  addiu       $a0, $a0, 0x4080
    ctx->pc = 0x36a174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16512));
    // 0x36a178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36a178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a17c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x36a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x36a180: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a184: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36a184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36a188: 0x24424710  addiu       $v0, $v0, 0x4710
    ctx->pc = 0x36a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18192));
    // 0x36a18c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x36a18cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36a190: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36a190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36a194: 0x868021  addu        $s0, $a0, $a2
    ctx->pc = 0x36a194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x36a198: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36a198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36a19c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x36a19cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a1a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36a1a4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x36a1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36a1a8: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x36A1A8u;
    SET_GPR_U32(ctx, 31, 0x36A1B0u);
    ctx->pc = 0x36A1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A1A8u;
            // 0x36a1ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A1B0u; }
        if (ctx->pc != 0x36A1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A1B0u; }
        if (ctx->pc != 0x36A1B0u) { return; }
    }
    ctx->pc = 0x36A1B0u;
label_36a1b0:
    // 0x36a1b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x36a1b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a1b8: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x36a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x36a1bc: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x36a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x36a1c0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a1c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a1c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A1C4u;
    {
        const bool branch_taken_0x36a1c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a1c4) {
            ctx->pc = 0x36A1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A1C4u;
            // 0x36a1c8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A1D8u;
            goto label_36a1d8;
        }
    }
    ctx->pc = 0x36A1CCu;
    // 0x36a1cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a1d0: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x36a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x36a1d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a1d8:
    // 0x36a1d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a1dc: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36a1e0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a1e4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a1e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a1e8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A1E8u;
    {
        const bool branch_taken_0x36a1e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a1e8) {
            ctx->pc = 0x36A1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A1E8u;
            // 0x36a1ec: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A1FCu;
            goto label_36a1fc;
        }
    }
    ctx->pc = 0x36A1F0u;
    // 0x36a1f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a1f4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x36a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x36a1f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a1fc:
    // 0x36a1fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a200: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36a200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x36a204: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a208: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a208u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a20c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A20Cu;
    {
        const bool branch_taken_0x36a20c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a20c) {
            ctx->pc = 0x36A210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A20Cu;
            // 0x36a210: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A220u;
            goto label_36a220;
        }
    }
    ctx->pc = 0x36A214u;
    // 0x36a214: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a218: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36a218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x36a21c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a220:
    // 0x36a220: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a224: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36a224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36a228: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a22c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a22cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a230: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A230u;
    {
        const bool branch_taken_0x36a230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a230) {
            ctx->pc = 0x36A234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A230u;
            // 0x36a234: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A244u;
            goto label_36a244;
        }
    }
    ctx->pc = 0x36A238u;
    // 0x36a238: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a23c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x36a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x36a240: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x36a240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36a244:
    // 0x36a244: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a248: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36a248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x36a24c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a250: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a250u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a254: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A254u;
    {
        const bool branch_taken_0x36a254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a254) {
            ctx->pc = 0x36A258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A254u;
            // 0x36a258: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A268u;
            goto label_36a268;
        }
    }
    ctx->pc = 0x36A25Cu;
    // 0x36a25c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a260: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36a260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x36a264: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x36a264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_36a268:
    // 0x36a268: 0x50c00005  beql        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x36A268u;
    {
        const bool branch_taken_0x36a268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a268) {
            ctx->pc = 0x36A26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A268u;
            // 0x36a26c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A280u;
            goto label_36a280;
        }
    }
    ctx->pc = 0x36A270u;
    // 0x36a270: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x36a270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x36a274: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x36A274u;
    SET_GPR_U32(ctx, 31, 0x36A27Cu);
    ctx->pc = 0x36A278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A274u;
            // 0x36a278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A27Cu; }
        if (ctx->pc != 0x36A27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A27Cu; }
        if (ctx->pc != 0x36A27Cu) { return; }
    }
    ctx->pc = 0x36A27Cu;
label_36a27c:
    // 0x36a27c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x36a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_36a280:
    // 0x36a280: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A280u;
    {
        const bool branch_taken_0x36a280 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a280) {
            ctx->pc = 0x36A284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A280u;
            // 0x36a284: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A294u;
            goto label_36a294;
        }
    }
    ctx->pc = 0x36A288u;
    // 0x36a288: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x36A288u;
    SET_GPR_U32(ctx, 31, 0x36A290u);
    ctx->pc = 0x36A28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A288u;
            // 0x36a28c: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A290u; }
        if (ctx->pc != 0x36A290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A290u; }
        if (ctx->pc != 0x36A290u) { return; }
    }
    ctx->pc = 0x36A290u;
label_36a290:
    // 0x36a290: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x36a290u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_36a294:
    // 0x36a294: 0x51000007  beql        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x36A294u;
    {
        const bool branch_taken_0x36a294 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a294) {
            ctx->pc = 0x36A298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A294u;
            // 0x36a298: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A2B4u;
            goto label_36a2b4;
        }
    }
    ctx->pc = 0x36A29Cu;
    // 0x36a29c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2a0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x36a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x36a2a4: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x36a2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x36a2a8: 0xc075188  jal         func_1D4620
    ctx->pc = 0x36A2A8u;
    SET_GPR_U32(ctx, 31, 0x36A2B0u);
    ctx->pc = 0x36A2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A2A8u;
            // 0x36a2ac: 0x26270018  addiu       $a3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4620u;
    if (runtime->hasFunction(0x1D4620u)) {
        auto targetFn = runtime->lookupFunction(0x1D4620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A2B0u; }
        if (ctx->pc != 0x36A2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4620_0x1d4620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A2B0u; }
        if (ctx->pc != 0x36A2B0u) { return; }
    }
    ctx->pc = 0x36A2B0u;
label_36a2b0:
    // 0x36a2b0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x36a2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_36a2b4:
    // 0x36a2b4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36A2B4u;
    {
        const bool branch_taken_0x36a2b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a2b4) {
            ctx->pc = 0x36A2D0u;
            goto label_36a2d0;
        }
    }
    ctx->pc = 0x36A2BCu;
    // 0x36a2bc: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x36a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x36a2c0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A2C0u;
    {
        const bool branch_taken_0x36a2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a2c0) {
            ctx->pc = 0x36A2D0u;
            goto label_36a2d0;
        }
    }
    ctx->pc = 0x36A2C8u;
    // 0x36a2c8: 0xc074da8  jal         func_1D36A0
    ctx->pc = 0x36A2C8u;
    SET_GPR_U32(ctx, 31, 0x36A2D0u);
    ctx->pc = 0x36A2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A2C8u;
            // 0x36a2cc: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D36A0u;
    if (runtime->hasFunction(0x1D36A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A2D0u; }
        if (ctx->pc != 0x36A2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D36A0_0x1d36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A2D0u; }
        if (ctx->pc != 0x36A2D0u) { return; }
    }
    ctx->pc = 0x36A2D0u;
label_36a2d0:
    // 0x36a2d0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a2d4: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a2d8: 0x8c664030  lw          $a2, 0x4030($v1)
    ctx->pc = 0x36a2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16432)));
    // 0x36a2dc: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x36a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x36a2e0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x36a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x36a2e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a2e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36a2ec: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x36a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x36a2f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36a2f4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x36a2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x36a2f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x36a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x36a2fc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x36a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x36a300: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36a304: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x36a304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x36a308: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a308u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a30c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A30Cu;
    {
        const bool branch_taken_0x36a30c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a30c) {
            ctx->pc = 0x36A310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A30Cu;
            // 0x36a310: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A320u;
            goto label_36a320;
        }
    }
    ctx->pc = 0x36A314u;
    // 0x36a314: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a318: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x36a318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x36a31c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36a31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36a320:
    // 0x36a320: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a324: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36a324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36a328: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a32c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a32cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a330: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A330u;
    {
        const bool branch_taken_0x36a330 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a330) {
            ctx->pc = 0x36A334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36A330u;
            // 0x36a334: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36A344u;
            goto label_36a344;
        }
    }
    ctx->pc = 0x36A338u;
    // 0x36a338: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a33c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x36a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x36a340: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x36a340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_36a344:
    // 0x36a344: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a348: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x36a34c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36a350: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36a350u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36a354: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A354u;
    {
        const bool branch_taken_0x36a354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a354) {
            ctx->pc = 0x36A364u;
            goto label_36a364;
        }
    }
    ctx->pc = 0x36A35Cu;
    // 0x36a35c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36a360: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36a360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_36a364:
    // 0x36a364: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a368: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a36c: 0x8c844030  lw          $a0, 0x4030($a0)
    ctx->pc = 0x36a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16432)));
    // 0x36a370: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36a370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36a374: 0xac644030  sw          $a0, 0x4030($v1)
    ctx->pc = 0x36a374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16432), GPR_U32(ctx, 4));
    // 0x36a378: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a37c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a37cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a384: 0x3e00008  jr          $ra
    ctx->pc = 0x36A384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A384u;
            // 0x36a388: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36A38Cu;
    // 0x36a38c: 0x0  nop
    ctx->pc = 0x36a38cu;
    // NOP
}
