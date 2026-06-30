#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEE58
// Address: 0x1bee58 - 0x1bef98
void sub_001BEE58_0x1bee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEE58_0x1bee58");
#endif

    switch (ctx->pc) {
        case 0x1bef08u: goto label_1bef08;
        case 0x1bef34u: goto label_1bef34;
        default: break;
    }

    ctx->pc = 0x1bee58u;

    // 0x1bee58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bee5c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1bee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bee60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bee64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bee68: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1bee68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1bee6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bee6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bee70: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bee70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bee74: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1bee74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1bee78: 0x806fba0  j           func_1BEE80
    ctx->pc = 0x1BEE78u;
    ctx->pc = 0x1BEE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEE78u;
            // 0x1bee7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE80u;
    goto label_1bee80;
    ctx->pc = 0x1BEE80u;
label_1bee80:
    // 0x1bee80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bee84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bee84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee88: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1bee88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1bee8c: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x1bee8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x1bee90: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1bee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1bee94: 0x24540028  addiu       $s4, $v0, 0x28
    ctx->pc = 0x1bee94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1bee98: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1bee9c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1bee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1beea0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1beea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1beea4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1beea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1beea8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1beea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1beeac: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x1beeacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1beeb0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BEEB0u;
    {
        const bool branch_taken_0x1beeb0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEEB0u;
            // 0x1beeb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beeb0) {
            ctx->pc = 0x1BEED8u;
            goto label_1beed8;
        }
    }
    ctx->pc = 0x1BEEB8u;
    // 0x1beeb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1beeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beebc: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1beebcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1beec0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1beec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1beec4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1beec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1beec8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1beec8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1beecc: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1beeccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x1beed0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1BEED0u;
    {
        const bool branch_taken_0x1beed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEED0u;
            // 0x1beed4: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beed0) {
            ctx->pc = 0x1BEF48u;
            goto label_1bef48;
        }
    }
    ctx->pc = 0x1BEED8u;
label_1beed8:
    // 0x1beed8: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x1beed8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x1beedc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1beedcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1beee0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1beee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1beee4: 0x2610b608  addiu       $s0, $s0, -0x49F8
    ctx->pc = 0x1beee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948360));
    // 0x1beee8: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1beee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1beeec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1beeecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beef0: 0x24a5b600  addiu       $a1, $a1, -0x4A00
    ctx->pc = 0x1beef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
    // 0x1beef4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1beef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beef8: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1beef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x1beefc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1beefcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bef00: 0xc061cb0  jal         func_1872C0
    ctx->pc = 0x1BEF00u;
    SET_GPR_U32(ctx, 31, 0x1BEF08u);
    ctx->pc = 0x1BEF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF00u;
            // 0x1bef04: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1872C0u;
    if (runtime->hasFunction(0x1872C0u)) {
        auto targetFn = runtime->lookupFunction(0x1872C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF08u; }
        if (ctx->pc != 0x1BEF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001872C0_0x1872c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF08u; }
        if (ctx->pc != 0x1BEF08u) { return; }
    }
    ctx->pc = 0x1BEF08u;
label_1bef08:
    // 0x1bef08: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1bef08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bef0c: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1bef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1bef10: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1bef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bef14: 0x24a5b610  addiu       $a1, $a1, -0x49F0
    ctx->pc = 0x1bef14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
    // 0x1bef18: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x1bef18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x1bef1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bef1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef20: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1bef20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1bef24: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bef24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bef28: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x1bef28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x1bef2c: 0xc061cb0  jal         func_1872C0
    ctx->pc = 0x1BEF2Cu;
    SET_GPR_U32(ctx, 31, 0x1BEF34u);
    ctx->pc = 0x1BEF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF2Cu;
            // 0x1bef30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1872C0u;
    if (runtime->hasFunction(0x1872C0u)) {
        auto targetFn = runtime->lookupFunction(0x1872C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF34u; }
        if (ctx->pc != 0x1BEF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001872C0_0x1872c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEF34u; }
        if (ctx->pc != 0x1BEF34u) { return; }
    }
    ctx->pc = 0x1BEF34u;
label_1bef34:
    // 0x1bef34: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x1bef34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x1bef38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bef3c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1bef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1bef40: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1bef40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x1bef44: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1bef44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_1bef48:
    // 0x1bef48: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bef48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bef4c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bef4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bef50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bef50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bef54: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1bef54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bef58: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bef58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bef5c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1bef5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1bef60: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF60u;
            // 0x1bef64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEF68u;
    // 0x1bef68: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bef68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bef6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bef70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bef74: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEF74u;
    {
        const bool branch_taken_0x1bef74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bef74) {
            ctx->pc = 0x1BEF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF74u;
            // 0x1bef78: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEF88u;
            goto label_1bef88;
        }
    }
    ctx->pc = 0x1BEF7Cu;
    // 0x1bef7c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1bef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1bef80: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF80u;
            // 0x1bef84: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEF88u;
label_1bef88:
    // 0x1bef88: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1bef88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bef8c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1bef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1bef90: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEF90u;
            // 0x1bef94: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEF98u;
}
