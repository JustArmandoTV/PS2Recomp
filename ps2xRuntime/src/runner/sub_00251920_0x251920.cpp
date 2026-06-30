#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00251920
// Address: 0x251920 - 0x251a10
void sub_00251920_0x251920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251920_0x251920");
#endif

    switch (ctx->pc) {
        case 0x25196cu: goto label_25196c;
        case 0x2519d0u: goto label_2519d0;
        default: break;
    }

    ctx->pc = 0x251920u;

    // 0x251920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x251920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x251924: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x251924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x251928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25192c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251930: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x251930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251938: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x251938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25193c: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x25193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x251940: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x251940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x251944: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x251944u;
    {
        const bool branch_taken_0x251944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x251948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251944u;
            // 0x251948: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251944) {
            ctx->pc = 0x2519A0u;
            goto label_2519a0;
        }
    }
    ctx->pc = 0x25194Cu;
    // 0x25194c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x25194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x251950: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x251950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251954: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x251954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x251958: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x251958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x25195c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25195Cu;
    {
        const bool branch_taken_0x25195c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x251960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25195Cu;
            // 0x251960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25195c) {
            ctx->pc = 0x251970u;
            goto label_251970;
        }
    }
    ctx->pc = 0x251964u;
    // 0x251964: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x251964u;
    SET_GPR_U32(ctx, 31, 0x25196Cu);
    ctx->pc = 0x251968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251964u;
            // 0x251968: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25196Cu; }
        if (ctx->pc != 0x25196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25196Cu; }
        if (ctx->pc != 0x25196Cu) { return; }
    }
    ctx->pc = 0x25196Cu;
label_25196c:
    // 0x25196c: 0x0  nop
    ctx->pc = 0x25196cu;
    // NOP
label_251970:
    // 0x251970: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x251970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251974: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x251974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x251978: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x251978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x25197c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x25197cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x251980: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x251980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251984: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x251984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x251988: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x251988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25198c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25198cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x251990: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x251990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x251994: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x251994u;
    {
        const bool branch_taken_0x251994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251994u;
            // 0x251998: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251994) {
            ctx->pc = 0x2519F0u;
            goto label_2519f0;
        }
    }
    ctx->pc = 0x25199Cu;
    // 0x25199c: 0x0  nop
    ctx->pc = 0x25199cu;
    // NOP
label_2519a0:
    // 0x2519a0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2519a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2519a4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2519a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2519a8: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x2519a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2519ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2519acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2519b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2519b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2519b4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2519b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2519b8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2519b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2519bc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2519BCu;
    {
        const bool branch_taken_0x2519bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2519C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2519BCu;
            // 0x2519c0: 0x30d1ffff  andi        $s1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519bc) {
            ctx->pc = 0x2519D0u;
            goto label_2519d0;
        }
    }
    ctx->pc = 0x2519C4u;
    // 0x2519c4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2519c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2519c8: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2519C8u;
    SET_GPR_U32(ctx, 31, 0x2519D0u);
    ctx->pc = 0x2519CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2519C8u;
            // 0x2519cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2519D0u; }
        if (ctx->pc != 0x2519D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2519D0u; }
        if (ctx->pc != 0x2519D0u) { return; }
    }
    ctx->pc = 0x2519D0u;
label_2519d0:
    // 0x2519d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2519d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2519d4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2519d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2519d8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2519d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2519dc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2519dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2519e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2519e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2519e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2519e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2519e8: 0xa4710000  sh          $s1, 0x0($v1)
    ctx->pc = 0x2519e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x2519ec: 0x0  nop
    ctx->pc = 0x2519ecu;
    // NOP
label_2519f0:
    // 0x2519f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2519f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2519f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2519f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2519f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2519f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2519fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2519fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251a00: 0x3e00008  jr          $ra
    ctx->pc = 0x251A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251A00u;
            // 0x251a04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251A08u;
    // 0x251a08: 0x0  nop
    ctx->pc = 0x251a08u;
    // NOP
    // 0x251a0c: 0x0  nop
    ctx->pc = 0x251a0cu;
    // NOP
}
