#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015BD20
// Address: 0x15bd20 - 0x15bf80
void sub_0015BD20_0x15bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BD20_0x15bd20");
#endif

    switch (ctx->pc) {
        case 0x15bd78u: goto label_15bd78;
        case 0x15bd90u: goto label_15bd90;
        default: break;
    }

    ctx->pc = 0x15bd20u;

    // 0x15bd20: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x15bd24: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x15bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x15bd28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15bd2c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15bd30: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15bd34: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x15bd34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15bd3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15bd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15bd40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15bd44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15bd44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15bd4c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x15bd4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15bd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15bd54: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x15bd54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15bd5c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x15bd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd60: 0xafaa00bc  sw          $t2, 0xBC($sp)
    ctx->pc = 0x15bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 10));
    // 0x15bd64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15bd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd68: 0xafab00b8  sw          $t3, 0xB8($sp)
    ctx->pc = 0x15bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 11));
    // 0x15bd6c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x15bd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x15bd70: 0xc056eb4  jal         func_15BAD0
    ctx->pc = 0x15BD70u;
    SET_GPR_U32(ctx, 31, 0x15BD78u);
    ctx->pc = 0x15BD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD70u;
            // 0x15bd74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BAD0u;
    if (runtime->hasFunction(0x15BAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15BAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BD78u; }
        if (ctx->pc != 0x15BD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BAD0_0x15bad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BD78u; }
        if (ctx->pc != 0x15BD78u) { return; }
    }
    ctx->pc = 0x15BD78u;
label_15bd78:
    // 0x15bd78: 0x16720003  bne         $s3, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BD78u;
    {
        const bool branch_taken_0x15bd78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x15BD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD78u;
            // 0x15bd7c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd78) {
            ctx->pc = 0x15BD88u;
            goto label_15bd88;
        }
    }
    ctx->pc = 0x15BD80u;
    // 0x15bd80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15BD80u;
    {
        const bool branch_taken_0x15bd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD80u;
            // 0x15bd84: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd80) {
            ctx->pc = 0x15BD94u;
            goto label_15bd94;
        }
    }
    ctx->pc = 0x15BD88u;
label_15bd88:
    // 0x15bd88: 0xc056eb4  jal         func_15BAD0
    ctx->pc = 0x15BD88u;
    SET_GPR_U32(ctx, 31, 0x15BD90u);
    ctx->pc = 0x15BD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD88u;
            // 0x15bd8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BAD0u;
    if (runtime->hasFunction(0x15BAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15BAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BD90u; }
        if (ctx->pc != 0x15BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BAD0_0x15bad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BD90u; }
        if (ctx->pc != 0x15BD90u) { return; }
    }
    ctx->pc = 0x15BD90u;
label_15bd90:
    // 0x15bd90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15bd90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15bd94:
    // 0x15bd94: 0x132982  srl         $a1, $s3, 6
    ctx->pc = 0x15bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 19), 6));
    // 0x15bd98: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BD98u;
    {
        const bool branch_taken_0x15bd98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bd98) {
            ctx->pc = 0x15BD9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD98u;
            // 0x15bd9c: 0x8fa400e0  lw          $a0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BDA8u;
            goto label_15bda8;
        }
    }
    ctx->pc = 0x15BDA0u;
    // 0x15bda0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bda4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x15bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_15bda8:
    // 0x15bda8: 0x2c810004  sltiu       $at, $a0, 0x4
    ctx->pc = 0x15bda8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x15bdac: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BDACu;
    {
        const bool branch_taken_0x15bdac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bdac) {
            ctx->pc = 0x15BDBCu;
            goto label_15bdbc;
        }
    }
    ctx->pc = 0x15BDB4u;
    // 0x15bdb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15bdb8: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x15bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_15bdbc:
    // 0x15bdbc: 0x5280001e  beql        $s4, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x15BDBCu;
    {
        const bool branch_taken_0x15bdbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bdbc) {
            ctx->pc = 0x15BDC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDBCu;
            // 0x15bdc0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BE38u;
            goto label_15be38;
        }
    }
    ctx->pc = 0x15BDC4u;
    // 0x15bdc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bdc8: 0x1284001a  beq         $s4, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x15BDC8u;
    {
        const bool branch_taken_0x15bdc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x15bdc8) {
            ctx->pc = 0x15BE34u;
            goto label_15be34;
        }
    }
    ctx->pc = 0x15BDD0u;
    // 0x15bdd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15bdd4: 0x12840017  beq         $s4, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15BDD4u;
    {
        const bool branch_taken_0x15bdd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x15bdd4) {
            ctx->pc = 0x15BE34u;
            goto label_15be34;
        }
    }
    ctx->pc = 0x15BDDCu;
    // 0x15bddc: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x15bddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x15bde0: 0x52840010  beql        $s4, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15BDE0u;
    {
        const bool branch_taken_0x15bde0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x15bde0) {
            ctx->pc = 0x15BDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDE0u;
            // 0x15bde4: 0x8fa400b8  lw          $a0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BE24u;
            goto label_15be24;
        }
    }
    ctx->pc = 0x15BDE8u;
    // 0x15bde8: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x15bde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15bdec: 0x1284000c  beq         $s4, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x15BDECu;
    {
        const bool branch_taken_0x15bdec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x15bdec) {
            ctx->pc = 0x15BE20u;
            goto label_15be20;
        }
    }
    ctx->pc = 0x15BDF4u;
    // 0x15bdf4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x15bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x15bdf8: 0x12840009  beq         $s4, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BDF8u;
    {
        const bool branch_taken_0x15bdf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x15bdf8) {
            ctx->pc = 0x15BE20u;
            goto label_15be20;
        }
    }
    ctx->pc = 0x15BE00u;
    // 0x15be00: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x15be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x15be04: 0x12840006  beq         $s4, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BE04u;
    {
        const bool branch_taken_0x15be04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x15be04) {
            ctx->pc = 0x15BE20u;
            goto label_15be20;
        }
    }
    ctx->pc = 0x15BE0Cu;
    // 0x15be0c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x15be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15be10: 0x12840003  beq         $s4, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BE10u;
    {
        const bool branch_taken_0x15be10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x15be10) {
            ctx->pc = 0x15BE20u;
            goto label_15be20;
        }
    }
    ctx->pc = 0x15BE18u;
    // 0x15be18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15BE18u;
    {
        const bool branch_taken_0x15be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE18u;
            // 0x15be1c: 0x7ba400a0  lq          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be18) {
            ctx->pc = 0x15BE44u;
            goto label_15be44;
        }
    }
    ctx->pc = 0x15BE20u;
label_15be20:
    // 0x15be20: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x15be20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_15be24:
    // 0x15be24: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x15be24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15be28: 0x8fb700c0  lw          $s7, 0xC0($sp)
    ctx->pc = 0x15be28u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15be2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15BE2Cu;
    {
        const bool branch_taken_0x15be2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE2Cu;
            // 0x15be30: 0x48202  srl         $s0, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be2c) {
            ctx->pc = 0x15BE40u;
            goto label_15be40;
        }
    }
    ctx->pc = 0x15BE34u;
label_15be34:
    // 0x15be34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15be34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15be38:
    // 0x15be38: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x15be38u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15be3c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15be3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15be40:
    // 0x15be40: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x15be40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15be44:
    // 0x15be44: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15be44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15be48: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15be48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15be4c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x15be4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x15be50: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x15be50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15be54: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x15be54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x15be58: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x15be58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x15be5c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x15be5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15be60: 0x42bb8  dsll        $a1, $a0, 14
    ctx->pc = 0x15be60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 14);
    // 0x15be64: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x15be64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    // 0x15be68: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x15be68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x15be6c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x15be6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15be70: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x15be70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x15be74: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x15be74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15be78: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x15be78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x15be7c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x15be7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15be80: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x15be80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x15be84: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15be84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15be88: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x15be88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15be8c: 0x1e183c  dsll32      $v1, $fp, 0
    ctx->pc = 0x15be8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) << (32 + 0));
    // 0x15be90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15be90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15be94: 0x320bc  dsll32      $a0, $v1, 2
    ctx->pc = 0x15be94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 2));
    // 0x15be98: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x15be98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x15be9c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15be9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15bea0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15bea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15bea4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15bea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15bea8: 0x318fc  dsll32      $v1, $v1, 3
    ctx->pc = 0x15bea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 3));
    // 0x15beac: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x15beacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15beb0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x15beb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x15beb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15beb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15beb8: 0x3217c  dsll32      $a0, $v1, 5
    ctx->pc = 0x15beb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 5));
    // 0x15bebc: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x15bebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x15bec0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15bec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15bec4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15bec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15bec8: 0x9fa500d8  lwu         $a1, 0xD8($sp)
    ctx->pc = 0x15bec8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x15becc: 0x31cfc  dsll32      $v1, $v1, 19
    ctx->pc = 0x15beccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 19));
    // 0x15bed0: 0x644025  or          $t0, $v1, $a0
    ctx->pc = 0x15bed0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15bed4: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x15bed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x15bed8: 0x9fa400c8  lwu         $a0, 0xC8($sp)
    ctx->pc = 0x15bed8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x15bedc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15bedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15bee0: 0x3377c  dsll32      $a2, $v1, 29
    ctx->pc = 0x15bee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 29));
    // 0x15bee4: 0x9fa300d0  lwu         $v1, 0xD0($sp)
    ctx->pc = 0x15bee4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15bee8: 0x43dfc  dsll32      $a3, $a0, 23
    ctx->pc = 0x15bee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 23));
    // 0x15beec: 0x9fa400e0  lwu         $a0, 0xE0($sp)
    ctx->pc = 0x15beecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15bef0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x15bef0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x15bef4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15bef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x15bef8: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x15bef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x15befc: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x15befcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
    // 0x15bf00: 0x9fa300e8  lwu         $v1, 0xE8($sp)
    ctx->pc = 0x15bf00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15bf04: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x15bf04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x15bf08: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x15bf08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x15bf0c: 0xfea60008  sd          $a2, 0x8($s5)
    ctx->pc = 0x15bf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 6));
    // 0x15bf10: 0x9fa500f0  lwu         $a1, 0xF0($sp)
    ctx->pc = 0x15bf10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15bf14: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x15bf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x15bf18: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x15bf18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15bf1c: 0x9fa400f8  lwu         $a0, 0xF8($sp)
    ctx->pc = 0x15bf1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x15bf20: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x15bf20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x15bf24: 0x9fa30100  lwu         $v1, 0x100($sp)
    ctx->pc = 0x15bf24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15bf28: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x15bf28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x15bf2c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x15bf2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x15bf30: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x15bf30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x15bf34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15bf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15bf38: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15bf38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15bf3c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15bf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15bf40: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x15bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x15bf44: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15bf48: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15bf48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15bf4c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15bf4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15bf50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15bf50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15bf54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15bf54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15bf58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15bf58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15bf5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15bf5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bf60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bf60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bf64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bf64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bf68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bf68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x15BF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BF6Cu;
            // 0x15bf70: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BF74u;
    // 0x15bf74: 0x0  nop
    ctx->pc = 0x15bf74u;
    // NOP
    // 0x15bf78: 0x0  nop
    ctx->pc = 0x15bf78u;
    // NOP
    // 0x15bf7c: 0x0  nop
    ctx->pc = 0x15bf7cu;
    // NOP
}
