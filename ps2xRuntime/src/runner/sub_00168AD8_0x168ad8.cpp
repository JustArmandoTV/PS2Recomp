#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168AD8
// Address: 0x168ad8 - 0x168b88
void sub_00168AD8_0x168ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168AD8_0x168ad8");
#endif

    switch (ctx->pc) {
        case 0x168b3cu: goto label_168b3c;
        case 0x168b58u: goto label_168b58;
        case 0x168b60u: goto label_168b60;
        default: break;
    }

    ctx->pc = 0x168ad8u;

    // 0x168ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168adc: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x168adcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x168ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168ae4: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x168ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x168ae8: 0x25087c87  addiu       $t0, $t0, 0x7C87
    ctx->pc = 0x168ae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31879));
    // 0x168aec: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x168aecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x168af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168af4: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x168af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x168af8: 0x805a380  j           func_168E00
    ctx->pc = 0x168AF8u;
    ctx->pc = 0x168AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AF8u;
            // 0x168afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168E00u;
    if (runtime->hasFunction(0x168E00u)) {
        auto targetFn = runtime->lookupFunction(0x168E00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00168E00_0x168e00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x168B00u;
    // 0x168b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168b10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x168b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168b18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x168b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x168b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168b20: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x168b20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x168b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x168b28: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x168b28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b2c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x168b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x168b30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x168b34: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x168B34u;
    SET_GPR_U32(ctx, 31, 0x168B3Cu);
    ctx->pc = 0x168B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B34u;
            // 0x168b38: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B3Cu; }
        if (ctx->pc != 0x168B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B3Cu; }
        if (ctx->pc != 0x168B3Cu) { return; }
    }
    ctx->pc = 0x168B3Cu;
label_168b3c:
    // 0x168b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x168b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b48: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x168b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b4c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x168b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b50: 0xc05a2e2  jal         func_168B88
    ctx->pc = 0x168B50u;
    SET_GPR_U32(ctx, 31, 0x168B58u);
    ctx->pc = 0x168B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B50u;
            // 0x168b54: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168B88u;
    if (runtime->hasFunction(0x168B88u)) {
        auto targetFn = runtime->lookupFunction(0x168B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B58u; }
        if (ctx->pc != 0x168B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168B88_0x168b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B58u; }
        if (ctx->pc != 0x168B58u) { return; }
    }
    ctx->pc = 0x168B58u;
label_168b58:
    // 0x168b58: 0xc05adca  jal         func_16B728
    ctx->pc = 0x168B58u;
    SET_GPR_U32(ctx, 31, 0x168B60u);
    ctx->pc = 0x168B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168B58u;
            // 0x168b5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B60u; }
        if (ctx->pc != 0x168B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B60u; }
        if (ctx->pc != 0x168B60u) { return; }
    }
    ctx->pc = 0x168B60u;
label_168b60:
    // 0x168b60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168b64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168b70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x168b70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168b74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x168b74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168b78: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x168b78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168b7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168b80: 0x3e00008  jr          $ra
    ctx->pc = 0x168B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168B80u;
            // 0x168b84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168B88u;
}
