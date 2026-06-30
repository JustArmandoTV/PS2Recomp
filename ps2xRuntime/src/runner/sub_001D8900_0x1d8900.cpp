#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8900
// Address: 0x1d8900 - 0x1d89b0
void sub_001D8900_0x1d8900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8900_0x1d8900");
#endif

    switch (ctx->pc) {
        case 0x1d894cu: goto label_1d894c;
        case 0x1d897cu: goto label_1d897c;
        default: break;
    }

    ctx->pc = 0x1d8900u;

    // 0x1d8900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d8900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d8904: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1d8904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1d8908: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d8908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d890c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d890cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8910: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d8910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d8914: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d8914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d8918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d8918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d891c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d891cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d8920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d8924: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d8924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d8928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d892c: 0x24540eb0  addiu       $s4, $v0, 0xEB0
    ctx->pc = 0x1d892cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x1d8930: 0x8c420eb0  lw          $v0, 0xEB0($v0)
    ctx->pc = 0x1d8930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3760)));
    // 0x1d8934: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d8934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8938: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1d8938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d893c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D893Cu;
    {
        const bool branch_taken_0x1d893c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D893Cu;
            // 0x1d8940: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d893c) {
            ctx->pc = 0x1D8988u;
            goto label_1d8988;
        }
    }
    ctx->pc = 0x1D8944u;
    // 0x1d8944: 0xc040180  jal         func_100600
    ctx->pc = 0x1D8944u;
    SET_GPR_U32(ctx, 31, 0x1D894Cu);
    ctx->pc = 0x1D8948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8944u;
            // 0x1d8948: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D894Cu; }
        if (ctx->pc != 0x1D894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D894Cu; }
        if (ctx->pc != 0x1D894Cu) { return; }
    }
    ctx->pc = 0x1D894Cu;
label_1d894c:
    // 0x1d894c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D894Cu;
    {
        const bool branch_taken_0x1d894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d894c) {
            ctx->pc = 0x1D8950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D894Cu;
            // 0x1d8950: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8980u;
            goto label_1d8980;
        }
    }
    ctx->pc = 0x1D8954u;
    // 0x1d8954: 0x826911aa  lb          $t1, 0x11AA($s3)
    ctx->pc = 0x1d8954u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
    // 0x1d8958: 0x3608000a  ori         $t0, $s0, 0xA
    ctx->pc = 0x1d8958u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)10);
    // 0x1d895c: 0x8e6a0d98  lw          $t2, 0xD98($s3)
    ctx->pc = 0x1d895cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
    // 0x1d8960: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8964: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1d8964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d8968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d896c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d896cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8970: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d8970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d8974: 0xc0b9404  jal         func_2E5010
    ctx->pc = 0x1D8974u;
    SET_GPR_U32(ctx, 31, 0x1D897Cu);
    ctx->pc = 0x1D8978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8974u;
            // 0x1d8978: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D897Cu; }
        if (ctx->pc != 0x1D897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D897Cu; }
        if (ctx->pc != 0x1D897Cu) { return; }
    }
    ctx->pc = 0x1D897Cu;
label_1d897c:
    // 0x1d897c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1d897cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1d8980:
    // 0x1d8980: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8980u;
    {
        const bool branch_taken_0x1d8980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8980u;
            // 0x1d8984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8980) {
            ctx->pc = 0x1D898Cu;
            goto label_1d898c;
        }
    }
    ctx->pc = 0x1D8988u;
label_1d8988:
    // 0x1d8988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d898c:
    // 0x1d898c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d898cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8990: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8990u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8994: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d8994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d899c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d899cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d89a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d89a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d89a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D89A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89A4u;
            // 0x1d89a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D89ACu;
    // 0x1d89ac: 0x0  nop
    ctx->pc = 0x1d89acu;
    // NOP
}
