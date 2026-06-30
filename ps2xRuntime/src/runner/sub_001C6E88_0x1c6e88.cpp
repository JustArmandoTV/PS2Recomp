#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6E88
// Address: 0x1c6e88 - 0x1c71c0
void sub_001C6E88_0x1c6e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6E88_0x1c6e88");
#endif

    switch (ctx->pc) {
        case 0x1c6efcu: goto label_1c6efc;
        case 0x1c6f2cu: goto label_1c6f2c;
        case 0x1c6f70u: goto label_1c6f70;
        case 0x1c6facu: goto label_1c6fac;
        case 0x1c6fd4u: goto label_1c6fd4;
        case 0x1c6fe0u: goto label_1c6fe0;
        case 0x1c7010u: goto label_1c7010;
        case 0x1c7030u: goto label_1c7030;
        case 0x1c705cu: goto label_1c705c;
        case 0x1c7068u: goto label_1c7068;
        case 0x1c7098u: goto label_1c7098;
        case 0x1c70a8u: goto label_1c70a8;
        case 0x1c7180u: goto label_1c7180;
        default: break;
    }

    ctx->pc = 0x1c6e88u;

    // 0x1c6e88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c6e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c6e8c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c6e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c6e90: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1c6e90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e94: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c6e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c6e98: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c6e98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e9c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1c6e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1c6ea0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1c6ea0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ea4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c6ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c6ea8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c6ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c6eac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c6eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c6eb0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c6eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c6eb4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c6eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1c6eb8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1c6eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1c6ebc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c6ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c6ec0: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1c6ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x1c6ec4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6EC4u;
    {
        const bool branch_taken_0x1c6ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EC4u;
            // 0x1c6ec8: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ec4) {
            ctx->pc = 0x1C6EDCu;
            goto label_1c6edc;
        }
    }
    ctx->pc = 0x1C6ECCu;
    // 0x1c6ecc: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6ECCu;
    {
        const bool branch_taken_0x1c6ecc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6ECCu;
            // 0x1c6ed0: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ecc) {
            ctx->pc = 0x1C6EE0u;
            goto label_1c6ee0;
        }
    }
    ctx->pc = 0x1C6ED4u;
    // 0x1c6ed4: 0x57c0000c  bnel        $fp, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6ED4u;
    {
        const bool branch_taken_0x1c6ed4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ed4) {
            ctx->pc = 0x1C6ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6ED4u;
            // 0x1c6ed8: 0x8fc20008  lw          $v0, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6F08u;
            goto label_1c6f08;
        }
    }
    ctx->pc = 0x1C6EDCu;
label_1c6edc:
    // 0x1c6edc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c6edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c6ee0:
    // 0x1c6ee0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c6ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c6ee4: 0x2484bff8  addiu       $a0, $a0, -0x4008
    ctx->pc = 0x1c6ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950904));
    // 0x1c6ee8: 0x24c6c010  addiu       $a2, $a2, -0x3FF0
    ctx->pc = 0x1c6ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950928));
    // 0x1c6eec: 0x24050147  addiu       $a1, $zero, 0x147
    ctx->pc = 0x1c6eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1c6ef0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ef4: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C6EF4u;
    SET_GPR_U32(ctx, 31, 0x1C6EFCu);
    ctx->pc = 0x1C6EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EF4u;
            // 0x1c6ef8: 0x2408ff9c  addiu       $t0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6EFCu; }
        if (ctx->pc != 0x1C6EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6EFCu; }
        if (ctx->pc != 0x1C6EFCu) { return; }
    }
    ctx->pc = 0x1C6EFCu;
label_1c6efc:
    // 0x1c6efc: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1C6EFCu;
    {
        const bool branch_taken_0x1c6efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EFCu;
            // 0x1c6f00: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6efc) {
            ctx->pc = 0x1C718Cu;
            goto label_1c718c;
        }
    }
    ctx->pc = 0x1C6F04u;
    // 0x1c6f04: 0x0  nop
    ctx->pc = 0x1c6f04u;
    // NOP
label_1c6f08:
    // 0x1c6f08: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1c6f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6f0c: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6F0Cu;
    {
        const bool branch_taken_0x1c6f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c6f0c) {
            ctx->pc = 0x1C6F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F0Cu;
            // 0x1c6f10: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6F40u;
            goto label_1c6f40;
        }
    }
    ctx->pc = 0x1C6F14u;
    // 0x1c6f14: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c6f18: 0x27d1000c  addiu       $s1, $fp, 0xC
    ctx->pc = 0x1c6f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x1c6f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f20: 0x24500016  addiu       $s0, $v0, 0x16
    ctx->pc = 0x1c6f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x1c6f24: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C6F24u;
    SET_GPR_U32(ctx, 31, 0x1C6F2Cu);
    ctx->pc = 0x1C6F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F24u;
            // 0x1c6f28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F2Cu; }
        if (ctx->pc != 0x1C6F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F2Cu; }
        if (ctx->pc != 0x1C6F2Cu) { return; }
    }
    ctx->pc = 0x1C6F2Cu;
label_1c6f2c:
    // 0x1c6f2c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6F2Cu;
    {
        const bool branch_taken_0x1c6f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f2c) {
            ctx->pc = 0x1C6F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F2Cu;
            // 0x1c6f30: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6F4Cu;
            goto label_1c6f4c;
        }
    }
    ctx->pc = 0x1C6F34u;
    // 0x1c6f34: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x1C6F34u;
    {
        const bool branch_taken_0x1c6f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F34u;
            // 0x1c6f38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f34) {
            ctx->pc = 0x1C7190u;
            goto label_1c7190;
        }
    }
    ctx->pc = 0x1C6F3Cu;
    // 0x1c6f3c: 0x0  nop
    ctx->pc = 0x1c6f3cu;
    // NOP
label_1c6f40:
    // 0x1c6f40: 0x27d1000c  addiu       $s1, $fp, 0xC
    ctx->pc = 0x1c6f40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    // 0x1c6f44: 0x24700016  addiu       $s0, $v1, 0x16
    ctx->pc = 0x1c6f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x1c6f48: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1c6f4c:
    // 0x1c6f4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1c6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6f50: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x1c6f50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c6f54: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1c6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c6f58: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C6F58u;
    {
        const bool branch_taken_0x1c6f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c6f58) {
            ctx->pc = 0x1C6F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F58u;
            // 0x1c6f5c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6FB8u;
            goto label_1c6fb8;
        }
    }
    ctx->pc = 0x1C6F60u;
    // 0x1c6f60: 0xafc30008  sw          $v1, 0x8($fp)
    ctx->pc = 0x1c6f60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    // 0x1c6f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f68: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x1C6F68u;
    SET_GPR_U32(ctx, 31, 0x1C6F70u);
    ctx->pc = 0x1C6F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F68u;
            // 0x1c6f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F70u; }
        if (ctx->pc != 0x1C6F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F70u; }
        if (ctx->pc != 0x1C6F70u) { return; }
    }
    ctx->pc = 0x1C6F70u;
label_1c6f70:
    // 0x1c6f70: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6f74: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x1c6f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1c6f78: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1c6f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c6f7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6F7Cu;
    {
        const bool branch_taken_0x1c6f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f7c) {
            ctx->pc = 0x1C6F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F7Cu;
            // 0x1c6f80: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6F90u;
            goto label_1c6f90;
        }
    }
    ctx->pc = 0x1C6F84u;
    // 0x1c6f84: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c6f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6F88u;
    {
        const bool branch_taken_0x1c6f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F88u;
            // 0x1c6f8c: 0x2417ff93  addiu       $s7, $zero, -0x6D (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f88) {
            ctx->pc = 0x1C6F94u;
            goto label_1c6f94;
        }
    }
    ctx->pc = 0x1C6F90u;
label_1c6f90:
    // 0x1c6f90: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1c6f90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6f94:
    // 0x1c6f94: 0x133040  sll         $a2, $s3, 1
    ctx->pc = 0x1c6f94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1c6f98: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x1c6f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x1c6f9c: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x1c6f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1c6fa0: 0x27c40018  addiu       $a0, $fp, 0x18
    ctx->pc = 0x1c6fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x1c6fa4: 0xc04a508  jal         func_129420
    ctx->pc = 0x1C6FA4u;
    SET_GPR_U32(ctx, 31, 0x1C6FACu);
    ctx->pc = 0x1C6FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FA4u;
            // 0x1c6fa8: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FACu; }
        if (ctx->pc != 0x1C6FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FACu; }
        if (ctx->pc != 0x1C6FACu) { return; }
    }
    ctx->pc = 0x1C6FACu;
label_1c6fac:
    // 0x1c6fac: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x1c6facu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
    // 0x1c6fb0: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1C6FB0u;
    {
        const bool branch_taken_0x1c6fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FB0u;
            // 0x1c6fb4: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fb0) {
            ctx->pc = 0x1C718Cu;
            goto label_1c718c;
        }
    }
    ctx->pc = 0x1C6FB8u;
label_1c6fb8:
    // 0x1c6fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fc0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c6fc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6fc4: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x1c6fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x1c6fc8: 0x27d60018  addiu       $s6, $fp, 0x18
    ctx->pc = 0x1c6fc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x1c6fcc: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x1C6FCCu;
    SET_GPR_U32(ctx, 31, 0x1C6FD4u);
    ctx->pc = 0x1C6FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FCCu;
            // 0x1c6fd0: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FD4u; }
        if (ctx->pc != 0x1C6FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FD4u; }
        if (ctx->pc != 0x1C6FD4u) { return; }
    }
    ctx->pc = 0x1C6FD4u;
label_1c6fd4:
    // 0x1c6fd4: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x1c6fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1c6fd8: 0x1a80004f  blez        $s4, . + 4 + (0x4F << 2)
    ctx->pc = 0x1C6FD8u;
    {
        const bool branch_taken_0x1c6fd8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1C6FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FD8u;
            // 0x1c6fdc: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fd8) {
            ctx->pc = 0x1C7118u;
            goto label_1c7118;
        }
    }
    ctx->pc = 0x1C6FE0u;
label_1c6fe0:
    // 0x1c6fe0: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1c6fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1c6fe4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c6fe4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c6fe8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1c6fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6fec: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x1c6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1c6ff0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1c6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c6ff4: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x1c6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1c6ff8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1c6ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6ffc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1c6ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c7000: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1c7000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7004: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1c7004u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1c7008: 0xc071180  jal         func_1C4600
    ctx->pc = 0x1C7008u;
    SET_GPR_U32(ctx, 31, 0x1C7010u);
    ctx->pc = 0x1C700Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7008u;
            // 0x1c700c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4600u;
    if (runtime->hasFunction(0x1C4600u)) {
        auto targetFn = runtime->lookupFunction(0x1C4600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7010u; }
        if (ctx->pc != 0x1C7010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4600_0x1c4600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7010u; }
        if (ctx->pc != 0x1C7010u) { return; }
    }
    ctx->pc = 0x1C7010u;
label_1c7010:
    // 0x1c7010: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1c7010u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7014: 0x12f1000c  beq         $s7, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C7014u;
    {
        const bool branch_taken_0x1c7014 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C7018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7014u;
            // 0x1c7018: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7014) {
            ctx->pc = 0x1C7048u;
            goto label_1c7048;
        }
    }
    ctx->pc = 0x1C701Cu;
    // 0x1c701c: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x1c701cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x1c7020: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7024: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7028: 0xc071442  jal         func_1C5108
    ctx->pc = 0x1C7028u;
    SET_GPR_U32(ctx, 31, 0x1C7030u);
    ctx->pc = 0x1C702Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7028u;
            // 0x1c702c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5108u;
    if (runtime->hasFunction(0x1C5108u)) {
        auto targetFn = runtime->lookupFunction(0x1C5108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7030u; }
        if (ctx->pc != 0x1C7030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5108_0x1c5108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7030u; }
        if (ctx->pc != 0x1C7030u) { return; }
    }
    ctx->pc = 0x1C7030u;
label_1c7030:
    // 0x1c7030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7034: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c7034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7038: 0x10430049  beq         $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1C7038u;
    {
        const bool branch_taken_0x1c7038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C703Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7038u;
            // 0x1c703c: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7038) {
            ctx->pc = 0x1C7160u;
            goto label_1c7160;
        }
    }
    ctx->pc = 0x1C7040u;
    // 0x1c7040: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1C7040u;
    {
        const bool branch_taken_0x1c7040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7040u;
            // 0x1c7044: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7040) {
            ctx->pc = 0x1C7190u;
            goto label_1c7190;
        }
    }
    ctx->pc = 0x1C7048u;
label_1c7048:
    // 0x1c7048: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1c7048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c704c: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1c704cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7050: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c7050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7054: 0xc071332  jal         func_1C4CC8
    ctx->pc = 0x1C7054u;
    SET_GPR_U32(ctx, 31, 0x1C705Cu);
    ctx->pc = 0x1C7058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7054u;
            // 0x1c7058: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4CC8u;
    if (runtime->hasFunction(0x1C4CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1C4CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C705Cu; }
        if (ctx->pc != 0x1C705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4CC8_0x1c4cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C705Cu; }
        if (ctx->pc != 0x1C705Cu) { return; }
    }
    ctx->pc = 0x1C705Cu;
label_1c705c:
    // 0x1c705c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1c705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1c7060: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C7060u;
    {
        const bool branch_taken_0x1c7060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7060u;
            // 0x1c7064: 0x262902a  slt         $s2, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7060) {
            ctx->pc = 0x1C7098u;
            goto label_1c7098;
        }
    }
    ctx->pc = 0x1C7068u;
label_1c7068:
    // 0x1c7068: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7068u;
    {
        const bool branch_taken_0x1c7068 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C706Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7068u;
            // 0x1c706c: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7068) {
            ctx->pc = 0x1C7080u;
            goto label_1c7080;
        }
    }
    ctx->pc = 0x1C7070u;
    // 0x1c7070: 0x9ec20000  lwu         $v0, 0x0($s6)
    ctx->pc = 0x1c7070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c7074: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1c7074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c7078: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x1c7078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
    // 0x1c707c: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x1c707cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_1c7080:
    // 0x1c7080: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1c7080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1c7084: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c7084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c7088: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x1c7088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1c708c: 0x263902a  slt         $s2, $s3, $v1
    ctx->pc = 0x1c708cu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c7090: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C7090u;
    {
        const bool branch_taken_0x1c7090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7090u;
            // 0x1c7094: 0x26d60030  addiu       $s6, $s6, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7090) {
            ctx->pc = 0x1C70FCu;
            goto label_1c70fc;
        }
    }
    ctx->pc = 0x1C7098u;
label_1c7098:
    // 0x1c7098: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C7098u;
    {
        const bool branch_taken_0x1c7098 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C709Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7098u;
            // 0x1c709c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7098) {
            ctx->pc = 0x1C7118u;
            goto label_1c7118;
        }
    }
    ctx->pc = 0x1C70A0u;
    // 0x1c70a0: 0xc071b5e  jal         func_1C6D78
    ctx->pc = 0x1C70A0u;
    SET_GPR_U32(ctx, 31, 0x1C70A8u);
    ctx->pc = 0x1C70A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70A0u;
            // 0x1c70a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6D78u;
    if (runtime->hasFunction(0x1C6D78u)) {
        auto targetFn = runtime->lookupFunction(0x1C6D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70A8u; }
        if (ctx->pc != 0x1C70A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6D78_0x1c6d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70A8u; }
        if (ctx->pc != 0x1C70A8u) { return; }
    }
    ctx->pc = 0x1C70A8u;
label_1c70a8:
    // 0x1c70a8: 0x111ac0  sll         $v1, $s1, 11
    ctx->pc = 0x1c70a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x1c70ac: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1c70acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70b0: 0x2151023  subu        $v0, $s0, $s5
    ctx->pc = 0x1c70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x1c70b4: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x1c70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x1c70b8: 0x2a33821  addu        $a3, $s5, $v1
    ctx->pc = 0x1c70b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1c70bc: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1c70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1c70c0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1c70c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c70c4: 0x24450800  addiu       $a1, $v0, 0x800
    ctx->pc = 0x1c70c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1c70c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c70c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c70cc: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1c70ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c70d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c70d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c70d4: 0x1ee0ffe4  bgtz        $s7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C70D4u;
    {
        const bool branch_taken_0x1c70d4 = (GPR_S32(ctx, 23) > 0);
        ctx->pc = 0x1C70D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70D4u;
            // 0x1c70d8: 0x282182f  dsubu       $v1, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70d4) {
            ctx->pc = 0x1C7068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7068;
        }
    }
    ctx->pc = 0x1C70DCu;
    // 0x1c70dc: 0x16e40007  bne         $s7, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C70DCu;
    {
        const bool branch_taken_0x1c70dc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c70dc) {
            ctx->pc = 0x1C70FCu;
            goto label_1c70fc;
        }
    }
    ctx->pc = 0x1C70E4u;
    // 0x1c70e4: 0x2a58021  addu        $s0, $s5, $a1
    ctx->pc = 0x1c70e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1c70e8: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x1c70e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1c70ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C70ECu;
    {
        const bool branch_taken_0x1c70ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c70ec) {
            ctx->pc = 0x1C70FCu;
            goto label_1c70fc;
        }
    }
    ctx->pc = 0x1C70F4u;
    // 0x1c70f4: 0x1c60ffe8  bgtz        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1C70F4u;
    {
        const bool branch_taken_0x1c70f4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c70f4) {
            ctx->pc = 0x1C7098u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c7098;
        }
    }
    ctx->pc = 0x1C70FCu;
label_1c70fc:
    // 0x1c70fc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C70FCu;
    {
        const bool branch_taken_0x1c70fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70FCu;
            // 0x1c7100: 0x1112c0  sll         $v0, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70fc) {
            ctx->pc = 0x1C7118u;
            goto label_1c7118;
        }
    }
    ctx->pc = 0x1C7104u;
    // 0x1c7104: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1c7104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7108: 0x282a02f  dsubu       $s4, $s4, $v0
    ctx->pc = 0x1c7108u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) - GPR_U64(ctx, 2));
    // 0x1c710c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c7110: 0x1e80ffb3  bgtz        $s4, . + 4 + (-0x4D << 2)
    ctx->pc = 0x1C7110u;
    {
        const bool branch_taken_0x1c7110 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x1C7114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7110u;
            // 0x1c7114: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7110) {
            ctx->pc = 0x1C6FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6fe0;
        }
    }
    ctx->pc = 0x1C7118u;
label_1c7118:
    // 0x1c7118: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x1c7118u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
    // 0x1c711c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1c711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1c7120: 0x1662001a  bne         $s3, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C7120u;
    {
        const bool branch_taken_0x1c7120 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7120u;
            // 0x1c7124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7120) {
            ctx->pc = 0x1C718Cu;
            goto label_1c718c;
        }
    }
    ctx->pc = 0x1C7128u;
    // 0x1c7128: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C7128u;
    {
        const bool branch_taken_0x1c7128 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7128u;
            // 0x1c712c: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7128) {
            ctx->pc = 0x1C7188u;
            goto label_1c7188;
        }
    }
    ctx->pc = 0x1C7130u;
    // 0x1c7130: 0x56820009  bnel        $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7130u;
    {
        const bool branch_taken_0x1c7130 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c7130) {
            ctx->pc = 0x1C7134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7130u;
            // 0x1c7134: 0xafc00008  sw          $zero, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7158u;
            goto label_1c7158;
        }
    }
    ctx->pc = 0x1C7138u;
    // 0x1c7138: 0x26a20800  addiu       $v0, $s5, 0x800
    ctx->pc = 0x1c7138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 2048));
    // 0x1c713c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c713cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c7140: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C7140u;
    {
        const bool branch_taken_0x1c7140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7140u;
            // 0x1c7144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7140) {
            ctx->pc = 0x1C718Cu;
            goto label_1c718c;
        }
    }
    ctx->pc = 0x1C7148u;
    // 0x1c7148: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1c7148u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c714c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1C714Cu;
    {
        const bool branch_taken_0x1c714c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c714c) {
            ctx->pc = 0x1C7150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C714Cu;
            // 0x1c7150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C718Cu;
            goto label_1c718c;
        }
    }
    ctx->pc = 0x1C7154u;
    // 0x1c7154: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x1c7154u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_1c7158:
    // 0x1c7158: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C7158u;
    {
        const bool branch_taken_0x1c7158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C715Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7158u;
            // 0x1c715c: 0x2402ff93  addiu       $v0, $zero, -0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967187));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7158) {
            ctx->pc = 0x1C718Cu;
            goto label_1c718c;
        }
    }
    ctx->pc = 0x1C7160u;
label_1c7160:
    // 0x1c7160: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c7160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c7164: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c7164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c7168: 0x2484bff8  addiu       $a0, $a0, -0x4008
    ctx->pc = 0x1c7168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950904));
    // 0x1c716c: 0x24c6c010  addiu       $a2, $a2, -0x3FF0
    ctx->pc = 0x1c716cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950928));
    // 0x1c7170: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1c7170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7174: 0x24050187  addiu       $a1, $zero, 0x187
    ctx->pc = 0x1c7174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 391));
    // 0x1c7178: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C7178u;
    SET_GPR_U32(ctx, 31, 0x1C7180u);
    ctx->pc = 0x1C717Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7178u;
            // 0x1c717c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7180u; }
        if (ctx->pc != 0x1C7180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7180u; }
        if (ctx->pc != 0x1C7180u) { return; }
    }
    ctx->pc = 0x1C7180u;
label_1c7180:
    // 0x1c7180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7180u;
    {
        const bool branch_taken_0x1c7180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7180u;
            // 0x1c7184: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7180) {
            ctx->pc = 0x1C7190u;
            goto label_1c7190;
        }
    }
    ctx->pc = 0x1C7188u;
label_1c7188:
    // 0x1c7188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c7188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c718c:
    // 0x1c718c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c718cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7190:
    // 0x1c7190: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c7190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c7194: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c7194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7198: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c7198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c719c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c719cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c71a0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c71a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c71a4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c71a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c71a8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1c71a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c71ac: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1c71acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c71b0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c71b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c71b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C71B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C71B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71B4u;
            // 0x1c71b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C71BCu;
    // 0x1c71bc: 0x0  nop
    ctx->pc = 0x1c71bcu;
    // NOP
}
