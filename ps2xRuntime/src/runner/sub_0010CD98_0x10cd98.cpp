#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CD98
// Address: 0x10cd98 - 0x10ce30
void sub_0010CD98_0x10cd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CD98_0x10cd98");
#endif

    switch (ctx->pc) {
        case 0x10cdd0u: goto label_10cdd0;
        case 0x10cde4u: goto label_10cde4;
        default: break;
    }

    ctx->pc = 0x10cd98u;

    // 0x10cd98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10cd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10cd9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10cd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10cda0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10cda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10cda4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10cda4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cda8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10cdac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10cdacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cdb4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10cdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10cdb8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10cdbc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10cdbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10cdc0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CDC0u;
    {
        const bool branch_taken_0x10cdc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cdc0) {
            ctx->pc = 0x10CDD0u;
            goto label_10cdd0;
        }
    }
    ctx->pc = 0x10CDC8u;
    // 0x10cdc8: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10CDC8u;
    SET_GPR_U32(ctx, 31, 0x10CDD0u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CDD0u; }
        if (ctx->pc != 0x10CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CDD0u; }
        if (ctx->pc != 0x10CDD0u) { return; }
    }
    ctx->pc = 0x10CDD0u;
label_10cdd0:
    // 0x10cdd0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x10cdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x10cdd4: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x10cdd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x10cdd8: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x10cdd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x10cddc: 0xc04333c  jal         func_10CCF0
    ctx->pc = 0x10CDDCu;
    SET_GPR_U32(ctx, 31, 0x10CDE4u);
    ctx->pc = 0x10CDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CDDCu;
            // 0x10cde0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCF0u;
    if (runtime->hasFunction(0x10CCF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CDE4u; }
        if (ctx->pc != 0x10CDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCF0_0x10ccf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CDE4u; }
        if (ctx->pc != 0x10CDE4u) { return; }
    }
    ctx->pc = 0x10CDE4u;
label_10cde4:
    // 0x10cde4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10CDE4u;
    {
        const bool branch_taken_0x10cde4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CDE4u;
            // 0x10cde8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cde4) {
            ctx->pc = 0x10CE00u;
            goto label_10ce00;
        }
    }
    ctx->pc = 0x10CDECu;
    // 0x10cdec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10cdecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cdf0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10cdf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cdf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cdf8: 0x804597c  j           func_1165F0
    ctx->pc = 0x10CDF8u;
    ctx->pc = 0x10CDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CDF8u;
            // 0x10cdfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001165F0_0x1165f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10CE00u;
label_10ce00:
    // 0x10ce00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ce00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ce04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ce04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ce08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ce08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ce0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10CE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CE0Cu;
            // 0x10ce10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CE14u;
    // 0x10ce14: 0x0  nop
    ctx->pc = 0x10ce14u;
    // NOP
    // 0x10ce18: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10ce1c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x10ce1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x10ce20: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10ce20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10ce24: 0x804333c  j           func_10CCF0
    ctx->pc = 0x10CE24u;
    ctx->pc = 0x10CE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CE24u;
            // 0x10ce28: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCF0u;
    if (runtime->hasFunction(0x10CCF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010CCF0_0x10ccf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10CE2Cu;
    // 0x10ce2c: 0x0  nop
    ctx->pc = 0x10ce2cu;
    // NOP
}
