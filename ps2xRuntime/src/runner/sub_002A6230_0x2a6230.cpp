#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A6230
// Address: 0x2a6230 - 0x2a6300
void sub_002A6230_0x2a6230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6230_0x2a6230");
#endif

    switch (ctx->pc) {
        case 0x2a6250u: goto label_2a6250;
        case 0x2a62c0u: goto label_2a62c0;
        case 0x2a62e4u: goto label_2a62e4;
        default: break;
    }

    ctx->pc = 0x2a6230u;

    // 0x2a6230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a6230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a6234: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a6234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a6238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a623c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a623cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a6240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a6240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6244: 0x8c50e400  lw          $s0, -0x1C00($v0)
    ctx->pc = 0x2a6244u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
    // 0x2a6248: 0xc040180  jal         func_100600
    ctx->pc = 0x2A6248u;
    SET_GPR_U32(ctx, 31, 0x2A6250u);
    ctx->pc = 0x2A624Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6248u;
            // 0x2a624c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6250u; }
        if (ctx->pc != 0x2A6250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6250u; }
        if (ctx->pc != 0x2A6250u) { return; }
    }
    ctx->pc = 0x2A6250u;
label_2a6250:
    // 0x2a6250: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A6250u;
    {
        const bool branch_taken_0x2a6250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6250u;
            // 0x2a6254: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6250) {
            ctx->pc = 0x2A6288u;
            goto label_2a6288;
        }
    }
    ctx->pc = 0x2A6258u;
    // 0x2a6258: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a6258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a625c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2a625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a6260: 0x2463fb70  addiu       $v1, $v1, -0x490
    ctx->pc = 0x2a6260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966128));
    // 0x2a6264: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a6264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a6268: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x2a6268u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a626c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2a626cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2a6270: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2a6270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2a6274: 0x24635990  addiu       $v1, $v1, 0x5990
    ctx->pc = 0x2a6274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22928));
    // 0x2a6278: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2a6278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2a627c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a627cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a6280: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a6280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2a6284: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2a6284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2a6288:
    // 0x2a6288: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x2a6288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
    // 0x2a628c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2a628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2a6290: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a6290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a6294: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6298: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2a6298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2a629c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2a629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a62a0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2a62a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2a62a4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2a62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2a62a8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2a62a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2a62ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a62acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a62b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2a62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a62b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a62b8: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A62B8u;
    SET_GPR_U32(ctx, 31, 0x2A62C0u);
    ctx->pc = 0x2A62BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A62B8u;
            // 0x2a62bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62C0u; }
        if (ctx->pc != 0x2A62C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62C0u; }
        if (ctx->pc != 0x2A62C0u) { return; }
    }
    ctx->pc = 0x2A62C0u;
label_2a62c0:
    // 0x2a62c0: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x2a62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x2a62c4: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x2a62c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2a62c8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2a62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2a62cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a62ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a62d0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2a62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a62d4: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x2a62d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2a62d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a62d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a62dc: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2A62DCu;
    SET_GPR_U32(ctx, 31, 0x2A62E4u);
    ctx->pc = 0x2A62E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A62DCu;
            // 0x2a62e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62E4u; }
        if (ctx->pc != 0x2A62E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A62E4u; }
        if (ctx->pc != 0x2A62E4u) { return; }
    }
    ctx->pc = 0x2A62E4u;
label_2a62e4:
    // 0x2a62e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a62e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a62e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a62e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a62ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a62ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a62f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a62f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a62f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A62F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A62F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A62F4u;
            // 0x2a62f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A62FCu;
    // 0x2a62fc: 0x0  nop
    ctx->pc = 0x2a62fcu;
    // NOP
}
