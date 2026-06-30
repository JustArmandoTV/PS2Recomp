#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211F08
// Address: 0x211f08 - 0x211f68
void sub_00211F08_0x211f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211F08_0x211f08");
#endif

    ctx->pc = 0x211f08u;

    // 0x211f08: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x211f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x211f0c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x211f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x211f10: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x211f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x211f14: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x211f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x211f18: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x211f18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x211f1c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x211f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x211f20: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x211f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x211f24: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x211f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x211f28: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x211f28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x211f2c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x211f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x211f30: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x211f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x211f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211f38: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x211F38u;
    {
        const bool branch_taken_0x211f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x211F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211F38u;
            // 0x211f3c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f38) {
            ctx->pc = 0x211F50u;
            goto label_211f50;
        }
    }
    ctx->pc = 0x211F40u;
    // 0x211f40: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x211f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x211f44: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x211f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x211f48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x211F48u;
    {
        const bool branch_taken_0x211f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211F48u;
            // 0x211f4c: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x211f48) {
            ctx->pc = 0x211F5Cu;
            goto label_211f5c;
        }
    }
    ctx->pc = 0x211F50u;
label_211f50:
    // 0x211f50: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x211f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x211f54: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x211f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x211f58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x211f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_211f5c:
    // 0x211f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x211F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211F5Cu;
            // 0x211f60: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211F64u;
    // 0x211f64: 0x0  nop
    ctx->pc = 0x211f64u;
    // NOP
}
