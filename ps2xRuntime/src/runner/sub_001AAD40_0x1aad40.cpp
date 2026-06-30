#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AAD40
// Address: 0x1aad40 - 0x1aae88
void sub_001AAD40_0x1aad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAD40_0x1aad40");
#endif

    switch (ctx->pc) {
        case 0x1aadd0u: goto label_1aadd0;
        case 0x1aae00u: goto label_1aae00;
        case 0x1aae48u: goto label_1aae48;
        default: break;
    }

    ctx->pc = 0x1aad40u;

    // 0x1aad40: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1aad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1aad44: 0x24a5001e  addiu       $a1, $a1, 0x1E
    ctx->pc = 0x1aad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x1aad48: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1aad48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aad4c: 0x24ca000f  addiu       $t2, $a2, 0xF
    ctx->pc = 0x1aad4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1aad50: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1aad50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1aad54: 0x294b0000  slti        $t3, $t2, 0x0
    ctx->pc = 0x1aad54u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aad58: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1aad58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1aad5c: 0x24c6001e  addiu       $a2, $a2, 0x1E
    ctx->pc = 0x1aad5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x1aad60: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1aad60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1aad64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1aad64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1aad68: 0x24a8003f  addiu       $t0, $a1, 0x3F
    ctx->pc = 0x1aad68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x1aad6c: 0x24a5007e  addiu       $a1, $a1, 0x7E
    ctx->pc = 0x1aad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
    // 0x1aad70: 0x2449003f  addiu       $t1, $v0, 0x3F
    ctx->pc = 0x1aad70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1aad74: 0x2442007e  addiu       $v0, $v0, 0x7E
    ctx->pc = 0x1aad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x1aad78: 0x29030000  slti        $v1, $t0, 0x0
    ctx->pc = 0x1aad78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aad7c: 0xcb500b  movn        $t2, $a2, $t3
    ctx->pc = 0x1aad7cu;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 6));
    // 0x1aad80: 0xa3400b  movn        $t0, $a1, $v1
    ctx->pc = 0x1aad80u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x1aad84: 0x29230000  slti        $v1, $t1, 0x0
    ctx->pc = 0x1aad84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1aad88: 0x43480b  movn        $t1, $v0, $v1
    ctx->pc = 0x1aad88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x1aad8c: 0x84183  sra         $t0, $t0, 6
    ctx->pc = 0x1aad8cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 6));
    // 0x1aad90: 0xa5103  sra         $t2, $t2, 4
    ctx->pc = 0x1aad90u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 4));
    // 0x1aad94: 0x94983  sra         $t1, $t1, 6
    ctx->pc = 0x1aad94u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 6));
    // 0x1aad98: 0x10a1018  mult        $v0, $t0, $t2
    ctx->pc = 0x1aad98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1aad9c: 0x712a5018  mult1       $t2, $t1, $t2
    ctx->pc = 0x1aad9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1aada0: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x1aada0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x1aada4: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1aada4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1aada8: 0xa4e8000e  sh          $t0, 0xE($a3)
    ctx->pc = 0x1aada8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x1aadac: 0xa4e9000c  sh          $t1, 0xC($a3)
    ctx->pc = 0x1aadacu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 9));
    // 0x1aadb0: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x1aadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x1aadb4: 0xa5240  sll         $t2, $t2, 9
    ctx->pc = 0x1aadb4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 9));
    // 0x1aadb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1aadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1aadbc: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1aadbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1aadc0: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x1aadc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1aadc4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1aadc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1aadc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AADC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AADCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADC8u;
            // 0x1aadcc: 0xacea0004  sw          $t2, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AADD0u;
label_1aadd0:
    // 0x1aadd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aadd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aadd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1aadd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aadd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aadd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aaddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aaddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aade0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aade0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aade4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aade4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aade8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aadec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1aadecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aadf0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1AADF0u;
    {
        const bool branch_taken_0x1aadf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADF0u;
            // 0x1aadf4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aadf0) {
            ctx->pc = 0x1AAE30u;
            goto label_1aae30;
        }
    }
    ctx->pc = 0x1AADF8u;
    // 0x1aadf8: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1AADF8u;
    SET_GPR_U32(ctx, 31, 0x1AAE00u);
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE00u; }
        if (ctx->pc != 0x1AAE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE00u; }
        if (ctx->pc != 0x1AAE00u) { return; }
    }
    ctx->pc = 0x1AAE00u;
label_1aae00:
    // 0x1aae00: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aae00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aae04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAE04u;
    {
        const bool branch_taken_0x1aae04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE04u;
            // 0x1aae08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae04) {
            ctx->pc = 0x1AAE28u;
            goto label_1aae28;
        }
    }
    ctx->pc = 0x1AAE0Cu;
    // 0x1aae0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aae0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aae10: 0x34a50181  ori         $a1, $a1, 0x181
    ctx->pc = 0x1aae10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)385);
    // 0x1aae14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aae14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aae18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aae18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aae1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aae1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aae20: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AAE20u;
    ctx->pc = 0x1AAE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE20u;
            // 0x1aae24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AAE28u;
label_1aae28:
    // 0x1aae28: 0x8e022030  lw          $v0, 0x2030($s0)
    ctx->pc = 0x1aae28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
    // 0x1aae2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aae30:
    // 0x1aae30: 0x3a220005  xori        $v0, $s1, 0x5
    ctx->pc = 0x1aae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)5);
    // 0x1aae34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aae34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae38: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1aae38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aae3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae40: 0xc06592c  jal         func_1964B0
    ctx->pc = 0x1AAE40u;
    SET_GPR_U32(ctx, 31, 0x1AAE48u);
    ctx->pc = 0x1AAE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE40u;
            // 0x1aae44: 0x242300b  movn        $a2, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1964B0u;
    if (runtime->hasFunction(0x1964B0u)) {
        auto targetFn = runtime->lookupFunction(0x1964B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE48u; }
        if (ctx->pc != 0x1AAE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001964B0_0x1964b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE48u; }
        if (ctx->pc != 0x1AAE48u) { return; }
    }
    ctx->pc = 0x1AAE48u;
label_1aae48:
    // 0x1aae48: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aae48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aae4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAE4Cu;
    {
        const bool branch_taken_0x1aae4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE4Cu;
            // 0x1aae50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae4c) {
            ctx->pc = 0x1AAE70u;
            goto label_1aae70;
        }
    }
    ctx->pc = 0x1AAE54u;
    // 0x1aae54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aae54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aae58: 0x34a50f12  ori         $a1, $a1, 0xF12
    ctx->pc = 0x1aae58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3858);
    // 0x1aae5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aae5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aae60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aae60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aae64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aae64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aae68: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AAE68u;
    ctx->pc = 0x1AAE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE68u;
            // 0x1aae6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AAE70u;
label_1aae70:
    // 0x1aae70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aae70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aae74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aae74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aae78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aae78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aae7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aae7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aae80: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE80u;
            // 0x1aae84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAE88u;
}
