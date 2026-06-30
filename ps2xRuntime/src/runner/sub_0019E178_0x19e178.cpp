#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019E178
// Address: 0x19e178 - 0x19e6c0
void sub_0019E178_0x19e178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E178_0x19e178");
#endif

    switch (ctx->pc) {
        case 0x19e18cu: goto label_19e18c;
        case 0x19e1a4u: goto label_19e1a4;
        case 0x19e1e8u: goto label_19e1e8;
        case 0x19e200u: goto label_19e200;
        case 0x19e210u: goto label_19e210;
        case 0x19e220u: goto label_19e220;
        case 0x19e23cu: goto label_19e23c;
        case 0x19e250u: goto label_19e250;
        case 0x19e258u: goto label_19e258;
        case 0x19e264u: goto label_19e264;
        case 0x19e270u: goto label_19e270;
        case 0x19e27cu: goto label_19e27c;
        case 0x19e294u: goto label_19e294;
        case 0x19e2d4u: goto label_19e2d4;
        case 0x19e2f0u: goto label_19e2f0;
        case 0x19e2fcu: goto label_19e2fc;
        case 0x19e310u: goto label_19e310;
        case 0x19e328u: goto label_19e328;
        case 0x19e338u: goto label_19e338;
        case 0x19e428u: goto label_19e428;
        case 0x19e4bcu: goto label_19e4bc;
        case 0x19e4f0u: goto label_19e4f0;
        case 0x19e52cu: goto label_19e52c;
        case 0x19e560u: goto label_19e560;
        case 0x19e698u: goto label_19e698;
        default: break;
    }

    ctx->pc = 0x19e178u;

    // 0x19e178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e17c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e180: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19e180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19e184: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19E184u;
    SET_GPR_U32(ctx, 31, 0x19E18Cu);
    ctx->pc = 0x19E188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E184u;
            // 0x19e188: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E18Cu; }
        if (ctx->pc != 0x19E18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E18Cu; }
        if (ctx->pc != 0x19E18Cu) { return; }
    }
    ctx->pc = 0x19E18Cu;
label_19e18c:
    // 0x19e18c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19e190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e194: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E194u;
    {
        const bool branch_taken_0x19e194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E194u;
            // 0x19e198: 0x24849ce8  addiu       $a0, $a0, -0x6318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e194) {
            ctx->pc = 0x19E1B0u;
            goto label_19e1b0;
        }
    }
    ctx->pc = 0x19E19Cu;
    // 0x19e19c: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19E19Cu;
    SET_GPR_U32(ctx, 31, 0x19E1A4u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1A4u; }
        if (ctx->pc != 0x19E1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1A4u; }
        if (ctx->pc != 0x19E1A4u) { return; }
    }
    ctx->pc = 0x19E1A4u;
label_19e1a4:
    // 0x19e1a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19E1A4u;
    {
        const bool branch_taken_0x19e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1A4u;
            // 0x19e1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1a4) {
            ctx->pc = 0x19E1B4u;
            goto label_19e1b4;
        }
    }
    ctx->pc = 0x19E1ACu;
    // 0x19e1ac: 0x0  nop
    ctx->pc = 0x19e1acu;
    // NOP
label_19e1b0:
    // 0x19e1b0: 0x8e020434  lw          $v0, 0x434($s0)
    ctx->pc = 0x19e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
label_19e1b4:
    // 0x19e1b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e1b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19e1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19E1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1BCu;
            // 0x19e1c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E1C4u;
    // 0x19e1c4: 0x0  nop
    ctx->pc = 0x19e1c4u;
    // NOP
    // 0x19e1c8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x19e1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x19e1cc: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x19e1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x19e1d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19e1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1d4: 0xffb10198  sd          $s1, 0x198($sp)
    ctx->pc = 0x19e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 17));
    // 0x19e1d8: 0xffb201a0  sd          $s2, 0x1A0($sp)
    ctx->pc = 0x19e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 18));
    // 0x19e1dc: 0xffbf01a8  sd          $ra, 0x1A8($sp)
    ctx->pc = 0x19e1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 31));
    // 0x19e1e0: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19E1E0u;
    SET_GPR_U32(ctx, 31, 0x19E1E8u);
    ctx->pc = 0x19E1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1E0u;
            // 0x19e1e4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1E8u; }
        if (ctx->pc != 0x19E1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E1E8u; }
        if (ctx->pc != 0x19E1E8u) { return; }
    }
    ctx->pc = 0x19E1E8u;
label_19e1e8:
    // 0x19e1e8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19e1ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e1f0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E1F0u;
    {
        const bool branch_taken_0x19e1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E1F0u;
            // 0x19e1f4: 0x24849d18  addiu       $a0, $a0, -0x62E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1f0) {
            ctx->pc = 0x19E218u;
            goto label_19e218;
        }
    }
    ctx->pc = 0x19E1F8u;
    // 0x19e1f8: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19E1F8u;
    SET_GPR_U32(ctx, 31, 0x19E200u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E200u; }
        if (ctx->pc != 0x19E200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E200u; }
        if (ctx->pc != 0x19E200u) { return; }
    }
    ctx->pc = 0x19E200u;
label_19e200:
    // 0x19e200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e204: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e208: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x19E208u;
    SET_GPR_U32(ctx, 31, 0x19E210u);
    ctx->pc = 0x19E20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E208u;
            // 0x19e20c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E210u; }
        if (ctx->pc != 0x19E210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E210u; }
        if (ctx->pc != 0x19E210u) { return; }
    }
    ctx->pc = 0x19E210u;
label_19e210:
    // 0x19e210: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19E210u;
    {
        const bool branch_taken_0x19e210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E210u;
            // 0x19e214: 0xdfb00190  ld          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e210) {
            ctx->pc = 0x19E2A0u;
            goto label_19e2a0;
        }
    }
    ctx->pc = 0x19E218u;
label_19e218:
    // 0x19e218: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19E218u;
    SET_GPR_U32(ctx, 31, 0x19E220u);
    ctx->pc = 0x19E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E218u;
            // 0x19e21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E220u; }
        if (ctx->pc != 0x19E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E220u; }
        if (ctx->pc != 0x19E220u) { return; }
    }
    ctx->pc = 0x19E220u;
label_19e220:
    // 0x19e220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e224: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19e224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e228: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19e228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e22c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E22Cu;
    {
        const bool branch_taken_0x19e22c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E22Cu;
            // 0x19e230: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e22c) {
            ctx->pc = 0x19E248u;
            goto label_19e248;
        }
    }
    ctx->pc = 0x19E234u;
    // 0x19e234: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x19E234u;
    SET_GPR_U32(ctx, 31, 0x19E23Cu);
    ctx->pc = 0x19E238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E234u;
            // 0x19e238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E23Cu; }
        if (ctx->pc != 0x19E23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E23Cu; }
        if (ctx->pc != 0x19E23Cu) { return; }
    }
    ctx->pc = 0x19E23Cu;
label_19e23c:
    // 0x19e23c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19E23Cu;
    {
        const bool branch_taken_0x19e23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E23Cu;
            // 0x19e240: 0xdfb00190  ld          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e23c) {
            ctx->pc = 0x19E2A0u;
            goto label_19e2a0;
        }
    }
    ctx->pc = 0x19E244u;
    // 0x19e244: 0x0  nop
    ctx->pc = 0x19e244u;
    // NOP
label_19e248:
    // 0x19e248: 0xc06d87e  jal         func_1B61F8
    ctx->pc = 0x19E248u;
    SET_GPR_U32(ctx, 31, 0x19E250u);
    ctx->pc = 0x19E24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E248u;
            // 0x19e24c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B61F8u;
    if (runtime->hasFunction(0x1B61F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B61F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E250u; }
        if (ctx->pc != 0x19E250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B61F8_0x1b61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E250u; }
        if (ctx->pc != 0x19E250u) { return; }
    }
    ctx->pc = 0x19E250u;
label_19e250:
    // 0x19e250: 0xc06741a  jal         func_19D068
    ctx->pc = 0x19E250u;
    SET_GPR_U32(ctx, 31, 0x19E258u);
    ctx->pc = 0x19E254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E250u;
            // 0x19e254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D068u;
    if (runtime->hasFunction(0x19D068u)) {
        auto targetFn = runtime->lookupFunction(0x19D068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E258u; }
        if (ctx->pc != 0x19E258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D068_0x19d068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E258u; }
        if (ctx->pc != 0x19E258u) { return; }
    }
    ctx->pc = 0x19E258u;
label_19e258:
    // 0x19e258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e25c: 0xc067434  jal         func_19D0D0
    ctx->pc = 0x19E25Cu;
    SET_GPR_U32(ctx, 31, 0x19E264u);
    ctx->pc = 0x19E260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E25Cu;
            // 0x19e260: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D0D0u;
    if (runtime->hasFunction(0x19D0D0u)) {
        auto targetFn = runtime->lookupFunction(0x19D0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E264u; }
        if (ctx->pc != 0x19E264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D0D0_0x19d0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E264u; }
        if (ctx->pc != 0x19E264u) { return; }
    }
    ctx->pc = 0x19E264u;
label_19e264:
    // 0x19e264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e268: 0xc066922  jal         func_19A488
    ctx->pc = 0x19E268u;
    SET_GPR_U32(ctx, 31, 0x19E270u);
    ctx->pc = 0x19E26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E268u;
            // 0x19e26c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A488u;
    if (runtime->hasFunction(0x19A488u)) {
        auto targetFn = runtime->lookupFunction(0x19A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E270u; }
        if (ctx->pc != 0x19E270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019A488_0x19a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E270u; }
        if (ctx->pc != 0x19E270u) { return; }
    }
    ctx->pc = 0x19E270u;
label_19e270:
    // 0x19e270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e274: 0xc067828  jal         func_19E0A0
    ctx->pc = 0x19E274u;
    SET_GPR_U32(ctx, 31, 0x19E27Cu);
    ctx->pc = 0x19E278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E274u;
            // 0x19e278: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E0A0u;
    if (runtime->hasFunction(0x19E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x19E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E27Cu; }
        if (ctx->pc != 0x19E27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E0A0_0x19e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E27Cu; }
        if (ctx->pc != 0x19E27Cu) { return; }
    }
    ctx->pc = 0x19E27Cu;
label_19e27c:
    // 0x19e27c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e280: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x19e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x19e284: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x19e284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x19e288: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x19e288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x19e28c: 0xc06d8a6  jal         func_1B6298
    ctx->pc = 0x19E28Cu;
    SET_GPR_U32(ctx, 31, 0x19E294u);
    ctx->pc = 0x19E290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E28Cu;
            // 0x19e290: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6298u;
    if (runtime->hasFunction(0x1B6298u)) {
        auto targetFn = runtime->lookupFunction(0x1B6298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E294u; }
        if (ctx->pc != 0x19E294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6298_0x1b6298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E294u; }
        if (ctx->pc != 0x19E294u) { return; }
    }
    ctx->pc = 0x19E294u;
label_19e294:
    // 0x19e294: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x19e294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19e298: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x19e298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x19e29c: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x19e29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_19e2a0:
    // 0x19e2a0: 0xdfb10198  ld          $s1, 0x198($sp)
    ctx->pc = 0x19e2a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x19e2a4: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x19e2a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x19e2a8: 0xdfbf01a8  ld          $ra, 0x1A8($sp)
    ctx->pc = 0x19e2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x19e2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19E2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2ACu;
            // 0x19e2b0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E2B4u;
    // 0x19e2b4: 0x0  nop
    ctx->pc = 0x19e2b4u;
    // NOP
    // 0x19e2b8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19e2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19e2bc: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x19e2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x19e2c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19e2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2c4: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x19e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x19e2c8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x19e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x19e2cc: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19E2CCu;
    SET_GPR_U32(ctx, 31, 0x19E2D4u);
    ctx->pc = 0x19E2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2CCu;
            // 0x19e2d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2D4u; }
        if (ctx->pc != 0x19E2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2D4u; }
        if (ctx->pc != 0x19E2D4u) { return; }
    }
    ctx->pc = 0x19E2D4u;
label_19e2d4:
    // 0x19e2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e2e0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E2E0u;
    {
        const bool branch_taken_0x19e2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2E0u;
            // 0x19e2e4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2e0) {
            ctx->pc = 0x19E308u;
            goto label_19e308;
        }
    }
    ctx->pc = 0x19E2E8u;
    // 0x19e2e8: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x19E2E8u;
    SET_GPR_U32(ctx, 31, 0x19E2F0u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2F0u; }
        if (ctx->pc != 0x19E2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2F0u; }
        if (ctx->pc != 0x19E2F0u) { return; }
    }
    ctx->pc = 0x19E2F0u;
label_19e2f0:
    // 0x19e2f0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19e2f4: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19E2F4u;
    SET_GPR_U32(ctx, 31, 0x19E2FCu);
    ctx->pc = 0x19E2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2F4u;
            // 0x19e2f8: 0x24849d48  addiu       $a0, $a0, -0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2FCu; }
        if (ctx->pc != 0x19E2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E2FCu; }
        if (ctx->pc != 0x19E2FCu) { return; }
    }
    ctx->pc = 0x19E2FCu;
label_19e2fc:
    // 0x19e2fc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19E2FCu;
    {
        const bool branch_taken_0x19e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E2FCu;
            // 0x19e300: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2fc) {
            ctx->pc = 0x19E39Cu;
            goto label_19e39c;
        }
    }
    ctx->pc = 0x19E304u;
    // 0x19e304: 0x0  nop
    ctx->pc = 0x19e304u;
    // NOP
label_19e308:
    // 0x19e308: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19E308u;
    SET_GPR_U32(ctx, 31, 0x19E310u);
    ctx->pc = 0x19E30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E308u;
            // 0x19e30c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E310u; }
        if (ctx->pc != 0x19E310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E310u; }
        if (ctx->pc != 0x19E310u) { return; }
    }
    ctx->pc = 0x19E310u;
label_19e310:
    // 0x19e310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e314: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19e314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e318: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E318u;
    {
        const bool branch_taken_0x19e318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E318u;
            // 0x19e31c: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e318) {
            ctx->pc = 0x19E330u;
            goto label_19e330;
        }
    }
    ctx->pc = 0x19E320u;
    // 0x19e320: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x19E320u;
    SET_GPR_U32(ctx, 31, 0x19E328u);
    ctx->pc = 0x19E324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E320u;
            // 0x19e324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E328u; }
        if (ctx->pc != 0x19E328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E328u; }
        if (ctx->pc != 0x19E328u) { return; }
    }
    ctx->pc = 0x19E328u;
label_19e328:
    // 0x19e328: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19E328u;
    {
        const bool branch_taken_0x19e328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E328u;
            // 0x19e32c: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e328) {
            ctx->pc = 0x19E39Cu;
            goto label_19e39c;
        }
    }
    ctx->pc = 0x19E330u;
label_19e330:
    // 0x19e330: 0xc06d87e  jal         func_1B61F8
    ctx->pc = 0x19E330u;
    SET_GPR_U32(ctx, 31, 0x19E338u);
    ctx->pc = 0x19E334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E330u;
            // 0x19e334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B61F8u;
    if (runtime->hasFunction(0x1B61F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B61F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E338u; }
        if (ctx->pc != 0x19E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B61F8_0x1b61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E338u; }
        if (ctx->pc != 0x19E338u) { return; }
    }
    ctx->pc = 0x19E338u;
label_19e338:
    // 0x19e338: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x19e338u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19e33c: 0xdfa40040  ld          $a0, 0x40($sp)
    ctx->pc = 0x19e33cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e340: 0xdfa50048  ld          $a1, 0x48($sp)
    ctx->pc = 0x19e340u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x19e344: 0xdfa60050  ld          $a2, 0x50($sp)
    ctx->pc = 0x19e344u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e348: 0xdfa70058  ld          $a3, 0x58($sp)
    ctx->pc = 0x19e348u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x19e34c: 0xdfa80060  ld          $t0, 0x60($sp)
    ctx->pc = 0x19e34cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e350: 0xdfa90068  ld          $t1, 0x68($sp)
    ctx->pc = 0x19e350u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19e354: 0xdfaa0070  ld          $t2, 0x70($sp)
    ctx->pc = 0x19e354u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e358: 0xdfab0078  ld          $t3, 0x78($sp)
    ctx->pc = 0x19e358u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x19e35c: 0xdfac0080  ld          $t4, 0x80($sp)
    ctx->pc = 0x19e35cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e360: 0xdfad0088  ld          $t5, 0x88($sp)
    ctx->pc = 0x19e360u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19e364: 0xdfa20090  ld          $v0, 0x90($sp)
    ctx->pc = 0x19e364u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19e368: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x19e368u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x19e36c: 0xfe020058  sd          $v0, 0x58($s0)
    ctx->pc = 0x19e36cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
    // 0x19e370: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x19e370u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x19e374: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x19e374u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x19e378: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x19e378u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x19e37c: 0xfe070020  sd          $a3, 0x20($s0)
    ctx->pc = 0x19e37cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 7));
    // 0x19e380: 0xfe080028  sd          $t0, 0x28($s0)
    ctx->pc = 0x19e380u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 8));
    // 0x19e384: 0xfe090030  sd          $t1, 0x30($s0)
    ctx->pc = 0x19e384u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 9));
    // 0x19e388: 0xfe0a0038  sd          $t2, 0x38($s0)
    ctx->pc = 0x19e388u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 10));
    // 0x19e38c: 0xfe0b0040  sd          $t3, 0x40($s0)
    ctx->pc = 0x19e38cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 11));
    // 0x19e390: 0xfe0c0048  sd          $t4, 0x48($s0)
    ctx->pc = 0x19e390u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 12));
    // 0x19e394: 0xfe0d0050  sd          $t5, 0x50($s0)
    ctx->pc = 0x19e394u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 13));
    // 0x19e398: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x19e398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_19e39c:
    // 0x19e39c: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x19e39cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x19e3a0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x19e3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19e3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x19E3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3A4u;
            // 0x19e3a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E3ACu;
    // 0x19e3ac: 0x0  nop
    ctx->pc = 0x19e3acu;
    // NOP
    // 0x19e3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e3b4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19e3b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e3bc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x19e3c0: 0x8c67043c  lw          $a3, 0x43C($v1)
    ctx->pc = 0x19e3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1084)));
    // 0x19e3c4: 0x24453fff  addiu       $a1, $v0, 0x3FFF
    ctx->pc = 0x19e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16383));
    // 0x19e3c8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x19e3c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x19e3cc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x19e3ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x19e3d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e3d4: 0x21383  sra         $v0, $v0, 14
    ctx->pc = 0x19e3d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 14));
    // 0x19e3d8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x19e3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e3dc: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x19e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x19e3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19e3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e3e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e3e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19e3e8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x19e3e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x19e3ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19e3ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19e3f0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x19e3f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x19e3f4: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x19e3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x19e3f8: 0xe2280b  movn        $a1, $a3, $v0
    ctx->pc = 0x19e3f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x19e3fc: 0x806753a  j           func_19D4E8
    ctx->pc = 0x19E3FCu;
    ctx->pc = 0x19E400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E3FCu;
            // 0x19e400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4E8u;
    {
        auto targetFn = runtime->lookupFunction(0x19D4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19E404u;
    // 0x19e404: 0x0  nop
    ctx->pc = 0x19e404u;
    // NOP
    // 0x19e408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e40c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e40cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e414: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x19e414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x19e418: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E418u;
    {
        const bool branch_taken_0x19e418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E418u;
            // 0x19e41c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e418) {
            ctx->pc = 0x19E42Cu;
            goto label_19e42c;
        }
    }
    ctx->pc = 0x19E420u;
    // 0x19e420: 0xc068b2c  jal         func_1A2CB0
    ctx->pc = 0x19E420u;
    SET_GPR_U32(ctx, 31, 0x19E428u);
    ctx->pc = 0x19E424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E420u;
            // 0x19e424: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2CB0u;
    if (runtime->hasFunction(0x1A2CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A2CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E428u; }
        if (ctx->pc != 0x19E428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2CB0_0x1a2cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E428u; }
        if (ctx->pc != 0x19E428u) { return; }
    }
    ctx->pc = 0x19E428u;
label_19e428:
    // 0x19e428: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19e428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19e42c:
    // 0x19e42c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e430: 0x3e00008  jr          $ra
    ctx->pc = 0x19E430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E430u;
            // 0x19e434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E438u;
    // 0x19e438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e43c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e440: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19E440u;
    {
        const bool branch_taken_0x19e440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E440u;
            // 0x19e444: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e440) {
            ctx->pc = 0x19E490u;
            goto label_19e490;
        }
    }
    ctx->pc = 0x19E448u;
    // 0x19e448: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x19e448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x19e44c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x19e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x19e450: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19E450u;
    {
        const bool branch_taken_0x19e450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E450u;
            // 0x19e454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e450) {
            ctx->pc = 0x19E480u;
            goto label_19e480;
        }
    }
    ctx->pc = 0x19E458u;
    // 0x19e458: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19E458u;
    {
        const bool branch_taken_0x19e458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E458u;
            // 0x19e45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e458) {
            ctx->pc = 0x19E490u;
            goto label_19e490;
        }
    }
    ctx->pc = 0x19E460u;
    // 0x19e460: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x19e460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x19e464: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E464u;
    {
        const bool branch_taken_0x19e464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E464u;
            // 0x19e468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e464) {
            ctx->pc = 0x19E478u;
            goto label_19e478;
        }
    }
    ctx->pc = 0x19E46Cu;
    // 0x19e46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e470: 0x8068b36  j           func_1A2CD8
    ctx->pc = 0x19E470u;
    ctx->pc = 0x19E474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E470u;
            // 0x19e474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2CD8u;
    if (runtime->hasFunction(0x1A2CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1A2CD8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A2CD8_0x1a2cd8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E478u;
label_19e478:
    // 0x19e478: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19E478u;
    {
        const bool branch_taken_0x19e478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E478u;
            // 0x19e47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e478) {
            ctx->pc = 0x19E490u;
            goto label_19e490;
        }
    }
    ctx->pc = 0x19E480u;
label_19e480:
    // 0x19e480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e484: 0x8068b36  j           func_1A2CD8
    ctx->pc = 0x19E484u;
    ctx->pc = 0x19E488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E484u;
            // 0x19e488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2CD8u;
    if (runtime->hasFunction(0x1A2CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1A2CD8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A2CD8_0x1a2cd8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E48Cu;
    // 0x19e48c: 0x0  nop
    ctx->pc = 0x19e48cu;
    // NOP
label_19e490:
    // 0x19e490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e494: 0x3e00008  jr          $ra
    ctx->pc = 0x19E494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E494u;
            // 0x19e498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E49Cu;
    // 0x19e49c: 0x0  nop
    ctx->pc = 0x19e49cu;
    // NOP
    // 0x19e4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e4a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e4a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19e4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19e4b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e4b4: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19E4B4u;
    SET_GPR_U32(ctx, 31, 0x19E4BCu);
    ctx->pc = 0x19E4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E4B4u;
            // 0x19e4b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4BCu; }
        if (ctx->pc != 0x19E4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4BCu; }
        if (ctx->pc != 0x19E4BCu) { return; }
    }
    ctx->pc = 0x19E4BCu;
label_19e4bc:
    // 0x19e4bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e4c0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E4C0u;
    {
        const bool branch_taken_0x19e4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E4C0u;
            // 0x19e4c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4c0) {
            ctx->pc = 0x19E4E8u;
            goto label_19e4e8;
        }
    }
    ctx->pc = 0x19E4C8u;
    // 0x19e4c8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19e4cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e4ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e4d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e4d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e4d4: 0x24849d78  addiu       $a0, $a0, -0x6288
    ctx->pc = 0x19e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942072));
    // 0x19e4d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e4dc: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19E4DCu;
    ctx->pc = 0x19E4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E4DCu;
            // 0x19e4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E4E4u;
    // 0x19e4e4: 0x0  nop
    ctx->pc = 0x19e4e4u;
    // NOP
label_19e4e8:
    // 0x19e4e8: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19E4E8u;
    SET_GPR_U32(ctx, 31, 0x19E4F0u);
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4F0u; }
        if (ctx->pc != 0x19E4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E4F0u; }
        if (ctx->pc != 0x19E4F0u) { return; }
    }
    ctx->pc = 0x19E4F0u;
label_19e4f0:
    // 0x19e4f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19e4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e4f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e4fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e504: 0x806c8ca  j           func_1B2328
    ctx->pc = 0x19E504u;
    ctx->pc = 0x19E508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E504u;
            // 0x19e508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2328u;
    if (runtime->hasFunction(0x1B2328u)) {
        auto targetFn = runtime->lookupFunction(0x1B2328u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B2328_0x1b2328(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E50Cu;
    // 0x19e50c: 0x0  nop
    ctx->pc = 0x19e50cu;
    // NOP
    // 0x19e510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e51c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x19e51cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19e520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19e520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19e524: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19E524u;
    SET_GPR_U32(ctx, 31, 0x19E52Cu);
    ctx->pc = 0x19E528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E524u;
            // 0x19e528: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E52Cu; }
        if (ctx->pc != 0x19E52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E52Cu; }
        if (ctx->pc != 0x19E52Cu) { return; }
    }
    ctx->pc = 0x19E52Cu;
label_19e52c:
    // 0x19e52c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e530: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E530u;
    {
        const bool branch_taken_0x19e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E530u;
            // 0x19e534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e530) {
            ctx->pc = 0x19E558u;
            goto label_19e558;
        }
    }
    ctx->pc = 0x19E538u;
    // 0x19e538: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19e538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19e53c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e540: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19e540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e544: 0x24849da8  addiu       $a0, $a0, -0x6258
    ctx->pc = 0x19e544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942120));
    // 0x19e548: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x19e548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e54c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19E54Cu;
    ctx->pc = 0x19E550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E54Cu;
            // 0x19e550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E554u;
    // 0x19e554: 0x0  nop
    ctx->pc = 0x19e554u;
    // NOP
label_19e558:
    // 0x19e558: 0xc0673f2  jal         func_19CFC8
    ctx->pc = 0x19E558u;
    SET_GPR_U32(ctx, 31, 0x19E560u);
    ctx->pc = 0x19CFC8u;
    if (runtime->hasFunction(0x19CFC8u)) {
        auto targetFn = runtime->lookupFunction(0x19CFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E560u; }
        if (ctx->pc != 0x19E560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CFC8_0x19cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E560u; }
        if (ctx->pc != 0x19E560u) { return; }
    }
    ctx->pc = 0x19E560u;
label_19e560:
    // 0x19e560: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x19e560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x19e564: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19e568: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19e568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19e56c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e574: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x19e574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x19e578: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19e578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19e57c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19e57cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19e580: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x19e580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x19e584: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x19e584u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19e588: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19e588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19e58c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19e58cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19e590: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19E590u;
    {
        const bool branch_taken_0x19e590 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E590u;
            // 0x19e594: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e590) {
            ctx->pc = 0x19E59Cu;
            goto label_19e59c;
        }
    }
    ctx->pc = 0x19E598u;
    // 0x19e598: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19e598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e59c:
    // 0x19e59c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e59cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e5a0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x19e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x19e5a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19e5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e5a8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x19e5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19e5ac: 0x806c8ca  j           func_1B2328
    ctx->pc = 0x19E5ACu;
    ctx->pc = 0x19E5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E5ACu;
            // 0x19e5b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2328u;
    if (runtime->hasFunction(0x1B2328u)) {
        auto targetFn = runtime->lookupFunction(0x1B2328u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B2328_0x1b2328(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E5B4u;
    // 0x19e5b4: 0x0  nop
    ctx->pc = 0x19e5b4u;
    // NOP
    // 0x19e5b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e5bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19e5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e5c4: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x19e5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x19e5c8: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e5cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e5d0: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19E5D0u;
    ctx->pc = 0x19E5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E5D0u;
            // 0x19e5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E5D8u;
    // 0x19e5d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e5dc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19e5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e5e4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x19e5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x19e5e8: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e5f0: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19E5F0u;
    ctx->pc = 0x19E5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E5F0u;
            // 0x19e5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E5F8u;
    // 0x19e5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e5fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19e5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e604: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x19e604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x19e608: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e610: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19E610u;
    ctx->pc = 0x19E614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E610u;
            // 0x19e614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E618u;
    // 0x19e618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e61c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19e61cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e624: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x19e624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x19e628: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e630: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19E630u;
    ctx->pc = 0x19E634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E630u;
            // 0x19e634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E638u;
    // 0x19e638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e63c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19e63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e644: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x19e644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x19e648: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e650: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19E650u;
    ctx->pc = 0x19E654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E650u;
            // 0x19e654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E658u;
    // 0x19e658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e660: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e668: 0x806d844  j           func_1B6110
    ctx->pc = 0x19E668u;
    ctx->pc = 0x19E66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E668u;
            // 0x19e66c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6110u;
    {
        auto targetFn = runtime->lookupFunction(0x1B6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19E670u;
    // 0x19e670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e678: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e680: 0x806d828  j           func_1B60A0
    ctx->pc = 0x19E680u;
    ctx->pc = 0x19E684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E680u;
            // 0x19e684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B60A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19E688u;
    // 0x19e688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e68c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e690: 0xc06d838  jal         func_1B60E0
    ctx->pc = 0x19E690u;
    SET_GPR_U32(ctx, 31, 0x19E698u);
    ctx->pc = 0x19E694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E690u;
            // 0x19e694: 0x8c840048  lw          $a0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60E0u;
    if (runtime->hasFunction(0x1B60E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E698u; }
        if (ctx->pc != 0x19E698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B60E0_0x1b60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E698u; }
        if (ctx->pc != 0x19E698u) { return; }
    }
    ctx->pc = 0x19E698u;
label_19e698:
    // 0x19e698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e69c: 0x3e00008  jr          $ra
    ctx->pc = 0x19E69Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E69Cu;
            // 0x19e6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E6A4u;
    // 0x19e6a4: 0x0  nop
    ctx->pc = 0x19e6a4u;
    // NOP
    // 0x19e6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e6ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e6b0: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x19e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19e6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e6b8: 0x806d83c  j           func_1B60F0
    ctx->pc = 0x19E6B8u;
    ctx->pc = 0x19E6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E6B8u;
            // 0x19e6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B60F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B60F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19E6C0u;
}
