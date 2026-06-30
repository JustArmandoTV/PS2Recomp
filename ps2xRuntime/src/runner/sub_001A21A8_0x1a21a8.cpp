#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A21A8
// Address: 0x1a21a8 - 0x1a22d0
void sub_001A21A8_0x1a21a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A21A8_0x1a21a8");
#endif

    switch (ctx->pc) {
        case 0x1a21ccu: goto label_1a21cc;
        case 0x1a21ecu: goto label_1a21ec;
        case 0x1a2244u: goto label_1a2244;
        case 0x1a224cu: goto label_1a224c;
        case 0x1a2254u: goto label_1a2254;
        case 0x1a2268u: goto label_1a2268;
        case 0x1a229cu: goto label_1a229c;
        case 0x1a22b4u: goto label_1a22b4;
        default: break;
    }

    ctx->pc = 0x1a21a8u;

    // 0x1a21a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a21a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a21ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a21acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a21b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a21b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a21b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a21b8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1a21b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1a21bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A21BCu;
    {
        const bool branch_taken_0x1a21bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A21C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21BCu;
            // 0x1a21c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a21bc) {
            ctx->pc = 0x1A21D8u;
            goto label_1a21d8;
        }
    }
    ctx->pc = 0x1A21C4u;
    // 0x1a21c4: 0xc068b10  jal         func_1A2C40
    ctx->pc = 0x1A21C4u;
    SET_GPR_U32(ctx, 31, 0x1A21CCu);
    ctx->pc = 0x1A2C40u;
    if (runtime->hasFunction(0x1A2C40u)) {
        auto targetFn = runtime->lookupFunction(0x1A2C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21CCu; }
        if (ctx->pc != 0x1A21CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2C40_0x1a2c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21CCu; }
        if (ctx->pc != 0x1A21CCu) { return; }
    }
    ctx->pc = 0x1A21CCu;
label_1a21cc:
    // 0x1a21cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A21CCu;
    {
        const bool branch_taken_0x1a21cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A21D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21CCu;
            // 0x1a21d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a21cc) {
            ctx->pc = 0x1A21D8u;
            goto label_1a21d8;
        }
    }
    ctx->pc = 0x1A21D4u;
    // 0x1a21d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a21d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a21d8:
    // 0x1a21d8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1a21d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1a21dc: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A21DCu;
    {
        const bool branch_taken_0x1a21dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a21dc) {
            ctx->pc = 0x1A21E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21DCu;
            // 0x1a21e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2204u;
            goto label_1a2204;
        }
    }
    ctx->pc = 0x1A21E4u;
    // 0x1a21e4: 0xc068214  jal         func_1A0850
    ctx->pc = 0x1A21E4u;
    SET_GPR_U32(ctx, 31, 0x1A21ECu);
    ctx->pc = 0x1A0850u;
    if (runtime->hasFunction(0x1A0850u)) {
        auto targetFn = runtime->lookupFunction(0x1A0850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21ECu; }
        if (ctx->pc != 0x1A21ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0850_0x1a0850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A21ECu; }
        if (ctx->pc != 0x1A21ECu) { return; }
    }
    ctx->pc = 0x1A21ECu;
label_1a21ec:
    // 0x1a21ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a21f0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A21F0u;
    {
        const bool branch_taken_0x1a21f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a21f0) {
            ctx->pc = 0x1A21F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A21F0u;
            // 0x1a21f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2204u;
            goto label_1a2204;
        }
    }
    ctx->pc = 0x1A21F8u;
    // 0x1a21f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a21fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1a2200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2204:
    // 0x1a2204: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a2204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2208: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A220Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2208u;
            // 0x1a220c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2210u;
    // 0x1a2210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a221c: 0x80688bc  j           func_1A22F0
    ctx->pc = 0x1A221Cu;
    ctx->pc = 0x1A2220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A221Cu;
            // 0x1a2220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A22F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1A22F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A2224u;
    // 0x1a2224: 0x0  nop
    ctx->pc = 0x1a2224u;
    // NOP
    // 0x1a2228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a222c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a222cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a223c: 0xc068a88  jal         func_1A2A20
    ctx->pc = 0x1A223Cu;
    SET_GPR_U32(ctx, 31, 0x1A2244u);
    ctx->pc = 0x1A2240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A223Cu;
            // 0x1a2240: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2A20u;
    if (runtime->hasFunction(0x1A2A20u)) {
        auto targetFn = runtime->lookupFunction(0x1A2A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2244u; }
        if (ctx->pc != 0x1A2244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2A20_0x1a2a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2244u; }
        if (ctx->pc != 0x1A2244u) { return; }
    }
    ctx->pc = 0x1A2244u;
label_1a2244:
    // 0x1a2244: 0xc068aa4  jal         func_1A2A90
    ctx->pc = 0x1A2244u;
    SET_GPR_U32(ctx, 31, 0x1A224Cu);
    ctx->pc = 0x1A2248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2244u;
            // 0x1a2248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2A90u;
    if (runtime->hasFunction(0x1A2A90u)) {
        auto targetFn = runtime->lookupFunction(0x1A2A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A224Cu; }
        if (ctx->pc != 0x1A224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2A90_0x1a2a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A224Cu; }
        if (ctx->pc != 0x1A224Cu) { return; }
    }
    ctx->pc = 0x1A224Cu;
label_1a224c:
    // 0x1a224c: 0xc0688b4  jal         func_1A22D0
    ctx->pc = 0x1A224Cu;
    SET_GPR_U32(ctx, 31, 0x1A2254u);
    ctx->pc = 0x1A22D0u;
    if (runtime->hasFunction(0x1A22D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2254u; }
        if (ctx->pc != 0x1A2254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A22D0_0x1a22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2254u; }
        if (ctx->pc != 0x1A2254u) { return; }
    }
    ctx->pc = 0x1A2254u;
label_1a2254:
    // 0x1a2254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2258: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2258u;
    {
        const bool branch_taken_0x1a2258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A225Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2258u;
            // 0x1a225c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2258) {
            ctx->pc = 0x1A226Cu;
            goto label_1a226c;
        }
    }
    ctx->pc = 0x1A2260u;
    // 0x1a2260: 0xc06893c  jal         func_1A24F0
    ctx->pc = 0x1A2260u;
    SET_GPR_U32(ctx, 31, 0x1A2268u);
    ctx->pc = 0x1A24F0u;
    if (runtime->hasFunction(0x1A24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2268u; }
        if (ctx->pc != 0x1A2268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A24F0_0x1a24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2268u; }
        if (ctx->pc != 0x1A2268u) { return; }
    }
    ctx->pc = 0x1A2268u;
label_1a2268:
    // 0x1a2268: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a226c:
    // 0x1a226c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a226cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a227c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A227Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A227Cu;
            // 0x1a2280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2284u;
    // 0x1a2284: 0x0  nop
    ctx->pc = 0x1a2284u;
    // NOP
    // 0x1a2288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a228c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a228cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2290: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a2290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a2294: 0xc0688b4  jal         func_1A22D0
    ctx->pc = 0x1A2294u;
    SET_GPR_U32(ctx, 31, 0x1A229Cu);
    ctx->pc = 0x1A2298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2294u;
            // 0x1a2298: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A22D0u;
    if (runtime->hasFunction(0x1A22D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A229Cu; }
        if (ctx->pc != 0x1A229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A22D0_0x1a22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A229Cu; }
        if (ctx->pc != 0x1A229Cu) { return; }
    }
    ctx->pc = 0x1A229Cu;
label_1a229c:
    // 0x1a229c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a229cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a22a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a22a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22a4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A22A4u;
    {
        const bool branch_taken_0x1a22a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A22A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A22A4u;
            // 0x1a22a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a22a4) {
            ctx->pc = 0x1A22B8u;
            goto label_1a22b8;
        }
    }
    ctx->pc = 0x1A22ACu;
    // 0x1a22ac: 0xc06893c  jal         func_1A24F0
    ctx->pc = 0x1A22ACu;
    SET_GPR_U32(ctx, 31, 0x1A22B4u);
    ctx->pc = 0x1A24F0u;
    if (runtime->hasFunction(0x1A24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22B4u; }
        if (ctx->pc != 0x1A22B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A24F0_0x1a24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22B4u; }
        if (ctx->pc != 0x1A22B4u) { return; }
    }
    ctx->pc = 0x1A22B4u;
label_1a22b4:
    // 0x1a22b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a22b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a22b8:
    // 0x1a22b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a22b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a22bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a22bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a22c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a22c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A22C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A22C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A22C4u;
            // 0x1a22c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A22CCu;
    // 0x1a22cc: 0x0  nop
    ctx->pc = 0x1a22ccu;
    // NOP
}
