#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2120
// Address: 0x1b2120 - 0x1b21b0
void sub_001B2120_0x1b2120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2120_0x1b2120");
#endif

    switch (ctx->pc) {
        case 0x1b213cu: goto label_1b213c;
        case 0x1b2190u: goto label_1b2190;
        default: break;
    }

    ctx->pc = 0x1b2120u;

    // 0x1b2120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2124: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2128: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b212c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2130: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2134: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B2134u;
    SET_GPR_U32(ctx, 31, 0x1B213Cu);
    ctx->pc = 0x1B2138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2134u;
            // 0x1b2138: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B213Cu; }
        if (ctx->pc != 0x1B213Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B213Cu; }
        if (ctx->pc != 0x1B213Cu) { return; }
    }
    ctx->pc = 0x1B213Cu;
label_1b213c:
    // 0x1b213c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b213cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b2140: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2144: 0x34a50142  ori         $a1, $a1, 0x142
    ctx->pc = 0x1b2144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)322);
    // 0x1b2148: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2148u;
    {
        const bool branch_taken_0x1b2148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2148u;
            // 0x1b214c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2148) {
            ctx->pc = 0x1B2168u;
            goto label_1b2168;
        }
    }
    ctx->pc = 0x1B2150u;
    // 0x1b2150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2154: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b215c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B215Cu;
    ctx->pc = 0x1B2160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B215Cu;
            // 0x1b2160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2164u;
    // 0x1b2164: 0x0  nop
    ctx->pc = 0x1b2164u;
    // NOP
label_1b2168:
    // 0x1b2168: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x1b2168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1b216c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b216cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2170: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2170u;
    {
        const bool branch_taken_0x1b2170 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2170u;
            // 0x1b2174: 0x64300b  movn        $a2, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2170) {
            ctx->pc = 0x1B2180u;
            goto label_1b2180;
        }
    }
    ctx->pc = 0x1B2178u;
    // 0x1b2178: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2178u;
    {
        const bool branch_taken_0x1b2178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B217Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2178u;
            // 0x1b217c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2178) {
            ctx->pc = 0x1B2198u;
            goto label_1b2198;
        }
    }
    ctx->pc = 0x1B2180u;
label_1b2180:
    // 0x1b2180: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x1b2180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x1b2184: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b2184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2188: 0xc06c86c  jal         func_1B21B0
    ctx->pc = 0x1B2188u;
    SET_GPR_U32(ctx, 31, 0x1B2190u);
    ctx->pc = 0x1B218Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2188u;
            // 0x1b218c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B21B0u;
    if (runtime->hasFunction(0x1B21B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B21B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2190u; }
        if (ctx->pc != 0x1B2190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B21B0_0x1b21b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2190u; }
        if (ctx->pc != 0x1B2190u) { return; }
    }
    ctx->pc = 0x1B2190u;
label_1b2190:
    // 0x1b2190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2194: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1b2194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_1b2198:
    // 0x1b2198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b219c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b219cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b21a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b21a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b21a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B21A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B21A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21A4u;
            // 0x1b21a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B21ACu;
    // 0x1b21ac: 0x0  nop
    ctx->pc = 0x1b21acu;
    // NOP
}
