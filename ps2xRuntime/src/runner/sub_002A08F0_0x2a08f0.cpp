#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A08F0
// Address: 0x2a08f0 - 0x2a0990
void sub_002A08F0_0x2a08f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A08F0_0x2a08f0");
#endif

    switch (ctx->pc) {
        case 0x2a0974u: goto label_2a0974;
        default: break;
    }

    ctx->pc = 0x2a08f0u;

    // 0x2a08f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a08f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a08f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a08f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a08f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a08f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a08fc: 0x71e3c  dsll32      $v1, $a3, 24
    ctx->pc = 0x2a08fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2a0900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a0904: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2a0904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2a0908: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a0908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a090c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2a090cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2a0910: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a0914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0918: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2a0918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2a091c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a091cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a0920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0924: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2a0924u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a0928: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a092c: 0x2442f8a0  addiu       $v0, $v0, -0x760
    ctx->pc = 0x2a092cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965408));
    // 0x2a0930: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a0930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a0934: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2a0934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2a0938: 0x2442f910  addiu       $v0, $v0, -0x6F0
    ctx->pc = 0x2a0938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965520));
    // 0x2a093c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a093cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a0940: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a0940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a0944: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2a0944u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x2a0948: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0948u;
    {
        const bool branch_taken_0x2a0948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0948u;
            // 0x2a094c: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0948) {
            ctx->pc = 0x2A0958u;
            goto label_2a0958;
        }
    }
    ctx->pc = 0x2A0950u;
    // 0x2a0950: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0950u;
    {
        const bool branch_taken_0x2a0950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0950u;
            // 0x2a0954: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0950) {
            ctx->pc = 0x2A095Cu;
            goto label_2a095c;
        }
    }
    ctx->pc = 0x2A0958u;
label_2a0958:
    // 0x2a0958: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2a0958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a095c:
    // 0x2a095c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2a095cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2a0960: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0960u;
    {
        const bool branch_taken_0x2a0960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0960u;
            // 0x2a0964: 0xa2000018  sb          $zero, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0960) {
            ctx->pc = 0x2A0974u;
            goto label_2a0974;
        }
    }
    ctx->pc = 0x2A0968u;
    // 0x2a0968: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a0968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a096c: 0xc0a8458  jal         func_2A1160
    ctx->pc = 0x2A096Cu;
    SET_GPR_U32(ctx, 31, 0x2A0974u);
    ctx->pc = 0x2A0970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A096Cu;
            // 0x2a0970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1160u;
    if (runtime->hasFunction(0x2A1160u)) {
        auto targetFn = runtime->lookupFunction(0x2A1160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0974u; }
        if (ctx->pc != 0x2A0974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1160_0x2a1160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0974u; }
        if (ctx->pc != 0x2A0974u) { return; }
    }
    ctx->pc = 0x2A0974u;
label_2a0974:
    // 0x2a0974: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a0974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a097c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a097cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0980: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0980u;
            // 0x2a0984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0988u;
    // 0x2a0988: 0x0  nop
    ctx->pc = 0x2a0988u;
    // NOP
    // 0x2a098c: 0x0  nop
    ctx->pc = 0x2a098cu;
    // NOP
}
